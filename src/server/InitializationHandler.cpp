#include "server/InitializationHandler.hpp"

#include "server/GameInstance.hpp"
#include "server/utils.hpp"
#include <libstnp/libstnp.hpp>

#include <algorithm>
#include <array>
#include <chrono>
#include <list>
#include <sstream>
#include <stdexcept>
#include <string>
#include <syslog.h>
#include <thread>
#include <utility>

namespace {
	constexpr uint8_t STNP_VERSION = 2;

	class GameInstanceThread {
		public:
			GameInstanceThread() {}; // Note: creation_time is invalid on a default constructed GameInstanceThread (change it if needed)

			GameInstanceThread(GameInstanceThread&& o) noexcept
			: instance(std::move(o.instance))
			, thread(std::move(o.thread))
			, creation_time(std::move(o.creation_time))
			, clients(std::move(o.clients))
			{}

			GameInstanceThread(
				std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
				std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
				std::shared_ptr<ThreadSafeFifo<GameInstance::GameInfo>> game_info_queue,
				uint32_t antilag_prediction,
				GameInstance::ClientInfo client_a,
				GameInstance::ClientInfo client_b,
				uint8_t stage
			)
			: instance()
			, thread(&GameInstance::run, &instance, in_messages, out_messages, game_info_queue, antilag_prediction, client_a, client_b, stage)
			, creation_time(std::chrono::steady_clock::now())
			, clients(client_a, client_b)
			{
			}

			std::chrono::time_point<std::chrono::steady_clock> const& get_creation_time() const {
				return this->creation_time;
			}

			std::pair<GameInstance::ClientInfo, GameInstance::ClientInfo> const& get_clients() const {
				return this->clients;
			}

		public:
			GameInstance instance;
			std::thread thread;

		private:
			std::chrono::time_point<std::chrono::steady_clock> creation_time;
			std::pair<GameInstance::ClientInfo, GameInstance::ClientInfo> clients;
	};

	struct ClientData {
		GameInstance::ClientInfo client;
		uint_fast8_t ping_min; // Timescale 4ms (4 is an NTSC frame, 5 is a PAL frame)
		uint_fast8_t ping_max;
		std::chrono::time_point<std::chrono::steady_clock> last_heartbeat;
	};

	uint8_t compute_connection_indicator(uint8_t ping_min, uint8_t ping_max) {
		// Inconsistent info, determinist result
		if (ping_min > ping_max) {
			//HACK this log would be better in new client code, placed here for convenience as it should not happen and main function is already too big
			syslog(
				LOG_WARNING,
				"incosistent ping info min > max (%d > %d)",
				ping_min, ping_max
			);
			return 2;
		}

		// Compute quality based on max ping
		//  excelent < 40ms
		//  good     < 80ms
		//  acceptable otherwise
		uint8_t max_ping_indicator = 0;
		if (ping_max >= 80 / 4) {
			max_ping_indicator = 2;
		}else if (ping_max >= 40 / 4) {
			max_ping_indicator = 1;
		}

		// Compute quality based on variance in ping
		//  excelent <= 8ms
		//  good     <= 20ms
		//  acceptable otherwise
		uint8_t ping_diff = ping_max - ping_min;
		uint8_t ping_diff_indicator = 0;
		if (ping_diff > 20 / 4) {
			ping_diff_indicator = 2;
		}else if (ping_diff > 8 / 4) {
			ping_diff_indicator = 1;
		}

		return std::max(max_ping_indicator, ping_diff_indicator);
	}

	std::string computeVersionName(stnp::message::Connection const& message) {
		constexpr std::array<char const*, 4> support_types = {"cartridge", "native-emulator", "web-emulator", "unknown"};
		constexpr std::array<char const*, 4> release_types = {"alpha-", "beta-", "rc-", ""};
		if (message.protocol_version < 2) {
			return "unknown(old protocol)";
		}
		size_t const support_index = static_cast<size_t>(message.get_support_type());
		size_t const release_index = static_cast<size_t>(message.get_release_type());
		if (support_index > support_types.size() || release_index > release_types.size()) {
			return "unknown(inconsistent message)";
		}

		std::ostringstream oss;
		oss << uint16_t(message.get_major_version()) << '.' << release_types[release_index] << uint16_t(message.minor_version) << '/' << support_types[support_index] << '(' << (message.is_ntsc()?"NTSC":"PAL") << ')';
		return oss.str();
	}

	std::tuple<uint8_t, stnp::message::Connection::ReleaseType, uint8_t> getVersionTuple(stnp::message::Connection const& message) {
		return std::make_tuple(message.get_major_version(), message.get_release_type(), message.minor_version);
	}
}

InitializationHandler::InitializationHandler(
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
	std::shared_ptr<ClientsDatagramRouting> clients_routing
)
: in_messages(in_messages), out_messages(out_messages), clients_routing(clients_routing)
{}

void InitializationHandler::run() {
	std::chrono::minutes const GAME_TIMEOUT(30);
	std::chrono::seconds const CLIENT_TIMEOUT(5);

	std::list<ClientData> clients;
	std::list<GameInstanceThread> game_instances;

	std::vector<uint8_t> allowed_game_stages = {0, 2};
	size_t next_game_stage = 0;

	while (true) {
		try {
			// Wait for a message
			std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
			try {
				in_message = this->in_messages->pop_block(GAME_TIMEOUT);
				srv_dbg(LOG_DEBUG, "InitializationHandler: received message of %zu bytes from %s:%d", in_message->data.size(), in_message->sender.address().to_string().c_str(), in_message->sender.port());
			}catch (std::runtime_error const& e) {
				// Timeout, noting special to do, we will just not process message bellow
			}

			// Special handling for Ping requests
			//FIXME whould be better in a "Global messages" component, but for now InitializationHandler receives all non-connected messages
			if (in_message != nullptr && in_message->data.size() > 0 && in_message->data[0] == static_cast<uint8_t>(stnp::message::ClientMessageType::Ping)) {
				// Parse message
				stnp::message::Ping ping_request;
				stnp::message::MessageDeserializer deserializer(in_message->data);
				ping_request.serial(deserializer);

				// Send response
				stnp::message::Pong ping_response;
				ping_response.client_data = std::move(ping_request.free_data);
				stnp::message::MessageSerializer serializer;
				ping_response.serial(serializer);

				std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
				out_message->destination = in_message->sender;
				out_message->data = serializer.serialized();
				this->out_messages->push(out_message);

				// Avoid further processing of this message
				in_message = nullptr;
			}

			// Stop timeouted/terminated games
			std::chrono::time_point<std::chrono::steady_clock> now = std::chrono::steady_clock::now();
			for (std::list<GameInstanceThread>::iterator instance = game_instances.begin() ; instance != game_instances.end(); ++instance) {
				// Ask to stop
				if (now - instance->get_creation_time() >= GAME_TIMEOUT) {
					if (instance->thread.joinable()) {
						syslog(LOG_INFO, "InitializationHandler: stopping timeouted game");
					}
					instance->instance.stop();
				}

				// Join if terminated (allowing thread handle destruction)
				if (instance->instance.is_over() && instance->thread.joinable()) {
					srv_dbg(LOG_DEBUG, "InitializationHandler: joining terminated game");
					instance->thread.join();
				}

				// Delete joined games
				if (!instance->thread.joinable()) {
					srv_dbg(LOG_DEBUG, "InitializationHandler: destroying joined game");

					// Remove game's clients from routing table
					this->clients_routing->remove_client(instance->get_clients().first.endpoint);
					this->clients_routing->remove_client(instance->get_clients().second.endpoint);

					// Delete game from our list of games
					instance = game_instances.erase(instance);
				}
			}

			// Process message
			if (in_message != nullptr) {
				// Parse message
				stnp::message::Connection connection_request;
				stnp::message::MessageDeserializer deserializer(in_message->data);
				uint8_t client_protocol_version = 0xff;
				try {
					connection_request.serial(deserializer);
					client_protocol_version = connection_request.protocol_version;
				}catch (std::out_of_range const&) {
					// First protype was using a version of the protocol missing the
					// protocol_version field in connected message, hence the out_of_range
					// error when trying to deserialize it
				}

				if (client_protocol_version != STNP_VERSION) {
					// Send error
					syslog(LOG_NOTICE, "InitializationHandler: connection request with bad protocol: requested protocol %d", client_protocol_version);
					this->rejectConnection(
						"bad protocol version    "
						"                        "
						"you seem to run an old  "
						"version of the game     "
						"                        "
						"please download latest  "
						"version                 "
						"                        ",
						in_message->sender
					);
				}else if (getVersionTuple(connection_request) < std::make_tuple(2, stnp::message::Connection::ReleaseType::ALPHA, 4)) {
					// Send error
					syslog(LOG_NOTICE, "InitializationHandler: connection request with old client: client version %s", computeVersionName(connection_request).c_str());
					this->rejectConnection(
						"bad version             "
						"                        "
						"you run an old version  "
						"of the game             "
						"                        "
						"please download latest  "
						"version                 "
						"                        ",
						in_message->sender
					);
				}else if (connection_request.is_ntsc()) {
					// Send error
					syslog(LOG_NOTICE, "InitializationHandler: connection request with NTSC timing: client version %s", computeVersionName(connection_request).c_str());
					this->rejectConnection(
						"bad system              "
						"                        "
						"you seem to run the game"
						"on an ntsc system       "
						"                        "
						"netplay not available on"
						"ntsc systems for now    "
						"                        ",
						in_message->sender
					);
				}else {
					// Add client
					bool found = false;
					ClientData client = {
						.client = {
							.endpoint = in_message->sender,
							.id = connection_request.client_id
						},
						.ping_min = connection_request.ping_min,
						.ping_max = connection_request.ping_max,
						.last_heartbeat = now
					};
					for (ClientData& existing_client: clients) {
						if (existing_client.client.endpoint == client.client.endpoint && existing_client.client.id == client.client.id) {
							existing_client.last_heartbeat = client.last_heartbeat;
							found = true;
							break;
						}
					}
					if (!found) {
						syslog(
							LOG_INFO,
							"InitializationHandler: new client: %s:%d id=%08x ping_min=%dms ping_max=%dms version=%s",
							in_message->sender.address().to_string().c_str(),
							in_message->sender.port(),
							connection_request.client_id,
							connection_request.ping_min * 4,
							connection_request.ping_max * 4,
							computeVersionName(connection_request).c_str()
						);
						clients.push_back(client);
					}

					// Send response
					stnp::message::Connected connection_response;
					stnp::message::MessageSerializer serializer;
					connection_response.serial(serializer);

					std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
					out_message->destination = client.client.endpoint;
					out_message->data = serializer.serialized();
					this->out_messages->push(out_message);

					// Clear timeouted clients
					for (std::list<ClientData>::iterator client_it = clients.begin(); client_it != clients.end(); ++client_it) {
						if (now - client_it->last_heartbeat >= CLIENT_TIMEOUT) {
							syslog(LOG_INFO, "InitializationHandler: client timeouted: %s:%d id=%08x", client_it->client.endpoint.address().to_string().c_str(), client_it->client.endpoint.port(), client_it->client.id);
							client_it = clients.erase(client_it);
						}
					}

					// Start a match if there is enough clients
					std::this_thread::sleep_for(std::chrono::milliseconds(200)); //HACK avoid spamming messages. It would be better to handle matchmaking independently of messages reception
					while (clients.size() >= 2) {
						// Select clients to match
						std::array<std::list<ClientData>::iterator, 2> const matched_clients = {
							clients.begin(),
							++clients.begin()
						};

						// Compute antilag prediction
						//   total_ping / 2 = transmission time from one client to another ; 5 = frame duration (PAL)
						uint32_t const antilag_prediction =
							((matched_clients.at(0)->ping_min + matched_clients.at(1)->ping_min) / 2) / 5
						;
						syslog(
							LOG_NOTICE,
							"starting a game between %08x and %08x (%d antilag)",
							matched_clients.at(0)->client.id,
							matched_clients.at(1)->client.id,
							antilag_prediction
						);

						// Prepare game instance
						uint8_t const stage_id = allowed_game_stages.at(next_game_stage);
						next_game_stage = (next_game_stage + 1) % allowed_game_stages.size();
						std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> game_in_messages(new ThreadSafeFifo<network::IncommingUdpMessage>(5));
						game_instances.emplace_back(
							game_in_messages,
							this->out_messages,
							nullptr, //TODO use it to gather statistics (and maybe destroy instance once terminated)
							antilag_prediction,
							matched_clients.at(0)->client,
							matched_clients.at(1)->client,
							stage_id
						);

						// Adapt message routing
						this->clients_routing->set_queue(matched_clients.at(0)->client.endpoint, game_in_messages);
						this->clients_routing->set_queue(matched_clients.at(1)->client.endpoint, game_in_messages);

						// Send StartGame messages
						uint8_t const player_a_connection = compute_connection_indicator(matched_clients.at(0)->ping_min, matched_clients.at(0)->ping_max);
						uint8_t const player_b_connection = compute_connection_indicator(matched_clients.at(1)->ping_min, matched_clients.at(1)->ping_max);
						for (size_t client_index = 0; client_index <= 1; ++client_index) {
							stnp::message::StartGame start_signal;
							start_signal.stage = stage_id;
							start_signal.stocks = 3;
							start_signal.player_number = client_index;
							start_signal.player_a_connection_quality(player_a_connection);
							start_signal.player_b_connection_quality(player_b_connection);
							serializer.clear();
							start_signal.serial(serializer, STNP_VERSION);

							std::shared_ptr<network::OutgoingUdpMessage> start_signal_udp(new network::OutgoingUdpMessage);
							start_signal_udp->destination = matched_clients.at(client_index)->client.endpoint;
							start_signal_udp->data = serializer.serialized();
							srv_dbg(LOG_DEBUG, "send StartGame to %s:%d", start_signal_udp->destination.address().to_string().c_str(), start_signal_udp->destination.port());
							this->out_messages->push(start_signal_udp);
						}

						// Forget these clients
						clients.pop_front();
						clients.pop_front();
					}
				}
			}
		}catch (std::exception const& e) {
			syslog(LOG_ERR, "InitializationHandler: failed to process a message: %s", e.what());
		}
	}
}

void InitializationHandler::rejectConnection(std::string const& reason, boost::asio::ip::udp::endpoint const& client) {
	// Construct Disconnected message
	stnp::message::Disconnected connection_response;
	connection_response.reason.reserve(reason.size());
	connection_response.reason.insert(connection_response.reason.begin(), reason.begin(), reason.end());

	// Serialize message
	stnp::message::MessageSerializer serializer;
	connection_response.serial(serializer);

	// Send message
	std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
	out_message->destination = client;
	out_message->data = serializer.serialized();
	this->out_messages->push(out_message);
}

void InitializationHandler::stop() {
	//TODO
}

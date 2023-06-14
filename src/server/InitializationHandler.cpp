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
	constexpr uint8_t STNP_VERSION = stnp::LAST_VERSION;

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
				std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> game_info_queue,
				std::array<std::array<uint32_t, 2>, 2> transit_time,
				GameInstance::ClientInfo client_a,
				GameInstance::ClientInfo client_b,
				GameInstance::GameSettings game_settings
			)
			: instance()
			, thread(&GameInstance::run, &instance, in_messages, out_messages, game_info_queue, transit_time, client_a, client_b, game_settings)
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
		std::array<uint_fast8_t, 3> ping; // Timescale 4ms (4 is an NTSC frame, 5 is a PAL frame)
		uint_fast8_t selected_character;
		uint_fast8_t selected_palette;
		uint_fast8_t selected_stage;
		bool is_ntsc;
		bool ranked;
		std::array<uint8_t, 16> password;
		std::chrono::time_point<std::chrono::steady_clock> last_heartbeat;

		uint_fast8_t ping_min() {
			uint_fast8_t res = 255;
			for (size_t i = 0; i < this->ping.size(); ++i) {
				if (this->ping[i] < res) {res = this->ping[i];}
			}
			return res;
		}

		uint_fast8_t ping_max() {
			uint_fast8_t res = 0;
			for (size_t i = 0; i < this->ping.size(); ++i) {
				if (this->ping[i] > res) {res = this->ping[i];}
			}
			return res;
		}
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
		//  acceptable < 300ms
		//  bad otherwise
		uint8_t max_ping_indicator = 0;
		if (ping_max >= 300 / 4) {
			max_ping_indicator = 3;
		}else if (ping_max >= 80 / 4) {
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
	std::shared_ptr<ClientsDatagramRouting> clients_routing,
	std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> game_info_messages
)
: in_messages(in_messages)
, out_messages(out_messages)
, game_info_messages(game_info_messages)
, clients_routing(clients_routing)
{}

void InitializationHandler::run() {
	std::chrono::minutes const GAME_TIMEOUT(30);
	std::chrono::seconds const CLIENT_TIMEOUT(5);

	std::list<ClientData> clients;
	std::list<GameInstanceThread> game_instances;

	size_t client_with_stage_selection = 0;

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
			if (
				in_message != nullptr &&
				in_message->data.size() > 0 &&
				in_message->data[0] == static_cast<uint8_t>(stnp::message::ClientMessageType::Ping)
			)
			{
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

			// Special handling for ControllerState messages
			//FIXME whould be better in a "Global messages" component, but for now InitializationHandler receives all non-connected messages
			if (
				in_message != nullptr &&
				in_message->data.size() > 0 &&
				in_message->data[0] == static_cast<uint8_t>(stnp::message::ClientMessageType::ControllerState)
			)
			{
				// Client may have missed GameOver message, send them another one
				//TODO Keep last games results in a cache to not have to guess winner
				stnp::message::GameOver gameover_msg;
				gameover_msg.winner_player_number = 0;
				stnp::message::MessageSerializer serializer;
				gameover_msg.serial(serializer);

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
#ifndef BETA_SERVER
				}else if (getVersionTuple(connection_request) < std::make_tuple(2, stnp::message::Connection::ReleaseType::BETA, 6)) {
#else
				}else if (getVersionTuple(connection_request) > std::make_tuple(0, stnp::message::Connection::ReleaseType::ALPHA, 0)) {
#endif
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
				}else {
					// Add client
					bool found = false;
					ClientData client = {
						.client = {
							.endpoint = in_message->sender,
							.id = connection_request.client_id
						},
						.ping = connection_request.ping,
						.selected_character = connection_request.selected_character,
						.selected_palette = connection_request.selected_palette,
						.selected_stage = connection_request.selected_stage,
						.is_ntsc = connection_request.is_ntsc(),
						.ranked = connection_request.ranked_play,
						.password = connection_request.password,
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
							"InitializationHandler: new client: %s:%d id=%08x ping=%d/%d/%dms version=%s ranked=%s password=%s",
							client.client.endpoint.address().to_string().c_str(),
							client.client.endpoint.port(),
							client.client.id,
							client.ping[0] * 4,
							client.ping[1] * 4,
							client.ping[2] * 4,
							computeVersionName(connection_request).c_str(),
							client.ranked ? "true" : "false",
							client.password == std::array<uint8_t, 16>{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0} ? "no" : "yes"
						);
						clients.push_back(client);
					}

					// Send response
					stnp::message::Connected connection_response;
					connection_response.connection_quality = compute_connection_indicator(client.ping_min(), client.ping_max());
					stnp::message::MessageSerializer serializer;
					connection_response.serial(serializer, STNP_VERSION);

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

					//
					// Start a match if there are enough clients
					//

					std::this_thread::sleep_for(std::chrono::milliseconds(200)); //HACK avoid spamming messages. It would be better to handle matchmaking independently of messages reception

					// Select clients to match
					std::vector<std::array<std::list<ClientData>::iterator, 2>> const match_list = [&]() {
						std::vector<std::array<std::list<ClientData>::iterator, 2>> match_list;

						for (std::list<ClientData>::iterator client = clients.begin(); client != clients.end(); ++client) {
							// Search a possible match with a previous client
							bool matched = false;
							for (std::array<std::list<ClientData>::iterator, 2>& match: match_list) {
								if (
									match[1] == clients.end() &&
									match[0]->password == client->password
								) {
									match[1] = client;
									matched = true;
									break;
								}
							}

							if (matched) {
								continue;
							}

							// Create a match for this client, with room for a rival
							match_list.push_back({client, clients.end()});
						}

						// Remove match not fully filled
						prune_if(match_list, [&](std::array<std::list<ClientData>::iterator, 2> const& match) {
							return match[1] == clients.end();
						});

						return match_list;
					}();

					for (std::array<std::list<ClientData>::iterator, 2> const& matched_clients: match_list) {
						// Deduce game's framerate
						bool const game_is_ntsc = matched_clients.at(0)->is_ntsc && matched_clients.at(1)->is_ntsc;

						// Compute antilag prediction
						//   total_ping / 2 = transmission time from one client to another
						auto ttime = [&](size_t client_a, size_t client_b) -> uint32_t {
							uint_fast8_t const frame_duration = (game_is_ntsc ? 4 : 5);
							return ((matched_clients.at(client_a)->ping_min() + matched_clients.at(client_b)->ping_min()) / 2) / frame_duration;
						};
						std::array<std::array<uint32_t, 2>, 2> const transit_time = {{
							{ttime(0, 0), ttime(0, 1)},
							{ttime(1, 0), ttime(1, 1)}
						}};
						syslog(
							LOG_NOTICE,
							"starting a game between %08x and %08x (%d/%d/%d/%d antilag)",
							matched_clients.at(0)->client.id,
							matched_clients.at(1)->client.id,
							transit_time[0][0], transit_time[0][1], transit_time[1][0], transit_time[1][1]
						);

						// Prepare game instance
						GameInstance::GameSettings game_settings = {
							.characters = {matched_clients.at(0)->selected_character, matched_clients.at(1)->selected_character},
							.character_palettes = {matched_clients.at(0)->selected_palette, matched_clients.at(1)->selected_palette},
							.ranked = {matched_clients.at(0)->ranked, matched_clients.at(1)->ranked},
							.stage_id = matched_clients.at(client_with_stage_selection)->selected_stage,
							.video_system = uint8_t(game_is_ntsc ? 1 : 0),
						};
						client_with_stage_selection = (client_with_stage_selection + 1) % 2;
						std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> game_in_messages(new ThreadSafeFifo<network::IncommingUdpMessage>(5));
						game_instances.emplace_back(
							game_in_messages,
							this->out_messages,
							this->game_info_messages,
							transit_time,
							matched_clients.at(0)->client,
							matched_clients.at(1)->client,
							game_settings
						);

						// Adapt message routing
						this->clients_routing->set_queue(matched_clients.at(0)->client.endpoint, game_in_messages);
						this->clients_routing->set_queue(matched_clients.at(1)->client.endpoint, game_in_messages);

						// Send StartGame messages
						uint8_t const player_a_connection = compute_connection_indicator(matched_clients.at(0)->ping_min(), matched_clients.at(0)->ping_max());
						uint8_t const player_b_connection = compute_connection_indicator(matched_clients.at(1)->ping_min(), matched_clients.at(1)->ping_max());
						for (size_t client_index = 0; client_index <= 1; ++client_index) {
							stnp::message::StartGame start_signal;
							start_signal.stage = game_settings.stage_id;
							start_signal.stocks = 3;
							start_signal.player_number = client_index;
							start_signal.player_a_connection_quality(player_a_connection);
							start_signal.player_b_connection_quality(player_b_connection);
							start_signal.player_a_character = game_settings.characters[0];
							start_signal.player_b_character = game_settings.characters[1];
							start_signal.player_a_palette = matched_clients.at(0)->selected_palette;
							start_signal.player_b_palette = matched_clients.at(1)->selected_palette;
							start_signal.player_a_ping = matched_clients.at(0)->ping;
							start_signal.player_b_ping = matched_clients.at(1)->ping;
							start_signal.player_a_is_ntsc(matched_clients.at(0)->is_ntsc);
							start_signal.player_b_is_ntsc(matched_clients.at(1)->is_ntsc);
							start_signal.game_is_ntsc(game_is_ntsc);
							serializer.clear();
							start_signal.serial(serializer, STNP_VERSION);

							std::shared_ptr<network::OutgoingUdpMessage> start_signal_udp(new network::OutgoingUdpMessage);
							start_signal_udp->destination = matched_clients.at(client_index)->client.endpoint;
							start_signal_udp->data = serializer.serialized();
							srv_dbg(LOG_DEBUG, "send StartGame to %s:%d", start_signal_udp->destination.address().to_string().c_str(), start_signal_udp->destination.port());
							this->out_messages->push(start_signal_udp);
						}
					}

					// Forget matched clients
					//NOTE expects that clients.erase() does not invalidate other iterators. Works while clients is a list, may segfault with other containers
					for (std::array<std::list<ClientData>::iterator, 2> const& matched_clients: match_list) {
						clients.erase(matched_clients[0]);
						clients.erase(matched_clients[1]);
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

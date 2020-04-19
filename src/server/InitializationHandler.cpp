#include "server/InitializationHandler.hpp"

#include "server/GameInstance.hpp"
#include "server/utils.hpp"
#include <libstnp/libstnp.hpp>

#include <chrono>
#include <list>
#include <syslog.h>
#include <thread>
#include <utility>

namespace {
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
				GameInstance::ClientInfo client_b
			)
			: instance()
			, thread(&GameInstance::run, &instance, in_messages, out_messages, game_info_queue, antilag_prediction, client_a, client_b)
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
		uint_fast8_t ping; // Timescale 4ms (4 is an NTSC frame, 5 is a PAL frame)
		std::chrono::time_point<std::chrono::steady_clock> last_heartbeat;
	};
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

	while (true) {
		try {
			// Wait for a message
			std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
			try {
				in_message = this->in_messages->pop_block(GAME_TIMEOUT);
				srv_dbg(LOG_DEBUG, "InitializationHandler: received message of %d bytes from %s:%d", in_message->data.size(), in_message->sender.address().to_string().c_str(), in_message->sender.port());
			}catch (std::runtime_error const& e) {
				// Timeout, noting special to do, we will just not process message bellow
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
				connection_request.serial(deserializer);

				// Add client
				bool found = false;
				ClientData client = {
					.client = {
						.endpoint = in_message->sender,
						.id = connection_request.client_id
					},
					.ping = connection_request.ping,
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
					syslog(LOG_INFO, "InitializationHandler: new client: %s:%d id=%08x", in_message->sender.address().to_string().c_str(), in_message->sender.port(), connection_request.client_id);
					clients.push_back(client);
				}

				// Send response
				stnp::message::Connected connection_response;
				connection_response.player_number = (clients.size() + 1) % 2; //NOTE interesting, it would be better to wait for matchmaking decision. Should place this info in StartGame.
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
					uint32_t const antilag_prediction = ((matched_clients.at(0)->ping + matched_clients.at(0)->ping) / 2) / 5; // total_ping / 2 = transmission time from one client to another ; 5 = frame duration (PAL)
					syslog(LOG_NOTICE, "starting a game between %08x and %08x (%d antilag)", matched_clients.at(0)->client.id, matched_clients.at(1)->client.id, antilag_prediction);

					// Prepare game instance
					std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> game_in_messages(new ThreadSafeFifo<network::IncommingUdpMessage>(5));
					game_instances.emplace_back(
						game_in_messages,
						this->out_messages,
						nullptr, //TODO use it to gather statistics (and maybe destroy instance once terminated)
						antilag_prediction,
						matched_clients.at(0)->client,
						matched_clients.at(1)->client
					);

					// Adapt message routing
					this->clients_routing->set_queue(matched_clients.at(0)->client.endpoint, game_in_messages);
					this->clients_routing->set_queue(matched_clients.at(1)->client.endpoint, game_in_messages);

					// Send StartGame message
					stnp::message::StartGame start_signal;
					start_signal.stage = 0;
					start_signal.stocks = 4;
					serializer.clear();
					start_signal.serial(serializer);

					for (size_t client_index = 0; client_index <= 1; ++client_index) {
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
		}catch (std::exception const& e) {
			syslog(LOG_ERR, "InitializationHandler: failed to process a message: %s", e.what());
		}
	}
}

void InitializationHandler::stop() {
	//TODO
}

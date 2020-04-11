#include "server/InitializationHandler.hpp"

#include "server/GameInstance.hpp"
#include <libstnp/libstnp.hpp>

#include <deque>
#include <syslog.h>
#include <thread>

namespace {
	class GameInstanceThread {
		public:
			GameInstanceThread() {};

			GameInstanceThread(GameInstanceThread&& o) noexcept
			: instance(std::move(o.instance)), thread(std::move(o.thread))
			{}

			GameInstanceThread(
				std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
				std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
				std::shared_ptr<ThreadSafeFifo<GameInstance::GameInfo>> game_info_queue,
				uint32_t antilag_prediction,
				GameInstance::ClientInfo client_a,
				GameInstance::ClientInfo clcient_b
			)
			: instance(), thread(&GameInstance::run, &instance, in_messages, out_messages, game_info_queue, antilag_prediction, client_a, clcient_b)
			{
			}

		private:
			GameInstance instance;
			std::thread thread;
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
	std::deque<GameInstance::ClientInfo> clients;
	std::vector<GameInstanceThread> game_instances;

	while (true) {
		try {
			// Wait for a message
			std::shared_ptr<network::IncommingUdpMessage> in_message = this->in_messages->pop_block();
			syslog(LOG_DEBUG, "InitializationHandler: received message of %d bytes from %s:%d", in_message->data.size(), in_message->sender.address().to_string().c_str(), in_message->sender.port());

			// Parse message
			stnp::message::Connection connection_request;
			stnp::message::MessageDeserializer deserializer(in_message->data);
			connection_request.serial(deserializer);

			// Add client
			bool found = false;
			GameInstance::ClientInfo client = {
				.endpoint = in_message->sender,
				.id = connection_request.client_id
			};
			for (GameInstance::ClientInfo const& existing_client: clients) {
				if (existing_client.endpoint == client.endpoint && existing_client.id == client.id) {
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
			out_message->destination = client.endpoint;
			out_message->data = serializer.serialized();
			this->out_messages->push(out_message);

			// Start a match if there is enough clients
			std::this_thread::sleep_for(std::chrono::milliseconds(200)); //HACK avoid spamming messages. It would be better to handle matchmaking independently of messages reception
			if (clients.size() >= 2) {
				syslog(LOG_NOTICE, "starting a game between %08x and %08x", clients.at(0).id, clients.at(1).id);

				// Prepare game instance
				std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> game_in_messages(new ThreadSafeFifo<network::IncommingUdpMessage>(5));
				game_instances.emplace_back(
					game_in_messages,
					this->out_messages,
					nullptr, //TODO use it to gather statistics (and maybe destroy instance once terminated)
					2, // TODO Determine best value from clients ping
					clients.at(0),
					clients.at(1)
				);

				// Adapt message routing
				this->clients_routing->set_queue(clients.at(0).endpoint, game_in_messages);
				this->clients_routing->set_queue(clients.at(1).endpoint, game_in_messages);

				// Send StartGame message
				stnp::message::StartGame start_signal;
				start_signal.stage = 0;
				start_signal.stocks = 4;
				serializer.clear();
				start_signal.serial(serializer);

				for (size_t client_index = 0; client_index <= 1; ++client_index) {
					std::shared_ptr<network::OutgoingUdpMessage> start_signal_udp(new network::OutgoingUdpMessage);
					start_signal_udp->destination = clients.at(client_index).endpoint;
					start_signal_udp->data = serializer.serialized();
					syslog(LOG_DEBUG, "send StartGame to %s:%d", start_signal_udp->destination.address().to_string().c_str(), start_signal_udp->destination.port());
					this->out_messages->push(start_signal_udp);
				}

				// Forget these clients
				clients.pop_front();
				clients.pop_front();
			}
		}catch (std::exception const& e) {
			syslog(LOG_ERR, "InitializationHandler: failed to process a message: %s", e.what());
		}
	}
}

void InitializationHandler::stop() {
	//TODO
}

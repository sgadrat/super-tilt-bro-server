#include "GameState.hpp"
#include "network.hpp"
#include <libstnp/libstnp.hpp>

#include <iostream>
#include <sstream>
#include <iomanip>

// g++ simple_tilt_server.cpp ../src/network.cpp ../src/GameState.cpp -I .. -I ../src -lpthread -lboost_system

int main() {
	// Prepare component threads
	network::SocketPool socket_pool;
	ThreadSafeFifo<network::IncommingUdpMessage> in_messages(5);
	network::UdpInput udp_receiver(3000, &socket_pool, &in_messages);
	ThreadSafeFifo<network::OutgoingUdpMessage> out_messages(5);
	network::UdpOutput udp_sender(3000, &socket_pool, &out_messages);

	// Start component threads
	std::thread udp_receiver_thread(&network::UdpInput::run, &udp_receiver);
	std::thread udp_sender_thread(&network::UdpOutput::run, &udp_sender);

	// Process incoming messages
	std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
	std::vector<boost::asio::ip::udp::endpoint> clients;
	Stage stage;
	stage.spawn_player_a = Stage::Spawn{ .x = 0x4000, .y = 0x80ff };
	stage.spawn_player_b = Stage::Spawn{ .x = 0xa000, .y = 0x80ff };
	stage.respawn = Stage::Spawn{ .x = 0x7000, .y = 0x6000 },
	stage.platforms = std::vector<Stage::Platform>{
		Stage::Platform{
			.position = { .left = 0x29, .right = 0xcf, .top = 0x81, .bottom = 0xff },
			.is_smooth = false,
		},
	};
	GameState game_state(stage);
	uint32_t game_state_time = 0;
	uint8_t prediction_id = 0;
	while (true) {
		// Get next incomming message
		try {
			in_message = in_messages.pop();
		}catch(std::exception const& e) {
			in_message = nullptr;
		}

		if (in_message != nullptr) {
			// Add the sender to the clients list
			bool found = false;
			for (boost::asio::ip::udp::endpoint const& client_endpoint : clients) {
				if (client_endpoint.address() == in_message->sender.address() && client_endpoint.port() == in_message->sender.port()) {
					found = true;
					break;
				}
			}

			if (!found) {
				std::cout << "new client: " << in_message->sender.address() << ":" << in_message->sender.port() << std::endl;
				clients.push_back(in_message->sender);
			}

			// Print received message
			std::cout << "got a message from " << in_message->sender.address() << ":" << in_message->sender.port() << std::endl;
			std::cout << in_message->data.size() << " B" << std::endl;
			std::ostringstream oss;
			oss << std::hex;
			for (uint8_t b : in_message->data) {
				oss << std::setfill('0') << std::setw(2) << (uint16_t)b << ' ';
			}
			std::cout << oss.str() << std::endl;

			// Parse message
			stnp::message::ControllerState message;
			stnp::message::MessageDeserializer deserializer(in_message->data);
			message.serial(deserializer);

			// Advance gamestate until timestamp in message
			while (game_state_time < message.timestamp) {
				game_state.tick();
				++game_state_time;
			}

			// Apply new controller state to the game state
			GameState::ControllerState controller_state;
			controller_state.a_pressed = message.a_pressed;
			controller_state.b_pressed = message.b_pressed;
			controller_state.select_pressed = message.select_pressed;
			controller_state.start_pressed = message.start_pressed;
			controller_state.up_pressed = message.up_pressed;
			controller_state.down_pressed = message.down_pressed;
			controller_state.left_pressed = message.left_pressed;
			controller_state.right_pressed = message.right_pressed;
			if (message.client_id == 0) {
				game_state.setControllerAState(controller_state);
			}else {
				game_state.setControllerBState(controller_state);
			}

			// Avance one frame with this controller configuration
			game_state.tick();
			++game_state_time;

			// Increment prediction ID
			++prediction_id;

			// Break reference to incoming message
			in_message = nullptr;

			// Send the new game state to all clients
			stnp::message::NewGameState gamestate;

			gamestate.timestamp = game_state_time;
			gamestate.prediction_id = prediction_id;
			stnp::message::MessageSerializer state_serializer;
			game_state.serial(state_serializer);
			gamestate.state = state_serializer.serialized();

			stnp::message::MessageSerializer serializer;
			gamestate.serial(serializer);
			for (boost::asio::ip::udp::endpoint const& client_endpoint : clients) {
				std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
				out_message->destination = client_endpoint;
				out_message->data = serializer.serialized();
				out_messages.push(out_message);
				std::cout << "send state to " << client_endpoint.address() << ":" << client_endpoint.port() << std::endl;
			}
		}

		// wait 1 PAL frame between updates
		::usleep(20000);
	}
}

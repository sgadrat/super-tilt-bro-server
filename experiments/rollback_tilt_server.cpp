#include "GameState.hpp"
#include "network.hpp"
#include <libstnp/libstnp.hpp>

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <thread>

// g++ rollback_tilt_server.cpp ../src/network.cpp ../src/GameState.cpp -I .. -I ../src -lpthread -lboost_system

GameState initial_gamestate() {
	Stage stage;
	stage.spawn_player_a = Stage::Spawn{ .x = 0x4000, .y = 0x80ff };
	stage.spawn_player_b = Stage::Spawn{ .x = 0xa000, .y = 0x80ff };
	stage.respawn = Stage::Spawn{ .x = 0x7000, .y = 0x6000 },
	stage.platforms = std::vector<Stage::Platform>{
		Stage::Platform{
			.position = { .left = 0x21, .right = 0xd7, .top = 0x81, .bottom = 0xff },
			.is_smooth = false,
		},
	};
	return GameState(stage);
}

GameState::ControllerState controller_state_from_message(stnp::message::ControllerState const& message) {
	GameState::ControllerState controller_state;
	controller_state.a_pressed = message.a_pressed;
	controller_state.b_pressed = message.b_pressed;
	controller_state.select_pressed = message.select_pressed;
	controller_state.start_pressed = message.start_pressed;
	controller_state.up_pressed = message.up_pressed;
	controller_state.down_pressed = message.down_pressed;
	controller_state.left_pressed = message.left_pressed;
	controller_state.right_pressed = message.right_pressed;
	return controller_state;
}

int main() {
	// Prepare component threads
	network::SocketPool socket_pool;
	ThreadSafeFifo<network::IncommingUdpMessage> in_messages(5);
	network::UdpInput udp_receiver(1234, &socket_pool, &in_messages);
	ThreadSafeFifo<network::OutgoingUdpMessage> out_messages(5);
	network::UdpOutput udp_sender(1234, &socket_pool, &out_messages);

	// Start component threads
	std::thread udp_receiver_thread(&network::UdpInput::run, &udp_receiver);
	std::thread udp_sender_thread(&network::UdpOutput::run, &udp_sender);

	// Process incoming messages
	std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
	std::vector<boost::asio::ip::udp::endpoint> clients;
	std::map<uint32_t, GameState> gamestate_history{
		{0, initial_gamestate()}
	};
	std::map<uint32_t, GameState::ControllerState> controller_a_history{
		{0, GameState::ControllerState()}
	};
	std::map<uint32_t, GameState::ControllerState> controller_b_history{
		{0, GameState::ControllerState()}
	};
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

			// Invalidate gamestate history from message's timestamp
			std::map<uint32_t, GameState>::iterator first_invalid_gamestate(gamestate_history.lower_bound(message.timestamp));
			if (first_invalid_gamestate != gamestate_history.end()) {
				if (first_invalid_gamestate->first == 0) {
					std::cerr << "error: prevented modification of initial gamestate" << std::endl;
				}else {
					gamestate_history.erase(first_invalid_gamestate, gamestate_history.end());
				}
			}

			// Rewrite input history from message's timestamp
			GameState::ControllerState controller_state = controller_state_from_message(message);
			std::map<uint32_t, GameState::ControllerState>* controller_history = nullptr;
			if (message.client_id == 0) {
				controller_history = &controller_a_history;
			}else {
				controller_history = &controller_b_history;
			}

			(*controller_history)[message.timestamp] = controller_state;
			for (
				std::map<uint32_t, GameState::ControllerState>::iterator controller_history_entry(++controller_history->find(message.timestamp));
				controller_history_entry != controller_history->end();
				++controller_history_entry
			)
			{
				controller_history_entry->second = controller_state;
			}

			// Compute gamestate at the last input in history
			{
				uint32_t gamestate_time = gamestate_history.rbegin()->first;
				GameState gamestate = gamestate_history.rbegin()->second;
				uint32_t last_input_time = std::max(
					controller_a_history.rbegin()->first,
					controller_b_history.rbegin()->first
				);

				while (gamestate_time < last_input_time + 1) {
					// Apply inputs
					//  TODO check if it is more accurate to apply inputs before or after the simulation's tick
					std::map<uint32_t, GameState::ControllerState>::const_iterator controller_history_entry(controller_a_history.find(gamestate_time));
					if (controller_history_entry != controller_a_history.end()) {
						gamestate.setControllerAState(controller_history_entry->second);
					}

					controller_history_entry = controller_b_history.find(gamestate_time);
					if (controller_history_entry != controller_b_history.end()) {
						gamestate.setControllerBState(controller_history_entry->second);
					}

					// Tick Simulation
					gamestate.tick();
					++gamestate_time;
				}

				gamestate_history.insert(std::pair<uint32_t, GameState>(gamestate_time, gamestate));
			}

			// Increment prediction ID
			++prediction_id;

			// Break reference to incoming message
			in_message = nullptr;

			// Send the new game state to all clients
			stnp::message::NewGameState gamestate;

			gamestate.timestamp = gamestate_history.rbegin()->first;
			gamestate.prediction_id = prediction_id;
			stnp::message::MessageSerializer state_serializer;
			gamestate_history.rbegin()->second.serial(state_serializer);
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

			// Save replay file
			std::ofstream ofs("/tmp/tilt.replay");
			ofs << controller_a_history.size();
			for (std::pair<uint32_t, GameState::ControllerState> const& entry : controller_a_history) {
				ofs << ' ' << entry.first << ' ' << (uint16_t)entry.second.getRaw();
			}
			ofs << ' ' << controller_b_history.size();
			for (std::pair<uint32_t, GameState::ControllerState> const& entry : controller_b_history) {
				ofs << ' ' << entry.first << ' ' << (uint16_t)entry.second.getRaw();
			}
		}

		// wait 1 PAL frame between updates
		::usleep(20000);
	}
}

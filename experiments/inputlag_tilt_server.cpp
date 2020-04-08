#include "GameState.hpp"
#include "network.hpp"
#include <libstnp/libstnp.hpp>

#include <algorithm>
#include <cassert>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <thread>

// g++ -O3 inputlag_tilt_server.cpp ../src/network.cpp ../src/GameState.cpp -I .. -I ../src -lpthread -lboost_system

uint32_t const INPUT_LAG = 4;

GameState initial_gamestate() {
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

GameState::ControllerState const& get_history_value_at(std::map<uint32_t, GameState::ControllerState> const& history, uint32_t i) {
	assert(!history.empty());
	std::map<uint32_t, GameState::ControllerState>::const_iterator history_entry = history.upper_bound(i);
	if (history_entry != history.begin()) --history_entry;
	return history_entry->second;
}

int main(int argc, char** argv) {
	// Parse command line
	uint32_t antilag_prediction = 0;
	if (argc == 2) {
		std::istringstream iss(argv[1]);
		iss >> antilag_prediction;
		if (iss.fail()) {
			std::cerr << "usage: " << argv[0] << " [anti-lag-prediction]" << std::endl;
			return 1;
		}
	}

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
		// Reconstruct gamestate history according to bufferized messages
		bool handled_message = false;
		while (true) {
			// Get next incomming message
			try {
				in_message = in_messages.pop();
				handled_message = true;
			}catch(std::exception const& e) {
				in_message = nullptr;
			}

			// Process message
			if (in_message == nullptr) {
				break;
			}else {
				// Add the sender to the clients list
				bool found = false;
				for (boost::asio::ip::udp::endpoint const& client_endpoint : clients) {
					if (client_endpoint.address() == in_message->sender.address() && client_endpoint.port() == in_message->sender.port()) {
						found = true;
						break;
					}
				}

				if (!found) {
					std::cout << "new client: " << in_message->sender.address() << ":" << in_message->sender.port() << "\n";
					clients.push_back(in_message->sender);
				}

				// Print received message
				std::cout << "got a message from " << in_message->sender.address() << ":" << in_message->sender.port() << "\n";
				std::cout << in_message->data.size() << " B" << "\n";
				std::ostringstream oss;
				oss << std::hex;
				for (uint8_t b : in_message->data) {
					oss << std::setfill('0') << std::setw(2) << (uint16_t)b << ' ';
				}
				std::cout << oss.str() << "\n";

				// Parse message
				stnp::message::ControllerState message;
				stnp::message::MessageDeserializer deserializer(in_message->data);
				message.serial(deserializer);

				// Update inputs history
				GameState::ControllerState controller_state = controller_state_from_message(message);
				std::map<uint32_t, GameState::ControllerState>& sender_controller_history = (message.client_id == 0 ? controller_a_history : controller_b_history);
				sender_controller_history[message.timestamp + INPUT_LAG] = controller_state;

				// Invalidate gamestate history from message's timestamp
				//  Note we don't want to keep states after that, even if still valid because of input delay.
				//  Not keeping it allows to ensure that the last computed gamestate is the one to send in the message (matching delayed frames)
				std::map<uint32_t, GameState>::iterator first_invalid_gamestate(gamestate_history.lower_bound(message.timestamp));
				if (first_invalid_gamestate != gamestate_history.end()) {
					if (first_invalid_gamestate->first == 0) {
						std::cerr << "error: prevented modification of initial gamestate" << "\n";
					}else {
						gamestate_history.erase(first_invalid_gamestate, gamestate_history.end());
					}
				}

				// Compute gamestate at the last input in history (minus delayed frames)
				{
					uint32_t gamestate_time = gamestate_history.rbegin()->first;
					GameState gamestate = gamestate_history.rbegin()->second;
					uint32_t last_input_time = sender_controller_history.rbegin()->first;
					assert(last_input_time >= INPUT_LAG);
					uint32_t current_gamestate_time = last_input_time - INPUT_LAG;

					while (gamestate_time < current_gamestate_time + antilag_prediction) {
						// Apply inputs
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

					// Apply inputs (for physical input to match with history)
					//TODO find a cleaner way (like removing physical inputs from gamestate and integrating it in delayed inputs)
					std::map<uint32_t, GameState::ControllerState>::const_iterator controller_history_entry(controller_a_history.find(gamestate_time));
					if (controller_history_entry != controller_a_history.end()) {
						gamestate.setControllerAState(controller_history_entry->second);
					}

					controller_history_entry = controller_b_history.find(gamestate_time);
					if (controller_history_entry != controller_b_history.end()) {
						gamestate.setControllerBState(controller_history_entry->second);
					}

					gamestate_history.insert(std::pair<uint32_t, GameState>(gamestate_time, gamestate));
				}

				// Increment prediction ID
				++prediction_id;

				// Serialize new gamestate message with sender's delayed inputs
				stnp::message::NewGameState gamestate;

				gamestate.timestamp = gamestate_history.rbegin()->first;
				gamestate.prediction_id = prediction_id;
				stnp::message::MessageSerializer state_serializer;
				gamestate_history.rbegin()->second.serial(state_serializer);
				gamestate.state = state_serializer.serialized();

				gamestate.next_opponent_inputs.reserve(INPUT_LAG);
				for (uint32_t i = gamestate.timestamp + 1; i <= gamestate.timestamp + INPUT_LAG; ++i) {
					gamestate.next_opponent_inputs.push_back(get_history_value_at(sender_controller_history, i).getRaw());
				}

				stnp::message::MessageSerializer serializer;
				gamestate.serial(serializer);

				// Send the new game state to impacted clients
				for (boost::asio::ip::udp::endpoint const& client_endpoint : clients) {
					if (!(client_endpoint == in_message->sender)) {
						std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
						out_message->destination = client_endpoint;
						out_message->data = serializer.serialized();
						out_messages.push(out_message);
						std::cout << "send state to " << client_endpoint.address() << ":" << client_endpoint.port() << "\n";
					}
				}
			}
		}

		// Let some time between updates
		//FIXME better have a blocking wait for messages in this server (we don't aggregate messages anyway)
		::usleep(1000);
	}
}

#include "network.hpp"
#include <libstnp/libstnp.hpp>

#include <iostream>
#include <sstream>
#include <iomanip>

// g++ dumb_tilt_server.cpp ../src/network.cpp -I .. -I ../src -lpthread -lboost_system

int main() {
	// Prepare component threads
	ThreadSafeFifo<network::IncommingUdpMessage> in_messages(5);
	network::UdpInput udp_receiver(1234, &in_messages);
	ThreadSafeFifo<network::OutgoingUdpMessage> out_messages(5);
	network::UdpOutput udp_sender(1235, &out_messages);

	// Start component threads
	std::thread udp_receiver_thread(&network::UdpInput::run, &udp_receiver);
	std::thread udp_sender_thread(&network::UdpOutput::run, &udp_sender);

	// Process incoming messages
	std::shared_ptr<network::IncommingUdpMessage> in_message = nullptr;
	std::vector<boost::asio::ip::udp::endpoint> clients;
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

			// Break reference to incoming message
			in_message = nullptr;
		}

		// Send a gamestate to all client
		stnp::message::NewGameState gamestate;
		gamestate.timestamp = 1000;
		gamestate.prediction_id = 0;
		gamestate.state = {
			0x00, // player_a_state = $00
			0x00, // player_b_state = $01
			0x00, // ; $02 - used by gameover_winner
			0x00, // player_a_hitstun = $03
			0x00, // player_b_hitstun = $04
			0x80, // player_a_x = $05
			0x88, // player_b_x = $06
			0x20, // player_a_y = $07
			0x20, // player_b_y = $08
			0x01, // player_a_direction = $0009 ; 0 - watching left
			0x00, // player_b_direction = $000a ; 1 - watching right
			0x00, // player_a_velocity_v = $0b
			0x00, // player_b_velocity_v = $0c
			0x00, // player_a_velocity_h = $0d
			0x00, // player_b_velocity_h = $0e
			0x00, // player_a_state_field1 = $0f
			0x00, // player_b_state_field1 = $10
			0x00, // player_a_state_field2 = $11
			0x00, // player_b_state_field2 = $12
			0x00, // player_a_animation = $13
			0x00, // msb
			0x00, // player_b_animation = $15
			0x00, // msb
			0x00, // player_a_anim_clock = $17
			0x00, // player_b_anim_clock = $18
			0x00, // player_a_hurtbox_left = $19
			0x00, // player_b_hurtbox_left = $1a
			0x00, // player_a_hurtbox_right = $1b
			0x00, // player_b_hurtbox_right = $1c
			0x00, // player_a_hurtbox_top = $1d
			0x00, // player_b_hurtbox_top = $1e
			0x00, // player_a_hurtbox_bottom = $1f
			0x00, // player_b_hurtbox_bottom = $20
			0x00, // player_a_hitbox_left = $21
			0x00, // player_b_hitbox_left = $22
			0x00, // player_a_hitbox_right = $23
			0x00, // player_b_hitbox_right = $24
			0x00, // player_a_hitbox_top = $25
			0x00, // player_b_hitbox_top = $26
			0x00, // player_a_hitbox_bottom = $27
			0x00, // player_b_hitbox_bottom = $28
			0x00, // player_a_hitbox_enabled = $0029 ; 0 - hitbox disabled
			0x00, // player_b_hitbox_enabled = $002a ; 1 - hitbox enabled
			0x00, // player_a_hitbox_force_v = $2b
			0x00, // player_b_hitbox_force_v = $2c
			0x00, // player_a_hitbox_force_h = $2d
			0x00, // player_b_hitbox_force_h = $2e
			0x00, // player_a_hitbox_damages = $2f
			0x00, // player_b_hitbox_damages = $30
			0x00, // player_a_damages = $31
			0x00, // player_b_damages = $32
			0x00, // player_a_x_low = $33
			0x00, // player_b_x_low = $34
			0x00, // player_a_y_low = $35
			0x00, // player_b_y_low = $36
			0x00, // player_a_velocity_v_low = $37
			0x00, // player_b_velocity_v_low = $38
			0x00, // player_a_velocity_h_low = $39
			0x00, // player_b_velocity_h_low = $3a
			0x00, // player_a_hitbox_force_v_low = $3b
			0x00, // player_b_hitbox_force_v_low = $3c
			0x00, // player_a_hitbox_force_h_low = $3d
			0x00, // player_b_hitbox_force_h_low = $3e
			0x00, // player_a_hitbox_base_knock_up_v_high = $3f
			0x00, // player_b_hitbox_base_knock_up_v_high = $40
			0x00, // player_a_hitbox_base_knock_up_h_high = $41
			0x00, // player_b_hitbox_base_knock_up_h_high = $42
			0x00, // player_a_hitbox_base_knock_up_v_low = $43
			0x00, // player_b_hitbox_base_knock_up_v_low = $44
			0x00, // player_a_hitbox_base_knock_up_h_low = $45
			0x00, // player_b_hitbox_base_knock_up_h_low = $46
			0x01, // player_a_animation_direction = $47
			0x00, // player_b_animation_direction = $48
			0x00, // player_a_num_aerial_jumps = $49
			0x00, // player_b_num_aerial_jumps = $4a
			0x02, // player_a_stocks = $4b
			0x02, // player_b_stocks = $4c
			0x03, // player_a_gravity = $4d
			0x03, // player_b_gravity = $4e

			0x00, // controller_a_btns = $e0
			0x02, // controller_b_btns = $e1
		};
		stnp::message::MessageSerializer serializer;
		gamestate.serial(serializer);
		for (boost::asio::ip::udp::endpoint const& client_endpoint : clients) {
			std::shared_ptr<network::OutgoingUdpMessage> out_message(new network::OutgoingUdpMessage);
			out_message->destination = client_endpoint;
			out_message->data = serializer.serialized();
			out_messages.push(out_message);
			std::cout << "reset state of " << client_endpoint.address() << ":" << client_endpoint.port() << std::endl;
		}

		// wait 10 seconds between updates
		::usleep(20000 * 50 * 10);
	}
}

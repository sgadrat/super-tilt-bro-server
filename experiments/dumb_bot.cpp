#include "network.hpp"
#include "utils.hpp"

#include <cstdint>
#include <cstdlib>
#include <libstnp/libstnp.hpp>
#include <limits>
#include <unistd.h>
#include <vector>

// g++ -O3 -o dumb_bot -I ../src -I .. ../src/network.cpp dumb_bot.cpp -lpthread -lboost_system

int main(int /*argc*/, char** /*argv*/) {
	using boost::asio::ip::udp;

	// Should be parameters
	char const* port = "3000";
	char const* host = "localhost";

	std::srand(std::time(nullptr));
	uint32_t const client_id = std::rand() % std::numeric_limits<uint32_t>::max();
	uint8_t const  ping_min = 0, ping_max = 1;
	uint8_t const  protocol_version = 1;

	uint32_t const game_duration = 200;

	// Resolve server's host
	boost::asio::io_service io_context;
	udp::resolver resolver(io_context);
	udp::endpoint server_endpoint = *resolver.resolve(udp::v4(), host, port).begin();

	// Create socket
	udp::socket socket(io_context);
	socket.open(udp::v4());

	// Connect to server
	stnp::message::Connection connection_msg;
	connection_msg.client_id = client_id;
	connection_msg.ping_min = ping_min;
	connection_msg.protocol_version = protocol_version;
	connection_msg.ping_max = ping_max;

	stnp::message::MessageSerializer serializer;
	connection_msg.serial(serializer);
	socket.send_to(boost::asio::buffer(serializer.serialized()), server_endpoint);

	std::vector<uint8_t> in_msg;
	in_msg.resize(193); // 193 = size of Disconnected message (which is the biggest message we can expect)
	std::size_t data_size = socket.receive_from(boost::asio::buffer(in_msg), server_endpoint);
	in_msg.resize(data_size);
	
	stnp::message::MessageDeserializer deserializer(in_msg);
	stnp::message::Connected connected_msg;
	connected_msg.serial(deserializer);

	// Wait for game start
	in_msg.resize(5);
	data_size = socket.receive_from(boost::asio::buffer(in_msg), server_endpoint);
	in_msg.resize(data_size);

	stnp::message::StartGame start_game_msg;
	deserializer.reset(in_msg);
	start_game_msg.serial(deserializer, protocol_version);

	// Play the game
	uint32_t current_frame = 0;
	while (current_frame < game_duration) {
		::usleep(20'000);
		++current_frame;

		if (std::rand() % 10 == 0) {
			stnp::message::ControllerState controller_msg;
			controller_msg.client_id = client_id;
			controller_msg.timestamp = current_frame;
			controller_msg.a_pressed = (std::rand() % 2 == 0);
			controller_msg.b_pressed = (std::rand() % 2 == 0);
			controller_msg.select_pressed = false;
			controller_msg.start_pressed = false;
			controller_msg.up_pressed = (std::rand() % 2 == 0);
			controller_msg.down_pressed = (std::rand() % 2 == 0);
			controller_msg.left_pressed = (std::rand() % 2 == 0);
			controller_msg.right_pressed = (std::rand() % 2 == 0);

			serializer.clear();
			controller_msg.serial(serializer);
			socket.send_to(boost::asio::buffer(serializer.serialized()), server_endpoint);
		}
	}
	return 0;
}

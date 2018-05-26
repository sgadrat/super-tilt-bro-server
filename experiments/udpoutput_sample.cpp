#include "network.hpp"

#include <iostream>

// g++ udpoutput_sample.cpp ../src/network.cpp -I .. -I ../src -lpthread -lboost_system

int main() {
	ThreadSafeFifo<network::OutgoingUdpMessage> out_messages(5);
	network::UdpOutput udp_sender(1235, &out_messages);

	std::thread udp_sender_thread(&network::UdpOutput::run, &udp_sender);

	boost::asio::io_context io_context;
	boost::asio::ip::udp::resolver resolver(io_context);
    boost::asio::ip::udp::endpoint destination = *resolver.resolve("127.0.0.1", "1234").begin();

	std::shared_ptr<network::OutgoingUdpMessage> message = nullptr;
	while (true) {
		message.reset(new network::OutgoingUdpMessage);
		message->data = {65, 66, 67, 0x0a};
		message->destination = destination;
		out_messages.push(message);

		::usleep(1000000);
	}
}

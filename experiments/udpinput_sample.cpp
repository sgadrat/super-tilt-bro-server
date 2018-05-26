#include "network.hpp"

#include <iostream>

// g++ udpinput_sample.cpp ../src/network.cpp -I .. -I ../src -lpthread -lboost_system

int main() {
	ThreadSafeFifo<network::IncommingUdpMessage> in_messages(5);
	network::UdpInput udp_receiver(1235, &in_messages);

	std::thread udp_receiver_thread(&network::UdpInput::run, &udp_receiver);

	std::shared_ptr<network::IncommingUdpMessage> message = nullptr;
	while (true) {
		try {
			message = in_messages.pop();
		}catch(std::exception const& e) {
			::usleep(100000);
			continue;
		}

		std::cout << "got a message from " << message->sender.address() << ":" << message->sender.port() << std::endl;
		std::cout << message->data.size() << " B" << std::endl;
		for (uint8_t b : message->data) {
			std::cout << b;
		}
		std::cout << std::endl;

		message = nullptr;
	}
}

#pragma once

#include "utils.hpp"

#include <atomic>
#include <boost/asio.hpp>
#include <vector>
#include <stdint.h>

namespace network {

struct IncommingUdpMessage {
	std::vector<uint8_t> data;
	boost::asio::ip::udp::endpoint sender;
};

class UdpInput {
public:
	UdpInput(uint16_t port, ThreadSafeFifo<IncommingUdpMessage>* out);
	void run();
	void stop();

private:
	boost::asio::io_context mIoContext;
	boost::asio::ip::udp::endpoint mBindPoint;
	boost::asio::ip::udp::socket mSocket;

	ThreadSafeFifo<IncommingUdpMessage>* mOut;

	std::atomic<bool> mRun;
};

}

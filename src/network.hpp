#pragma once

#include "utils.hpp"

#include <atomic>
#include <boost/asio.hpp>
#include <memory>
#include <mutex>
#include <vector>
#include <stdint.h>

namespace network {

class SocketPool {
public:
	SocketPool();

	std::shared_ptr<boost::asio::ip::udp::socket> get(uint16_t port);

private:
	std::mutex mMutex;
	// boost::asio::io_context mIoContext; // boost >= 1.66.0
	boost::asio::io_service mIoContext; // boost <= 1.65.x (and after thanks to a typedef in boost)
	std::vector<boost::asio::ip::udp::endpoint> mBindPoints;
	std::vector<std::shared_ptr<boost::asio::ip::udp::socket>> mSockets;
};

struct IncommingUdpMessage {
	std::vector<uint8_t> data;
	boost::asio::ip::udp::endpoint sender;
};

struct OutgoingUdpMessage {
	std::vector<uint8_t> data;
	boost::asio::ip::udp::endpoint destination;
};

class UdpInput {
public:
	UdpInput(uint16_t port, SocketPool* sockets, ThreadSafeFifo<IncommingUdpMessage>* out);
	void run();
	void stop();
private:
	SocketPool* mSockets;
	ThreadSafeFifo<IncommingUdpMessage>* mOut;
	uint16_t mPort;
	std::atomic<bool> mRun;
};

class UdpOutput {
public:
	UdpOutput(uint16_t srcPort, SocketPool* sockets, ThreadSafeFifo<OutgoingUdpMessage>* in);
	void run();
	void stop();

private:
	SocketPool* mSockets;
	ThreadSafeFifo<OutgoingUdpMessage>* mIn;
	uint16_t mPort;
	std::atomic<bool> mRun;
};

}

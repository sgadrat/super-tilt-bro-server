#include "network.hpp"

#include <stdexcept>
#include <iostream>

namespace network {

static std::size_t get_suitable_index(std::vector<boost::asio::ip::udp::endpoint> const& endpoints, uint16_t bindPort) {
	std::size_t i = 0;
	for (; i < endpoints.size(); ++i) {
		if (endpoints[i].port() == bindPort) {
			break;
		}
	}
	return i;
}

SocketPool::SocketPool() {
}

std::shared_ptr<boost::asio::ip::udp::socket> SocketPool::get(uint16_t port) {
	std::lock_guard<std::mutex> lock(mMutex);
	std::size_t socket_index = get_suitable_index(mBindPoints, port);
	if (socket_index == mBindPoints.size()) {
		mBindPoints.push_back(boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), port));
		mSockets.push_back(std::shared_ptr<boost::asio::ip::udp::socket>(new boost::asio::ip::udp::socket(mIoContext, mBindPoints[socket_index])));
	}
	return mSockets[socket_index];
}

UdpInput::UdpInput(uint16_t port, SocketPool* sockets, ThreadSafeFifo<IncommingUdpMessage>* out)
: mSockets(sockets)
, mOut(out)
, mPort(port)
, mRun(true)
{
}

void UdpInput::run() {
	const std::size_t max_msg_size = 1500;

	std::vector<uint8_t> data;
	mRun.store(true);
	while(mRun.load()) {
		// Wait for next datagram
		boost::asio::ip::udp::endpoint sender_endpoint;
		data.resize(max_msg_size);
		std::size_t data_size = mSockets->get(mPort)->receive_from(boost::asio::buffer(data), sender_endpoint);
		data.resize(data_size);

		// Relay it as a IncommingUdpMessage
		std::shared_ptr<IncommingUdpMessage> message(new IncommingUdpMessage);
		message->data = data;
		message->sender = sender_endpoint;
		try {
			mOut->push(message);
		}catch (std::exception const& e) {
			std::cerr << "UdpInput: lost a packet due to a full queue" << std::endl;
		}
	}
}

void UdpInput::stop() {
	mRun.store(false);
}

UdpOutput::UdpOutput(uint16_t srcPort, SocketPool* sockets, ThreadSafeFifo<OutgoingUdpMessage>* in)
: mSockets(sockets)
, mIn(in)
, mPort(srcPort)
, mRun(true)
{
}

void UdpOutput::run() {
	mRun.store(true);
	while(mRun.load()) {
		std::shared_ptr<OutgoingUdpMessage> message(mIn->pop_block());
		mSockets->get(mPort)->send_to(boost::asio::buffer(message->data), message->destination);
	}
}

void UdpOutput::stop() {
	mRun.store(false);
}

}

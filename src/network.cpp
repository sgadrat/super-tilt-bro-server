#include "network.hpp"

#include <stdexcept>
#include <iostream>

namespace network {

UdpInput::UdpInput(uint16_t port, ThreadSafeFifo<IncommingUdpMessage>* out)
: mBindPoint(boost::asio::ip::udp::v4(), port)
, mSocket(mIoContext, mBindPoint)
, mOut(out)
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
		std::size_t data_size = mSocket.receive_from(boost::asio::buffer(data), sender_endpoint);
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

UdpOutput::UdpOutput(uint16_t srcPort, ThreadSafeFifo<OutgoingUdpMessage>* in)
: mBindPoint(boost::asio::ip::udp::v4(), srcPort)
, mSocket(mIoContext, mBindPoint)
, mIn(in)
, mRun(true)
{
}

void UdpOutput::run() {
	mRun.store(true);
	while(mRun.load()) {
		std::shared_ptr<OutgoingUdpMessage> message(nullptr);
		try {
			message = mIn->pop();
		}catch (std::exception const& e) {
			::usleep(16000);
			continue;
		}

		mSocket.send_to(boost::asio::buffer(message->data), message->destination);
	}
}

void UdpOutput::stop() {
	mRun.store(false);
}

}

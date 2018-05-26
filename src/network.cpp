#include "network.hpp"

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
		mOut->push(message);
	}
}

void UdpInput::stop() {
	mRun.store(false);
}

}

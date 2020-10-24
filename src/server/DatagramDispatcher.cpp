#include "DatagramDispatcher.hpp"

#include "server/utils.hpp"

#include <libstnp/libstnp.hpp>
#include <syslog.h>

namespace {

void safe_push(
	std::shared_ptr<network::IncommingUdpMessage> message,
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> queue,
	char const* queue_name
)
{
	try {
		srv_dbg(
			LOG_DEBUG, "%lu DatagramDispatcher: pushing message from %s:%d to %s queue",
			wall_clock_milli(),
			message->sender.address().to_string().c_str(),
			message->sender.port(),
			queue_name
		);
		queue->push(message);
	}catch (std::runtime_error const& e) {
		syslog(
			LOG_ERR, "DatagramDispatcher: failed to push message from %s:%d to %s queue, lost it",
			message->sender.address().to_string().c_str(),
			message->sender.port(),
			queue_name
		);
	}
}

}

DatagramDispatcher::DatagramDispatcher(
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> incoming,
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> unknown_client_queue,
	std::shared_ptr<ClientsDatagramRouting> clients_queues
)
: incoming(incoming), unknown_client_queue(unknown_client_queue), clients_queues(clients_queues)
{
}

void DatagramDispatcher::run() {
	while (true) {
		std::shared_ptr<network::IncommingUdpMessage> message = this->incoming->pop_block();

		if (message->data.size() > 0 && message->data[0] == static_cast<uint8_t>(stnp::message::ClientMessageType::Ping)) {
			safe_push(message, this->unknown_client_queue, "global");
		}else {
			std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> destination_queue = this->clients_queues->get_queue(message->sender);
			if (destination_queue) {
				safe_push(message, destination_queue, "its destination");
			}else {
				safe_push(message, this->unknown_client_queue, "default");
			}
		}
	}
}

void DatagramDispatcher::stop() {
	//TODO
}

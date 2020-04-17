#include "DatagramDispatcher.hpp"

#include "server/utils.hpp"

#include <syslog.h>

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
		std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> destination_queue = this->clients_queues->get_queue(message->sender);
		if (destination_queue) {
			try {
				srv_dbg(LOG_DEBUG, "DatagramDispatcher: pushing message from %s:%d to its destination queue", message->sender.address().to_string().c_str(), message->sender.port());
				destination_queue->push(message);
			}catch (std::runtime_error const& e) {
				syslog(LOG_ERR, "DatagramDispatcher: failed to push message from %s:%d to its destination queue, lost it", message->sender.address().to_string().c_str(), message->sender.port());
			}
		}else {
			try {
				srv_dbg(LOG_DEBUG, "DatagramDispatcher: pushing message from %s:%d to default queue", message->sender.address().to_string().c_str(), message->sender.port());
				this->unknown_client_queue->push(message);
			}catch (std::runtime_error const& e) {
				syslog(LOG_ERR, "DatagramDispatcher: failed to push message from %s:%d to default queue, lost it: %s", message->sender.address().to_string().c_str(), message->sender.port(), e.what());
			}
		}
	}
}

void DatagramDispatcher::stop() {
	//TODO
}

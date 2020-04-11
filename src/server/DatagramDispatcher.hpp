#pragma once

#include "server/ClientsDatagramRouting.hpp"
#include "network.hpp"
#include <memory>

/** Component listening on a port and dispatching incoming messages to other queues */
class DatagramDispatcher {
public:
	DatagramDispatcher(
		std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> incoming,
		std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> unknown_client_queue,
		std::shared_ptr<ClientsDatagramRouting> clients_queues
	);

	void run();
	void stop();

private:
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> incoming;
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> unknown_client_queue;
	std::shared_ptr<ClientsDatagramRouting> clients_queues;
};

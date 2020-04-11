#pragma once

#include "server/ClientsDatagramRouting.hpp"

#include "network.hpp"
#include "utils.hpp"

#include <memory>

/** Component handling initialization phase of the STNP protocol */
class InitializationHandler {
public:
	InitializationHandler(
		std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
		std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
		std::shared_ptr<ClientsDatagramRouting> clients_routing
	);

	void run();
	void stop();

private:
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages;
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages;
	std::shared_ptr<ClientsDatagramRouting> clients_routing;
};

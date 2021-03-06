#pragma once

#include "server/ClientsDatagramRouting.hpp"
#include "server/StatisticsSink.hpp"

#include "network.hpp"
#include "src/utils.hpp"

#include <memory>
#include <string>

/** Component handling initialization phase of the STNP protocol */
class InitializationHandler {
public:
	InitializationHandler(
		std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages,
		std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages,
		std::shared_ptr<ClientsDatagramRouting> clients_routing,
		std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> game_info_messages
	);

	void run();
	void stop();

private:
	void rejectConnection(std::string const& reason, boost::asio::ip::udp::endpoint const& client);

	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> in_messages;
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages;
	std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> game_info_messages;
	std::shared_ptr<ClientsDatagramRouting> clients_routing;
};

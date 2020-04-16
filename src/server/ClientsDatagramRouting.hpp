#pragma once

#include "network.hpp"

#include <mutex>
#include <map>

/** Table to help routing datagrams to a component */
class ClientsDatagramRouting {
public:
	typedef std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> Queue;
	typedef std::map<boost::asio::ip::udp::endpoint, Queue> RoutingTable;

	Queue get_queue(boost::asio::ip::udp::endpoint const& endpoint);
	void set_queue(boost::asio::ip::udp::endpoint const& endpoint, Queue const& queue);
	void remove_client(boost::asio::ip::udp::endpoint const& endpoint);

private:
	RoutingTable routing_table;
	std::mutex mutex;
};

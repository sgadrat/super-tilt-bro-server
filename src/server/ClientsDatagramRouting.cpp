#include "ClientsDatagramRouting.hpp"

#include <utility>

ClientsDatagramRouting::Queue ClientsDatagramRouting::get_queue(boost::asio::ip::udp::endpoint const& endpoint) {
	std::lock_guard<std::mutex> lock(mutex);
	RoutingTable::iterator queue_it = this->routing_table.find(endpoint);
	if (queue_it != this->routing_table.end()) {
		return queue_it->second;
	}
	return nullptr;
}

void ClientsDatagramRouting::set_queue(boost::asio::ip::udp::endpoint const& endpoint, Queue const& queue) {
	std::lock_guard<std::mutex> lock(mutex);
	this->routing_table[endpoint] = queue;
}

void ClientsDatagramRouting::remove_client(boost::asio::ip::udp::endpoint const& endpoint) {
	std::lock_guard<std::mutex> lock(mutex);
	this->routing_table.erase(endpoint);
}

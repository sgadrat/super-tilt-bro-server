#define BOOST_TEST_MODULE InitializationHandler
#include <boost/test/included/unit_test.hpp>

#include <libstnp/libstnp.hpp>
#include <src/server/InitializationHandler.hpp>

#include <chrono>
#include <functional>
#include <memory>

bool wait(std::function<bool ()> predicate, std::chrono::milliseconds const& timeout = std::chrono::milliseconds(10000)) {
	auto const timeout_date = std::chrono::steady_clock::now() + timeout;
	while (std::chrono::steady_clock::now() < timeout_date) {
		if (predicate()) {
			return true;
		}
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	return false;
}

BOOST_AUTO_TEST_CASE(StartGame) {
	// Create and start the InitializationHandler to test
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages(new ThreadSafeFifo<network::OutgoingUdpMessage>(5));
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> new_clients_queue(new ThreadSafeFifo<network::IncommingUdpMessage>(5));
	std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> statistics_event_queue(new ThreadSafeFifo<StatisticsSink::GameInfo>(5));
	std::shared_ptr<ClientsDatagramRouting> clients_queues(new ClientsDatagramRouting);

	InitializationHandler initialization_handler(new_clients_queue, out_messages, clients_queues, statistics_event_queue);
	std::thread initialization_handler_thread(&InitializationHandler::run, &initialization_handler);

	std::atomic<bool> stopping = false;
	std::thread statistics_sink_thread([statistics_event_queue, &stopping]() {
		while (!stopping) {
			try {
				statistics_event_queue->pop_block(std::chrono::milliseconds(100));
			}catch (std::runtime_error const&) {
			}
		}
	});

	// Connect client A
	boost::asio::ip::udp::endpoint client_a_endpoint;
	client_a_endpoint.address(boost::asio::ip::make_address("127.0.0.1"));
	client_a_endpoint.port(1234);

	{
		// Construct initialization message
		stnp::message::Connection message;
		message.client_id = 1;
		message.ranked_play = false;
		message.protocol_version = stnp::LAST_VERSION;
		message.flags_and_major_version = 0b0'00'11'010;
		message.minor_version = 5;
		message.selected_character = 0,
		message.selected_palette = 0;
		message.selected_stage = 0;
		message.ping = {0, 0, 0};
		message.password = {
			0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
			0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
		};

		stnp::message::MessageSerializer serializer;
		message.serial(serializer);

		// Send message as an "udp message" for InitializationHandler
		std::shared_ptr<network::IncommingUdpMessage> udp_in_message(new network::IncommingUdpMessage);
		udp_in_message->data = serializer.serialized();
		udp_in_message->sender = client_a_endpoint;

		new_clients_queue->push(udp_in_message);

		// Wait for `Connected` message
		BOOST_TEST_REQUIRE(wait([&]() {
			while (!out_messages->empty()) {
				std::shared_ptr<network::OutgoingUdpMessage> msg = out_messages->pop();
				if (msg != nullptr && msg->data.size() != 0 && msg->data[0] == static_cast<uint8_t>(stnp::message::ServerMessageType::Connected)) {
					return true;
				}
			}
			return false;
		}));
	}

	// Connect client B
	boost::asio::ip::udp::endpoint client_b_endpoint;
	client_b_endpoint.address(boost::asio::ip::make_address("127.0.0.2"));
	client_b_endpoint.port(1235);

	{
		// Construct initialization message
		stnp::message::Connection message;
		message.client_id = 2;
		message.ranked_play = false;
		message.protocol_version = stnp::LAST_VERSION;
		message.flags_and_major_version = 0b0'00'11'010;
		message.minor_version = 5;
		message.selected_character = 0,
		message.selected_palette = 0;
		message.selected_stage = 0;
		message.ping = {0, 0, 0};
		message.password = {
			0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
			0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
		};

		stnp::message::MessageSerializer serializer;
		message.serial(serializer);

		// Send message as an "udp message" for InitializationHandler
		std::shared_ptr<network::IncommingUdpMessage> udp_in_message(new network::IncommingUdpMessage);
		udp_in_message->data = serializer.serialized();
		udp_in_message->sender = client_b_endpoint;

		new_clients_queue->push(udp_in_message);

		// Wait for `Connected` message
		BOOST_TEST_REQUIRE(wait([&]() {
			while (!out_messages->empty()) {
				std::shared_ptr<network::OutgoingUdpMessage> msg = out_messages->pop();
				if (msg != nullptr && msg->data.size() != 0 && msg->data[0] == static_cast<uint8_t>(stnp::message::ServerMessageType::Connected)) {
					return true;
				}
			}
			return false;
		}));
	}

	// Wait for `StartGame` messages
	struct StartGameMessageInfo {
		std::chrono::steady_clock::time_point time;
		boost::asio::ip::udp::endpoint destination;
		stnp::message::StartGame message;
	};
	std::vector<StartGameMessageInfo> start_game_log;
	size_t const expected_nb_messages = 8;
	start_game_log.reserve(expected_nb_messages);

	auto print_log = [&]() {
		std::cerr << "received " << start_game_log.size() << " messages:\n";
		size_t index = 0;
		for (auto const& msg_info: start_game_log) {
			std::cerr << " -" <<
				" #" << index <<
				" time=" << std::chrono::duration_cast<std::chrono::milliseconds>(msg_info.time - start_game_log[0].time).count() << " ms" <<
				" client=" << msg_info.destination.address() <<
				" player=" << uint16_t(msg_info.message.player_number) <<
				" countdown=" << uint16_t(msg_info.message.countdown) <<
				"\n"
			;
			++index;
		}
	};

	while (start_game_log.size() != expected_nb_messages) {
		try {
			// Pop message, parse, and store the message
			std::shared_ptr<network::OutgoingUdpMessage> msg = out_messages->pop_block(std::chrono::seconds(3));
			auto const reception_time = std::chrono::steady_clock::now();
			if (msg != nullptr && msg->data.size() != 0 && msg->data[0] == static_cast<uint8_t>(stnp::message::ServerMessageType::StartGame)) {
				// Parse message
				stnp::message::StartGame start_game_message;
				stnp::message::MessageDeserializer deserializer(msg->data);
				start_game_message.serial(deserializer, stnp::LAST_VERSION);

				// Store message
				start_game_log.push_back({.time = reception_time, .destination = msg->destination, .message = start_game_message});
			}
		}catch (std::runtime_error const& e) {
			std::cerr << "failed to receive all StartGame messages: " << e.what() << '\n';
			print_log();
			BOOST_FAIL("failed to receive all StartGame messages");
		}
	}

	// Check that `StartGame` messages have been received in a reasonable time
	size_t const original_countdown = start_game_log[0].message.countdown;
	size_t msg_index = 0;
	for (auto const& msg_info: start_game_log) {
		assert(msg_info.time >= start_game_log[0].time); // "assert" because failing it is an issue with the test itself, not tested code. Monotonic clock should ensure messages are received with ascending timestamps

		size_t const relative_ms = std::chrono::duration_cast<std::chrono::milliseconds>(msg_info.time - start_game_log[0].time).count();
		size_t const expected_relative_ms = (original_countdown - msg_info.message.countdown) * 20; // 20 is PAL's milliseconds per frames
		size_t const diff = (relative_ms > expected_relative_ms ? relative_ms - expected_relative_ms : expected_relative_ms - relative_ms);
		if (diff > 1) {
			print_log();
			BOOST_FAIL("message #" << msg_index << " not received at expected time (expected=" << expected_relative_ms << " actual=" << relative_ms << ')');
		}

		++msg_index;
	}

	// Shutdown all threads
	stopping = true;
	initialization_handler.stop();

	initialization_handler_thread.join();
	statistics_sink_thread.join();
}

BOOST_AUTO_TEST_CASE(AbortConnection) {
	// Create and start the InitializationHandler to test
	std::shared_ptr<ThreadSafeFifo<network::OutgoingUdpMessage>> out_messages(new ThreadSafeFifo<network::OutgoingUdpMessage>(5));
	std::shared_ptr<ThreadSafeFifo<network::IncommingUdpMessage>> new_clients_queue(new ThreadSafeFifo<network::IncommingUdpMessage>(5));
	std::shared_ptr<ThreadSafeFifo<StatisticsSink::GameInfo>> statistics_event_queue(new ThreadSafeFifo<StatisticsSink::GameInfo>(5));
	std::shared_ptr<ClientsDatagramRouting> clients_queues(new ClientsDatagramRouting);

	InitializationHandler initialization_handler(new_clients_queue, out_messages, clients_queues, statistics_event_queue);
	std::thread initialization_handler_thread(&InitializationHandler::run, &initialization_handler);

	std::atomic<bool> stopping = false;
	std::thread statistics_sink_thread([statistics_event_queue, &stopping]() {
		while (!stopping) {
			try {
				statistics_event_queue->pop_block(std::chrono::milliseconds(100));
			}catch (std::runtime_error const&) {
			}
		}
	});

	// Connect client A
	boost::asio::ip::udp::endpoint client_a_endpoint;
	client_a_endpoint.address(boost::asio::ip::make_address("127.0.0.1"));
	client_a_endpoint.port(1234);

	{
		// Construct initialization message
		stnp::message::Connection message;
		message.client_id = 1;
		message.ranked_play = false;
		message.protocol_version = stnp::LAST_VERSION;
		message.flags_and_major_version = 0b0'00'11'010;
		message.minor_version = 5;
		message.selected_character = 0,
		message.selected_palette = 0;
		message.selected_stage = 0;
		message.ping = {0, 0, 0};
		message.password = {
			0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
			0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
		};

		stnp::message::MessageSerializer serializer;
		message.serial(serializer);

		// Send message as an "udp message" for InitializationHandler
		std::shared_ptr<network::IncommingUdpMessage> udp_in_message(new network::IncommingUdpMessage);
		udp_in_message->data = serializer.serialized();
		udp_in_message->sender = client_a_endpoint;

		new_clients_queue->push(udp_in_message);

		// Wait for `Connected` message
		BOOST_TEST_REQUIRE(wait([&]() {
			while (!out_messages->empty()) {
				std::shared_ptr<network::OutgoingUdpMessage> msg = out_messages->pop();
				if (msg != nullptr && msg->data.size() != 0 && msg->data[0] == static_cast<uint8_t>(stnp::message::ServerMessageType::Connected)) {
					return true;
				}
			}
			return false;
		}));
	}

	// Disconnect client A
	{
		// Construct abort message
		stnp::message::AbortConnection message;
		message.client_id = 1;

		stnp::message::MessageSerializer serializer;
		message.serial(serializer);

		// Send message as an "udp message" for InitializationHandler
		std::shared_ptr<network::IncommingUdpMessage> udp_in_message(new network::IncommingUdpMessage);
		udp_in_message->data = serializer.serialized();
		udp_in_message->sender = client_a_endpoint;

		new_clients_queue->push(udp_in_message);
	}

	// Connect client B
	boost::asio::ip::udp::endpoint client_b_endpoint;
	client_b_endpoint.address(boost::asio::ip::make_address("127.0.0.2"));
	client_b_endpoint.port(1235);

	{
		// Construct initialization message
		stnp::message::Connection message;
		message.client_id = 2;
		message.ranked_play = false;
		message.protocol_version = stnp::LAST_VERSION;
		message.flags_and_major_version = 0b0'00'11'010;
		message.minor_version = 5;
		message.selected_character = 0,
		message.selected_palette = 0;
		message.selected_stage = 0;
		message.ping = {0, 0, 0};
		message.password = {
			0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
			0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
		};

		stnp::message::MessageSerializer serializer;
		message.serial(serializer);

		// Send message as an "udp message" for InitializationHandler
		std::shared_ptr<network::IncommingUdpMessage> udp_in_message(new network::IncommingUdpMessage);
		udp_in_message->data = serializer.serialized();
		udp_in_message->sender = client_b_endpoint;

		new_clients_queue->push(udp_in_message);

		// Wait for `Connected` message
		BOOST_TEST_REQUIRE(wait([&]() {
			while (!out_messages->empty()) {
				std::shared_ptr<network::OutgoingUdpMessage> msg = out_messages->pop();
				if (msg != nullptr && msg->data.size() != 0 && msg->data[0] == static_cast<uint8_t>(stnp::message::ServerMessageType::Connected)) {
					return true;
				}
			}
			return false;
		}));
	}

	// Wait for `StartGame` messages (which must not come)
	BOOST_REQUIRE_MESSAGE(!wait([&]() {
		// This lambda returns true when we receive a StartGame message, ending the wait and failing the test
		//  Note that the `!wait()` call implies
		//   - return true => make test fail
		//   - return false => do nothing
		//   - after the timeout the test will succeed
		while (!out_messages->empty()) {
			std::shared_ptr<network::OutgoingUdpMessage> msg = out_messages->pop_block(std::chrono::seconds(3));
			if (msg != nullptr && msg->data.size() != 0 && msg->data[0] == static_cast<uint8_t>(stnp::message::ServerMessageType::StartGame)) {
				return true;
			}
		}
		return false;
	}, std::chrono::seconds(1)), "Received a StartGame message while we should have not");

	// Shutdown all threads
	stopping = true;
	initialization_handler.stop();

	initialization_handler_thread.join();
	statistics_sink_thread.join();
}

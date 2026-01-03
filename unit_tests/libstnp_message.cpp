#define BOOST_TEST_MODULE libstnp::message
#include <boost/test/included/unit_test.hpp>

#include <libstnp/libstnp.hpp>

// Waiting for a build system: g++ libstnp_message.cpp -I ..

BOOST_AUTO_TEST_CASE(SerializeConnection) {
	// Create a Connection message
	stnp::message::Connection message;
	message.client_id = 513;
	message.ranked_play = true;
	message.protocol_version = stnp::LAST_VERSION;
	message.flags_and_major_version = 0b0'00'11'010;
	message.minor_version = 99;
	message.selected_character = 3,
	message.selected_palette = 0;
	message.selected_stage = 7;
	message.ping = {10, 11, 9};
	message.password = {
		0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
		0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
	};

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 0
		0x00,

		// client_id = 513 (little endian)
		0x01, 0x02, 0x00, 0x00,

		// protocol_version
		stnp::LAST_VERSION,

		// ping
		10, 11, 9,

		// framerate = 0, support = 0, release_type = 3, version_major = 2 (from flags_and_major_version)
		0x1a,

		// version_minor = 99
		99,

		// selected_character = 3, selected_palette = 0, selected_stage = 7
		3, 0, 7,

		// ranked_play = 1
		0x01,

		// password
		0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
		0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
	};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		serializer.serialized().begin(), serializer.serialized().end(),
		expected.begin(), expected.end()
	);
}

BOOST_AUTO_TEST_CASE(DeserializeConnection) {
	// Get a raw Connection message
	std::vector<uint8_t> raw_message = {
		// message_type = 0
		0x00,

		// client_id = 0xdeadbeef (little endian)
		0xef, 0xbe, 0xad, 0xde,

		// protocol_version
		stnp::LAST_VERSION,

		// ping
		10, 11, 9,

		// framerate = 0, support = 0, release_type = 3, version_major = 2 (from flags_and_major_version)
		0x1a,

		// version_minor = 99
		99,

		// selected_character = 3, selected_palette = 0, selected_stage = 7
		3, 0, 7,

		// ranked_play = 1
		0x01,

		// password
		0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
		0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::Connection message;
	message.serial(deserializer);

	// Check that deserialized message is as expected
	BOOST_REQUIRE_EQUAL(message.client_id, 0xdeadbeef);
	BOOST_REQUIRE_EQUAL(message.ranked_play, true);
	BOOST_REQUIRE_EQUAL(message.protocol_version, stnp::LAST_VERSION);
	BOOST_REQUIRE_EQUAL(message.flags_and_major_version, 0b0'00'11'010);
	BOOST_REQUIRE_EQUAL(message.minor_version, 99);
	BOOST_REQUIRE_EQUAL(message.selected_character, 3);
	BOOST_REQUIRE_EQUAL(message.selected_palette, 0);
	BOOST_REQUIRE_EQUAL(message.selected_stage, 7);

	decltype(message.ping) expected_ping = {10, 11, 9};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		message.ping.begin(), message.ping.end(),
		expected_ping.begin(), expected_ping.end()
	);

	decltype(message.password) expected_password = {
		0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08,
		0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, 0x10,
	};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		message.password.begin(), message.password.end(),
		expected_password.begin(), expected_password.end()
	);

	// Check that ease of use function interpret data correctly
	BOOST_REQUIRE_EQUAL(message.is_ntsc(), false);
	BOOST_REQUIRE_EQUAL(message.get_support_type(), stnp::message::Connection::SupportType::CARTRIDGE);
	BOOST_REQUIRE_EQUAL(message.get_release_type(), stnp::message::Connection::ReleaseType::RELEASE);
	BOOST_REQUIRE_EQUAL(message.get_major_version(), 2);
	BOOST_REQUIRE_EQUAL(message.get_ping_min(), 9);
	BOOST_REQUIRE_EQUAL(message.get_ping_max(), 11);
}

BOOST_AUTO_TEST_CASE(SerializeConnected) {
	// Create a Connected message
	stnp::message::Connected message;
	message.connection_quality = 1;

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer, stnp::LAST_VERSION);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 0
		0x00,

		// reserved = 0, connection_quality = 1
		0x01
	};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		serializer.serialized().begin(), serializer.serialized().end(),
		expected.begin(), expected.end()
	);
}

BOOST_AUTO_TEST_CASE(DeserializeConnected) {
	// Get a raw Connected message
	std::vector<uint8_t> raw_message = {
		// message_type = 0
		0x00,

		// reserved = 0, connection_quality = 1
		0x01
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::Connected message;
	message.serial(deserializer, stnp::LAST_VERSION);

	// Check that deserialized message is as expected
	BOOST_REQUIRE_EQUAL(message.connection_quality, 1);
}

BOOST_AUTO_TEST_CASE(SerializeStartGame) {
	// Create a StartGame message
	stnp::message::StartGame message;
	message.stage = 2;
	message.stocks = 3;
	message.player_number = 1;
	message.player_a_connection_quality(0);
	message.player_b_connection_quality(3);
	message.player_a_character = 1;
	message.player_b_character = 2;
	message.player_a_palette = 3;
	message.player_b_palette = 4;
	message.player_a_ping = {5, 7, 6};
	message.player_b_ping = {8, 10, 9};
	message.player_a_is_ntsc(false);
	message.player_b_is_ntsc(true);
	message.game_is_ntsc(false);
	message.countdown = 200;

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer, stnp::LAST_VERSION);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 1
		0x01,

		// stage = 2, stocks = 3
		0x02, 0x03,

		// player_number = 1
		0x01,

		// player_a_connection_quality = 0, player_b_connection_quality = 3
		0x03,

		// player_a_character = 1, player_b_character = 2
		0x01, 0x02,

		// player_a_palette = 3, player_b_palette = 4
		0x03, 0x04,

		// player_a_ping = 5-7-6, player_b_ping = 8-10-9
		0x05, 0x07, 0x06,
		0x08, 0x0a, 0x09,

		// player_a_framerate = 0 (50 Hz), player_b_framerate = 1 (60 Hz), game_framerate = 0 (50 Hz), reserved = 0
		0b0'1'0'00000,

		// countdown = 200
		200,
	};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		serializer.serialized().begin(), serializer.serialized().end(),
		expected.begin(), expected.end()
	);
}

BOOST_AUTO_TEST_CASE(DeserializeStartGame) {
	// Get a raw StartGame message
	std::vector<uint8_t> raw_message = {
		// message_type = 1
		0x01,

		// stage = 0, stocks = 3
		0x00, 0x03,

		// player_number = 1
		0x01,

		// player_a_connection_quality = 0, player_b_connection_quality = 3
		0x03,

		// player_a_character = 1, player_b_character = 2
		0x01, 0x02,

		// player_a_palette = 3, player_b_palette = 4
		0x03, 0x04,

		// player_a_ping = 5-7-6, player_b_ping = 8-10-9
		0x05, 0x07, 0x06,
		0x08, 0x0a, 0x09,

		// player_a_framerate = 0 (50 Hz), player_b_framerate = 1 (60 Hz), game_framerate = 0 (50 Hz), reserved = 0
		0b0'1'0'00000,

		// countdown = 200
		200,
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::StartGame message;
	message.serial(deserializer, stnp::LAST_VERSION);

	// Check that deserialized message is as expected
	BOOST_REQUIRE_EQUAL(message.stage, 0);
	BOOST_REQUIRE_EQUAL(message.player_number, 1);
	BOOST_REQUIRE_EQUAL(message.connections_quality, 0x03);
	BOOST_REQUIRE_EQUAL(message.player_a_character, 1);
	BOOST_REQUIRE_EQUAL(message.player_b_character, 2);
	BOOST_REQUIRE_EQUAL(message.player_a_palette, 3);
	BOOST_REQUIRE_EQUAL(message.player_b_palette, 4);
	BOOST_REQUIRE_EQUAL(message.framerates, 0b0'1'0'00000);
	BOOST_REQUIRE_EQUAL(message.countdown, 200);

	decltype(message.player_a_ping) expected_player_a_ping = {5, 7, 6};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		message.player_a_ping.begin(), message.player_a_ping.end(),
		expected_player_a_ping.begin(), expected_player_a_ping.end()
	);

	decltype(message.player_b_ping) expected_player_b_ping = {8, 10, 9};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		message.player_b_ping.begin(), message.player_b_ping.end(),
		expected_player_b_ping.begin(), expected_player_b_ping.end()
	);

	// Check that ease of use function interpret data correctly
	BOOST_REQUIRE_EQUAL(message.player_a_connection_quality(), 0);
	BOOST_REQUIRE_EQUAL(message.player_b_connection_quality(), 3);
	BOOST_REQUIRE_EQUAL(message.player_a_is_ntsc(), false);
	BOOST_REQUIRE_EQUAL(message.player_b_is_ntsc(), true);
	BOOST_REQUIRE_EQUAL(message.game_is_ntsc(), false);
}

BOOST_AUTO_TEST_CASE(SerializeControllerState) {
	// Create a ControllerState message
	stnp::message::ControllerState message;
	message.client_id = 0xbadf000d;
	message.timestamp = 8000;
	message.a_pressed = true;
	message.b_pressed = false;
	message.select_pressed = true;
	message.start_pressed = true;
	message.up_pressed = false;
	message.down_pressed = true;
	message.left_pressed = true;
	message.right_pressed = true;

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 1
		0x01,

		// client_id = 0xbadf000d, timestamp = 8000
		0x0d, 0x00, 0xdf, 0xba,
		0x40, 0x1f, 0x00, 0x00,

		// buttons = 10110111
		0b10110111
	};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		serializer.serialized().begin(), serializer.serialized().end(),
		expected.begin(), expected.end()
	);
}

BOOST_AUTO_TEST_CASE(DeserializeControllerState) {
	// Get a raw ControllerState message
	std::vector<uint8_t> raw_message = {
		// message_type = 1
		0x01,

		// client_id = 0xbadf000d, timestamp = 8000
		0x0d, 0x00, 0xdf, 0xba,
		0x40, 0x1f, 0x00, 0x00,

		// buttons = A, select, start, down, left, right = 10110111
		0b10110111
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::ControllerState message;
	message.serial(deserializer);

	// Check that deserialized message is as expected
	BOOST_CHECK_EQUAL(message.client_id, 0xbadf000d);
	BOOST_CHECK_EQUAL(message.timestamp, 8000);
	BOOST_CHECK_EQUAL(message.a_pressed, true);
    BOOST_CHECK_EQUAL(message.b_pressed, false);
    BOOST_CHECK_EQUAL(message.select_pressed, true);
    BOOST_CHECK_EQUAL(message.start_pressed, true);
    BOOST_CHECK_EQUAL(message.up_pressed, false);
    BOOST_CHECK_EQUAL(message.down_pressed, true);
    BOOST_CHECK_EQUAL(message.left_pressed, true);
    BOOST_CHECK_EQUAL(message.right_pressed, true);
}

BOOST_AUTO_TEST_CASE(SerializeNewGameState) {
	// Create a NewGameState message
	stnp::message::NewGameState message;
	message.prediction_id = 42;
	message.timestamp = 8000;
	message.state = std::vector<uint8_t>{0x01, 0x02, 0x03};

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer, stnp::LAST_VERSION);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 2
		0x02,

		// prediction_id = 42, timestamp = 8000
		42,
		0x40, 0x1f, 0x00, 0x00,

		// state
		0x01, 0x02, 0x03
	};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		serializer.serialized().begin(), serializer.serialized().end(),
		expected.begin(), expected.end()
	);
}

BOOST_AUTO_TEST_CASE(DeserializeNewGameState) {
	// Get a raw NewGameState message
	std::vector<uint8_t> raw_message = {
		// message_type = 2
		0x02,

		// prediction_id = 42, timestamp = 8000
		42,
		0x40, 0x1f, 0x00, 0x00,

		// state
		0x01, 0x02, 0x03
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::NewGameState message;
	message.serial(deserializer, stnp::LAST_VERSION);

	// Check that deserialized message is as expected
	BOOST_CHECK_EQUAL(message.prediction_id, 42);
	BOOST_CHECK_EQUAL(message.timestamp, 8000);
	std::vector<uint8_t> expected_state{1, 2, 3};
	BOOST_CHECK_EQUAL_COLLECTIONS(
		message.state.begin(), message.state.end(),
		expected_state.begin(), expected_state.end()
	);
}

BOOST_AUTO_TEST_CASE(SerializeGameOver) {
	// Create a GameOver message
	stnp::message::GameOver message;
	message.winner_player_number = 1;

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 3
		0x03,

		// winner_player_number = 1
		0x01
	};
	BOOST_REQUIRE_EQUAL_COLLECTIONS(
		serializer.serialized().begin(), serializer.serialized().end(),
		expected.begin(), expected.end()
	);
}

BOOST_AUTO_TEST_CASE(DeserializeGameOver) {
	// Get a raw GameOver message
	std::vector<uint8_t> raw_message = {
		// message_type = 1
		0x03,

		// winner_player_number = 0
		0x00
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::GameOver message;
	message.serial(deserializer);

	// Check that deserialized message is as expected
	BOOST_CHECK_EQUAL(message.winner_player_number, 0);
}

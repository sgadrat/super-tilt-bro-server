#define BOOST_TEST_MODULE libstnp::message
#include <boost/test/included/unit_test.hpp>

#include <libstnp/libstnp.hpp>

BOOST_AUTO_TEST_CASE(SerializeConnection) {
	// Create a Connection message
	stnp::message::Connection message;
	message.client_id = 513;

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 0
		0x00,

		// client_id = 513 (little endian)
		0x01, 0x02, 0x00, 0x00
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
		0xef, 0xbe, 0xad, 0xde
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::Connection message;
	message.serial(deserializer);

	// Check that deserialized message is as expected
	BOOST_REQUIRE_EQUAL(message.client_id, 0xdeadbeef);
}

BOOST_AUTO_TEST_CASE(SerializeConnected) {
	// Create a Connected message
	stnp::message::Connected message;
	message.player_number = 1;

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 0
		0x00,

		// player_number = 1
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

		// player_number = 1
		0x01
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::Connected message;
	message.serial(deserializer);

	// Check that deserialized message is as expected
	BOOST_REQUIRE_EQUAL(message.player_number, 1);
}

BOOST_AUTO_TEST_CASE(SerializeStartGame) {
	// Create a StartGame message
	stnp::message::StartGame message;
	message.stage = 2;
	message.stocks = 3;

	// Serialize the message
	stnp::message::MessageSerializer serializer;
	message.serial(serializer);

	// Check that serialized form meets expectation
	std::vector<uint8_t> expected = {
		// message_type = 1
		0x01,

		// stage = 2, stocks = 3
		0x02, 0x03
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

		// stage = 0, stocks = 4
		0x00, 0x04
	};

	// Deserialize the message
	stnp::message::MessageDeserializer deserializer(raw_message);
	stnp::message::StartGame message;
	message.serial(deserializer);

	// Check that deserialized message is as expected
	BOOST_REQUIRE_EQUAL(message.stage, 0);
	BOOST_REQUIRE_EQUAL(message.stocks, 4);
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
	message.serial(serializer);

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
	message.serial(deserializer);

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

#if 0
::
	NewGameState {
		uint8     message_type = 2;
		uint8     prediction_id;
		uint32    timestamp;
		GameState state;
	}

**prediction_id**: Indicate if this gamestate is derived from the previous one or uses new inputs. This number should be incremented each time the state is computed because of some inputs. It may loop from 255 to 0.
**timestamp**: Frame number on which this state is associated.
**state**: The new state.

NewGameState messages can be periodically updated then resent. In such case, the server should not change the *prediction_id*, set *timestamp* to an estimate of the current frame number being displayed on devices and *state* to an updated state to this timestamp. Clients may discard NewGameState messages when the *prediction_id* match the last one received.

Gameover
--------

When the game is over the server must stop to send NewGameState messages. If it receives a ControllerState message, it may reply with a GameOver message.

::
	GameOver {
		uint8 message_type = 3;
		uint8 winner_player_number;
	}
#endif

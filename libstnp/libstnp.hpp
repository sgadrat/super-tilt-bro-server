#pragma once

#include <stdint.h>
#include <cassert>
#include <vector>
#include <stdexcept>

namespace stnp {

namespace message {

enum class ClientMessageType : uint8_t {
	Connection = 0,
	ControllerState = 1,
};

enum class ServerMessageType : uint8_t {
	Connected = 0,
	StartGame = 1,
	NewGameState = 2,
};

class MessageSerializer {
public:
	void type(ClientMessageType const& t) {
		assert(mBuffer.size() == 0);
		mBuffer.push_back(static_cast<uint8_t>(t));
	};

	void type(ServerMessageType const& t) {
		assert(mBuffer.size() == 0);
		mBuffer.push_back(static_cast<uint8_t>(t));
	};

	void uint8(uint8_t& v) {
		assert(mBuffer.size() > 0);
		mBuffer.push_back(v);
	}

	void uint32(uint32_t& v) {
		assert(mBuffer.size() > 0);
		mBuffer.push_back(v & 0xff);
		mBuffer.push_back((v >> 8) & 0xff);
		mBuffer.push_back((v >> 16) & 0xff);
		mBuffer.push_back((v >> 24) & 0xff);
	}

	void flags8(std::vector<bool*> const& v) {
		assert(mBuffer.size() > 0);
		assert(v.size() == 8);
		uint8_t result =
			((*v[0] ? 1 : 0) << 7) +
			((*v[1] ? 1 : 0) << 6) +
			((*v[2] ? 1 : 0) << 5) +
			((*v[3] ? 1 : 0) << 4) +
			((*v[4] ? 1 : 0) << 3) +
			((*v[5] ? 1 : 0) << 2) +
			((*v[6] ? 1 : 0) << 1) +
			(*v[7] ? 1 : 0)
		;
		this->uint8(result);
	}

	std::vector<uint8_t> const& serialized() const {
		return mBuffer;
	}

private:
	std::vector<uint8_t> mBuffer;
};

class MessageDeserializer {
public:
	MessageDeserializer(std::vector<uint8_t> const& buffer)
	: mBuffer(buffer)
	, mPosition(0)
	{}

	void type(ClientMessageType const& t) {
		assert(mPosition == 0);
		if (mBuffer.at(mPosition) != static_cast<uint8_t>(t)) {
			throw std::runtime_error("Incorect message type");
		}
		++mPosition;
	}

	void type(ServerMessageType const& t) {
		assert(mPosition == 0);
		if (mBuffer.at(mPosition) != static_cast<uint8_t>(t)) {
			throw std::runtime_error("Incorect message type");
		}
		++mPosition;
	}

	void uint8(uint8_t& v) {
		assert(mPosition > 0);
		v = mBuffer[mPosition++];
	}

	void uint32(uint32_t& v) {
		assert(mPosition > 0);
		v = mBuffer[mPosition++];
		v += static_cast<uint32_t>(mBuffer[mPosition++]) << 8;
		v += static_cast<uint32_t>(mBuffer[mPosition++]) << 16;
		v += static_cast<uint32_t>(mBuffer[mPosition++]) << 24;
	}

	void flags8(std::vector<bool*> const& v) {
		assert(v.size() == 8);
		uint8_t raw = 0;
		this->uint8(raw);
		*v[0] = (raw & 0b10000000) != 0;
		*v[1] = (raw & 0b01000000) != 0;
		*v[2] = (raw & 0b00100000) != 0;
		*v[3] = (raw & 0b00010000) != 0;
		*v[4] = (raw & 0b00001000) != 0;
		*v[5] = (raw & 0b00000100) != 0;
		*v[6] = (raw & 0b00000010) != 0;
		*v[7] = (raw & 0b00000001) != 0;
	}

private:
	std::vector<uint8_t> mBuffer;
	std::vector<uint8_t>::size_type mPosition;
};

struct Connection {
	uint32_t client_id;

	template <typename SerializationHandler>
	void serial(SerializationHandler& s) {
		s.type(ClientMessageType::Connection);
		s.uint32(this->client_id);
	}
};

struct Connected {
	uint8_t player_number;

	template <typename SerializationHandler>
    void serial(SerializationHandler& s) {
		s.type(ServerMessageType::Connected);
		s.uint8(this->player_number);
	}
};

struct StartGame {
	uint8_t stage;
	uint8_t stocks;

	template <typename SerializationHandler>
	void serial(SerializationHandler& s) {
		s.type(ServerMessageType::StartGame);
		s.uint8(this->stage);
		s.uint8(this->stocks);
	}
};

struct ControllerState {
	uint32_t client_id;
	uint32_t timestamp;
	bool a_pressed;
	bool b_pressed;
	bool select_pressed;
	bool start_pressed;
	bool up_pressed;
	bool down_pressed;
	bool left_pressed;
	bool right_pressed;

	template <typename SerializationHandler>
	void serial(SerializationHandler& s) {
		s.type(ClientMessageType::ControllerState);
		s.uint32(this->client_id);
		s.uint32(this->timestamp);
		s.flags8({
			&this->a_pressed,
			&this->b_pressed,
			&this->select_pressed,
			&this->start_pressed,
			&this->up_pressed,
			&this->down_pressed,
			&this->left_pressed,
			&this->right_pressed,
		});
	}
};

}

}

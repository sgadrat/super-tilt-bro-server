#pragma once

#include <array>
#include <cassert>
#include <cstring>
#include <endian.h>
#include <vector>
#include <stdexcept>
#include <stdint.h>

namespace stnp {

constexpr uint8_t LAST_VERSION = 5;

namespace message {

enum class ClientMessageType : uint8_t {
	Connection = 0,
	ControllerState = 1,
	Ping = 2,
};

enum class ServerMessageType : uint8_t {
	Connected = 0,
	StartGame = 1,
	NewGameState = 2,
	GameOver = 3,
	Disconnected = 4,
	Pong = 5,
};

class MessageSerializer {
public:
	void clear() {
		mBuffer.clear();
	}

	std::vector<uint8_t> const& serialized() const {
		return mBuffer;
	}

	void type(ClientMessageType const& t) {
		assert(mBuffer.size() == 0);
		mBuffer.push_back(static_cast<uint8_t>(t));
	};

	void type(ServerMessageType const& t) {
		assert(mBuffer.size() == 0);
		mBuffer.push_back(static_cast<uint8_t>(t));
	};

	void uint8(uint8_t& v) {
		mBuffer.push_back(v);
	}

	void uint16(uint16_t& v) {
		mBuffer.push_back(v & 0xff);
		mBuffer.push_back((v >> 8) & 0xff);
	}

	void uint32(uint32_t& v) {
		mBuffer.push_back(v & 0xff);
		mBuffer.push_back((v >> 8) & 0xff);
		mBuffer.push_back((v >> 16) & 0xff);
		mBuffer.push_back((v >> 24) & 0xff);
	}

	void int16(int16_t& v) {
		uint16_t u = static_cast<uint16_t>(v);
		this->uint16(u);
	}

	void flags8(std::vector<bool*> const& v) {
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

	void dataFill(std::vector<uint8_t>& v) {
		mBuffer.insert(mBuffer.end(), v.begin(), v.end());
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

	void reset(std::vector<uint8_t> const& buffer) {
		mBuffer = buffer;
		mPosition = 0;
	}

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
		v = mBuffer.at(mPosition++);
	}

	void uint16(uint16_t& v) {
		assert(mPosition > 0);
		v = mBuffer.at(mPosition++);
		v += static_cast<uint32_t>(mBuffer.at(mPosition++)) << 8;
	}

	void uint32(uint32_t& v) {
		assert(mPosition > 0);
		v = mBuffer.at(mPosition++);
		v += static_cast<uint32_t>(mBuffer.at(mPosition++)) << 8;
		v += static_cast<uint32_t>(mBuffer.at(mPosition++)) << 16;
		v += static_cast<uint32_t>(mBuffer.at(mPosition++)) << 24;
	}

	void int16(int16_t& v) {
		::memcpy(&v, mBuffer.data() + mPosition, 2);
		mPosition += 2;
		v = le16toh(v); //TODO not sure it is correct, we should place the value in an union to ensure transparent conversion to unsigned
	}

	void flags8(std::vector<bool*> const& v) {
		assert(mPosition > 0);
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

	void dataFill(std::vector<uint8_t>& v) {
		assert(mPosition > 0);
		assert(v.size() == 0);
		v.reserve(mBuffer.size() - mPosition);
		for (; mPosition < mBuffer.size(); ++mPosition) {
			v.push_back(mBuffer.at(mPosition));
		}
	}

private:
	std::vector<uint8_t> mBuffer;
	std::vector<uint8_t>::size_type mPosition;
};

struct Connection {
	uint32_t client_id;
	uint8_t ping_min;
	uint8_t protocol_version;
	uint8_t ping_max;
	uint8_t flags_and_major_version;
	uint8_t minor_version;
	uint8_t selected_character;
	uint8_t selected_palette;
	uint8_t selected_stage;
	bool ranked_play;
	std::array<uint8_t, 16> password;

	enum class SupportType {
		CARTRIDGE = 0,
		NATIVE_EMULATOR = 1,
		WEB_EMULATOR = 2,
		UNKNOWN = 3,
	};

	enum class ReleaseType {
		ALPHA = 0,
		BETA = 1,
		RELEASE_CANDIDATE = 2,
		RELEASE = 3,
	};

	bool is_ntsc() const {
		return this->flags_and_major_version & 0b10000000;
	}

	SupportType get_support_type() const {
		return static_cast<SupportType>(
			(this->flags_and_major_version & 0b01100000) >> 5
		);
	}

	ReleaseType get_release_type() const {
		return static_cast<ReleaseType>(
			(this->flags_and_major_version & 0b00011000) >> 3
		);
	}

	uint8_t get_major_version() const {
		return this->flags_and_major_version & 0b00000111;
	}

	template <typename SerializationHandler>
	void serial(SerializationHandler& s) {
		s.type(ClientMessageType::Connection);
		s.uint32(this->client_id);
		s.uint8(this->ping_min);
		s.uint8(this->protocol_version);
		if (this->protocol_version >= 1) {
			s.uint8(this->ping_max);
		}
		if (this->protocol_version >= 2) {
			s.uint8(this->flags_and_major_version);
			s.uint8(this->minor_version);
		}
		if (this->protocol_version >= 3) {
			s.uint8(this->selected_character);
			s.uint8(this->selected_palette);
			s.uint8(this->selected_stage);
		}
		if (this->protocol_version >= 4) {
			uint8_t ranked = this->ranked_play;
			s.uint8(ranked);
			this->ranked_play = ranked;
			try {
				for (size_t i = 0; i < this->password.size(); ++i) {
					s.uint8(this->password[i]);
				}
			}catch (std::out_of_range const&) {
				::bzero((void*)this->password.data(), this->password.size());
			}
		}
	}
};

struct Connected {
	template <typename SerializationHandler>
    void serial(SerializationHandler& s) {
		s.type(ServerMessageType::Connected);
	}
};

struct StartGame {
	uint8_t stage;
	uint8_t stocks;
	uint8_t player_number;
	uint8_t connections_quality = 0;
	uint8_t player_a_character;
	uint8_t player_b_character;
	uint8_t player_a_palette;
	uint8_t player_b_palette;

	uint8_t player_a_connection_quality() const {
		return this->connections_quality >> 4;
	}

	void player_a_connection_quality(uint8_t quality) {
		assert(quality <= 0b0000'0011);
		this->connections_quality =
			(this->connections_quality & 0b1100'1111) +
			(quality << 4)
		;
	}

	uint8_t player_b_connection_quality() const {
		return this->connections_quality | 0b0000'0011;
	}

	void player_b_connection_quality(uint8_t quality) {
		assert(quality <= 0b0000'0011);
		this->connections_quality =
			(this->connections_quality & 0b1111'1100) +
			quality
		;
	}

	template <typename SerializationHandler>
	void serial(SerializationHandler& s, uint8_t protocol_version) {
		s.type(ServerMessageType::StartGame);
		s.uint8(this->stage);
		s.uint8(this->stocks);
		s.uint8(this->player_number);
		if (protocol_version >= 1) {
			s.uint8(this->connections_quality);
		}
		if (protocol_version >= 3) {
			s.uint8(this->player_a_character);
			s.uint8(this->player_b_character);
			s.uint8(this->player_a_palette);
			s.uint8(this->player_b_palette);
		}
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

struct NewGameState {
	std::vector<uint8_t> next_local_inputs;
	std::vector<uint8_t> next_opponent_inputs;
	std::vector<uint8_t> state;
	uint32_t timestamp;
	uint8_t prediction_id;

	template <typename SerializationHandler>
	void serial(SerializationHandler& s, uint8_t protocol_version) {
		if (next_local_inputs.size() != next_opponent_inputs.size()) {
			throw std::logic_error("input buffers size missmatch");
		}

		s.type(ServerMessageType::NewGameState);
		s.uint8(this->prediction_id);
		s.uint32(this->timestamp);
		if (protocol_version <= 4) {
			s.dataFill(this->next_opponent_inputs);
		}else {
			for (size_t i = 0; i < next_local_inputs.size(); ++i) {
				s.uint8(next_local_inputs[i]);
				s.uint8(next_opponent_inputs[i]);
			}
		}
		s.dataFill(this->state);
	}
};

struct GameOver {
	uint8_t winner_player_number;

	template <typename SerializationHandler>
	void serial(SerializationHandler& s) {
		s.type(ServerMessageType::GameOver);
		s.uint8(this->winner_player_number);
	}
};

struct Disconnected {
	std::vector<uint8_t> reason;

	template <typename SerializationHandler>
    void serial(SerializationHandler& s) {
		s.type(ServerMessageType::Disconnected);
		s.dataFill(this->reason);
	}
};

struct Ping {
	std::vector<uint8_t> free_data;

	template <typename SerializationHandler>
    void serial(SerializationHandler& s) {
		s.type(ClientMessageType::Ping);
		s.dataFill(this->free_data);
	}
};

struct Pong {
	std::vector<uint8_t> client_data;

	template <typename SerializationHandler>
    void serial(SerializationHandler& s) {
		s.type(ServerMessageType::Pong);
		s.dataFill(this->client_data);
	}
};

}

}

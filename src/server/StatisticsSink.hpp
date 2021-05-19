#pragma once

#include "GameState.hpp"
#include "network.hpp"
#include "src/utils.hpp"

#include <chrono>
#include <stdint.h>
#include <map>
#include <memory>
#include <string>
#include <uuid/uuid.h>

/** Component processing reports from the rest of the game, outputing statistics */
class StatisticsSink {
public:
	struct GameLog {
		struct Entry {
			std::chrono::steady_clock::time_point time;
			std::shared_ptr<network::IncommingUdpMessage> datagram;
			bool new_batch;
		};
		std::array<Entry, 1000> log;
		size_t next_log = 0;

		void new_net_message(
			std::chrono::steady_clock::time_point const& time,
			std::shared_ptr<network::IncommingUdpMessage> datagram,
			bool new_batch
		);
	};

	struct GameInfo {
		uuid_t game_id;
		GameLog game_log;
		std::chrono::system_clock::time_point game_begin;
		std::chrono::system_clock::time_point game_end;
		std::shared_ptr<std::map<uint32_t, GameState::ControllerState>> controller_a_history;
		std::shared_ptr<std::map<uint32_t, GameState::ControllerState>> controller_b_history;
		size_t num_ticks_in_game;
		uint32_t client_a_id;
		uint32_t client_b_id;
		bool player_a_ranked;
		bool player_b_ranked;
		uint8_t character_a;
		uint8_t character_b;
		uint8_t character_a_palette;
		uint8_t character_b_palette;
		uint8_t stage;
		uint8_t winner;
	};

	StatisticsSink(
		std::string game_info_path,
		std::shared_ptr<ThreadSafeFifo<GameInfo>> in_messages
	);

	void run();
	void stop();

private:
	std::shared_ptr<ThreadSafeFifo<GameInfo>> in_messages;
	std::string game_info_path;
};

inline void StatisticsSink::GameLog::new_net_message(
	std::chrono::steady_clock::time_point const& time,
	std::shared_ptr<network::IncommingUdpMessage> datagram,
	bool new_batch
)
{
	if (this->next_log < this->log.size()) {
		this->log[this->next_log] = {
			.time = time, .datagram = datagram, .new_batch = new_batch
		};
		++this->next_log;
	}
}

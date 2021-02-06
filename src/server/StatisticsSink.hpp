#pragma once

#include "src/utils.hpp"

#include <chrono>
#include <memory>
#include <string>
#include <uuid/uuid.h>

/** Component processing reports from the rest of the game, outputing statistics */
class StatisticsSink {
public:
	struct GameSummary {
		uuid_t game_id;
		std::chrono::system_clock::time_point game_begin;
		std::chrono::system_clock::time_point game_end;
		uint32_t client_a_id;
		uint32_t client_b_id;
		bool player_a_ranked;
		bool player_b_ranked;
		uint8_t character_a;
		uint8_t character_b;
		uint8_t stage;
		uint8_t winner;
	};

	StatisticsSink(
		std::string game_summaries_path,
		std::shared_ptr<ThreadSafeFifo<GameSummary>> in_messages
	);

	void run();
	void stop();

private:
	std::shared_ptr<ThreadSafeFifo<GameSummary>> in_messages;
	std::string game_summaries_path;
};

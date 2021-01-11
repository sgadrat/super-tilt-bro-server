#include "server/StatisticsSink.hpp"

#include <cstdio>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <sstream>

namespace {

std::string iso8601(std::chrono::system_clock::time_point const& time) {
	time_t const time_point = std::chrono::system_clock::to_time_t(time);
	std::ostringstream oss;
	oss << std::put_time(::gmtime(&time_point), "%Y-%m-%dT%H:%M:%SZ");
	return oss.str();
}

std::string client_id(uint32_t id) {
	char buffer[9];
	sprintf(buffer, "%08x", id);
	return std::string(buffer);
}

}

StatisticsSink::StatisticsSink(
	std::string game_summaries_path,
	std::shared_ptr<ThreadSafeFifo<GameSummary>> in_messages
)
: in_messages(in_messages)
, game_summaries_path(game_summaries_path)
{
}

void StatisticsSink::run() {
	while(true) {
		// Get a message to process
		std::shared_ptr<GameSummary> game_summary = in_messages->pop_block();

		// Serialize the game summary
		if (!this->game_summaries_path.empty()) {
			std::ostringstream serialized_summary;

			char str_uuid[37];
			uuid_unparse_lower(game_summary->game_id, str_uuid);
			serialized_summary <<
				"game=" << str_uuid << '\t' <<
				"begin=" << iso8601(game_summary->game_begin) << '\t' <<
				"end=" << iso8601(game_summary->game_end) << '\t' <<
				"client_a=" << client_id(game_summary->client_a_id) << '\t' <<
				"client_b=" << client_id(game_summary->client_b_id) << '\t' <<
				"character_a=" << uint16_t(game_summary->character_a) << '\t' <<
				"character_b=" << uint16_t(game_summary->character_b) << '\t' <<
				"stage=" << uint16_t(game_summary->stage) << '\t' <<
				"winner=" << uint16_t(game_summary->winner) << '\t' <<
			'\n';

			std::ofstream file_stream(this->game_summaries_path, std::ofstream::app);
			file_stream << serialized_summary.str();
		}
	}
}

void StatisticsSink::stop() {
	//TODO
}

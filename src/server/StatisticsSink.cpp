#include "server/StatisticsSink.hpp"
#include "utils.hpp"

#include <cstdio>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <sys/stat.h>
#include <syslog.h>

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

char pbool(bool value) {
	return value ? '1' : '0';
}

std::string serialize_game_log_entry(StatisticsSink::GameLog::Entry const& entry, std::chrono::steady_clock::time_point const& time_origin) {
	std::chrono::microseconds timestamp = std::chrono::duration_cast<std::chrono::microseconds>(entry.time - time_origin);
	std::stringstream oss;
	oss <<
		std::setfill(' ') << std::setw(10) << timestamp.count() << '\t' <<
		(entry.new_batch ? "NEW_BATCH" : "_________") << '\t'
	;
	if (entry.datagram != nullptr) {
		for (uint8_t b: entry.datagram->data) {
			oss << std::setfill('0') << std::setw(2) << std::hex << uint16_t(b) << ' ';
		}
	}else {
		oss << "-- ti me ou t. --";
	}
	return oss.str();
}

}

StatisticsSink::StatisticsSink(
	std::string game_info_path,
	std::shared_ptr<ThreadSafeFifo<GameInfo>> in_messages
)
: in_messages(in_messages)
, game_info_path(game_info_path)
{
}

void StatisticsSink::run() {
	while(true) {
		// Get a message to process
		std::shared_ptr<GameInfo> game_summary = in_messages->pop_block();

		// Store game information on filesystem
		if (!this->game_info_path.empty()) {
			// Shared computed values
			char str_uuid[37];
			uuid_unparse_lower(game_summary->game_id, str_uuid);

			std::string const game_info_dir = this->game_info_path + std::string("/") + str_uuid;

			// Create game's directory
			if (::mkdir(game_info_dir.c_str(), 0777) != 0) {
				syslog(LOG_WARNING, "StatisticsSink: unable to create game info directory: %s", strerror_tf(errno));
				continue;
			}

			// Serialize the game summary
			{
				std::ostringstream serialized_summary;

				serialized_summary <<
					"game=" << str_uuid << '\t' <<
					"begin=" << iso8601(game_summary->game_begin) << '\t' <<
					"end=" << iso8601(game_summary->game_end) << '\t' <<
					"client_a=" << client_id(game_summary->client_a_id) << '\t' <<
					"client_b=" << client_id(game_summary->client_b_id) << '\t' <<
					"player_a_ranked=" << pbool(game_summary->player_a_ranked) << '\t' <<
					"player_b_ranked=" << pbool(game_summary->player_b_ranked) << '\t' <<
					"character_a=" << uint16_t(game_summary->character_a) << '\t' <<
					"character_b=" << uint16_t(game_summary->character_b) << '\t' <<
					"character_a_palette=" << uint16_t(game_summary->character_a_palette) << '\t' <<
					"character_b_palette=" << uint16_t(game_summary->character_b_palette) << '\t' <<
					"stage=" << uint16_t(game_summary->stage) << '\t' <<
					"video_system=" << uint16_t(game_summary->video_system) << '\t' <<
					"winner=" << uint16_t(game_summary->winner) << '\t' <<
				'\n';

				std::ofstream file_stream(this->game_info_path + std::string("/games.log"), std::ofstream::app);
				file_stream << serialized_summary.str();
			}

			// Serialize the game log
			if (game_summary->game_log.next_log > 0) {
				std::string const game_log_path(game_info_dir + "/game_log.log");
				std::ofstream file_stream(game_log_path);
				for (size_t entry_index = 0; entry_index < game_summary->game_log.next_log; ++entry_index) {
					GameLog::Entry const& entry = game_summary->game_log.log[entry_index];
					file_stream << serialize_game_log_entry(entry, game_summary->game_log.log[0].time) << '\n';
				}
			}

			// Serialize the replay
			{
				std::string const replay_path(game_info_dir + "/replay.bmov"); // "bmov" like "Binary MOVie"

				// Serialize replay
				std::vector<uint8_t> serialized_replay;
				serialized_replay.reserve(
					// Header:
					//  version + num frames +
					//  stage + character_a + character_b +
					//  client_a + client_b +
					//  character_a_palette + character_b_palette +
					//  video_system
					1 + 4 +
					1 + 1 + 1 +
					4 + 4 +
					1 + 1 +
					1 +

					// Controller A
					4 + game_summary->controller_a_history->size() * (4 + 1) +

					// Controller B
					4 + game_summary->controller_b_history->size() * (4 + 1)
				);

				auto u32 = [&](uint32_t v) {
					serialized_replay.push_back((v & 0xff000000) >> 24);
					serialized_replay.push_back((v & 0x00ff0000) >> 16);
					serialized_replay.push_back((v & 0x0000ff00) >>  8);
					serialized_replay.push_back((v & 0x000000ff) >>  0);
				};
				auto u8 = [&](uint8_t v) {
					serialized_replay.push_back(v);
				};
				auto controller = [&](std::map<uint32_t, GameState::ControllerState> const& controller) {
					u32(controller.size());
					for (auto const& entry: controller) {
						u32(entry.first);
						u8(entry.second.getRaw());
					}
				};

				// Header
				u8(1);
				u32(game_summary->num_ticks_in_game);
				u8(game_summary->stage);
				u8(game_summary->character_a);
				u8(game_summary->character_b);
				u8(game_summary->character_a_palette);
				u8(game_summary->character_b_palette);
				u8(game_summary->video_system == static_cast<uint8_t>(GameState::VideoSystem::PAL) ? 0 : 1);

				// Controller A
				controller(*game_summary->controller_a_history);

				// Controller B
				controller(*game_summary->controller_b_history);

				// Write replay in file
				std::ofstream replay_file(replay_path);
				replay_file.write((char const*)serialized_replay.data(), serialized_replay.size());
			}
		}
	}
}

void StatisticsSink::stop() {
	//TODO
}

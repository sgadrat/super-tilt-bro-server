/*
 * Convert Super Tilt Bro. server replay to FCEUX movie
 *
 * Useful read: http://fceux.com/web/FM2.html
 */
#include <fstream>
#include <GameState.hpp>
#include <map>

// g++ -std=c++17 -O3 -DNDEBUG -flto bmov_to_fm2.cpp ../src/GameState.cpp -I ../src -I .. -o bmov_to_fm2

int main() {
	// Parse bmov file
	std::map<uint32_t, GameState::ControllerState> controller_a_history;
	std::map<uint32_t, GameState::ControllerState> controller_b_history;
	uint32_t num_ticks_in_game = 0;
	uint8_t stage = 255;
	uint8_t character_1 = 255;
	uint8_t character_2 = 255;
	{
		std::ifstream bmov_file("/tmp/replay.bmov");

		auto u8 = [&]() {
			uint8_t res;
			bmov_file.read((char*)&res, 1);
			return res;
		};
		auto u32 = [&]() {
			uint32_t res = 0;
			res += (uint32_t(u8()) << 24);
			res += (uint32_t(u8()) << 16);
			res += (uint32_t(u8()) <<  8);
			res += (uint32_t(u8()) <<  0);
			return res;
		};
		auto controller = [&]() {
			std::map<uint32_t, GameState::ControllerState> controller;
			uint32_t size = u32();
			for (uint32_t i = 0; i < size; ++i) {
				uint32_t time = u32();
				GameState::ControllerState state(u8());
				controller.insert(std::pair<uint32_t, GameState::ControllerState>(time, state));
			}
			return controller;
		};

		// Header
		u8(); /* bmov version */
		num_ticks_in_game = u32();
		stage = u8();
		character_1 = u8();
		character_2 = u8();
		u32(); /* ID player A */
		u32(); /* ID player B */

		// Controller A
		controller_a_history = controller();

		// Controller B
		controller_b_history = controller();
	}

	// Dump header information
	//TODO actually set an initial state from it
	{
		std::cerr <<
			"# stage=" << uint16_t(stage) << ' ' <<
			"char_1=" << uint16_t(character_1) << ' ' <<
			"char_2=" << uint16_t(character_2) << ' ' <<
		'\n';
	}

	// Write fm2 input log
	{
		for (uint32_t frame_num = 0; frame_num < num_ticks_in_game; ++frame_num) {
			GameState::ControllerState const controller_a = [&]() {
				auto it = controller_a_history.upper_bound(frame_num);
				--it;
				return it->second;
			}();
			GameState::ControllerState const controller_b = [&]() {
				auto it = controller_b_history.upper_bound(frame_num);
				--it;
				return it->second;
			}();
			//GameState::ControllerState const controller_b = (controller_b_history.upper_bound(frame_num) - 1)->second;

			auto controller = [&](GameState::ControllerState const& c) {
				std::ostringstream res;
				res <<
					(c.right_pressed ? 'R' : '.') <<
					(c.left_pressed ? 'L' : '.') <<
					(c.down_pressed ? 'D' : '.') <<
					(c.up_pressed ? 'U' : '.') <<
					(c.start_pressed ? 'T' : '.') <<
					(c.select_pressed ? 'S' : '.') <<
					(c.b_pressed ? 'B' : '.') <<
					(c.a_pressed ? 'A' : '.')
				;
				return res.str();
			};

			std::cout << "|0|" << controller(controller_a) << '|' << controller(controller_b) << "||\n";
		}
	}

	return 0;
}

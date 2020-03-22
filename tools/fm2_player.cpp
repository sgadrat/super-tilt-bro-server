#include "fm2_parser.hpp"
#include <GameState.hpp>

#include <cassert>
#include <iomanip>
#include <iostream>
#include <sstream>

// g++ -std=c++17 fm2_player.cpp ../src/GameState.cpp -I ../src -o fm2_player

/*
 * Take inputs from a movie file and run it in a GameState,
 * dumping the GameState each frame.
 *
 * It is aimed to be compared to output of a similar tool running the movie
 * in an emulator. Helping to detect differences in behaviour between client
 * and server.
 */

// TODO remove
//hexdump {
//	std::ostringstream oss;
//	oss << std::hex;
//	for (uint8_t b : in_message->data) {
//		oss << std::setfill('0') << std::setw(2) << (uint16_t)b << ' ';
//	}
//	std::cout << oss.str() << std::endl;
//}

class HexDumper {
public:
	void uint8(uint8_t& v) {
		this->out(v);
	}

	void uint16(uint16_t& v) {
		this->out(v & 0xff);
		this->out((v >> 8) & 0xff);
	}

	void uint32(uint32_t& v) {
		this->out(v & 0xff);
		this->out((v >> 8) & 0xff);
		this->out((v >> 16) & 0xff);
		this->out((v >> 24) & 0xff);
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
		this->out(result);
	}

	void dataFill(std::vector<uint8_t>& v) {
		for (uint8_t b: v) {
			this->out(b);
		}
	}

private:
	void out(uint8_t v) {
		if (n_writes != 0) {
			if (n_writes % 16 == 0) {
				std::cout << '\n';
			}else {
				std::cout << ' ';
			}
		}
		std::ostringstream oss;
		oss << std::hex << std::setfill('0') << std::setw(2) << (uint16_t)v;
		std::cout << oss.str();
		++(this->n_writes);
	}

	size_t n_writes = 0;
};

GameState initial_gamestate() {
	Stage stage;
	stage.spawn_player_a = Stage::Spawn{ .x = 0x4000, .y = 0x80ff };
	stage.spawn_player_b = Stage::Spawn{ .x = 0xa000, .y = 0x80ff };
	stage.respawn = Stage::Spawn{ .x = 0x7000, .y = 0x6000 },
		stage.platforms = std::vector<Stage::Platform>{
			Stage::Platform{
				.position = { .left = 0x29, .right = 0xcf, .top = 0x81, .bottom = 0xff },
				.is_smooth = false,
			},
		};
	return GameState(stage);
}

int main() {
	// Parse the movie
	fm2::Movie movie = fm2::parse_file("/tmp/movie.fm2");

	// Play movie input log
	GameState gamestate = initial_gamestate();
	auto b = [](bool v) {return v ? '1' : '_';};
	for (size_t frame_cnt = 0; frame_cnt < movie.input_log.size(); ++frame_cnt) {
		fm2::MovieRecord const& inputs = movie.input_log[frame_cnt];
		fm2::GamepadState const& port0 = inputs.port0;
		fm2::GamepadState const& port1 = inputs.port1;

		// Show frame information
		std::cout << "frame #" << frame_cnt << "\t" <<
			b(port0.a) <<
			b(port0.b) <<
			b(port0.select) <<
			b(port0.start) <<
			b(port0.up) <<
			b(port0.down) <<
			b(port0.left) <<
			b(port0.right) <<
			"\t" <<
			b(port1.a) <<
			b(port1.b) <<
			b(port1.select) <<
			b(port1.start) <<
			b(port1.up) <<
			b(port1.down) <<
			b(port1.left) <<
			b(port1.right) <<
		"\n";

		// Advance gamestate
		GameState::ControllerState controller_state;
		controller_state.a_pressed = port0.a;
		controller_state.b_pressed = port0.b;
		controller_state.select_pressed = port0.select;
		controller_state.start_pressed = port0.start;
		controller_state.up_pressed = port0.up;
		controller_state.down_pressed = port0.down;
		controller_state.left_pressed = port0.left;
		controller_state.right_pressed = port0.right;
		gamestate.setControllerAState(controller_state);

		controller_state.a_pressed = port1.a;
		controller_state.b_pressed = port1.b;
		controller_state.select_pressed = port1.select;
		controller_state.start_pressed = port1.start;
		controller_state.up_pressed = port1.up;
		controller_state.down_pressed = port1.down;
		controller_state.left_pressed = port1.left;
		controller_state.right_pressed = port1.right;
		gamestate.setControllerBState(controller_state);

		gamestate.tick();

		// Dump gamestate
		HexDumper serializer;
		gamestate.serial(serializer);
		std::cout << '\n';
	}

	return 0;
}

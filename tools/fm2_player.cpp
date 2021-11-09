#include "fm2_parser.hpp"
#include <GameState.hpp>

#include <cassert>
#include <chrono>
#include <iomanip>
#include <iostream>
#include <sstream>

// g++ -std=c++17 -O3 -DNDEBUG -flto fm2_player.cpp ../src/GameState.cpp -I ../src -I  .. -o fm2_player

/*
 * Take inputs from a movie file and run it in a GameState,
 * dumping the GameState each frame.
 *
 * It is aimed to be compared to output of a similar tool running the movie
 * in an emulator. Helping to detect differences in behaviour between client
 * and server.
 */

#define PERF_CYCLES 0
#define PERF_TIME 1

#define PERF_UNITS PERF_TIME

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
	const uint8_t STAGE_FLATLAND = 0;
	const uint8_t STAGE_THEPIT = 1;
	const uint8_t STAGE_SKYRIDE = 2;
	const uint8_t STAGE_THEHUNT = 3;

	const uint8_t CHAR_SINBAD = 0;
	const uint8_t CHAR_KIKI = 1;
	const uint8_t CHAR_PEPPER = 1;

	return GameState(STAGE_FLATLAND, std::array<uint8_t, 2>{CHAR_SINBAD, CHAR_SINBAD}, GameState::VideoSystem::PAL, [](std::string const & m) {std::cerr << m << '\n';});
}

#if PERF_UNITS == PERF_TIME
std::chrono::nanoseconds perf_total;
std::chrono::steady_clock::time_point perf_measure_begin;
static void perf_reset() {
	perf_total = std::chrono::nanoseconds(0);
}
static void perf_begin() {
	perf_measure_begin = std::chrono::steady_clock::now();
}
static void perf_end() {
	auto const tick_time = std::chrono::duration_cast<std::chrono::nanoseconds>(std::chrono::steady_clock::now() - perf_measure_begin);
	perf_total += tick_time;
	// gnuplot -e 'plot "cerr_output_file"' --persist
	std::cerr << tick_time.count() << '\n';
}
static void perf_summary(size_t n_ticks) {
	std::cerr << n_ticks << " ticks in " << (perf_total.count() / 1000) << " us : " << ((perf_total.count()/n_ticks) / 1000) << " us/tick\n";
}
#else
#include <x86intrin.h>
uint64_t perf_total;
uint64_t perf_measure_begin;
static void perf_reset() {
	perf_total = 0;
}
static void perf_begin() {
	perf_measure_begin = __rdtsc();
}
static void perf_end() {
	auto const tick_time =  __rdtsc()- perf_measure_begin;
	perf_total += tick_time;
	// gnuplot -e 'plot "cerr_output_file"' --persist
	std::cerr << tick_time << '\n';
}
static void perf_summary(size_t n_ticks) {
	std::cerr << n_ticks << " ticks in " << perf_total << " cycles : " << (perf_total / n_ticks) << " cycles/tick\n";
}
#endif

int main() {
	// Parse the movie
	fm2::Movie movie = fm2::parse_file("/tmp/movie.fm2");

	// Play movie input log
	perf_reset();
	GameState gamestate = initial_gamestate();
	bool gameover = false;
	auto b = [](bool v) {return v ? '1' : '_';};
	for (size_t frame_cnt = 0; frame_cnt < movie.input_log.size(); ++frame_cnt) {
		fm2::MovieRecord const& inputs = movie.input_log[frame_cnt];
		fm2::GamepadState const& port0 = inputs.port0;
		fm2::GamepadState const& port1 = inputs.port1;

		// Dump gamestate
		HexDumper serializer;
		gamestate.serial(serializer);
		std::cout << '\n';

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

		perf_begin();
		gameover = !gamestate.tick();
		perf_end();
		if (gameover) {
			break;
		}
	}

	// Dump gamestate after the last tick
	if (!gameover) {
		HexDumper serializer;
		gamestate.serial(serializer);
		std::cout << '\n';
	}

	// Dump performance info
	perf_summary(movie.input_log.size());

	return 0;
}

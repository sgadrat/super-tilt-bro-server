/*
 * Compute and dump initial state of a Super Tilt Bro. game
 */
#include "argparse.hpp"

#include <cstdint>
#include <GameState.hpp>
#include <libstnp/libstnp.hpp>
#include <fstream>
#include <iostream>

// g++ -std=c++17 -O3 -DNDEBUG -flto initial_state_dumper.cpp ../src/GameState.cpp -I ../src -I .. -o initial_state_dumper

std::vector<uint8_t> generate_state(uint8_t stage, uint8_t character_1, uint8_t character_2, GameState::VideoSystem video_system)
{
	// Initialize emulator
	GameState gamestate(stage, {character_1, character_2}, video_system);

	// Extract game state
	stnp::message::MessageSerializer serializer;
	gamestate.serial(serializer);
	return serializer.serialized();
}

std::string usage() {
	return
		"usage: initial_state_dumper [options] [STATE_PATH]\n"
		"\n"
		"\tSTATE_PATH\tPath to the state file to generate (default: /tmp/stb.state)\n"
		"\n"
		"\t--character-a\tCharacter for player A (default: 0)\n"
		"\t--character-b\tCharacter for player B (default: 0)\n"
		"\t--stage\tStage (default: 0)\n"
		"\t--system\tPAL or NTSC (default: PAL)\n"
	;
}

int main(int argc, char** argv) {
	// Parse command line
	std::string state_path = "/tmp/stb.state";
	uint8_t character_1 = 0;
	uint8_t character_2 = 0;
	uint8_t stage = 0;
	GameState::VideoSystem video_system = GameState::VideoSystem::PAL;
	{
		args::Args params = args::parse(argc, argv, {"--character-a", "--character-b", "--stage", "--system"});
		if (params.flags.count("-h") || params.flags.count("--help")) {
			std::cout << usage();
			return 0;
		}
		if (params.positional.size() > 1) {
			std::cerr << usage();
			return 1;
		}

		if (params.positional.size() > 0) {
			state_path = params.positional[0];
		}

		if (params.values.count("--character-a")) {
			character_1 = args::lex_cast<unsigned int>(params.values.at("--character-a"));
		}
		if (params.values.count("--character-b")) {
			character_2 = args::lex_cast<unsigned int>(params.values.at("--character-b"));
		}
		if (params.values.count("--stage")) {
			stage = args::lex_cast<unsigned int>(params.values.at("--stage"));
		}
		if (params.values.count("--system")) {
			if (params.values.at("--system") == "PAL") {
				video_system = GameState::VideoSystem::PAL;
			}else if (params.values.at("--system") == "NTSC") {
				video_system = GameState::VideoSystem::NTSC;
			}else {
				std::cerr << "unknown system '" << params.values.at("--system") << "'\n";
				return 1;
			}
		}
	}

	// Generate the state file
	std::vector<uint8_t> state = generate_state(stage, character_1, character_2, video_system);
	std::ofstream ofs(state_path);
	ofs.write(reinterpret_cast<char*>(state.data()), state.size());
	ofs.close();
}

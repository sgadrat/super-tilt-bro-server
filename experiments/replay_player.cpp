#include "GameState.hpp"

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <thread>
#include <vector>

// g++ -o replay_player replay_player.cpp ../src/GameState.cpp -I .. -I ../src

class GameStateInfo {
public:
	GameStateInfo()
	: mFieldsUint8({
		"player_a.state", "player_b.state", "filler", "player_a.hitstun", "player_b.hitstun",
		"player_a.x.msb", "player_b.x.msb", "player_a.y.msb", "player_b.y.msb",
		"player_a.direction", "player_b.direction",
		"player_a.velocity_v.msb", "player_b.velocity_v.msb", "player_a.velocity_h.msb", "player_b.velocity_h.msb",
		"player_a.state_field1", "player_b.state_field1", "player_a.state_field2", "player_b.state_field2",
		"player_a.anim_clock", "player_b.anim_clock",
		"player_a.hurtbox.left", "player_b.hurtbox.left", "player_a.hurtbox.right", "player_b.hurtbox.right",
		"player_a.hurtbox.top", "player_b.hurtbox.top", "player_a.hurtbox.bottom", "player_b.hurtbox.bottom",
		"player_a.hitbox.left", "player_b.hitbox.left", "player_a.hitbox.right", "player_b.hitbox.right",
		"player_a.hitbox.top", "player_b.hitbox.top", "player_a.hitbox.bottom", "player_b.hitbox.bottom",
		"player_a.hitbox.enabled", "player_b.hitbox.enabled"
	})
	, mNextFieldUint8(mFieldsUint8.begin())
	{
	}

    void uint8(uint8_t& v) {
		if (mNextFieldUint8 != mFieldsUint8.end()) {
			std::ostringstream oss;
			oss << (uint16_t)v;
			mValues[*mNextFieldUint8] = oss.str();
			++mNextFieldUint8;
		}
    }

    void uint16(uint16_t&) {
    }

    void uint32(uint32_t&) {
    }

    void flags8(std::vector<bool*> const&) {
	}

	void dataFill(std::vector<uint8_t>&) {
	}

	std::map<std::string, std::string> mValues;

private:
	std::vector<std::string> mFieldsUint8;
	std::vector<std::string>::const_iterator mNextFieldUint8;
};

GameState initial_gamestate() {
	Stage stage;
	stage.spawn_player_a = Stage::Spawn{ .x = 0x4000, .y = 0x80ff };
	stage.spawn_player_b = Stage::Spawn{ .x = 0xa000, .y = 0x80ff };
	stage.respawn = Stage::Spawn{ .x = 0x7000, .y = 0x6000 },
	stage.platforms = std::vector<Stage::Platform>{
		Stage::Platform{
			.position = { .left = 0x21, .right = 0xd7, .top = 0x81, .bottom = 0xff },
			.is_smooth = false,
		},
	};
	return GameState(stage);
}

int main() {
	// Parse history
	std::map<uint32_t, GameState::ControllerState> controller_a_history{
		{0, GameState::ControllerState()}
	};
	std::map<uint32_t, GameState::ControllerState> controller_b_history{
		{0, GameState::ControllerState()}
	};

	std::ifstream ifs("/tmp/tilt.replay");
	uint32_t size = 0;
	for (uint8_t controller_num = 0; controller_num < 2; ++controller_num) {
		std::map<uint32_t, GameState::ControllerState>* controller_history = &controller_a_history;
		if (controller_num != 0) {
			controller_history = &controller_b_history;
		}

		ifs >> size;
		for (uint32_t i = 0; i < size; ++i) {
			uint32_t time;
			uint16_t controller_state;
			ifs >> time >> controller_state;

			(*controller_history)[time] = GameState::ControllerState(controller_state);
		}
	}

	// Replay history
	uint32_t const nb_frames = std::max(controller_a_history.rbegin()->first, controller_b_history.rbegin()->first);
	GameState gamestate(initial_gamestate());
	for (uint32_t current_frame = 0; current_frame < nb_frames; ++current_frame) {
		// Parse state information
		GameStateInfo gamestate_info;
		gamestate.serial(gamestate_info);

		// Display state information
		std::cerr << "player_a.state .....: " << gamestate_info.mValues["player_a.state"] << std::endl;
		std::cerr << "player_a.x .........: " << gamestate_info.mValues["player_a.x.msb"] << std::endl;
		std::cerr << "player_a.direction .: " << (gamestate_info.mValues["player_a.direction"] == "0" ? "LEFT" : "RIGHT") << std::endl;
		if (gamestate_info.mValues["player_a.hitbox.enabled"] != "0") {
			std::cerr << "player_a.hitbox ....: left=" << gamestate_info.mValues["player_a.hitbox.left"] << " right=" << gamestate_info.mValues["player_a.hitbox.right"] << " top=" << gamestate_info.mValues["player_a.hitbox.top"] << " bottom=" << gamestate_info.mValues["player_a.hitbox.bottom"] << std::endl;
		}

		// Indicate the begining of the new frame
		std::cerr << std::endl << "tick " << current_frame << ':' << std::endl;

		// Apply inputs
		//  TODO check if it is more accurate to apply inputs before or after the simulation's tick
		std::map<uint32_t, GameState::ControllerState>::const_iterator controller_history_entry(controller_a_history.find(current_frame));
		if (controller_history_entry != controller_a_history.end()) {
			gamestate.setControllerAState(controller_history_entry->second);
			std::cerr << " controller_a <- " << (uint16_t)controller_history_entry->second.getRaw() << std::endl;
		}

		controller_history_entry = controller_b_history.find(current_frame);
		if (controller_history_entry != controller_b_history.end()) {
			gamestate.setControllerBState(controller_history_entry->second);
			std::cerr << " controller_b <- " << (uint16_t)controller_history_entry->second.getRaw() << std::endl;
		}

		// Tick Simulation
		if (!gamestate.tick()) {
			break;
		}
	}
}

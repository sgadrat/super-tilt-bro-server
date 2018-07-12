#include "GameState.hpp"

#include <algorithm>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <sstream>
#include <thread>
#include <vector>

// g++ -o replay_player -O0 -g replay_player.cpp ../src/GameState.cpp -I .. -I ../src

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

std::ostream& operator<<(std::ostream& os, GameState::ControllerState const& controller) {
	os <<
		"{a:" << controller.a_pressed <<
		" b:" << controller.b_pressed <<
		" select:" << controller.select_pressed <<
		" start:" << controller.start_pressed <<
		" up:" << controller.up_pressed <<
		" down:" << controller.down_pressed <<
		" left:" << controller.left_pressed <<
		" right:" << controller.right_pressed <<
		'}'
	;
	return os;
}

std::string state_str(std::string const& state_num) {
	if (state_num == "0") return std::string("STANDING") + " (00)";
	if (state_num == "1") return std::string("RUNNING") + " (01)";
	if (state_num == "2") return std::string("FALLING") + " (02)";
	if (state_num == "3") return std::string("JUMPING") + " (03)";
	if (state_num == "4") return std::string("JABBING") + " (04)";
	if (state_num == "5") return std::string("THROWN") + " (05)";
	if (state_num == "6") return std::string("RESPAWN") + " (06)";
	if (state_num == "7") return std::string("SIDE_TILT") + " (07)";
	if (state_num == "8") return std::string("SPECIAL") + " (08)";
	if (state_num == "9") return std::string("SIDE_SPECIAL") + " (09)";
	if (state_num == "10") return std::string("HELPLESS") + " (0a)";
	if (state_num == "11") return std::string("LANDING") + " (0b)";
	if (state_num == "12") return std::string("CRASHING") + " (0c)";
	if (state_num == "13") return std::string("DOWN_TILT") + " (0d)";
	if (state_num == "14") return std::string("AERIAL_SIDE") + " (0e)";
	if (state_num == "15") return std::string("AERIAL_DOWN") + " (0f)";
	if (state_num == "16") return std::string("AERIAL_UP") + " (10)";
	if (state_num == "17") return std::string("AERIAL_NEUTRAL") + " (11)";
	if (state_num == "18") return std::string("AERIAL_SPE_NEUTRAL") + " (12)";
	if (state_num == "19") return std::string("SPE_UP") + " (13)";
	if (state_num == "20") return std::string("SPE_DOWN") + " (14)";
	if (state_num == "21") return std::string("UP_TILT") + " (15)";
	if (state_num == "22") return std::string("SHIELDING") + " (16)";
	if (state_num == "23") return std::string("INNEXISTANT") + " (17)";
	if (state_num == "24") return std::string("SPAWN") + " (18)";
	return "<unknown state> (" + state_num + ")";
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
		std::cerr << "player_a.state .....: " << state_str(gamestate_info.mValues["player_a.state"]) << std::endl;
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
			std::cerr << " controller_a <- " << controller_history_entry->second << std::endl;
		}

		controller_history_entry = controller_b_history.find(current_frame);
		if (controller_history_entry != controller_b_history.end()) {
			gamestate.setControllerBState(controller_history_entry->second);
			std::cerr << " controller_b <- " << controller_history_entry->second << std::endl;
		}

		// Tick Simulation
		if (!gamestate.tick()) {
			break;
		}
	}
}

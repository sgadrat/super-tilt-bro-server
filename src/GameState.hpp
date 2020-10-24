#pragma once

#include "mos6502/mos6502.hpp"
#include "GameState.bytecodeinfo.hpp"

#include <array>
#include <functional>
#include <sstream>
#include <stdint.h>

class GameState {
public:
	typedef std::function<void(std::string const&)> LoggerCallback;

	struct ControllerState {
		bool a_pressed;
		bool b_pressed;
		bool select_pressed;
		bool start_pressed;
		bool up_pressed;
		bool down_pressed;
		bool left_pressed;
		bool right_pressed;

		ControllerState(uint8_t raw_value = 0)
		: a_pressed(raw_value & 0b10000000)
		, b_pressed(raw_value & 0b01000000)
		, select_pressed(raw_value & 0b00100000)
		, start_pressed(raw_value & 0b00010000)
		, up_pressed(raw_value & 0b00001000)
		, down_pressed(raw_value & 0b00000100)
		, left_pressed(raw_value & 0b00000010)
		, right_pressed(raw_value & 0b00000001)
		{
		}

		uint8_t getRaw() const {
			return
				((this->a_pressed ? 1 : 0) << 7) +
				((this->b_pressed ? 1 : 0) << 6) +
				((this->select_pressed ? 1 : 0) << 5) +
				((this->start_pressed ? 1 : 0) << 4) +
				((this->up_pressed ? 1 : 0) << 3) +
				((this->down_pressed ? 1 : 0) << 2) +
				((this->left_pressed ? 1 : 0) << 1) +
				(this->right_pressed ? 1 : 0)
			;
		}

		std::string getStr() const {
			std::ostringstream oss;
			oss << "a="<<a_pressed<<",b="<<b_pressed<<",select="<<select_pressed<<",start="<<start_pressed<<",up="<<up_pressed<<",down="<<down_pressed<<",left="<<left_pressed<<",right="<<right_pressed;
			return oss.str();
		}
	};

	GameState(uint8_t stage, LoggerCallback logger = nullptr);

	bool tick();
	bool is_gameover() const {return this->emulator_context.gameover;}
	uint8_t winner() const;

	void setControllerAState(ControllerState state);
	void setControllerBState(ControllerState state);

	template <typename SerializationHandler>
	void serial(SerializationHandler& s);

private:
	uint8_t emulatorRead(uint16_t addr);
	bool emulatorWrite(uint16_t addr, uint8_t value);
	void emulatorDump() const;

private:
	static std::array<uint8_t, 0x80000> const emulator_rom;
	mos6502::RunContext emulator_context = {
		.ram = {0},
		.rom = GameState::emulator_rom.data(),
		.bank = 0,
		.gameover = false
	};
	mos6502 emulator;

	ControllerState mControllerA;
	ControllerState mControllerB;

	LoggerCallback logger;
};

template <typename SerializationHandler>
void GameState::serial(SerializationHandler& s) {
	// Copy gamestate
	for (size_t i = 0; i < 0x4f; ++i) {
		s.uint8(this->emulator_context.ram[i]);
	}

	// Copy hitboxes MSB
	for (size_t i = 0; i < 0x10; ++i) {
		s.uint8(this->emulator_context.ram[player_a_hurtbox_left_msb + i]);
	}

	// Copy special state
	s.uint8(this->emulator_context.ram[screen_shake_counter]);

	// Copy controllers state
	s.uint8(this->emulator_context.ram[controller_a_btns]);
	s.uint8(this->emulator_context.ram[controller_b_btns]);
	s.uint8(this->emulator_context.ram[controller_a_last_frame_btns]);
	s.uint8(this->emulator_context.ram[controller_b_last_frame_btns]);

	// Copy actually pressed opponent btns (keep_input_dirty may mess with normal values, but not this one)
	s.flags8({
		&mControllerA.a_pressed,
		&mControllerA.b_pressed,
		&mControllerA.select_pressed,
		&mControllerA.start_pressed,
		&mControllerA.up_pressed,
		&mControllerA.down_pressed,
		&mControllerA.left_pressed,
		&mControllerA.right_pressed,
	});
	s.flags8({
		&mControllerB.a_pressed,
		&mControllerB.b_pressed,
		&mControllerB.select_pressed,
		&mControllerB.start_pressed,
		&mControllerB.up_pressed,
		&mControllerB.down_pressed,
		&mControllerB.left_pressed,
		&mControllerB.right_pressed,
	});

	// Copy animation states
	for (size_t i = 0; i < 12*2; ++i) {
		s.uint8(this->emulator_context.ram[player_a_animation + i]);
	}
}

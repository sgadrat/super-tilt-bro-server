#pragma once

#include "mos6502/mos6502.hpp"
#include "GameState.bytecodeinfo.hpp"

#include <array>
#include <functional>
#include <map>
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

	GameState(uint8_t stage, std::array<uint8_t, 2> characters, LoggerCallback logger = nullptr);

	bool tick();
	bool is_gameover() const {return this->emulator.run_context.gameover;}
	uint8_t winner() const;

	void setControllerAState(ControllerState state);
	void setControllerBState(ControllerState state);

	template <typename SerializationHandler>
	void serial(SerializationHandler& s);

private:
	void emulatorDump() const;

public:
	struct EmulatorRunContext {
		std::array<uint8_t*, 8> memory_segments;
		std::array<void(*)(mos6502<EmulatorRunContext>&), 0x4000> const* compiled_segments;
		bool gameover;

		uint8_t read(uint16_t);
		bool write(uint16_t, uint8_t);
	};

private:
	static std::array<uint8_t, 0x80000> /*const*/ emulator_rom;
	static std::array<void(*)(mos6502<EmulatorRunContext>&), 0x4000> emulator_compiled_segments;
	static std::array<uint8_t, 0x2000> /*const*/ emulator_registers;
	std::array<uint8_t, 0x800> emulator_ram;
	mos6502<EmulatorRunContext> emulator;

	ControllerState mControllerA;
	ControllerState mControllerB;

	LoggerCallback logger;
};

template <typename SerializationHandler>
void GameState::serial(SerializationHandler& s) {
	// Copy gamestate
	for (size_t i = 0; i < 0x4f; ++i) {
		s.uint8(this->emulator_ram[i]);
	}

	// Copy hitboxes MSB
	for (size_t i = 0; i < 0x10; ++i) {
		s.uint8(this->emulator_ram[player_a_hurtbox_left_msb + i]);
	}

	// Copy special state
	s.uint8(this->emulator_ram[screen_shake_counter]);

	// Copy controllers state
	s.uint8(this->emulator_ram[controller_a_btns]);
	s.uint8(this->emulator_ram[controller_b_btns]);
	s.uint8(this->emulator_ram[controller_a_last_frame_btns]);
	s.uint8(this->emulator_ram[controller_b_last_frame_btns]);

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
	std::array<uint8_t, 6> const serialized_animation_fields = {
		4, // ANIMATION_STATE_OFFSET_DATA_VECTOR_LSB
		5, // ANIMATION_STATE_OFFSET_DATA_VECTOR_MSB
		6, // ANIMATION_STATE_OFFSET_DIRECTION
		7, // ANIMATION_STATE_OFFSET_CLOCK
		10, // ANIMATION_STATE_OFFSET_FRAME_VECTOR_LSB
		11, // ANIMATION_STATE_OFFSET_FRAME_VECTOR_MSB
	};
	for (size_t anim_offset = 0; anim_offset <= 12; anim_offset += 12) {
		for (uint8_t const prop: serialized_animation_fields) {
			s.uint8(this->emulator_ram[player_a_animation + anim_offset + prop]);
		}
	}

	// Copy characters state
	for (size_t char_num = 0; char_num < 2; ++char_num) {
		size_t const character_objects = (char_num == 0 ? player_a_objects : player_b_objects);

		switch (this->emulator_ram[config_player_a_character + char_num]) {
			case 0: // Sinbad
				break;

			case 1: // Kiki
				// Platform stage-element
				for (size_t i = 0; i < 9; ++i) {
					s.uint8(this->emulator_ram[character_objects + i]);
				}

				// Y pos of the platform
				for (size_t i = 10; i < 12; ++i) {
					s.uint8(this->emulator_ram[character_objects + i]);
				}

				break;

			default:
				throw std::runtime_error("tried to serialize unknown character");
		}
	}
}

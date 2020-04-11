#include "GameState.hpp"

#include <cassert>
#include <cstring>
#include <iostream>
#include <sstream>
#include <utility>

/********************************
*
* Utils
*
********************************/

#ifdef DEBUG_LOG

class DbgGuard {
public:
	DbgGuard(std::string message)
	: mMessage(message)
	{
		std::cerr << mMessage << " {" << std::endl;
	}

	~DbgGuard() {
		std::cerr << "}" << std::endl;
	}

	std::string mMessage;
};

#define dbg(m) \
	std::ostringstream dbg_oss;\
	dbg_oss << m;\
	DbgGuard dbg_g(dbg_oss.str())

#else

#define dbg(m)

#endif

/*
 * usage:
 *  bin_int(0x000a) => 10
 *  bin_int(0xfff6) => -10
 */
static int16_t bin_int(uint16_t v) {
	return static_cast<int16_t>(v);
}

static int32_t screen_pixel_to_screen_pixel_subpixel(int16_t screen_pixel, uint8_t subpixel) {
	return compose_int32(
		subpixel,
		lsb(screen_pixel),
		msb(screen_pixel),
		screen_pixel < 0 ? 0xff : 0x00
	);
}

/********************************
*
* Constants
*
********************************/

const uint8_t DEFAULT_GRAVITY = 3;
const uint8_t INITIAL_STOCKS = 3;
const uint8_t PLAYER_DOWN_TAP_MAX_DURATION = 7;

const uint8_t PLAYER_STATE_THROWN = 0x00;
const uint8_t PLAYER_STATE_RESPAWN = 0x01;
const uint8_t PLAYER_STATE_INNEXISTANT = 0x02;
const uint8_t PLAYER_STATE_SPAWN = 0x03;
const uint8_t PLAYER_STATE_STANDING = 0x04;
const uint8_t PLAYER_STATE_RUNNING = 0x05;
const uint8_t PLAYER_STATE_FALLING = 0x06;
const uint8_t PLAYER_STATE_JUMPING = 0x07;
const uint8_t PLAYER_STATE_JABBING = 0x08;
const uint8_t PLAYER_STATE_SIDE_TILT = 0x09;
const uint8_t PLAYER_STATE_SPECIAL = 0x0a;
const uint8_t PLAYER_STATE_SIDE_SPECIAL = 0x0b;
const uint8_t PLAYER_STATE_HELPLESS = 0x0c;
const uint8_t PLAYER_STATE_LANDING = 0x0d;
const uint8_t PLAYER_STATE_CRASHING = 0x0e;
const uint8_t PLAYER_STATE_DOWN_TILT = 0x0f;
const uint8_t PLAYER_STATE_AERIAL_SIDE = 0x10;
const uint8_t PLAYER_STATE_AERIAL_DOWN = 0x11;
const uint8_t PLAYER_STATE_AERIAL_UP = 0x12;
const uint8_t PLAYER_STATE_AERIAL_NEUTRAL = 0x13;
const uint8_t PLAYER_STATE_AERIAL_SPE_NEUTRAL = 0x14;
const uint8_t PLAYER_STATE_SPE_UP = 0x15;
const uint8_t PLAYER_STATE_SPE_DOWN = 0x16;
const uint8_t PLAYER_STATE_UP_TILT = 0x17;
const uint8_t PLAYER_STATE_SHIELDING = 0x18;
const uint8_t PLAYER_STATE_SHIELDLAG = 0x19;

const uint8_t DIRECTION_LEFT = 0x00;
const uint8_t DIRECTION_RIGHT = 0x01;

const uint8_t HITSTUN_PARRY_NB_FRAMES = 10;
const uint8_t SCREENSHAKE_PARRY_NB_FRAMES = 2;

const uint8_t CONTROLLER_BTN_A = 0b10000000;
const uint8_t CONTROLLER_BTN_B = 0b01000000;
const uint8_t CONTROLLER_BTN_SELECT = 0b00100000;
const uint8_t CONTROLLER_BTN_START = 0b00010000;
const uint8_t CONTROLLER_BTN_UP = 0b00001000;
const uint8_t CONTROLLER_BTN_DOWN = 0b00000100;
const uint8_t CONTROLLER_BTN_LEFT = 0b00000010;
const uint8_t CONTROLLER_BTN_RIGHT = 0b00000001;

const uint8_t CONTROLLER_INPUT_JUMP = CONTROLLER_BTN_UP;
const uint8_t CONTROLLER_INPUT_JAB = CONTROLLER_BTN_A;
const uint8_t CONTROLLER_INPUT_LEFT = CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_RIGHT = CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_JUMP_RIGHT = CONTROLLER_BTN_UP | CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_JUMP_LEFT = CONTROLLER_BTN_UP | CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_ATTACK_LEFT = CONTROLLER_BTN_LEFT | CONTROLLER_BTN_A;
const uint8_t CONTROLLER_INPUT_ATTACK_RIGHT = CONTROLLER_BTN_RIGHT | CONTROLLER_BTN_A;
const uint8_t CONTROLLER_INPUT_ATTACK_UP = CONTROLLER_BTN_UP | CONTROLLER_BTN_A;
const uint8_t CONTROLLER_INPUT_ATTACK_UP_LEFT = CONTROLLER_BTN_UP | CONTROLLER_BTN_A | CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_ATTACK_UP_RIGHT = CONTROLLER_BTN_UP | CONTROLLER_BTN_A | CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_SPECIAL = CONTROLLER_BTN_B;
const uint8_t CONTROLLER_INPUT_SPECIAL_RIGHT = CONTROLLER_BTN_B | CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_SPECIAL_LEFT = CONTROLLER_BTN_B | CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_SPECIAL_DOWN = CONTROLLER_BTN_B | CONTROLLER_BTN_DOWN;
const uint8_t CONTROLLER_INPUT_SPECIAL_UP = CONTROLLER_BTN_B | CONTROLLER_BTN_UP;
const uint8_t CONTROLLER_INPUT_SPECIAL_UP_LEFT = CONTROLLER_BTN_B | CONTROLLER_BTN_UP | CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_SPECIAL_UP_RIGHT = CONTROLLER_BTN_B | CONTROLLER_BTN_UP | CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_TECH = CONTROLLER_BTN_DOWN;
const uint8_t CONTROLLER_INPUT_TECH_RIGHT = CONTROLLER_BTN_DOWN | CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_TECH_LEFT = CONTROLLER_BTN_DOWN | CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_DOWN_TILT = CONTROLLER_BTN_DOWN | CONTROLLER_BTN_A;

const uint8_t SLOWDOWN_TIME = 100;

const int16_t STAGE_BLAST_LEFT = -32;
const int16_t STAGE_BLAST_RIGHT = 288;
const int16_t STAGE_BLAST_TOP = -32;
const int16_t STAGE_BLAST_BOTTOM = 255;

/********************************
*
* Player states routines
*
********************************/

void GameState::set_player_animation(uint8_t player_number, uint16_t animation_address) {
	Player& player = this->getPlayer(player_number);

	this->animation_state_change_animation(player.animation, animation_address);
	player.animation.direction = player.direction;
}

void GameState::aerial_directional_influence(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const AIR_FRICTION_STRENGTH = 7;

	if (player.btns.left_pressed) {
		if (bin_int(0xff00) < player.velocity_h) {
			merge_to_player_velocity(player_number, bin_int(0xff00), player.velocity_v, 0x80);
		}
	}else if (player.btns.right_pressed) {
		if (player.velocity_h < bin_int(0x0100)) {
			merge_to_player_velocity(player_number, bin_int(0x0100), player.velocity_v, 0x80);
		}
	}else {
		merge_to_player_velocity(player_number, bin_int(0x0000), player.velocity_v, AIR_FRICTION_STRENGTH);
	}
}

void GameState::apply_gravity(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	this->merge_to_player_velocity(player_number, player.velocity_h, static_cast<int16_t>(player.gravity) << 8, 0x60);
}

void GameState::check_aerial_inputs(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Refuse to do anything if under hitstun
	if (player.hitstun != 0) {
		return;
	}

	// Do nothing if the only changes concern the left-right buttons
	if (
		player.btns.a_pressed == player.last_frame_btns.a_pressed &&
		player.btns.b_pressed == player.last_frame_btns.b_pressed &&
		player.btns.up_pressed == player.last_frame_btns.up_pressed &&
		player.btns.down_pressed == player.last_frame_btns.down_pressed
	)
	{
		return;
	}

	// Save current direction
	uint8_t original_direction = player.direction;

	// Change player's direction according to input direction
	if (player.btns.left_pressed) {
		player.direction = DIRECTION_LEFT;
	}else if (player.btns.right_pressed) {
		player.direction = DIRECTION_RIGHT;
	}

	// Start the good state according to input

	// Take inpput (inlined, routine "take_input")

	// Mark input
	uint8_t input_marker = 1;

	// Call aerial subroutines, in case of input it will return with input marked
	this->controller_callbacks(
		player_number,
		{
			CONTROLLER_INPUT_SPECIAL_RIGHT,  CONTROLLER_INPUT_SPECIAL_LEFT,     CONTROLLER_INPUT_JUMP,          CONTROLLER_INPUT_JUMP_RIGHT, CONTROLLER_INPUT_JUMP_LEFT,
			CONTROLLER_INPUT_ATTACK_LEFT,    CONTROLLER_INPUT_ATTACK_RIGHT,     CONTROLLER_INPUT_DOWN_TILT,     CONTROLLER_INPUT_ATTACK_UP,  CONTROLLER_INPUT_JAB,
			CONTROLLER_INPUT_SPECIAL,        CONTROLLER_INPUT_SPECIAL_UP,       CONTROLLER_INPUT_SPECIAL_DOWN,  CONTROLLER_INPUT_TECH,       CONTROLLER_INPUT_ATTACK_UP_RIGHT,
			CONTROLLER_INPUT_ATTACK_UP_LEFT, CONTROLLER_INPUT_SPECIAL_UP_RIGHT, CONTROLLER_INPUT_SPECIAL_UP_LEFT
		},
		{
			[&](){this->start_side_special_player(player_number);},
			[&](){this->start_side_special_player(player_number);},
			[&](){this->start_aerial_jumping_player(player_number);},
			[&](){this->start_aerial_jumping_player(player_number);},
			[&](){this->start_aerial_jumping_player(player_number);},

			[&](){this->start_aerial_side_player(player_number);},
			[&](){this->start_aerial_side_player(player_number);},
			[&](){this->start_aerial_down_player(player_number);},
			[&](){this->start_aerial_up_player(player_number);},
			[&](){this->start_aerial_neutral_player(player_number);},

			[&](){this->start_aerial_spe_player(player_number);},
			[&](){this->start_spe_up_player(player_number);},
			[&](){this->start_spe_down_player(player_number);},
			[&](){
				// Fast fall, gravity * 1.5
				uint8_t const fastfall_gravity = DEFAULT_GRAVITY * 2 - DEFAULT_GRAVITY / 2;
				player.gravity = fastfall_gravity;
				player.velocity_v = (static_cast<int16_t>(fastfall_gravity) << 8);
			},
			[&](){this->start_aerial_up_player(player_number);},

			[&](){this->start_aerial_up_player(player_number);},
			[&](){this->start_spe_up_player(player_number);},
			[&](){this->start_spe_up_player(player_number);},

			[&](){input_marker = 0;},
		}
	);

	// Take input (end of inlined "take_input")

	// Restore player's direction if there was no input, else discard saved direction
	if (input_marker == 0) {
		player.direction = original_direction;
	}
}

void GameState::controller_callbacks(uint8_t player_number, std::vector<uint8_t> gamepad_state, std::vector<std::function<void()>> callbacks) {
	assert(callbacks.size() == gamepad_state.size() + 1);
	Player& player = this->getPlayer(player_number);

	std::size_t i = 0;
	for (; i < gamepad_state.size(); ++i) {
		if (gamepad_state[i] == player.btns.getRaw()) {
			break;
		}
	}
	callbacks[i]();
}

void GameState::start_aerial_jumping_player(uint8_t player_number) {
	dbg("start_aerial_jumping_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);
	uint8_t const MAX_NUM_AERIAL_JUMPS = 1;

	// Deny to start jump state if the player used all it's jumps
	if (player.num_aerial_jumps == MAX_NUM_AERIAL_JUMPS) {
		return;
	}
	++player.num_aerial_jumps;

	// Trick - aerial_jumping set the state to jumping. It is the same state with
	// the starting conditions as the only differences
	player.state = PLAYER_STATE_JUMPING;
	player.state_clock = 0;
	player.velocity_v = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_aerial_jumping").address);
}

void GameState::start_aerial_down_player(uint8_t player_number) {
	dbg("start_aerial_down_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set State
	player.state = PLAYER_STATE_AERIAL_DOWN;

	// Reset clock
	player.state_clock = 0;

	// Cancel fastfall
	if (player.gravity != DEFAULT_GRAVITY) {
		player.gravity = DEFAULT_GRAVITY;
		player.velocity_v = (static_cast<int16_t>(DEFAULT_GRAVITY) << 8);
	}

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_aerial_down").address);
}

void GameState::aerial_down_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_AERIAL_DOWN_DURATION = 14;

	this->apply_gravity(player_number);

	++player.state_clock;
	if (player.state_clock == STATE_SINBAD_AERIAL_DOWN_DURATION) {
		this->start_falling_player(player_number);
	}
}

void GameState::start_aerial_neutral_player(uint8_t player_number) {
	dbg("start_aerial_neutral_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_AERIAL_NEUTRAL;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_aerial_neutral").address);
}

void GameState::aerial_neutral_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_AERIAL_NEUTRAL_DURATION = 12;

	this->apply_gravity(player_number);

	++player.state_clock;
	if (player.state_clock == STATE_SINBAD_AERIAL_NEUTRAL_DURATION) {
		this->start_falling_player(player_number);
	}
}

void GameState::start_aerial_side_player(uint8_t player_number) {
	dbg("start_aerial_side_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_AERIAL_SIDE;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_aerial_side").address);
}

void GameState::aerial_side_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_AERIAL_SIDE_DURATION = 25;

	this->apply_gravity(player_number);

	++player.state_clock;
	if (player.state_clock == STATE_SINBAD_AERIAL_SIDE_DURATION) {
		this->start_falling_player(player_number);
	}
}

void GameState::start_aerial_spe_player(uint8_t player_number) {
	dbg("start_aerial_spe_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_AERIAL_SPE_NEUTRAL;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_aerial_spe").address);
}

void GameState::aerial_spe_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	this->aerial_directional_influence(player_number);

	// Never move upward in this state
	if (player.velocity_v < 0) {
		player.velocity_v = 0;
	}

	// Special fall speed - particularily slow
	this->merge_to_player_velocity(player_number, player.velocity_h, 0x0100, 0x10);
}

void GameState::start_aerial_up_player(uint8_t player_number) {
	dbg("start_aerial_up_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_AERIAL_UP;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_aerial_up").address);
}

void GameState::aerial_up_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_AERIAL_UP_DURATION = 32;

	this->apply_gravity(player_number);

	++player.state_clock;
	if (player.state_clock == STATE_SINBAD_AERIAL_UP_DURATION) {
		this->start_falling_player(player_number);
	}
}

void GameState::start_crashing_player(uint8_t player_number) {
	dbg("start_crashing_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_CRASHING;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_crashing").address);
}

void GameState::crashing_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_CRASHING_DURATION = 30;

	// Tick clock
	++player.state_clock;

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0x80);

	// After move's time is out, go to standing state
	if (player.state_clock == STATE_SINBAD_CRASHING_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::start_down_tilt_player(uint8_t player_number) {
	dbg("start_down_tilt_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_DOWN_TILT;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_down_tilt").address);
}

void GameState::down_tilt_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_DOWNTILT_DURATION = 21;

	// Tick clock
	++player.state_clock;

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0x80);

	// After move's time is out, go to standing state
	if (player.state_clock == STATE_SINBAD_DOWNTILT_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::start_falling_player(uint8_t player_number) {
	dbg("start_falling_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_FALLING;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_falling").address);
}

void GameState::falling_player(uint8_t player_number) {
	this->aerial_directional_influence(player_number);
	this->apply_gravity(player_number);
}

void GameState::start_helpless_player(uint8_t player_number) {
	dbg("start_helpless_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_HELPLESS;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_helpless").address);
}

void GameState::helpless_player(uint8_t player_number) {
	this->falling_player(player_number);
}

void GameState::start_innexistant_player(uint8_t player_number) {
	dbg("start_innexistant_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set state
	player.state = PLAYER_STATE_INNEXISTANT;

	// Set to a fixed place
	player.x = 0;
	player.y = 0;
	player.velocity_h = 0;
	player.velocity_v = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_invisible").address);
}

void GameState::innexistant_player(uint8_t /*player_number*/) {
}

void GameState::start_jabbing_player(uint8_t player_number) {
	dbg("start_jabbing_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_JABBING;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_jab").address);
}

void GameState::jabbing_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_JAB_DURATION = 14;

	// Tick clock
	++player.state_clock;

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0xff);

	// At the end of the move, return to standing state
	if (player.state_clock == STATE_SINBAD_JAB_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::jabbing_player_input(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Allow to cut the animation for another jab
	if (player.btns.getRaw() == CONTROLLER_INPUT_JAB) {
		this->start_jabbing_player(player_number);
	}
}

void GameState::start_jumping_player(uint8_t player_number) {
	dbg("start_jumping_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_JUMPING;
	player.state_field1 = 0;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_jumping").address);
}

uint8_t const STATE_SINBAD_JUMP_PREPARATION_END = 4;
void GameState::jumping_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Tick clock
	++player.state_clock;

	// Wait for the preparation to end to begin to jump
	if (player.state_clock < STATE_SINBAD_JUMP_PREPARATION_END) {
		return;
	}
	if (player.state_clock == STATE_SINBAD_JUMP_PREPARATION_END) {
		// Put initial jumping velocity
		player.velocity_v = bin_int(0xfac0);
		return;
	}

	// Check if the top of the jump is reached
	if (msb(player.velocity_v) >= 0b10000000) {
		// The top is not reached, stay in jumping state but apply gravity and directional influence
		this->falling_player(player_number); // Hack - We just use falling_player which do exactly what we want

		// Check if it is time to stop a short-hop
		if (msb(player.velocity_v) >= 0xfd) {
			// If the jump button is no more pressed mid jump, convert the jump to a short-hop
			if (player.state_field1 != 0) {
				return;
			}
			++player.state_field1;

			if ((player.btns.getRaw() & CONTROLLER_INPUT_JUMP) != 0) {
				return;
			}

			player.velocity_v = bin_int(0xfefe);
		}
	}else {
		// The top is reached, return to falling
		this->start_falling_player(player_number);
	}
}

void GameState::jumping_player_input(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// The jump is cancellable by grounded movements during preparation
	// and by aerial movements after that
	if (player.num_aerial_jumps != 0 || player.state_clock >= STATE_SINBAD_JUMP_PREPARATION_END) {
		// not_grounded:
		this->check_aerial_inputs(player_number);
	}else {
		// grounded:
		this->controller_callbacks(
			player_number,
			{
				CONTROLLER_INPUT_ATTACK_UP, CONTROLLER_INPUT_SPECIAL_UP,
			},
			{
				[&](){this->start_up_tilt_player(player_number);},
				[&](){this->start_spe_up_player(player_number);},

				[&](){},
			}
		);
	}
}

void GameState::start_landing_player(uint8_t player_number) {
	dbg("start_landing_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set state
	player.state = PLAYER_STATE_LANDING;

	// Reset clock
	player.state_clock = 0;

	// Cap initial velocity
	if (std::abs(player.velocity_h) >= 0x0300) {
		if (player.velocity_h >= 0) {
			player.velocity_h = bin_int(0x0200);
		}else {
			player.velocity_h = bin_int(0xfe00);
		}
	}

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_landing").address);
}

void GameState::landing_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	const uint8_t STATE_SINBAD_LANDING_DURATION = 6;

	// Tick clock
	++player.state_clock;

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0x40);

	// After move's time is out, go to standing state
	if (player.state_clock == STATE_SINBAD_LANDING_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::start_respawn_player(uint8_t player_number) {
	dbg("start_respawn_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);
	const uint8_t RESPAWN_PLAYER_MAX_DURATION = 250;

	// Set the player's state
	player.state = PLAYER_STATE_RESPAWN;

	// Place player to the respawn spot
	Stage::Spawn const& spawn = this->mStage.respawn;
	player.x = spawn.x;
	player.y = spawn.y;
	player.velocity_h = 0;
	player.velocity_v = 0;
	player.damages = 0;

	// Initialise state's timer
	player.state_field1 = RESPAWN_PLAYER_MAX_DURATION;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_respawn").address);
}

void GameState::respawn_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Check for timeout
	--player.state_field1;
	if(player.state_field1 == 0) {
		this->start_falling_player(player_number);
	}
}

void GameState::respawn_player_input(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Avoid doing anything until controller has returned to neutral since after
	// death the player can release buttons without expecting to take action
	if (player.last_frame_btns.getRaw() != 0) {
		return;
	}

	// Call check_aerial_inputs
	//  If it does not change the player state, go to falling state
	//  so that any button press makes the player falls from revival
	//  platform
	this->check_aerial_inputs(player_number);
	if (player.state == PLAYER_STATE_RESPAWN) {
		this->start_falling_player(player_number);
	}
}

void GameState::start_running_player(uint8_t player_number) {
	dbg("start_running_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_RUNNING;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_run").address);

	// Set initial velocity
	if (player.direction == DIRECTION_LEFT) {
		player.velocity_h = -1 * 0x0100;
	}else {
		player.velocity_h = 0x0100;
	}
}

void GameState::running_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	if (player.direction != DIRECTION_LEFT) {
		this->merge_to_player_velocity(player_number, 0x0200, 0, 0x40);
	}else {
		this->merge_to_player_velocity(player_number, -0x0200, 0, 0x40);
	}
}

void GameState::running_player_input(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// If in hitstun, stop running
	if (player.hitstun != 0) {
		this->start_standing_player(player_number);
		return;
	}

	this->controller_callbacks(
		player_number,
		{
			CONTROLLER_INPUT_LEFT,             CONTROLLER_INPUT_RIGHT,          CONTROLLER_INPUT_JUMP,            CONTROLLER_INPUT_JUMP_RIGHT,    CONTROLLER_INPUT_JUMP_LEFT,
			CONTROLLER_INPUT_ATTACK_LEFT,      CONTROLLER_INPUT_ATTACK_RIGHT,   CONTROLLER_INPUT_SPECIAL,         CONTROLLER_INPUT_SPECIAL_RIGHT, CONTROLLER_INPUT_SPECIAL_LEFT,
			CONTROLLER_INPUT_SPECIAL_UP,       CONTROLLER_INPUT_SPECIAL_DOWN,   CONTROLLER_INPUT_TECH_LEFT,       CONTROLLER_INPUT_TECH_RIGHT,    CONTROLLER_INPUT_SPECIAL_UP_LEFT,
			CONTROLLER_INPUT_SPECIAL_UP_RIGHT, CONTROLLER_INPUT_ATTACK_UP_LEFT, CONTROLLER_INPUT_ATTACK_UP_RIGHT
		},
		{
			[&](){
				if(player.direction != DIRECTION_LEFT) {
					player.direction = DIRECTION_LEFT;
					this->start_running_player(player_number);
				}
			},
			[&](){
				if(player.direction != DIRECTION_RIGHT) {
					player.direction = DIRECTION_RIGHT;
					this->start_running_player(player_number);
				}
			},
			[&](){this->start_jumping_player(player_number);},
			[&](){this->start_jumping_player(player_number);},
			[&](){this->start_jumping_player(player_number);},

			[&](){
				player.direction = DIRECTION_LEFT;
				this->start_side_tilt_player(player_number);
			},
			[&](){
				player.direction = DIRECTION_RIGHT;
				this->start_side_tilt_player(player_number);
			},
			[&](){this->start_special_player(player_number);},
			[&](){this->start_side_special_player(player_number);},
			[&](){this->start_side_special_player(player_number);},

			[&](){this->start_spe_up_player(player_number);},
			[&](){this->start_spe_down_player(player_number);},
			[&](){this->start_shielding_player(player_number);},
			[&](){this->start_shielding_player(player_number);},
			[&](){this->start_spe_up_player(player_number);},

			[&](){this->start_spe_up_player(player_number);},
			[&](){this->start_up_tilt_player(player_number);},
			[&](){this->start_up_tilt_player(player_number);},

			[&](){this->start_standing_player(player_number);},
		}
	);
}

void GameState::start_shielding_player(uint8_t player_number) {
	dbg("start_shielding_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set state
	player.state = PLAYER_STATE_SHIELDING;

	// Reset clock
	player.state_clock = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_shielding_full").address);

	// Cancel momentum
	player.velocity_h = 0;

	// Set shield as full life
	player.state_field1 = 2;
}

void GameState::shielding_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Tick clock
	if (player.state_clock < PLAYER_DOWN_TAP_MAX_DURATION) {
		++player.state_clock;
	}
}

void GameState::shielding_player_input(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Do the same as standing player except when
	//  all buttons are released - start shieldlag (or falling if on smooth platform and it was a short-tap)
	//  down is pressed - avoid to reset the shield state (and hit counter)
	if (player.btns.getRaw() == 0) {
		std::pair<bool, Stage::Platform*> on_ground = this->check_on_ground(player_number);
		if (player.state_clock <= PLAYER_DOWN_TAP_MAX_DURATION  && on_ground.first && on_ground.second->is_smooth) {
			player.y -= 0x000300;
			this->start_falling_player(player_number);
		}else {
			this->start_shieldlag_player(player_number);
		}
	}else if (player.btns.getRaw() != CONTROLLER_INPUT_TECH) {
		this->standing_player_input(player_number);
	}
}

void GameState::shielding_player_hurt(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	Player& striker_player = this->getPlayer(player_number == 0 ? 1 : 0);

	// Reduce shield's life
	--player.state_field1;

	// Select what to do according to shield's life
	switch (player.state_field1) {
		// limit_shield
		case 0: {
			this->set_player_animation(player_number, this->findAnimation("anim_sinbad_shielding_limit").address);
			break;
		}

		// partial_shield
		case 1: {
			this->set_player_animation(player_number, this->findAnimation("anim_sinbad_shielding_partial").address);
			break;
		}

		default: {
			// Break the shield, derived from normal hurt with:
			//  Knockback * 2
			//  Screen shaking * 4
			this->hurt_player(player_number);
			player.velocity_h *= 2;
			player.velocity_v *= 2;
			player.hitstun *= 2;
			mScreenShakeCounter *= 4;
			break;
		}
	};

	// Disable the hitbox to avoid multi-hits
	striker_player.hitbox.enabled = false;
}

void GameState::start_shieldlag_player(uint8_t player_number) {
	dbg("start_shieldlag_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set the player's state
	player.state = PLAYER_STATE_SHIELDLAG;

	// Reset clock
	player.state_clock = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_shielding_remove").address);
}

void GameState::shieldlag_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_SHIELDLAG_DURATION = 8;

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0x80);

	// After move's time is out, go to standing state
	++player.state_clock;
	if (player.state_clock == STATE_SINBAD_SHIELDLAG_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::start_side_special_player(uint8_t player_number) {
	dbg("start_side_special_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set state
	player.state = PLAYER_STATE_SIDE_SPECIAL;

	// Set initial velocity
	player.velocity_h = 0;
	player.velocity_v = 0;

	// Reset clock
	player.state_clock = 0;

	// Set substate to "charging"
	player.state_field1 = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_side_special_charge").address);
}

void GameState::side_special_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_SIDE_SPECIAL_PREPARATION_DURATION = 120;

	// Tick clock
	++player.state_clock;

	// Move if the substate is set to moving
	if (player.state_field1 != 0) {
		goto moving;
	}

	// Check if there is reason to begin to move
	if (player.state_clock >= STATE_SINBAD_SIDE_SPECIAL_PREPARATION_DURATION) {
		goto start_moving;
	}
	if (player.btns.getRaw() == CONTROLLER_INPUT_SPECIAL_RIGHT) {
		goto not_moving;
	}
	if (player.btns.getRaw() != CONTROLLER_INPUT_SPECIAL_LEFT) {
		goto start_moving;
	}

	not_moving: {
		return;
	}

	start_moving: {
		// Set substate to "moving"
		player.state_field1 = 1;

		// Store fly duration (fly_duration = 5 + charge_duration / 8)
		player.state_field2 = 5 + (player.state_clock >> 3);

		// Set the movement animation
		this->set_player_animation(player_number, this->findAnimation("anim_sinbad_side_special_jump").address);

		// Reset clock
		player.state_clock = 0;

		// Falltrhough to moving
	}

	moving: {
		// Set vertical velocity (fixed)
		player.velocity_v = bin_int(0xff80);

		// Set horizontal velocity (depending on direction)
		if (player.direction == DIRECTION_LEFT) {
			player.velocity_h = bin_int(0xfc00);
		}else {
			player.velocity_h = 0x0400;
		}

		// After move's time is out, go to helpless state
		if (player.state_clock == player.state_field2) {
			this->start_helpless_player(player_number);
		}
	}
}

void GameState::start_side_tilt_player(uint8_t player_number) {
	dbg("start_side_tilt_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_side_tilt").address);

	// Set the player's state
	player.state = PLAYER_STATE_SIDE_TILT;

	// Initialize the clock
	player.state_clock = 0;

	// Set initial velocity
	player.velocity_v = bin_int(0xfd80);
	if (player.direction != DIRECTION_LEFT) {
		player.velocity_h = 0x0480;
	}else {
		player.velocity_h = bin_int(0xfb80);
	}
}

void GameState::side_tilt_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_SIDE_TILT_DURATION = 21;

	++player.state_clock;

	if (player.state_clock == STATE_SINBAD_SIDE_TILT_DURATION) {
		this->start_standing_player(player_number);
	}else {
		this->merge_to_player_velocity(player_number, 0, 0x0100, 0x80);
	}
}

void GameState::start_standing_player(uint8_t player_number) {
	dbg("start_standing_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_STANDING;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_idle").address);
}

void GameState::standing_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	this->merge_to_player_velocity(player_number, 0, 0, 255);

	// Force the handling of directional controls
	if (player.btns.getRaw() == CONTROLLER_INPUT_LEFT) {
		this->standing_player_input_left(player_number);
	}else if (player.btns.getRaw() == CONTROLLER_INPUT_RIGHT) {
		this->standing_player_input_right(player_number);
	}
}

void GameState::standing_player_input_left(uint8_t player_number) {
	this->getPlayer(player_number).direction = DIRECTION_LEFT;
	this->start_running_player(player_number);
}

void GameState::standing_player_input_right(uint8_t player_number) {
	this->getPlayer(player_number).direction = DIRECTION_RIGHT;
	this->start_running_player(player_number);
}

void GameState::standing_player_input(uint8_t player_number) {
	this->controller_callbacks(
		player_number,
		{
			CONTROLLER_INPUT_LEFT,           CONTROLLER_INPUT_RIGHT,          CONTROLLER_INPUT_JUMP,         CONTROLLER_INPUT_JUMP_RIGHT,      CONTROLLER_INPUT_JUMP_LEFT,
			CONTROLLER_INPUT_JAB,            CONTROLLER_INPUT_ATTACK_LEFT,    CONTROLLER_INPUT_ATTACK_RIGHT, CONTROLLER_INPUT_SPECIAL,         CONTROLLER_INPUT_SPECIAL_RIGHT,
			CONTROLLER_INPUT_SPECIAL_LEFT,   CONTROLLER_INPUT_DOWN_TILT,      CONTROLLER_INPUT_SPECIAL_UP,   CONTROLLER_INPUT_SPECIAL_DOWN,    CONTROLLER_INPUT_ATTACK_UP,
			CONTROLLER_INPUT_TECH,           CONTROLLER_INPUT_TECH_LEFT,      CONTROLLER_INPUT_TECH_RIGHT,   CONTROLLER_INPUT_SPECIAL_UP_LEFT, CONTROLLER_INPUT_SPECIAL_UP_RIGHT,
			CONTROLLER_INPUT_ATTACK_UP_LEFT, CONTROLLER_INPUT_ATTACK_UP_RIGHT
		},
		{
			[&](){this->standing_player_input_left(player_number);},
			[&](){this->standing_player_input_right(player_number);},
			[&](){this->start_jumping_player(player_number);},
			[&](){
				this->getPlayer(player_number).direction = DIRECTION_RIGHT;
				this->start_jumping_player(player_number);
			},
			[&](){
				this->getPlayer(player_number).direction = DIRECTION_LEFT;
				this->start_jumping_player(player_number);
			},

			[&](){this->start_jabbing_player(player_number);},
			[&](){
				this->getPlayer(player_number).direction = DIRECTION_LEFT;
				this->start_side_tilt_player(player_number);
			},
			[&](){
				this->getPlayer(player_number).direction = DIRECTION_RIGHT;
				this->start_side_tilt_player(player_number);
			},
			[&](){this->start_special_player(player_number);},
			[&](){
				this->getPlayer(player_number).direction = DIRECTION_RIGHT;
				this->start_side_special_player(player_number);
			},

			[&](){
				this->getPlayer(player_number).direction = DIRECTION_LEFT;
				this->start_side_special_player(player_number);
			},
			[&](){this->start_down_tilt_player(player_number);},
			[&](){this->start_spe_up_player(player_number);},
			[&](){this->start_spe_down_player(player_number);},
			[&](){this->start_up_tilt_player(player_number);},

			[&](){this->start_shielding_player(player_number);},
			[&](){this->start_shielding_player(player_number);},
			[&](){this->start_shielding_player(player_number);},
			[&](){this->start_spe_up_player(player_number);},
			[&](){this->start_spe_up_player(player_number);},

			[&](){this->start_up_tilt_player(player_number);},
			[&](){this->start_up_tilt_player(player_number);},

			[](){},
		}
	);
}

void GameState::start_spawn_player(uint8_t player_number) {
	dbg("start_spawn_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_SPAWN;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_spawn").address);
};

void GameState::spawn_player(uint8_t player_number) {
	uint8_t const STATE_SINBAD_SPAWN_DURATION = 50;
	Player& player = this->getPlayer(player_number);

	++player.state_clock;
	if(player.state_clock == STATE_SINBAD_SPAWN_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::start_spe_down_player(uint8_t player_number) {
	dbg("start_spe_down_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set state
	player.state = PLAYER_STATE_SPE_DOWN;

	// Reset clock
	player.state_clock = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_spe_down").address);
}

void GameState::spe_down_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_SPE_DOWN_DURATION = 21;

	this->apply_gravity(player_number);

	// Wait for move's timeout
	++player.state_clock;
	if (player.state_clock == STATE_SINBAD_SPE_DOWN_DURATION) {
		// Return to falling or standing
		if (! this->check_on_ground(player_number).first) {
			this->start_falling_player(player_number);
		}else {
			this->start_standing_player(player_number);
		}
	}
}

void GameState::start_spe_up_player(uint8_t player_number) {
	dbg("start_spe_up_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set state
	player.state = PLAYER_STATE_SPE_UP;

	// Set initial velocity
	player.velocity_h = 0;
	player.velocity_v = 0;

	// Reset clock
	player.state_clock = 0;

	// Set substate to "charging"
	player.state_field1 = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_spe_up_prepare").address);
}

void GameState::spe_up_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_SPE_UP_PREPARATION_DURATION = 3;

	// Tick clock
	++player.state_clock;

	// Move if the substate is set to moving
	if (player.state_field1 != 0) {
		goto moving;
	}

	// Check if there is reason to begin to move
	if (player.state_clock >= STATE_SINBAD_SPE_UP_PREPARATION_DURATION) {
		goto start_moving;
	}

	// not_moving
	return;

	start_moving: {
		// Set substate to "moving"
		player.state_field1 = 1;

		// Set jumping velocity
		player.velocity_v = bin_int(0xfa00);

		// Set the movement animation
		this->set_player_animation(player_number, this->findAnimation("anim_sinbad_spe_up_jump").address);

		// Fallthrough moving
	}

	moving: {
		// Return to falling when the top is reached
		if (msb(player.velocity_v) == 0) {
			goto top_reached;
		}

		// The top is not reached, stay in special upward state but apply gravity and directional influence
		this->aerial_directional_influence(player_number);
		this->apply_gravity(player_number);
		return;
	}

	top_reached: {
		this->start_helpless_player(player_number);
		return;
	}
}

void GameState::start_special_player(uint8_t player_number) {
	dbg("start_special_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_special").address);

	// Set the player's state
	player.state = PLAYER_STATE_SPECIAL;

	// Place the player above ground
	player.y -= 0x1000; //TODO check if it is computed correctly in ASM since player.y have one more byte than before
}

void GameState::special_player(uint8_t /*player_number*/) {
}

void GameState::special_player_input(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	if (player.btns.getRaw() != CONTROLLER_INPUT_SPECIAL) {
		this->start_standing_player(player_number);
	}
}

uint8_t const TECH_MAX_FRAMES_BEFORE_COLLISION = 10;
uint8_t const TECH_NB_FORBIDDEN_FRAMES = 60;
void GameState::start_thrown_player(uint8_t player_number) {
	dbg("start_thrown_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	// Set player's state
	player.state = PLAYER_STATE_THROWN;

	// Initialize tech counter
	player.state_field1 = 0;

	// Set animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_thrown").address);
	if (player.velocity_h >= 0) {
		player.animation.direction = DIRECTION_RIGHT;
	}else {
		player.animation.direction = DIRECTION_LEFT;
	}
}

void GameState::thrown_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Update velocity
	if (player.hitstun == 0) {
		this->aerial_directional_influence(player_number);
	}
	this->apply_gravity(player_number);

	// Decrement tech counter (to zero minimum)
	if (player.state_field1 != 0) {
		--player.state_field1;
	}
}

void GameState::thrown_player_input(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	this->controller_callbacks(
		player_number,
		{
			CONTROLLER_INPUT_TECH, CONTROLLER_INPUT_TECH_RIGHT, CONTROLLER_INPUT_TECH_LEFT,
		},
		{
			[&](){
				player.state_field2 = 0;
				if (player.state_field1 == 0) {
					player.state_field1 = TECH_MAX_FRAMES_BEFORE_COLLISION + TECH_NB_FORBIDDEN_FRAMES;
					this->check_aerial_inputs(player_number);
				}
			},
			[&](){
				player.state_field2 = 1;
				if (player.state_field1 == 0) {
					player.state_field1 = TECH_MAX_FRAMES_BEFORE_COLLISION + TECH_NB_FORBIDDEN_FRAMES;
					this->check_aerial_inputs(player_number);
				}
			},
			[&](){
				player.state_field2 = 2;
				if (player.state_field1 == 0) {
					player.state_field1 = TECH_MAX_FRAMES_BEFORE_COLLISION + TECH_NB_FORBIDDEN_FRAMES;
					this->check_aerial_inputs(player_number);
				}
			},

			[&](){this->check_aerial_inputs(player_number);},
		}
	);
}

void GameState::thrown_player_on_ground(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// If the tech counter is bellow the threshold, just crash
	if (TECH_NB_FORBIDDEN_FRAMES >= player.state_field1) {
		this->start_crashing_player(player_number);
	}else {
		// A valid tech was entered, land with momentum depending on tech's direction
		this->start_landing_player(player_number);
		if (player.state_field2 == 0) {
			player.velocity_h = 0;
		}else if (player.state_field2 == 1) {
			player.velocity_h = 0x0400;
		}else {
			player.velocity_h = bin_int(0xfc00);
		}
	}
}

void GameState::start_up_tilt_player(uint8_t player_number) {
	dbg("start_up_tilt_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_UP_TILT;
	player.state_clock = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_up_tilt").address);
}

void GameState::up_tilt_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_UPTILT_DURATION = 20;

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0x80);

	// After move's time is out, go to standing state
	++player.state_clock;
	if (player.state_clock == STATE_SINBAD_UPTILT_DURATION) {
		this->start_standing_player(player_number);
	}
}

/********************************
*
* GameState implementation
*
********************************/

GameState::GameState(Stage stage)
: mStage(stage)
{
	// Setup data
	mPlayerTickRoutines = {
		&GameState::thrown_player, &GameState::respawn_player, &GameState::innexistant_player, &GameState::spawn_player, &GameState::standing_player,
		&GameState::running_player, &GameState::falling_player, &GameState::jumping_player, &GameState::jabbing_player, &GameState::side_tilt_player,
		&GameState::special_player, &GameState::side_special_player, &GameState::helpless_player, &GameState::landing_player, &GameState::crashing_player,
		&GameState::down_tilt_player, &GameState::aerial_side_player, &GameState::aerial_down_player, &GameState::aerial_up_player, &GameState::aerial_neutral_player,
		&GameState::aerial_spe_player, &GameState::spe_up_player, &GameState::spe_down_player, &GameState::up_tilt_player, &GameState::shielding_player,
		&GameState::shieldlag_player,
	};
	mPlayerOffgroundRoutines = {
		&GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::start_falling_player,
		&GameState::start_falling_player, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::start_falling_player, &GameState::dummy_routine,
		&GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::start_helpless_player, &GameState::start_helpless_player,
		&GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine,
		&GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::start_helpless_player,
		&GameState::start_helpless_player,
	};
	mPlayerOngroundRoutines = {
		&GameState::thrown_player_on_ground, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine,
		&GameState::dummy_routine, &GameState::start_landing_player, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine,
		&GameState::dummy_routine, &GameState::dummy_routine, &GameState::start_landing_player, &GameState::dummy_routine, &GameState::dummy_routine,
		&GameState::dummy_routine, &GameState::start_landing_player, &GameState::start_landing_player, &GameState::start_landing_player, &GameState::start_landing_player,
		&GameState::start_landing_player, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine,
		&GameState::dummy_routine,
	};
	mPlayerInputRoutines = {
		&GameState::thrown_player_input, &GameState::respawn_player_input, &GameState::dummy_routine, &GameState::keep_input_dirty, &GameState::standing_player_input,
		&GameState::running_player_input, &GameState::check_aerial_inputs, &GameState::jumping_player_input, &GameState::jabbing_player_input, &GameState::keep_input_dirty,
		&GameState::special_player_input, &GameState::dummy_routine, &GameState::keep_input_dirty, &GameState::keep_input_dirty, &GameState::keep_input_dirty,
		&GameState::keep_input_dirty, &GameState::keep_input_dirty, &GameState::keep_input_dirty, &GameState::keep_input_dirty, &GameState::keep_input_dirty,
		&GameState::dummy_routine, &GameState::dummy_routine, &GameState::keep_input_dirty, &GameState::keep_input_dirty, &GameState::shielding_player_input,
		&GameState::keep_input_dirty,
	};
	mPlayerOnhurtRoutines = {
		&GameState::hurt_player, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::dummy_routine, &GameState::hurt_player,
		&GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player,
		&GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player,
		&GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player,
		&GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player, &GameState::shielding_player_hurt,
		&GameState::hurt_player,
	};
	mAnimations = {
#include "GameState.animations.inc.cpp"
	};

	// Ensure game state is zero
	::memset((void*)&mPlayerA, 0, sizeof(mPlayerA));
	::memset((void*)&mPlayerB, 0, sizeof(mPlayerB));
	mScreenShakeCounter = 0;
	mSlowDownCounter = 0;
	mGameoverWinner = 0;

	// Call stage initialization routine
	stage.init();

	// Setup logical game state to the game startup configuration
	mPlayerB.direction = static_cast<uint8_t>(Direction::LEFT);
	mPlayerA.direction = static_cast<uint8_t>(Direction::RIGHT);
	mPlayerA.hitbox.enabled = false;
	mPlayerB.hitbox.enabled = false;

	mPlayerA.x = stage.spawn_player_a.x;
	mPlayerA.y = stage.spawn_player_a.y;
	mPlayerB.x = stage.spawn_player_b.x;
	mPlayerB.y = stage.spawn_player_b.y;

	mPlayerA.gravity = DEFAULT_GRAVITY;
	mPlayerB.gravity = DEFAULT_GRAVITY;
	mPlayerA.stocks = INITIAL_STOCKS;
	mPlayerB.stocks = INITIAL_STOCKS;

	this->animation_init_state(mPlayerA.animation, 0); // voluntarily let garbage in data vector, it will be overriden by initializing player's state
	mPlayerA.animation.first_sprite_num = 0x00;
	mPlayerA.animation.last_sprite_num = 0x0f;
	this->animation_init_state(mPlayerB.animation, 0);
	mPlayerB.animation.first_sprite_num = 0x10;
	mPlayerB.animation.last_sprite_num = 0x1f;

	this->start_spawn_player(0);
	this->start_spawn_player(1);

	// Move sprites according to the initial state
	this->update_sprites();
}

bool GameState::tick() {
	dbg("===== tick =====");

	// Emulate fetch_controllers from main loop
	mPlayerA.last_frame_btns = mPlayerA.btns;
	mPlayerB.last_frame_btns = mPlayerB.btns;
	mPlayerA.btns = mControllerA;
	mPlayerB.btns = mControllerB;

	// Shake screen and do nothing until shaking is over
	if (mScreenShakeCounter > 0) {
		--mScreenShakeCounter;
		return true;
	}

	// Do nothing during a slowdown skipped frame
	if (mSlowDownCounter > 0) {
		--mSlowDownCounter;
		if (mSlowDownCounter == 0) {
			return false;
		}
		if ((mScreenShakeCounter & 0b00000011) != 0) {
			return true;
		}
	}

	// Call stage's logic
	mStage.tick();

	// Update game state (inlined, routine "update_players")

	// Decrement hitstun counters
	if (mPlayerA.hitstun > 0) {
		--mPlayerA.hitstun;
	}
	if (mPlayerB.hitstun > 0) {
		--mPlayerB.hitstun;
	}

	// Check hitbox collisions
	for (uint8_t player_num = 0; player_num < 2; ++player_num) {
		this->check_player_hit(player_num);
	}

	// Update both players
	for (uint8_t player_num = 0; player_num < 2; ++player_num) {
		// Call the state update routine
		mPlayerTickRoutines.at(this->getPlayer(player_num).state)(this, player_num);

		// Call the state input routine if input changed
		if (this->getPlayer(player_num).btns.getRaw() != this->getPlayer(player_num).last_frame_btns.getRaw()) {
			mPlayerInputRoutines.at(this->getPlayer(player_num).state)(this, player_num);
		}

		// Call generic update routines
		Point<uint8_t> initial_position = {
			.x = static_cast<uint8_t>(this->getPlayer(player_num).x >> 8),
			.y = static_cast<uint8_t>(this->getPlayer(player_num).y >> 8),
		};
		this->move_player(player_num);
		this->check_player_position(player_num, initial_position);
	}

	// Update game state (end of inlined "update_players")

	this->update_sprites();

	return true;
}

uint8_t GameState::winner() {
	return mGameoverWinner;
}

void GameState::setControllerAState(ControllerState state) {
	dbg("setControllerAState("<< state.getStr() <<")");
	mControllerA = state;
}

void GameState::setControllerBState(ControllerState state) {
	dbg("setControllerBState("<< state.getStr() <<")");
	mControllerB = state;
}

GameState::Player& GameState::getPlayer(uint8_t player_number) {
	assert(player_number < 2);

	if (player_number == 0) {
		return mPlayerA;
	}else {
		return mPlayerB;
	}
}

GameState::Animation& GameState::findAnimation(uint16_t address) {
	for (Animation& anim : mAnimations) {
		if (anim.address == address) {
			return anim;
		}
	}

	throw std::runtime_error("animation not found by address");
}

GameState::Animation& GameState::findAnimation(std::string const& name) {
	for (Animation& anim : mAnimations) {
		if (anim.name == name) {
			return anim;
		}
	}

	throw std::runtime_error(std::string("animation not found by name: '") + name + "'");
}

void GameState::update_sprites() {
	// Player A
	mPlayerA.animation.x = compose_int16(byte1(mPlayerA.x), byte2(mPlayerA.x));
	mPlayerA.animation.y = compose_int16(byte1(mPlayerA.y), byte2(mPlayerA.y));
	this->animation_draw(0, mPlayerA.animation, 0, 0);
	this->animation_tick(mPlayerA.animation);

	// Player B
	mPlayerB.animation.x = compose_int16(byte1(mPlayerB.x), byte2(mPlayerB.x));
	mPlayerB.animation.y = compose_int16(byte1(mPlayerB.y), byte2(mPlayerB.y));
	this->animation_draw(1, mPlayerB.animation, 0, 0);
	this->animation_tick(mPlayerB.animation);
}

void GameState::check_player_hit(uint8_t player_number) {
	uint8_t opponent_number = player_number ^ 1;
	Player& current_player = this->getPlayer(player_number);
	Player& opponent_player = this->getPlayer(opponent_number);

	// Check that player's hitbox is enabled
	if (! current_player.hitbox.enabled) {
		return;
	}

	// If opponent's hitbox is enabled, check hitbox on hitbox collisions
	if (opponent_player.hitbox.enabled) {
		// Check collisions between hitbox and hitbox
		if (this->boxes_overlap(current_player.hitbox.position, opponent_player.hitbox.position)) {
			// Set opponent in thrown mode without momentum
			opponent_player.hitstun = HITSTUN_PARRY_NB_FRAMES;
			opponent_player.velocity_v = 0;
			opponent_player.velocity_h = 0;
			this->start_thrown_player(opponent_number);
			mScreenShakeCounter = SCREENSHAKE_PARRY_NB_FRAMES;
			return;
		}
	}

	// Check collisions between hitbox and hurtbox
	if (this->boxes_overlap(current_player.hitbox.position, opponent_player.hurtbox.position)) {
		mPlayerOnhurtRoutines.at(opponent_player.state)(this, opponent_number);
	}
}

void GameState::move_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Save old position
	Point<int16_t> old_position = {
		.x = compose_int16(byte1(player.x), byte2(player.x)),
		.y = compose_int16(byte1(player.y), byte2(player.y)),
	};

	// Apply velocity to position
	Point<int32_t> final_position = {
		.x = player.x + player.velocity_h,
		.y = player.y + player.velocity_v,
	};

	// Check collisions with stage plaforms
	for (Stage::Platform const& platform : mStage.platforms) {
		if (platform.is_smooth) {
			final_position = this->check_top_collision(old_position, final_position, platform.position.left, platform.position.right, platform.position.top);
		}else {
			final_position = this->check_collision(old_position, final_position, platform.position);
		}
	}

	// HACK perform the check twice to mitigate the following issue ... (long explanation in ASM code)
	for (Stage::Platform const& platform : mStage.platforms) {
		if (platform.is_smooth) {
			final_position = this->check_top_collision(old_position, final_position, platform.position.left, platform.position.right, platform.position.top);
		}else {
			final_position = this->check_collision(old_position, final_position, platform.position);
		}
	}

	// Store final velocity in player's position
	player.x = final_position.x;
	player.y = final_position.y;
}

void GameState::check_player_position(uint8_t player_number, Point<uint8_t> const& old_position) {
	Player& player = this->getPlayer(player_number);

	// Check death
	Point<int16_t> current_pixel = {
		.x = compose_int16(byte1(player.x), byte2(player.x)),
		.y = compose_int16(byte1(player.y), byte2(player.y)),
	};
	if (current_pixel.x < STAGE_BLAST_LEFT) {
		goto set_death_state;
	}
	if (STAGE_BLAST_RIGHT < current_pixel.x) {
		goto set_death_state;
	}
	if (current_pixel.y < STAGE_BLAST_TOP) {
		goto set_death_state;
	}
	if (STAGE_BLAST_BOTTOM < current_pixel.y) {
		goto set_death_state;
	}

	// Check if on ground
	if (this->check_on_ground(player_number).first) {
		player.num_aerial_jumps = 0;
		player.gravity = DEFAULT_GRAVITY;
		mPlayerOngroundRoutines.at(player.state)(this, player_number);
	}else {
		mPlayerOffgroundRoutines.at(player.state)(this, player_number);
	}
	goto end;

	set_death_state:
		player.num_aerial_jumps = 0;
		player.hitstun = 0;
		player.gravity = DEFAULT_GRAVITY;
		--player.stocks;
		if (! (player.stocks & 0b10000000)) {
			this->start_respawn_player(player_number);
		}else {
			if (mSlowDownCounter == 0) {
				mGameoverWinner = player_number ^ 1;
			}
			player.stocks = 0;
			this->start_innexistant_player(player_number);
			mSlowDownCounter = SLOWDOWN_TIME;
		}

	end:
		return;
}

void GameState::dummy_routine(uint8_t) {
}

void GameState::hurt_player(uint8_t player_number) {
	Player& stroke_player = this->getPlayer(player_number);
	Player& striker_player = this->getPlayer(player_number == 0 ? 1 : 0);

	// Apply force vector to the opponent
	uint8_t force_multiplier = stroke_player.damages / 4;
	int16_t knockback_h = striker_player.hitbox.force_h * force_multiplier + striker_player.hitbox.base_knock_up_h;
	stroke_player.velocity_h = knockback_h;
	int16_t knockback_v = striker_player.hitbox.force_v * force_multiplier + striker_player.hitbox.base_knock_up_v;
	stroke_player.velocity_v = knockback_v;

	// Apply hitstun to the opponent
	// hitstun duration = high byte of 2 * (abs(velocity_v) + abs(velocity_h))
	stroke_player.hitstun = msb(static_cast<uint16_t>(2 * (std::abs(stroke_player.velocity_v) + std::abs(stroke_player.velocity_h))));

	// Start screenshake of duration = hitstun / 2
	mScreenShakeCounter = stroke_player.hitstun / 2;

	// Apply damages to the opponent
	stroke_player.damages += striker_player.hitbox.damages;
	if (stroke_player.damages >= 200) {
		stroke_player.damages = 199;
	}

	// Set opponent to thrown state
	this->start_thrown_player(player_number);

	// Disable the hitbox to avoid multi-hits
	striker_player.hitbox.enabled = false;
}

void GameState::keep_input_dirty(uint8_t player_number) {
	dbg("keep_input_dirty " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.btns = player.last_frame_btns;
}

bool GameState::boxes_overlap(Rectangle const& rect1, Rectangle const& rect2) const {
	// No overlap possible if right of rect2 is on the left of rect1
	if (rect2.right < rect1.left) {
		return false;
	}

	// No overlap possible if right of rect1 is on the left of rect2
	if (rect1.right < rect2.left) {
		return false;
	}

	// No overlap possible if bottom of rect2 is higher than top of rect1
	if (rect2.bottom < rect1.top) {
		return false;
	}

	// No overlap possible if bottom of rect1 is higher than top of rect2
	if (rect1.bottom < rect2.top) {
		return false;
	}

	// No impossibility found, rectangles overlap at least partially
	return true;
}

std::pair<bool, Stage::Platform*> GameState::check_on_ground(uint8_t player_number) {
	//TODO adapt to v2: platforms are stored in a modifiable space. Characters can create it. Also, there is two types of platforms (simple and oos).
	for (Stage::Platform& platform : mStage.platforms) {
		if (this->check_on_platform(player_number, platform.position)) {
			return std::pair<bool, Stage::Platform*>(true, &platform);
		}
	}
	return std::pair<bool, Stage::Platform*>(false, nullptr);
}

bool GameState::check_on_platform(uint8_t player_number, Rectangle const& platform_position) {
	//Note: this implementation is common to check_on_platform and check_on_platform_multi_screen as we store all platforms with int16 components
	Player& player = this->getPlayer(player_number);

	// Get player position in screen+pixel precision
	int16_t player_x = compose_int16(byte1(player.x), byte2(player.x));
	int16_t player_y = compose_int16(byte1(player.y), byte2(player.y));

	// if (X < platform_left) then offground
	if (player_x < platform_position.left) {
		return false;
	}

	// if (platform_right < X) then offground
	if (platform_position.right < player_x) {
		return false;
	}

	// if (Y != platform_top - 1) then offground
	if (player_y != platform_position.top - 1) {
		return false;
	}

	// To be onground, the character has to be on the bottom subpixel of the (Y ground pixel - 1)
	return byte0(player.y) == 0xff;
}

Point<int32_t> GameState::check_top_collision(Point<int16_t> const& old_position, Point<int32_t> const& final_position, int16_t platform_position_left, int16_t platform_position_right, int16_t platform_position_top) const {
	Point<int16_t> final_position_pixel = {
		.x = compose_int16(byte1(final_position.x), byte2(final_position.x)),
		.y = compose_int16(byte1(final_position.y), byte2(final_position.y)),
	};

	// Skip horizontal edges collision checks if the player is aside of the obstacle
	if (final_position_pixel.x < platform_position_left) {
		return final_position;
	}
	if (platform_position_right < final_position_pixel.x) {
		return final_position;
	}

	if (old_position.y >= platform_position_top) {
		return final_position;
	}
	if (final_position_pixel.y < platform_position_top) {
		return final_position;
	}

	Point<int32_t> res = {
		.x = final_position.x,
		.y = screen_pixel_to_screen_pixel_subpixel(platform_position_top-1, 0xff),
	};
	return res;
}

Point<int32_t> GameState::check_collision(Point<int16_t> const& old_position, Point<int32_t> const& final_position, Rectangle const& block_position) const {
	Point<int16_t> final_position_pixel = {
		.x = compose_int16(byte1(final_position.x), byte2(final_position.x)),
		.y = compose_int16(byte1(final_position.y), byte2(final_position.y)),
	};
	Point<int32_t> result = final_position;

	// Skip vertical edges collision checks if horizontal position is not impacted (pixel precision)
	if (final_position_pixel.x == old_position.x) {
		goto horizontal_edges;
	}

	// Skip vertical edges collision checks if the player is over or under the obstacle
	if (final_position_pixel.y < block_position.top) {
		goto horizontal_edges;
	}
	if (block_position.bottom < final_position_pixel.y) {
		goto horizontal_edges;
	}

	// Check collision with left edge
	left_edge:
		if (block_position.left < old_position.x) {
			goto right_edge;
		}
		if (final_position_pixel.x < block_position.left) {
			goto right_edge;
		}

			result.x = screen_pixel_to_screen_pixel_subpixel(block_position.left-1, 0xff);
			final_position_pixel.x = block_position.left-1;

	// Check collision with right edge
	right_edge:
		if (old_position.x < block_position.right) {
			goto horizontal_edges;
		}
		if (block_position.right < final_position_pixel.x) {
			goto horizontal_edges;
		}

			result.x = screen_pixel_to_screen_pixel_subpixel(block_position.right+1, 0x00);
			final_position_pixel.x = block_position.right+1;

	horizontal_edges:
	// Skip horizontal edges collision checks if the player is aside of the obstacle
	if (final_position_pixel.x < block_position.left) {
		goto end;
	}
	if (block_position.right < final_position_pixel.x) {
		goto end;
	}

	// Check collision with top edge
	top_edge:
		if (block_position.top < old_position.y) {
			goto bot_edge;
		}
		if (final_position_pixel.y < block_position.top) {
			goto bot_edge;
		}

			result.y = screen_pixel_to_screen_pixel_subpixel(block_position.top-1, 0xff);

	// Check collision with bottom edge
	bot_edge:
		if (old_position.y < block_position.bottom) {
			goto end;
		}
		if (block_position.bottom < final_position_pixel.y) {
			goto end;
		}

			result.y = screen_pixel_to_screen_pixel_subpixel(block_position.bottom+1, 0x00);

	end:
	return result;
}

void GameState::merge_to_player_velocity(uint8_t player_number, int16_t horizontal, int16_t vertical, uint8_t step) {
	Player& player = this->getPlayer(player_number);
	std::vector<int16_t*> player_components = { &player.velocity_v, &player.velocity_h };
	std::vector<int16_t*> merged_components = { &vertical, &horizontal };

	for (std::size_t i = 0; i < 2; ++i) {
		// Avoid to pass through merged velocity
		int16_t diff = *(player_components[i]) - *(merged_components[i]);
		if (diff < 0) diff *= -1;

		if (diff <= step) {
			*(player_components[i]) = *(merged_components[i]);
		}else {
			// Add or substract step size from velocity component to be closer to the merged component
			if (*(player_components[i]) < *(merged_components[i])) {
				*(player_components[i]) += step;
			}else {
				*(player_components[i]) -= step;
			}
		}
	}
}

void GameState::animation_init_state(AnimationState& state, uint16_t data_vector) const {
	// Zero most fields
	state.x = 0;
	state.y = 0;
	state.direction = 0;
	state.clock = 0;
	state.first_sprite_num = 0;
	state.last_sprite_num = 0;

	// Initialize frame vector and data vector to the first frame
	state.data_vector = data_vector;
	state.frame_vector = data_vector;
}

void GameState::animation_state_change_animation(AnimationState& state, uint16_t data_vector) const {
	// Reset clock
	state.clock = 0;

	// Set frame vector and data vector to new animation's first frame
	state.data_vector = data_vector;
	state.frame_vector = data_vector;
}

void GameState::animation_draw(uint8_t player_number, AnimationState const& state, int16_t camera_x, int16_t camera_y) {
	// Compute animation position relative to camera
	Point<int16_t> animation_position;
	animation_position.x = state.x - camera_x;
	animation_position.y = state.y - camera_y;

	// Pass parameters to draw_anim_frame
	Animation const& animation = this->findAnimation(state.data_vector);
	size_t const current_frame_index = animation.find_frame(state.frame_vector);
	Animation::Frame const& current_frame = animation.frames.at(current_frame_index);
	this->draw_anim_frame(player_number, current_frame, state, animation_position, state.direction);
}

void GameState::animation_tick(AnimationState& state) {
	// Increment counter
	++state.clock;

	// If counter is above (or equal) frame duration, update current frame vector
	Animation const& animation = this->findAnimation(state.data_vector);
	size_t const current_frame_index = animation.find_frame(state.frame_vector);
	Animation::Frame const& current_frame = animation.frames.at(current_frame_index);
	if (state.clock >= current_frame.duration) {
		// Search the next frame
		size_t next_frame_index = (current_frame_index + 1) % animation.frames.size();
		uint16_t next_frame_addr = state.frame_vector + current_frame.size;
		if (next_frame_index == 0) {
			next_frame_addr = state.data_vector;
		}

		// Store computed frame vector in animation state
		state.frame_vector = next_frame_addr;

		// Reset tick counter
		state.clock = 0;
	}
}

void GameState::draw_anim_frame(uint8_t player_number, GameState::Animation::Frame const& frame, AnimationState const& anim_state, Point<int16_t> position, uint8_t direction) {
	/* Light version of stb_draw_anim_frame, placing sprites is useless, just move hitboxes without indirect call mechanic */

	Player& player = getPlayer(player_number);

	// Hitbox
	bool hitbox_flag = false;

	if (frame.has_hitbox) {
		// Anotate that we encountered an hitbox
		hitbox_flag = true;

		// Enabled
		if (anim_state.clock == 0) {
			player.hitbox.enabled = player.hitbox.enabled || frame.hitbox.enabled;
		}
		// Copy other hitbox fields
		player.hitbox.damages = frame.hitbox.damages;
		player.hitbox.base_knock_up_h = frame.hitbox.base_knock_up_h;
		player.hitbox.base_knock_up_v = frame.hitbox.base_knock_up_v;
		player.hitbox.force_h = frame.hitbox.force_h;
		player.hitbox.force_v = frame.hitbox.force_v;
		player.hitbox.position = frame.hitbox.position;

		// If the player is right facing, flip the box
		if (direction) {
			// Flip box position
			int16_t width = player.hitbox.position.right - player.hitbox.position.left;
			player.hitbox.position.right = (-player.hitbox.position.left) + 7;
			player.hitbox.position.left = player.hitbox.position.right - width;

			// Flip box knockback
			player.hitbox.base_knock_up_h *= -1;
			player.hitbox.force_h *= -1;
		}

		// Apply offset to the box
		player.hitbox.position.left += position.x;
		player.hitbox.position.right += position.x;
		player.hitbox.position.top += position.y;
		player.hitbox.position.bottom += position.y;
	}

	if (!hitbox_flag) {
		player.hitbox.enabled = false;
	}

	// Hurtbox
	/* Extract relative position */
	player.hurtbox.position.left = frame.hurtbox.position.left;
	player.hurtbox.position.right = frame.hurtbox.position.right;
	player.hurtbox.position.top = frame.hurtbox.position.top;
	player.hurtbox.position.bottom = frame.hurtbox.position.bottom;

	/* If the animation is flipped, flip the box */
	if (direction) {
		// Flip box position
		int16_t width = player.hurtbox.position.right - player.hurtbox.position.left;
		player.hurtbox.position.right = (-player.hurtbox.position.left) + 7;
		player.hurtbox.position.left = player.hurtbox.position.right - width;
	}

	/* Apply offset to the box */
	player.hurtbox.position.left += position.x;
	player.hurtbox.position.right += position.x;
	player.hurtbox.position.top += position.y;
	player.hurtbox.position.bottom += position.y;
}

size_t GameState::Animation::find_frame(uint16_t addr) const {
	uint16_t current_addr = this->address;
	size_t current_index = 0;

	while (current_addr != addr) {
		// Trigerring this asset means that the frame was not found.
		// It should not happen as the engine always knows in which animation to search for a frame.
		// If the situation change, adapt this function implementation and duplicate the assert after
		// each call that shall not trigger it.
		assert(current_index < this->frames.size());

		current_addr += this->frames.at(current_index).size;
		++current_index;
	}
	return current_index;
}

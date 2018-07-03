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

#define dbg(m) do {\
	std::ostringstream oss;\
	oss << m << std::endl;\
	std::cerr << oss.str();\
}while(0)

static uint8_t msb(uint16_t v) {
	return v >> 8;
}

static uint8_t msb(int16_t v) {
	return msb(
		v >= 0 ? static_cast<uint16_t>(v) : static_cast<uint16_t>(0x10000 + v)
	);
}

static uint8_t lsb(uint16_t v) {
	return v & 0xff;
}

/*
 * usage:
 *  bin_int(0x000a) => 10
 *  bin_int(0xfff6) => -10
 */
static int16_t bin_int(uint16_t v) {
	return static_cast<int16_t>(v);
}

static void place_holder(GameState*, uint8_t) {
	//TODO all reference to this function are temporary place holders and must be replaced by some real implementation
	dbg("TODO place_holder function");
}

/********************************
*
* Constants
*
********************************/

const uint8_t DEFAULT_GRAVITY = 3;
const uint8_t INITIAL_STOCKS = 3;

const uint8_t PLAYER_STATE_STANDING = 0x00;
const uint8_t PLAYER_STATE_RUNNING = 0x01;
const uint8_t PLAYER_STATE_FALLING = 0x02;
const uint8_t PLAYER_STATE_JUMPING = 0x03;
const uint8_t PLAYER_STATE_JABBING = 0x04;
const uint8_t PLAYER_STATE_THROWN = 0x05;
const uint8_t PLAYER_STATE_RESPAWN = 0x06;
const uint8_t PLAYER_STATE_SIDE_TILT = 0x07;
const uint8_t PLAYER_STATE_SPECIAL = 0x08;
const uint8_t PLAYER_STATE_SIDE_SPECIAL = 0x09;
const uint8_t PLAYER_STATE_HELPLESS = 0x0a;
const uint8_t PLAYER_STATE_LANDING = 0x0b;
const uint8_t PLAYER_STATE_CRASHING = 0x0c;
const uint8_t PLAYER_STATE_DOWN_TILT = 0x0d;
const uint8_t PLAYER_STATE_AERIAL_SIDE = 0x0e;
const uint8_t PLAYER_STATE_AERIAL_DOWN = 0x0f;
const uint8_t PLAYER_STATE_AERIAL_UP = 0x10;
const uint8_t PLAYER_STATE_AERIAL_NEUTRAL = 0x11;
const uint8_t PLAYER_STATE_AERIAL_SPE_NEUTRAL = 0x12;
const uint8_t PLAYER_STATE_SPE_UP = 0x13;
const uint8_t PLAYER_STATE_SPE_DOWN = 0x14;
const uint8_t PLAYER_STATE_UP_TILT = 0x15;
const uint8_t PLAYER_STATE_SHIELDING = 0x16;
const uint8_t PLAYER_STATE_INNEXISTANT = 0x17;
const uint8_t PLAYER_STATE_SPAWN = 0x18;

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
const uint8_t CONTROLLER_INPUT_SPECIAL = CONTROLLER_BTN_B;
const uint8_t CONTROLLER_INPUT_SPECIAL_RIGHT = CONTROLLER_BTN_B | CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_SPECIAL_LEFT = CONTROLLER_BTN_B | CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_SPECIAL_DOWN = CONTROLLER_BTN_B | CONTROLLER_BTN_DOWN;
const uint8_t CONTROLLER_INPUT_SPECIAL_UP = CONTROLLER_BTN_B | CONTROLLER_BTN_UP;
const uint8_t CONTROLLER_INPUT_TECH = CONTROLLER_BTN_DOWN;
const uint8_t CONTROLLER_INPUT_TECH_RIGHT = CONTROLLER_BTN_DOWN | CONTROLLER_BTN_RIGHT;
const uint8_t CONTROLLER_INPUT_TECH_LEFT = CONTROLLER_BTN_DOWN | CONTROLLER_BTN_LEFT;
const uint8_t CONTROLLER_INPUT_DOWN_TILT = CONTROLLER_BTN_DOWN | CONTROLLER_BTN_A;

const uint8_t SLOWDOWN_TIME = 100;

/********************************
*
* Player states routines
*
********************************/

void GameState::set_player_animation(uint8_t player_number, uint16_t animation_address) {
	Player& player = this->getPlayer(player_number);

	// Set the player's animation
	player.animation = animation_address;

	// Reset animation's clock
	player.anim_clock = 0;

	// Set animation's direction
	player.animation_direction = player.direction;
}

void GameState::aerial_directional_influence(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	if (player.btns.left_pressed) {
		if (bin_int(0xff00) < player.velocity_h) {
			merge_to_player_velocity(player_number, bin_int(0xff00), player.velocity_v, 0x80);
		}
	}else if (player.btns.right_pressed) {
		if (player.velocity_h < bin_int(0x0100)) {
			merge_to_player_velocity(player_number, bin_int(0x0100), player.velocity_v, 0x80);
		}
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
			CONTROLLER_INPUT_SPECIAL_RIGHT, CONTROLLER_INPUT_SPECIAL_LEFT, CONTROLLER_INPUT_JUMP,         CONTROLLER_INPUT_JUMP_RIGHT,  CONTROLLER_INPUT_JUMP_LEFT,
			CONTROLLER_INPUT_ATTACK_LEFT,   CONTROLLER_INPUT_ATTACK_RIGHT, CONTROLLER_INPUT_DOWN_TILT,    CONTROLLER_INPUT_ATTACK_UP,   CONTROLLER_INPUT_JAB,
			CONTROLLER_INPUT_SPECIAL,       CONTROLLER_INPUT_SPECIAL_UP,   CONTROLLER_INPUT_SPECIAL_DOWN, CONTROLLER_INPUT_TECH,
		},
		{
			[&](){dbg("TODO aerial_input");},
			[&](){dbg("TODO aerial_input");},
			[&](){this->start_aerial_jumping(player_number);},
			[&](){this->start_aerial_jumping(player_number);},
			[&](){this->start_aerial_jumping(player_number);},

			[&](){dbg("TODO aerial_input");},
			[&](){dbg("TODO aerial_input");},
			[&](){dbg("TODO aerial_input");},
			[&](){dbg("TODO aerial_input");},
			[&](){dbg("TODO aerial_input");},

			[&](){dbg("TODO aerial_input");},
			[&](){dbg("TODO aerial_input");},
			[&](){dbg("TODO aerial_input");},
			[&](){
				// Fast fall, gravity * 1.5
				player.gravity = DEFAULT_GRAVITY * 1.5;
				player.velocity_v = DEFAULT_GRAVITY * 1.5;
			},

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

void GameState::start_aerial_jumping(uint8_t player_number) {
	dbg("start_aerial_jumping " << (uint16_t)player_number);
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
	player.velocity_v = 0;

	// Set the appropriate animation
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_aerial_jumping").address);
}

void GameState::start_crashing_player(uint8_t player_number) {
	dbg("start_crashing_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_CRASHING;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_crashing").address);
}

void GameState::crashing_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_CRASHING_DURATION = 30;

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0x80);

	// After move's time is out, go to standing state
	if (player.anim_clock == STATE_SINBAD_CRASHING_DURATION) {
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
	dbg("start_helpless_player");

	dbg("TODO start_helpless_player: skip to falling");
	this->start_falling_player(player_number);
}

void GameState::start_innexistant_player(uint8_t player_number) {
	dbg("start_innexistant_player " << (uint16_t)player_number);
	//TODO
	dbg("TODO start_innexistant_player");
}

void GameState::start_jabbing_player(uint8_t player_number) {
	dbg("start_jabbing_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_JABBING;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_jab").address);
}

void GameState::jabbing_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);
	uint8_t const STATE_SINBAD_JAB_DURATION = 8;

	if (player.anim_clock == STATE_SINBAD_JAB_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::start_jumping_player(uint8_t player_number) {
	dbg("start_jumping_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_JUMPING;
	player.state_field1 = 0;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_jumping").address);
}

uint8_t const STATE_SINBAD_JUMP_PREPARATION_END = 4;
void GameState::jumping_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Wait for the preparation to end to begin to jump
	if (player.anim_clock < STATE_SINBAD_JUMP_PREPARATION_END) {
		return;
	}
	if (player.anim_clock == STATE_SINBAD_JUMP_PREPARATION_END) {
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
	if (player.num_aerial_jumps != 0 || player.anim_clock > STATE_SINBAD_JUMP_PREPARATION_END) {
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

	// Do not move, velocity tends toward vector (0,0)
	this->merge_to_player_velocity(player_number, 0, 0, 0x40);

	// After move's time is out, go to standing state
	if (player.anim_clock == STATE_SINBAD_LANDING_DURATION) {
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
			CONTROLLER_INPUT_LEFT,        CONTROLLER_INPUT_RIGHT,        CONTROLLER_INPUT_JUMP,    CONTROLLER_INPUT_JUMP_RIGHT,    CONTROLLER_INPUT_JUMP_LEFT,
			CONTROLLER_INPUT_ATTACK_LEFT, CONTROLLER_INPUT_ATTACK_RIGHT, CONTROLLER_INPUT_SPECIAL, CONTROLLER_INPUT_SPECIAL_RIGHT, CONTROLLER_INPUT_SPECIAL_LEFT,
			CONTROLLER_INPUT_SPECIAL_UP,  CONTROLLER_INPUT_SPECIAL_DOWN
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

			[&](){dbg("TODO running_player_input");},
			[&](){dbg("TODO running_player_input");},
			[&](){dbg("TODO running_player_input");},
			[&](){dbg("TODO running_player_input");},
			[&](){dbg("TODO running_player_input");},

			[&](){dbg("TODO running_player_input");},
			[&](){dbg("TODO running_player_input");},

			[&](){this->start_standing_player(player_number);},
		}
	);
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
			CONTROLLER_INPUT_LEFT,         CONTROLLER_INPUT_RIGHT,        CONTROLLER_INPUT_JUMP,         CONTROLLER_INPUT_JUMP_RIGHT,   CONTROLLER_INPUT_JUMP_LEFT,
			CONTROLLER_INPUT_JAB,          CONTROLLER_INPUT_ATTACK_LEFT,  CONTROLLER_INPUT_ATTACK_RIGHT, CONTROLLER_INPUT_SPECIAL,      CONTROLLER_INPUT_SPECIAL_RIGHT,
			CONTROLLER_INPUT_SPECIAL_LEFT, CONTROLLER_INPUT_DOWN_TILT,    CONTROLLER_INPUT_SPECIAL_UP,   CONTROLLER_INPUT_SPECIAL_DOWN, CONTROLLER_INPUT_ATTACK_UP,
			CONTROLLER_INPUT_TECH
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
			[&](){dbg("TODO standing_player_input");},
			[&](){dbg("TODO standing_player_input");},
			[&](){dbg("TODO standing_player_input");},
			[&](){dbg("TODO standing_player_input");},

			[&](){dbg("TODO standing_player_input");},
			[&](){dbg("TODO standing_player_input");},
			[&](){dbg("TODO standing_player_input");},
			[&](){dbg("TODO standing_player_input");},
			[&](){dbg("TODO standing_player_input");},

			[&](){dbg("TODO standing_player_input");},

			[](){},
		}
	);
}

void GameState::start_spawn_player(uint8_t player_number) {
	dbg("start_spawn_player " << (uint16_t)player_number);
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_SPAWN;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_spawn").address);
};

void GameState::spawn_player(uint8_t player_number) {
	const uint8_t STATE_SINBAD_SPAWN_DURATION = 50;
	if(this->getPlayer(player_number).anim_clock == STATE_SINBAD_SPAWN_DURATION) {
		this->start_standing_player(player_number);
	}
}

void GameState::start_spe_up_player(uint8_t player_number) {
	dbg("start_spe_up_player " << (uint16_t)player_number);

	//TODO
	dbg("TODO start_spe_up_player");
}

const uint8_t TECH_MAX_FRAMES_BEFORE_COLLISION = 5;
const uint8_t TECH_NB_FORBIDDEN_FRAMES = 60;
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
		player.animation_direction = DIRECTION_RIGHT;
	}else {
		player.animation_direction = DIRECTION_LEFT;
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

	//TODO
	dbg("TODO start_up_tilt_player");
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
		&GameState::standing_player, &GameState::running_player, &GameState::falling_player,  &GameState::jumping_player, &GameState::jabbing_player,
		&GameState::thrown_player,   &GameState::respawn_player, &place_holder,               &place_holder,              &place_holder,
		&place_holder,               &GameState::landing_player, &GameState::crashing_player, &place_holder,              &place_holder,
		&place_holder,               &place_holder,              &place_holder,               &place_holder,              &place_holder,
		&place_holder,               &place_holder,              &place_holder,               &place_holder,              &GameState::spawn_player,
	};
	mPlayerOffgroundRoutines = {
		&GameState::start_falling_player, &GameState::start_falling_player,  &GameState::dummy_routine,         &GameState::dummy_routine, &GameState::start_falling_player,
		&GameState::dummy_routine,        &GameState::dummy_routine,         &place_holder,                     &place_holder,             &place_holder,
		&place_holder,                    &GameState::start_helpless_player, &GameState::start_helpless_player, &place_holder,             &place_holder,
		&place_holder,                    &place_holder,                     &place_holder,                     &place_holder,             &place_holder,
		&place_holder,                    &place_holder,                     &place_holder,                     &place_holder,             &GameState::dummy_routine,
	};
	mPlayerOngroundRoutines = {
		&GameState::dummy_routine,           &GameState::dummy_routine, &GameState::start_landing_player, &GameState::dummy_routine, &GameState::dummy_routine,
		&GameState::thrown_player_on_ground, &GameState::dummy_routine, &place_holder,                    &place_holder,             &place_holder,
		&place_holder,                       &GameState::dummy_routine, &GameState::dummy_routine,        &place_holder,             &place_holder,
		&place_holder,                       &place_holder,             &place_holder,                    &place_holder,             &place_holder,
		&place_holder,                       &place_holder,             &place_holder,                    &place_holder,             &GameState::dummy_routine,
	};
	mPlayerInputRoutines = {
		&GameState::standing_player_input, &GameState::running_player_input, &GameState::check_aerial_inputs, &GameState::jumping_player_input, &GameState::keep_input_dirty,
		&GameState::thrown_player_input,   &GameState::respawn_player_input, &place_holder,                   &place_holder,                    &place_holder,
		&place_holder,                     &GameState::keep_input_dirty,     &GameState::keep_input_dirty,    &place_holder,                    &place_holder,
		&place_holder,                     &place_holder,                    &place_holder,                   &place_holder,                    &place_holder,
		&place_holder,                     &place_holder,                    &place_holder,                   &place_holder,                    &GameState::keep_input_dirty,
	};
	mPlayerOnhurtRoutines = {
		&GameState::hurt_player, &GameState::hurt_player,   &GameState::hurt_player, &GameState::hurt_player, &GameState::hurt_player,
		&GameState::hurt_player, &GameState::dummy_routine, &place_holder,           &place_holder,           &place_holder,
		&place_holder,           &GameState::hurt_player,   &GameState::hurt_player, &place_holder,           &place_holder,
		&place_holder,           &place_holder,             &place_holder,           &place_holder,           &place_holder,
		&place_holder,           &place_holder,             &place_holder,           &place_holder,           &GameState::dummy_routine,
	};
	mAnimations = {
#include "GameState.animations.inc.cpp"
	};

	// Ensure game state is zero
	::memset((void*)&mPlayerA, 0, sizeof(mPlayerA));
	::memset((void*)&mPlayerB, 0, sizeof(mPlayerB));
	mScreenShakeCounter = 0;
	mSlowDownCounter = 0;

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

void GameState::setControllerAState(ControllerState state) {
	mControllerA = state;
}

void GameState::setControllerBState(ControllerState state) {
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

	throw std::runtime_error("animation not found by name");
}

void GameState::update_sprites() {
	/* Light version of the real subroutine, placing sprites is useless, just compute anim_clock and move hitboxes */
	for (uint8_t player_number = 0; player_number < 2; ++player_number) {
		Player& player = getPlayer(player_number);

		// Search for the frame on time with clock
		uint8_t frame_first_tick = 0;
		bool found = false;
		for (Animation::Frame const& frame : findAnimation(player.animation).frames) {
			uint8_t frame_end_tick = frame_first_tick + frame.duration;
			if (frame_end_tick > player.anim_clock) {
				this->draw_anim_frame(frame, Point<uint8_t>{ .x = msb(player.x), .y = msb(player.y) }, player.animation_direction, frame_first_tick, player_number);
				++player.anim_clock;
				found = true;
				break;
			}else {
				frame_first_tick = frame_end_tick;
			}
		}
		if (! found) {
			player.anim_clock = 0;
		}
	}
}

void GameState::draw_anim_frame(GameState::Animation::Frame const& frame, Point<uint8_t> position, uint8_t direction, uint8_t first_tick, uint8_t player_number) {
	Player& player = getPlayer(player_number);

	// Compute is_first_tick
	bool is_first_tick = first_tick == player.anim_clock;

	// Move hurtbox (inlined "anim_frame_move_hurtbox")

	// Extract relative position
	player.hurtbox = frame.hurtbox;

	// If the animation is flipped, flip the box
	if (direction != DIRECTION_LEFT) {
		uint8_t width = player.hurtbox.position.right - player.hurtbox.position.left;
		player.hurtbox.position.right = (player.hurtbox.position.left ^ 0b11111111) + 8; // right = -left + 7
		player.hurtbox.position.left = player.hurtbox.position.right - width;
	}

	// Apply offset to the box
	player.hurtbox.position.left += position.x;
	player.hurtbox.position.right += position.x;
	player.hurtbox.position.top += position.y;
	player.hurtbox.position.bottom += position.y;

	// Move hurtbox (end of inlined "anim_frame_move_hurtbox")

	// Move hitbox (inlined "anim_frame_move_hitbox")

	if (frame.has_hitbox) {
		// Copy hitbox with special handling for reenabling
		bool enabled = player.hitbox.enabled;
		if (is_first_tick) {
			enabled = enabled || frame.hitbox.enabled;
		}
		player.hitbox = frame.hitbox;
		player.hitbox.enabled = enabled;

		// If the player is right facing, flip the box
		if (direction != DIRECTION_LEFT) {
			// Flip box position
			uint8_t width = player.hitbox.position.right - player.hitbox.position.left;
			player.hitbox.position.right = (player.hitbox.position.left ^ 0b11111111) + 8; // right = -left + 7
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
	}else {
		// Deactivate the hitbox if it was not placed by this frame
		player.hitbox.enabled = false;
	}

	// Move hitbox (end of inlined "anim_frame_move_hitbox")
}

void GameState::check_player_hit(uint8_t player_number) {
	uint8_t opponent_number = player_number ^ 1;
	Player& current_player = this->getPlayer(player_number);
	Player& opponent_player = this->getPlayer(opponent_number);

	// Check that player's hitbox is enabled
	if (! current_player.hitbox.enabled) {
		return;
	}

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

	// Check collisions between hitbox and hurtbox
	if (this->boxes_overlap(current_player.hitbox.position, opponent_player.hurtbox.position)) {
		mPlayerOnhurtRoutines.at(opponent_player.state)(this, opponent_number);
	}
}

void GameState::move_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	// Save old position
	Point<uint8_t> old_position = {
		.x = static_cast<uint8_t>(player.x >> 8),
		.y = static_cast<uint8_t>(player.y >> 8),
	};

	// Apply velocity to position
	Point<uint16_t> final_position = {
		.x = static_cast<uint16_t>(player.x + player.velocity_h),
		.y = static_cast<uint16_t>(player.y + player.velocity_v),
	};

	// Check collisions with stage plaforms
	for (Stage::Platform const& platform : mStage.platforms) {
		if (platform.is_smooth) {
			final_position = this->check_top_collision(old_position, final_position, platform.position.left, platform.position.right, platform.position.top);
		}else {
			final_position = this->check_collision(old_position, final_position, platform.position);
		}
		player.x = final_position.x;
		player.y = final_position.y;
	}
}

void GameState::check_player_position(uint8_t player_number, Point<uint8_t> const& old_position) {
	Player& player = this->getPlayer(player_number);
	Point<uint8_t> current_position = {
		.x = static_cast<uint8_t>(player.x >> 8),
		.y = static_cast<uint8_t>(player.y >> 8),
	};

	// Check death
	if (player.velocity_h < 0 && old_position.x < current_position.x) {
		goto set_death_state;
	}else if (player.velocity_h >= 0 && old_position.x > current_position.x) {
		goto set_death_state;
	}else if (player.velocity_v < 0 && old_position.y < current_position.y) {
		goto set_death_state;
	}else if (player.velocity_v >= 0 && old_position.y > current_position.y) {
		goto set_death_state;
	}

	// Check if on ground
	if (this->check_on_ground(player_number)) {
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
	Player& player = this->getPlayer(player_number);

	player.btns = player.last_frame_btns;
}

bool GameState::boxes_overlap(Rectangle const& rect1, Rectangle const& rect2) const {
	// No overlap possible if left of rect1 is on the right of rect2
	if (rect1.left >= rect2.right) {
		return false;
	}

	// No overlap possible if left of rect2 is on the right of rect1
	if (rect2.left >= rect1.right) {
		return false;
	}

	// No overlap possible if top of rect1 is lower than bottom of rect2
	if (rect1.top >= rect2.bottom) {
		return false;
	}

	// No overlap possible if top of rect1 is lower than bottom of rect2
	if (rect2.top >= rect1.bottom) {
		return false;
	}

	// No impossibility found, rectangles overlap at least partially
	return true;
}

bool GameState::check_on_ground(uint8_t player_number) {
	for (Stage::Platform const& platform : mStage.platforms) {
		if (this->check_on_platform(player_number, platform.position)) {
			return true;
		}
	}
	return false;
}

bool GameState::check_on_platform(uint8_t player_number, Rectangle const& platform_position) {
	Player& player = this->getPlayer(player_number);

	// if (X < platform_left - 1) then offground
	if (msb(player.x) < platform_position.left - 1) {
		return false;
	}

	// if (platform_right + 1 < X) then offground
	if (platform_position.right + 1 < msb(player.x)) {
		return false;
	}

	// if (Y != platform_top - 1) then offground
	if (msb(player.y) != platform_position.top - 1) {
		return false;
	}

	// To be onground, the character has to be on the bottom subpixel of the (Y ground pixel - 1)
	return lsb(player.y) == 0xff;
}

Point<uint16_t> GameState::check_top_collision(Point<uint8_t> const& old_position, Point<uint16_t> const& final_position, uint8_t platform_position_left, uint8_t platform_position_right, uint8_t platform_position_top) const {
	// Skip horizontal edges collision checks if the player is aside of the obstacle
	if (msb(final_position.x) < platform_position_left) {
		return final_position;
	}
	if (platform_position_right < msb(final_position.x)) {
		return final_position;
	}

	if (old_position.y >= platform_position_top) {
		return final_position;
	}
	if (msb(final_position.y) < platform_position_top) {
		return final_position;
	}
	uint16_t y = (((uint16_t)platform_position_top - 1) << 8) + 0xff;
	Point<uint16_t> res = {
		.x = final_position.x,
		.y = y
	};
	return res;
}

Point<uint16_t> GameState::check_collision(Point<uint8_t> const& old_position, Point<uint16_t> const& final_position, Rectangle const& block_position) const {
	Point<uint16_t> result = final_position;

	// Check collision with left edge
	if (msb(result.y) >= block_position.top && block_position.bottom >= msb(result.y)) {
		if (old_position.x < block_position.left && msb(result.x) >= block_position.left) {
			result.x = (((uint16_t)block_position.left - 1) << 8) + 0xff;
		}

		// Check collision with right edge
		if (block_position.right < old_position.x && block_position.right >= msb(result.x)) {
			result.x = ((uint16_t)block_position.right + 1) << 8;
		}
	}

	// Check collision with top edge
	if (msb(result.x) >= block_position.left && block_position.right >= msb(result.x)) {
		if (old_position.y < block_position.top && msb(result.y) >= block_position.top) {
			result.y = (((uint16_t)block_position.top - 1) << 8) + 0xff;
		}

		// Check collision with bottom edge
		if (block_position.bottom < old_position.y && block_position.bottom >= msb(result.y)) {
			result.y =((uint16_t)block_position.bottom + 1) << 8;
		}
	}

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

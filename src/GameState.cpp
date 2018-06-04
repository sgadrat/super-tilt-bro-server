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

static uint8_t lsb(uint16_t v) {
	return v & 0xff;
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

const uint8_t HITSTUN_PARRY_NB_FRAMES = 10;
const uint8_t SCREENSHAKE_PARRY_NB_FRAMES = 2;

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

void GameState::start_spawn_player(uint8_t player_number) {
	Player& player = this->getPlayer(player_number);

	player.state = PLAYER_STATE_SPAWN;
	this->set_player_animation(player_number, this->findAnimation("anim_sinbad_spawn").address);
};

void GameState::start_respawn_player(uint8_t player_number) {
	//TODO
	dbg("TODO start_respawn_player");
}

void GameState::start_thrown_player(uint8_t player_number) {
	//TODO
	dbg("TODO start_thrown_player");
}

void GameState::start_innexistant_player(uint8_t player_number) {
	//TODO
	dbg("TODO start_innexistant_player");
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
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
	};
	mPlayerInputRoutines = {
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
	};
	mPlayerOnhurtRoutines = {
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
	};
	mPlayerOngroundRoutines = {
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
	};
	mPlayerOffgroundRoutines = {
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
		&place_holder, &place_holder, &place_holder, &place_holder, &place_holder,
	};
	mAnimations = {
		{"anim_sinbad_idle", 0x0000, 120},
		{"anim_sinbad_spawn", 0x0000, 50},
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
		mPlayerInputRoutines.at(this->getPlayer(player_num).state)(this, player_num);

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
	mPlayerA.btns = state;
}

void GameState::setControllerBState(ControllerState state) {
	mPlayerB.btns = state;
}

GameState::Player& GameState::getPlayer(uint8_t player_number) {
	assert(player_number < 2);

	if (player_number == 0) {
		return mPlayerA;
	}else {
		return mPlayerB;
	}
}

Animation& GameState::findAnimation(uint16_t address) {
	for (Animation& anim : mAnimations) {
		if (anim.address == address) {
			return anim;
		}
	}

	throw std::runtime_error("animation not found by address");
}

Animation& GameState::findAnimation(std::string const& name) {
	for (Animation& anim : mAnimations) {
		if (anim.name == name) {
			return anim;
		}
	}

	throw std::runtime_error("animation not found by name");
}

void GameState::update_sprites() {
	/* Light version of the real subroutine, placing sprites is useless, just compute anim_clock */
	for (uint8_t player_number = 0; player_number < 2; ++player_number) {
		Player& player = getPlayer(player_number);

		if (player.anim_clock > findAnimation(player.animation).duration) {
			player.anim_clock = 0;
		}else {
			++player.anim_clock;
		}
	}
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
	if (msb(player.y) != platform_position.top) {
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
			result.x = (((uint16_t)block_position.left) << 8) + 0xff;
		}

		// Check collision with right edge
		if (block_position.right < old_position.x && block_position.right >= msb(result.x)) {
			result.x = ((uint16_t)block_position.right + 1) << 8;
		}
	}

	// Check collision with top edge
	if (msb(result.x) >= block_position.left && block_position.right >= msb(result.x)) {
		if (old_position.y < block_position.top && msb(result.y) >= block_position.top) {
			result.y = (((uint16_t)block_position.top) << 8) + 0xff;
		}

		// Check collision with bottom edge
		if (block_position.bottom < old_position.y && block_position.bottom >= msb(result.y)) {
			result.y =((uint16_t)block_position.bottom + 1) << 8;
		}
	}

	return result;
}
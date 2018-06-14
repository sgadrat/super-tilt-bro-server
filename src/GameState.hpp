#pragma once

#include <functional>
#include <stdint.h>
#include <vector>

struct Rectangle {
	uint8_t left, right, top, bottom;
};

template <typename T>
struct Point {
	T x, y;
};

struct Animation {
	std::string name;
	uint16_t address;
	uint8_t duration;
};

class Stage {
public:
	struct Platform {
		Rectangle position;
		bool is_smooth;
	};

	struct Spawn {
		uint16_t x, y;
	};

	virtual void init() {};
	virtual void tick() {};

	Spawn spawn_player_a, spawn_player_b, respawn;
	std::vector<Platform> platforms;
};

class GameState {
public:
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
	};

	GameState(Stage stage);

	bool tick();

	void setControllerAState(ControllerState state);
	void setControllerBState(ControllerState state);

	template <typename SerializationHandler>
	void serial(SerializationHandler& s);

private:
	enum class Direction : uint8_t {
		LEFT = 0,
		RIGHT = 1,
	};

	struct Hurtbox {
		Rectangle position;
	};

	struct Hitbox {
		bool enabled;
		Rectangle position;
		uint16_t force_v, force_h;
		uint16_t base_knock_up_v, base_knock_up_h;
		uint8_t damages;
	};

	struct Player {
		uint8_t state;
		uint8_t hitstun;
		uint16_t x;
		uint16_t y;
		uint8_t direction;
		int16_t velocity_v;
		int16_t velocity_h;
		uint8_t state_field1;
		uint8_t state_field2;
		uint16_t animation;
		uint8_t anim_clock;
		Hurtbox hurtbox;
		Hitbox hitbox;
		uint8_t damages;
		uint8_t animation_direction;
		uint8_t num_aerial_jumps;
		uint8_t stocks;
		uint8_t gravity;
		ControllerState btns;
		ControllerState last_frame_btns;
	};

private:
	// Utility functions

	Player& getPlayer(uint8_t player_number);
	Animation& findAnimation(uint16_t address);
	Animation& findAnimation(std::string const& name);

	// Engine routines

	bool check_on_ground(uint8_t player_number);
	bool check_on_platform(uint8_t player_number, Rectangle const& platform_position);
	void check_player_hit(uint8_t player_number);
	void check_player_position(uint8_t player_number, Point<uint8_t> const& old_position);
	void dummy_routine(uint8_t player_number);
	void hurt_player(uint8_t player_number);
	void keep_input_dirty(uint8_t player_number);
	void move_player(uint8_t player_number);
	void update_sprites();

	bool boxes_overlap(Rectangle const& rect1, Rectangle const& rect2) const;
	Point<uint16_t> check_top_collision(Point<uint8_t> const& old_position, Point<uint16_t> const& final_position, uint8_t platform_position_left, uint8_t platform_position_right, uint8_t platform_position_top) const;
	Point<uint16_t> check_collision(Point<uint8_t> const& old_position, Point<uint16_t> const& final_position, Rectangle const& block_position) const;
	void merge_to_player_velocity(uint8_t player_number, int16_t horizontal, int16_t vertical, uint8_t step);

	// Player state routines

	void aerial_directional_influence(uint8_t player_number);
	void apply_gravity(uint8_t player_number);
	void check_aerial_inputs(uint8_t player_nummber);
	void controller_callbacks(uint8_t player_number, std::vector<uint8_t> gamepad_state, std::vector<std::function<void()>> callbacks);
	void set_player_animation(uint8_t player_number, uint16_t animation_address);

	void start_falling_player(uint8_t player_number);
	void falling_player(uint8_t player_number);

	void start_innexistant_player(uint8_t player_number);

	void start_landing_player(uint8_t player_number);

	void start_respawn_player(uint8_t player_number);

	void start_running_player(uint8_t player_number);
	void running_player(uint8_t player_number);
	void running_player_input(uint8_t player_number);

	void start_spawn_player(uint8_t player_number);
	void spawn_player(uint8_t player_number);

	void start_standing_player(uint8_t player_number);
	void standing_player(uint8_t player_number);
	void standing_player_input_left(uint8_t player_number);
	void standing_player_input_right(uint8_t player_number);
	void standing_player_input(uint8_t player_number);

	void start_thrown_player(uint8_t player_number);

private:
	Stage mStage;
	Player mPlayerA;
	Player mPlayerB;
	uint8_t mScreenShakeCounter;
	uint8_t mSlowDownCounter;
	uint8_t mGameoverWinner;
	std::vector<std::function<void(GameState*,uint8_t)>> mPlayerTickRoutines;
	std::vector<std::function<void(GameState*,uint8_t)>> mPlayerInputRoutines;
	std::vector<std::function<void(GameState*,uint8_t)>> mPlayerOnhurtRoutines;
	std::vector<std::function<void(GameState*,uint8_t)>> mPlayerOngroundRoutines;
	std::vector<std::function<void(GameState*,uint8_t)>> mPlayerOffgroundRoutines;
	std::vector<Animation> mAnimations;
};

template <typename SerializationHandler>
void GameState::serial(SerializationHandler& s) {
	s.uint8(mPlayerA.state);
	s.uint8(mPlayerB.state);
	uint8_t filler = 0;
	s.uint8(filler);
	s.uint8(mPlayerA.hitstun);
	s.uint8(mPlayerB.hitstun);
	uint8_t v = mPlayerA.x >> 8;
	s.uint8(v);
	v = mPlayerB.x >> 8;
	s.uint8(v);
	v = mPlayerA.y >> 8;
	s.uint8(v);
	v = mPlayerB.y >> 8;
	s.uint8(v);
	s.uint8(mPlayerA.direction);
	s.uint8(mPlayerB.direction);
	v = mPlayerA.velocity_v >> 8;
	s.uint8(v);
	v = mPlayerB.velocity_v >> 8;
	s.uint8(v);
	v = mPlayerA.velocity_h >> 8;
	s.uint8(v);
	v = mPlayerB.velocity_h >> 8;
	s.uint8(v);
	s.uint8(mPlayerA.state_field1);
	s.uint8(mPlayerB.state_field1);
	s.uint8(mPlayerA.state_field2);
	s.uint8(mPlayerB.state_field2);
	s.uint16(mPlayerA.animation);
	s.uint16(mPlayerB.animation);
	s.uint8(mPlayerA.anim_clock);
	s.uint8(mPlayerB.anim_clock);
	s.uint8(mPlayerA.hurtbox.position.left);
	s.uint8(mPlayerB.hurtbox.position.left);
	s.uint8(mPlayerA.hurtbox.position.right);
	s.uint8(mPlayerB.hurtbox.position.right);
	s.uint8(mPlayerA.hurtbox.position.top);
	s.uint8(mPlayerB.hurtbox.position.top);
	s.uint8(mPlayerA.hurtbox.position.bottom);
	s.uint8(mPlayerB.hurtbox.position.bottom);
	s.uint8(mPlayerA.hitbox.position.left);
	s.uint8(mPlayerB.hitbox.position.left);
	s.uint8(mPlayerA.hitbox.position.right);
	s.uint8(mPlayerB.hitbox.position.right);
	s.uint8(mPlayerA.hitbox.position.top);
	s.uint8(mPlayerB.hitbox.position.top);
	s.uint8(mPlayerA.hitbox.position.bottom);
	s.uint8(mPlayerB.hitbox.position.bottom);
	v = mPlayerA.hitbox.enabled ? 0 : 1;
	s.uint8(v);
	v = mPlayerB.hitbox.enabled ? 0 : 1;
	s.uint8(v);
	v = mPlayerA.hitbox.force_v >> 8;
	s.uint8(v);
	v = mPlayerB.hitbox.force_v >> 8;
	s.uint8(v);
	v = mPlayerA.hitbox.force_h >> 8;
	s.uint8(v);
	v = mPlayerB.hitbox.force_h >> 8;
	s.uint8(v);
	s.uint8(mPlayerA.hitbox.damages);
	s.uint8(mPlayerB.hitbox.damages);
	s.uint8(mPlayerA.damages);
	s.uint8(mPlayerB.damages);
	v = mPlayerA.x & 0xff;
	s.uint8(v);
	v = mPlayerB.x & 0xff;
	s.uint8(v);
	v = mPlayerA.y & 0xff;
	s.uint8(v);
	v = mPlayerB.y & 0xff;
	s.uint8(v);
	v = mPlayerA.velocity_v & 0xff;
	s.uint8(v);
	v = mPlayerB.velocity_v & 0xff;
	s.uint8(v);
	v = mPlayerA.velocity_h & 0xff;
	s.uint8(v);
	v = mPlayerB.velocity_h & 0xff;
	s.uint8(v);
	v = mPlayerA.hitbox.force_v & 0xff;
	s.uint8(v);
	v = mPlayerB.hitbox.force_v & 0xff;
	s.uint8(v);
	v = mPlayerA.hitbox.force_h & 0xff;
	s.uint8(v);
	v = mPlayerB.hitbox.force_h & 0xff;
	s.uint8(v);
	v = mPlayerA.hitbox.base_knock_up_v >> 8;
	s.uint8(v);
	v = mPlayerB.hitbox.base_knock_up_v >> 8;
	s.uint8(v);
	v = mPlayerA.hitbox.base_knock_up_h >> 8;
	s.uint8(v);
	v = mPlayerB.hitbox.base_knock_up_h >> 8;
	s.uint8(v);
	v = mPlayerA.hitbox.base_knock_up_v & 0xff;
	s.uint8(v);
	v = mPlayerB.hitbox.base_knock_up_v & 0xff;
	s.uint8(v);
	v = mPlayerA.hitbox.base_knock_up_h & 0xff;
	s.uint8(v);
	v = mPlayerB.hitbox.base_knock_up_h & 0xff;
	s.uint8(v);
	s.uint8(mPlayerA.animation_direction);
	s.uint8(mPlayerB.animation_direction);
	s.uint8(mPlayerA.num_aerial_jumps);
	s.uint8(mPlayerB.num_aerial_jumps);
	s.uint8(mPlayerA.stocks);
	s.uint8(mPlayerB.stocks);
	s.uint8(mPlayerA.gravity);
	s.uint8(mPlayerB.gravity);
	s.flags8({
		&mPlayerA.btns.a_pressed,
		&mPlayerA.btns.b_pressed,
		&mPlayerA.btns.select_pressed,
		&mPlayerA.btns.start_pressed,
		&mPlayerA.btns.up_pressed,
		&mPlayerA.btns.down_pressed,
		&mPlayerA.btns.left_pressed,
		&mPlayerA.btns.right_pressed,
	});
	s.flags8({
		&mPlayerB.btns.a_pressed,
		&mPlayerB.btns.b_pressed,
		&mPlayerB.btns.select_pressed,
		&mPlayerB.btns.start_pressed,
		&mPlayerB.btns.up_pressed,
		&mPlayerB.btns.down_pressed,
		&mPlayerB.btns.left_pressed,
		&mPlayerB.btns.right_pressed,
	});
}

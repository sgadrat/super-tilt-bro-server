#pragma once

#include <functional>
#include <stdint.h>
#include <sstream>
#include <vector>

struct Rectangle {
	int16_t left, right, top, bottom;
};

template <typename T>
struct Point {
	T x, y;
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

		std::string getStr() const {
			std::ostringstream oss;
			oss << "a="<<a_pressed<<",b="<<b_pressed<<",select="<<select_pressed<<",start="<<start_pressed<<",up="<<up_pressed<<",down="<<down_pressed<<",left="<<left_pressed<<",right="<<right_pressed;
			return oss.str();
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
		int16_t force_v, force_h;
		int16_t base_knock_up_v, base_knock_up_h;
		uint8_t damages;
	};

	struct AnimationState {
		int16_t x;
		int16_t y;
		uint16_t data_vector;
		uint8_t direction;
		uint8_t clock;
		uint8_t first_sprite_num;
		uint8_t last_sprite_num;
		uint16_t frame_vector;

		template <typename SerializationHandler>
		void serial(SerializationHandler& s);
	};

	struct Player {
		uint8_t state;
		uint8_t hitstun;
		int32_t x;
		int32_t y;
		uint8_t direction;
		int16_t velocity_v;
		int16_t velocity_h;
		uint8_t state_field1;
		uint8_t state_field2;
		uint8_t state_clock;
		Hurtbox hurtbox;
		Hitbox hitbox;
		uint8_t damages;
		uint8_t num_aerial_jumps;
		uint8_t stocks;
		uint8_t gravity;
		ControllerState btns;
		ControllerState last_frame_btns;
		AnimationState animation;
	};

	struct Animation {
		struct Frame {
			uint8_t size;
			uint8_t duration;
			bool has_hitbox;
			Hurtbox hurtbox; //TODO in frame, hurtbox and hitbox positions are signed
			Hitbox hitbox;
		};

		std::string name;
		uint16_t address;
		std::vector<Frame> frames;

		size_t find_frame(uint16_t addr) const;
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
	Point<int32_t> check_top_collision(Point<int16_t> const& old_position, Point<int32_t> const& final_position, int16_t platform_position_left, int16_t platform_position_right, int16_t platform_position_top) const;
	Point<int32_t> check_collision(Point<int16_t> const& old_position, Point<int32_t> const& final_position, Rectangle const& block_position) const;
	void merge_to_player_velocity(uint8_t player_number, int16_t horizontal, int16_t vertical, uint8_t step);

	void animation_init_state(AnimationState& state, uint16_t data_vector) const;
	void animation_state_change_animation(AnimationState& state, uint16_t data_vector) const;
	void animation_draw(uint8_t player_number, AnimationState const& state, int16_t camera_x, int16_t camera_y);
	void animation_tick(AnimationState& state);
	void draw_anim_frame(uint8_t player_number, Animation::Frame const& frame, AnimationState const& anim_state, Point<int16_t> position, uint8_t direction);

	// Player state routines

	void aerial_directional_influence(uint8_t player_number);
	void apply_gravity(uint8_t player_number);
	void check_aerial_inputs(uint8_t player_number);
	void controller_callbacks(uint8_t player_number, std::vector<uint8_t> gamepad_state, std::vector<std::function<void()>> callbacks);
	void set_player_animation(uint8_t player_number, uint16_t animation_address);

	void start_aerial_jumping_player(uint8_t player_number);

	void start_aerial_down_player(uint8_t player_number);
	void aerial_down_player(uint8_t player_number);

	void start_aerial_neutral_player(uint8_t player_number);
	void aerial_neutral_player(uint8_t player_number);

	void start_aerial_side_player(uint8_t player_number);
	void aerial_side_player(uint8_t player_number);

	void start_aerial_spe_player(uint8_t player_number);
	void aerial_spe_player(uint8_t player_number);

	void start_aerial_up_player(uint8_t player_number);
	void aerial_up_player(uint8_t player_number);

	void start_crashing_player(uint8_t player_number);
	void crashing_player(uint8_t player_number);

	void start_down_tilt_player(uint8_t player_number);
	void down_tilt_player(uint8_t player_number);

	void start_falling_player(uint8_t player_number);
	void falling_player(uint8_t player_number);

	void start_helpless_player(uint8_t player_number);
	void helpless_player(uint8_t player_number);

	void start_innexistant_player(uint8_t player_number);
	void innexistant_player(uint8_t player_number);

	void start_jabbing_player(uint8_t player_number);
	void jabbing_player(uint8_t player_number);
	void jabbing_player_input(uint8_t player_number);

	void start_jumping_player(uint8_t player_number);
	void jumping_player(uint8_t player_number);
	void jumping_player_input(uint8_t player_number);

	void start_landing_player(uint8_t player_number);
	void landing_player(uint8_t player_number);

	void start_respawn_player(uint8_t player_number);
	void respawn_player(uint8_t player_number);
	void respawn_player_input(uint8_t player_number);

	void start_running_player(uint8_t player_number);
	void running_player(uint8_t player_number);
	void running_player_input(uint8_t player_number);

	void start_shielding_player(uint8_t player_number);
	void shielding_player(uint8_t player_number);
	void shielding_player_input(uint8_t player_number);
	void shielding_player_hurt(uint8_t player_number);

	void start_shieldlag_player(uint8_t player_number);
	void shieldlag_player(uint8_t player_number);

	void start_side_special_player(uint8_t player_number);
	void side_special_player(uint8_t player_number);

	void start_side_tilt_player(uint8_t player_number);
	void side_tilt_player(uint8_t player_number);

	void start_spawn_player(uint8_t player_number);
	void spawn_player(uint8_t player_number);

	void start_spe_down_player(uint8_t player_number);
	void spe_down_player(uint8_t player_number);

	void start_spe_up_player(uint8_t player_number);
	void spe_up_player(uint8_t player_number);

	void start_special_player(uint8_t player_number);
	void special_player(uint8_t player_number);
	void special_player_input(uint8_t player_number);

	void start_standing_player(uint8_t player_number);
	void standing_player(uint8_t player_number);
	void standing_player_input_left(uint8_t player_number);
	void standing_player_input_right(uint8_t player_number);
	void standing_player_input(uint8_t player_number);

	void start_thrown_player(uint8_t player_number);
	void thrown_player(uint8_t player_number);
	void thrown_player_input(uint8_t player_number);
	void thrown_player_on_ground(uint8_t player_number);

	void start_up_tilt_player(uint8_t player_number);
	void up_tilt_player(uint8_t player_number);

private:
	Stage mStage;
	ControllerState mControllerA;
	ControllerState mControllerB;
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
void GameState::AnimationState::serial(SerializationHandler& s) {
	//TODO investigate: we may spare some of x, y, direction, sprite_num if the client recomputes it each frame
	s.int16(x);
	s.int16(y);
	s.uint16(data_vector);
	s.uint8(direction);
	s.uint8(clock);
	s.uint8(first_sprite_num);
	s.uint8(last_sprite_num);
	s.uint16(frame_vector);
}

union TwoBytes {
	uint16_t unsigned_int;
	int16_t signed_int;
};

union FourBytes {
	uint32_t unsigned_int;
	int32_t signed_int;
};

inline uint8_t lsb(int16_t v) {
	TwoBytes u;
	u.signed_int = v;
	return u.unsigned_int & 0x00ff;
}

inline uint8_t msb(int16_t v) {
	TwoBytes u;
	u.signed_int = v;
	return (u.unsigned_int & 0xff00) >> 8;
}

inline uint8_t byte0(int32_t v) {
	FourBytes u;
	u.signed_int = v;
	return u.unsigned_int & 0x000000ff;
}

inline uint8_t byte1(int32_t v) {
	FourBytes u;
	u.signed_int = v;
	return (u.unsigned_int & 0x0000ff00) >> 8;
}

inline uint8_t byte2(int32_t v) {
	FourBytes u;
	u.signed_int = v;
	return (u.unsigned_int & 0x00ff0000) >> 16;
}

inline uint8_t byte3(int32_t v) {
	FourBytes u;
	u.signed_int = v;
	return (u.unsigned_int & 0xff000000) >> 24;
}

inline int16_t compose_int16(uint8_t lsb, uint8_t msb) {
	TwoBytes u;
	u.unsigned_int = (static_cast<uint16_t>(msb) << 8) + lsb;
	return u.signed_int;
}

inline int32_t compose_int32(uint8_t byte0, uint8_t byte1, uint8_t byte2, uint8_t byte3) {
	FourBytes u;
	u.unsigned_int =
		(static_cast<uint32_t>(byte3) << 24) +
		(static_cast<uint32_t>(byte2) << 16) +
		(static_cast<uint32_t>(byte1) << 8) +
		byte0
	;
	return u.signed_int;
}

template <typename SerializationHandler>
void GameState::serial(SerializationHandler& s) {
	/*
	 * Decompose multibytes values that are stored exploded
	 */

	uint8_t player_a_x_low = byte0(mPlayerA.x);
	uint8_t player_a_x = byte1(mPlayerA.x);
	uint8_t player_a_x_screen = byte2(mPlayerA.x);

	uint8_t player_a_y_low = byte0(mPlayerA.y);
	uint8_t player_a_y = byte1(mPlayerA.y);
	uint8_t player_a_y_screen = byte2(mPlayerA.y);

	uint8_t player_b_x_low = byte0(mPlayerB.x);
	uint8_t player_b_x = byte1(mPlayerB.x);
	uint8_t player_b_x_screen = byte2(mPlayerB.x);

	uint8_t player_b_y_low = byte0(mPlayerB.y);
	uint8_t player_b_y = byte1(mPlayerB.y);
	uint8_t player_b_y_screen = byte2(mPlayerB.y);

	uint8_t player_a_hurtbox_left_lsb = lsb(mPlayerA.hurtbox.position.left);
	uint8_t player_b_hurtbox_left_lsb = lsb(mPlayerB.hurtbox.position.left);
	uint8_t player_a_hurtbox_right_lsb = lsb(mPlayerA.hurtbox.position.right);
	uint8_t player_b_hurtbox_right_lsb = lsb(mPlayerB.hurtbox.position.right);
	uint8_t player_a_hurtbox_top_lsb = lsb(mPlayerA.hurtbox.position.top);
	uint8_t player_b_hurtbox_top_lsb = lsb(mPlayerB.hurtbox.position.top);
	uint8_t player_a_hurtbox_bottom_lsb = lsb(mPlayerA.hurtbox.position.bottom);
	uint8_t player_b_hurtbox_bottom_lsb = lsb(mPlayerB.hurtbox.position.bottom);
	uint8_t player_a_hitbox_left_lsb = lsb(mPlayerA.hitbox.position.left);
	uint8_t player_b_hitbox_left_lsb = lsb(mPlayerB.hitbox.position.left);
	uint8_t player_a_hitbox_right_lsb = lsb(mPlayerA.hitbox.position.right);
	uint8_t player_b_hitbox_right_lsb = lsb(mPlayerB.hitbox.position.right);
	uint8_t player_a_hitbox_top_lsb = lsb(mPlayerA.hitbox.position.top);
	uint8_t player_b_hitbox_top_lsb = lsb(mPlayerB.hitbox.position.top);
	uint8_t player_a_hitbox_bottom_lsb = lsb(mPlayerA.hitbox.position.bottom);
	uint8_t player_b_hitbox_bottom_lsb = lsb(mPlayerB.hitbox.position.bottom);
	uint8_t player_a_hurtbox_left_msb = msb(mPlayerA.hurtbox.position.left);
	uint8_t player_b_hurtbox_left_msb = msb(mPlayerB.hurtbox.position.left);
	uint8_t player_a_hurtbox_right_msb = msb(mPlayerA.hurtbox.position.right);
	uint8_t player_b_hurtbox_right_msb = msb(mPlayerB.hurtbox.position.right);
	uint8_t player_a_hurtbox_top_msb = msb(mPlayerA.hurtbox.position.top);
	uint8_t player_b_hurtbox_top_msb = msb(mPlayerB.hurtbox.position.top);
	uint8_t player_a_hurtbox_bottom_msb = msb(mPlayerA.hurtbox.position.bottom);
	uint8_t player_b_hurtbox_bottom_msb = msb(mPlayerB.hurtbox.position.bottom);
	uint8_t player_a_hitbox_left_msb = msb(mPlayerA.hitbox.position.left);
	uint8_t player_b_hitbox_left_msb = msb(mPlayerB.hitbox.position.left);
	uint8_t player_a_hitbox_right_msb = msb(mPlayerA.hitbox.position.right);
	uint8_t player_b_hitbox_right_msb = msb(mPlayerB.hitbox.position.right);
	uint8_t player_a_hitbox_top_msb = msb(mPlayerA.hitbox.position.top);
	uint8_t player_b_hitbox_top_msb = msb(mPlayerB.hitbox.position.top);
	uint8_t player_a_hitbox_bottom_msb = msb(mPlayerA.hitbox.position.bottom);
	uint8_t player_b_hitbox_bottom_msb = msb(mPlayerB.hitbox.position.bottom);

	/*
	 * Zeropage's state
	 */

	// $00
	s.uint8(mPlayerA.state);
	s.uint8(mPlayerB.state);
	uint8_t filler = 0;
	s.uint8(filler);
	s.uint8(mPlayerA.hitstun);
	s.uint8(mPlayerB.hitstun);
	uint8_t v;
	s.uint8(player_a_x);
	s.uint8(player_b_x);
	s.uint8(player_a_y);
	s.uint8(player_b_y);
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
	// $10
	s.uint8(mPlayerB.state_field1);
	s.uint8(mPlayerA.state_field2);
	s.uint8(mPlayerB.state_field2);
	s.uint8(player_a_x_screen);
	s.uint8(player_b_x_screen);
	s.uint8(player_a_y_screen);
	s.uint8(player_b_y_screen);
	s.uint8(mPlayerA.state_clock);
	s.uint8(mPlayerB.state_clock);
	s.uint8(player_a_hurtbox_left_lsb);
	s.uint8(player_b_hurtbox_left_lsb);
	s.uint8(player_a_hurtbox_right_lsb);
	s.uint8(player_b_hurtbox_right_lsb);
	s.uint8(player_a_hurtbox_top_lsb);
	s.uint8(player_b_hurtbox_top_lsb);
	s.uint8(player_a_hurtbox_bottom_lsb);
	// $20
	s.uint8(player_b_hurtbox_bottom_lsb);
	s.uint8(player_a_hitbox_left_lsb);
	s.uint8(player_b_hitbox_left_lsb);
	s.uint8(player_a_hitbox_right_lsb);
	s.uint8(player_b_hitbox_right_lsb);
	s.uint8(player_a_hitbox_top_lsb);
	s.uint8(player_b_hitbox_top_lsb);
	s.uint8(player_a_hitbox_bottom_lsb);
	s.uint8(player_b_hitbox_bottom_lsb);
	v = mPlayerA.hitbox.enabled ? 1 : 0;
	s.uint8(v);
	v = mPlayerB.hitbox.enabled ? 1 : 0;
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
	// $30
	s.uint8(mPlayerB.hitbox.damages);
	s.uint8(mPlayerA.damages);
	s.uint8(mPlayerB.damages);
	s.uint8(player_a_x_low);
	s.uint8(player_b_x_low);
	s.uint8(player_a_y_low);
	s.uint8(player_b_y_low);
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
	// $40
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
	s.uint8(filler);
	s.uint8(filler);
	s.uint8(mPlayerA.num_aerial_jumps);
	s.uint8(mPlayerB.num_aerial_jumps);
	s.uint8(mPlayerA.stocks);
	s.uint8(mPlayerB.stocks);
	s.uint8(mPlayerA.gravity);
	s.uint8(mPlayerB.gravity);

	/*
	 * Hitboxes MSBs - $57 to $66
	 */
	s.uint8(player_a_hurtbox_left_msb);
	s.uint8(player_b_hurtbox_left_msb);
	s.uint8(player_a_hurtbox_right_msb);
	s.uint8(player_b_hurtbox_right_msb);
	s.uint8(player_a_hurtbox_top_msb);
	s.uint8(player_b_hurtbox_top_msb);
	s.uint8(player_a_hurtbox_bottom_msb);
	s.uint8(player_b_hurtbox_bottom_msb);
	s.uint8(player_a_hitbox_left_msb);
	s.uint8(player_b_hitbox_left_msb);
	s.uint8(player_a_hitbox_right_msb);
	s.uint8(player_b_hitbox_right_msb);
	s.uint8(player_a_hitbox_top_msb);
	s.uint8(player_b_hitbox_top_msb);
	s.uint8(player_a_hitbox_bottom_msb);
	s.uint8(player_b_hitbox_bottom_msb);

	//TODO screenshake, particles and slow down - $70 to $7f (check feasibility/pertinance of $90 to $af)

	/*
	 * Controllers state
	 */
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
	s.flags8({
		&mPlayerA.last_frame_btns.a_pressed,
		&mPlayerA.last_frame_btns.b_pressed,
		&mPlayerA.last_frame_btns.select_pressed,
		&mPlayerA.last_frame_btns.start_pressed,
		&mPlayerA.last_frame_btns.up_pressed,
		&mPlayerA.last_frame_btns.down_pressed,
		&mPlayerA.last_frame_btns.left_pressed,
		&mPlayerA.last_frame_btns.right_pressed,
	});
	s.flags8({
		&mPlayerB.last_frame_btns.a_pressed,
		&mPlayerB.last_frame_btns.b_pressed,
		&mPlayerB.last_frame_btns.select_pressed,
		&mPlayerB.last_frame_btns.start_pressed,
		&mPlayerB.last_frame_btns.up_pressed,
		&mPlayerB.last_frame_btns.down_pressed,
		&mPlayerB.last_frame_btns.left_pressed,
		&mPlayerB.last_frame_btns.right_pressed,
	});

	/*
	 * Animations state
	 */
	mPlayerA.animation.serial(s);
	mPlayerB.animation.serial(s);

	//TODO recompose exploded values in member variables (only useful for deserializing GameState)
}

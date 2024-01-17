#pragma once
#include <stdint.h>

//
// /home/sylvain/workspace/nes/tilt/game/c_labels.asm
//

//
// C code labels
//

uint16_t const c_stack_end = 0x07ff;
uint16_t const _sp0 = 0x00;
uint16_t const _sp1 = 0x01;
uint16_t const _fp0 = 0x02;
uint16_t const _fp1 = 0x03;
uint16_t const _r0 = 0x04;
uint16_t const _r1 = 0x05;
uint16_t const _r2 = 0x06;
uint16_t const _r3 = 0x07;
uint16_t const _r4 = 0x08;
uint16_t const _r5 = 0x09;
uint16_t const _r6 = 0x0a;
uint16_t const _r7 = 0x0b;
uint16_t const _s0 = 0x0c;
uint16_t const _s1 = 0x0d;
uint16_t const _s2 = 0x0e;
uint16_t const _s3 = 0x0f;
uint16_t const _s4 = 0x10;
uint16_t const _s5 = 0x11;
uint16_t const _s6 = 0x12;
uint16_t const _s7 = 0x13;
uint16_t const _e0 = 0x14;
uint16_t const _e1 = 0x15;
uint16_t const _e2 = 0x16;
uint16_t const _e3 = 0x17;
uint16_t const _e4 = 0x18;
uint16_t const _e5 = 0x19;
uint16_t const _e6 = 0x1a;
uint16_t const _e7 = 0x1b;
uint16_t const _e8 = 0x1c;
uint16_t const _e9 = 0x1d;
uint16_t const _e10 = 0x1e;
uint16_t const _e11 = 0x1f;
uint16_t const _e12 = 0x20;
uint16_t const _e13 = 0x21;
uint16_t const _e14 = 0x22;
uint16_t const _e15 = 0x23;
uint16_t const _e16 = 0x24;
uint16_t const _e17 = 0x25;
uint16_t const _e18 = 0x26;
uint16_t const _e19 = 0x27;
uint16_t const _e20 = 0x28;
uint16_t const _e21 = 0x29;
uint16_t const _e22 = 0x2a;
uint16_t const _e23 = 0x2b;
uint16_t const _e24 = 0x2c;
uint16_t const _e25 = 0x2d;
uint16_t const _e26 = 0x2e;
uint16_t const _e27 = 0x2f;
uint16_t const _e28 = 0x30;
uint16_t const _e29 = 0x31;
uint16_t const _e30 = 0x32;
uint16_t const _e31 = 0x33;
uint16_t const _tmp0 = 0x34;
uint16_t const _tmp1 = 0x35;
uint16_t const _sa = 0x36;
uint16_t const _sx = 0x37;
uint16_t const _sy = 0x38;
uint16_t const last_c_label = _sy;

//
// /home/sylvain/workspace/nes/tilt/game/mem_labels.asm
//

//
// C code labels
//


//
// INGAME labels
//

// State of the player's character
//  May take any value from selected character's state machine
uint16_t const player_a_state = 0x00;
uint16_t const player_b_state = 0x01;

uint16_t const player_a_hitstun = 0x02;
uint16_t const player_b_hitstun = 0x03;
uint16_t const player_a_x = 0x04;
uint16_t const player_b_x = 0x05;
uint16_t const player_a_y = 0x06;
uint16_t const player_b_y = 0x07;
uint16_t const player_a_direction = 0x08; // 0 - watching left
uint16_t const player_b_direction = 0x09; // 1 - watching right
uint16_t const player_a_velocity_v = 0x0a;
uint16_t const player_b_velocity_v = 0x0b;
uint16_t const player_a_velocity_h = 0x0c;
uint16_t const player_b_velocity_h = 0x0d;
uint16_t const player_a_x_screen = 0x0e;
uint16_t const player_b_x_screen = 0x0f;
uint16_t const player_a_y_screen = 0x10;
uint16_t const player_b_y_screen = 0x11;
uint16_t const player_a_state_clock = 0x12;
uint16_t const player_b_state_clock = 0x13;
uint16_t const player_a_hurtbox_left = 0x14;
uint16_t const player_b_hurtbox_left = 0x15;
uint16_t const player_a_hurtbox_right = 0x16;
uint16_t const player_b_hurtbox_right = 0x17;
uint16_t const player_a_hurtbox_top = 0x18;
uint16_t const player_b_hurtbox_top = 0x19;
uint16_t const player_a_hurtbox_bottom = 0x1a;
uint16_t const player_b_hurtbox_bottom = 0x1b;
uint16_t const player_a_hitbox_left = 0x1c;
uint16_t const player_b_hitbox_left = 0x1d;
uint16_t const player_a_hitbox_right = 0x1e;
uint16_t const player_b_hitbox_right = 0x1f;
uint16_t const player_a_hitbox_top = 0x20;
uint16_t const player_b_hitbox_top = 0x21;
uint16_t const player_a_hitbox_bottom = 0x22;
uint16_t const player_b_hitbox_bottom = 0x23;
uint16_t const player_a_hitbox_enabled = 0x24; // 0 - hitbox disabled, 1 - direct hitbox, 2 - custom hitbox
uint16_t const player_b_hitbox_enabled = 0x25; //
uint16_t const player_a_hitbox_force_v = 0x26;
uint16_t const player_b_hitbox_force_v = 0x27;
uint16_t const player_a_hitbox_force_h = 0x28;
uint16_t const player_b_hitbox_force_h = 0x29;
uint16_t const player_a_hitbox_damages = 0x2a;
uint16_t const player_b_hitbox_damages = 0x2b;
uint16_t const player_a_damages = 0x2c;
uint16_t const player_b_damages = 0x2d;
uint16_t const player_a_x_low = 0x2e;
uint16_t const player_b_x_low = 0x2f;
uint16_t const player_a_y_low = 0x30;
uint16_t const player_b_y_low = 0x31;
uint16_t const player_a_velocity_v_low = 0x32;
uint16_t const player_b_velocity_v_low = 0x33;
uint16_t const player_a_velocity_h_low = 0x34;
uint16_t const player_b_velocity_h_low = 0x35;
uint16_t const player_a_hitbox_force_v_low = 0x36;
uint16_t const player_b_hitbox_force_v_low = 0x37;
uint16_t const player_a_hitbox_force_h_low = 0x38;
uint16_t const player_b_hitbox_force_h_low = 0x39;
uint16_t const player_a_hitbox_base_knock_up_v_high = 0x3a;
uint16_t const player_b_hitbox_base_knock_up_v_high = 0x3b;
uint16_t const player_a_hitbox_base_knock_up_h_high = 0x3c;
uint16_t const player_b_hitbox_base_knock_up_h_high = 0x3d;
uint16_t const player_a_hitbox_base_knock_up_v_low = 0x3e;
uint16_t const player_b_hitbox_base_knock_up_v_low = 0x3f;
uint16_t const player_a_hitbox_base_knock_up_h_low = 0x40;
uint16_t const player_b_hitbox_base_knock_up_h_low = 0x41;
uint16_t const player_a_num_aerial_jumps = 0x42;
uint16_t const player_b_num_aerial_jumps = 0x43;
uint16_t const player_a_stocks = 0x44;
uint16_t const player_b_stocks = 0x45;
uint16_t const player_a_special_jumps = 0x46; // F... ...W - W = wall jump OK, F = footstool OK
uint16_t const player_b_special_jumps = 0x47;
uint16_t const player_a_state_field1 = 0x48;
uint16_t const player_b_state_field1 = 0x49;
uint16_t const player_a_state_field2 = 0x4a;
uint16_t const player_b_state_field2 = 0x4b;
uint16_t const player_a_state_field3 = 0x4c;
uint16_t const player_b_state_field3 = 0x4d;
uint16_t const player_a_gravity_lsb = 0x4e;
uint16_t const player_b_gravity_lsb = 0x4f;
uint16_t const player_a_gravity_msb = 0x50;
uint16_t const player_b_gravity_msb = 0x51;

uint16_t const player_a_grounded = 0x52; // $00 if not grounded, else the offset of grounded platform from stage_data
uint16_t const player_b_grounded = 0x53;
uint16_t const player_a_walled = 0x54; // $00 if not touching a wall, else the offset of the platform from stage_data
uint16_t const player_b_walled = 0x55;
uint16_t const player_a_walled_direction = 0x56; // DIRECTION_LEFT - player is on the left of the wall
uint16_t const player_b_walled_direction = 0x57; // DIRECTION_RIGHT - player is on the right of the wall
uint16_t const player_a_ceiled = 0x58; // $00 if not touching a ceiling, else the offset of the platform from stage_data
uint16_t const player_b_ceiled = 0x59;

uint16_t const player_a_hurtbox_left_msb = 0x5a;
uint16_t const player_b_hurtbox_left_msb = 0x5b;
uint16_t const player_a_hurtbox_right_msb = 0x5c;
uint16_t const player_b_hurtbox_right_msb = 0x5d;
uint16_t const player_a_hurtbox_top_msb = 0x5e;
uint16_t const player_b_hurtbox_top_msb = 0x5f;
uint16_t const player_a_hurtbox_bottom_msb = 0x60;
uint16_t const player_b_hurtbox_bottom_msb = 0x61;
uint16_t const player_a_hitbox_left_msb = 0x62;
uint16_t const player_b_hitbox_left_msb = 0x63;
uint16_t const player_a_hitbox_right_msb = 0x64;
uint16_t const player_b_hitbox_right_msb = 0x65;
uint16_t const player_a_hitbox_top_msb = 0x66;
uint16_t const player_b_hitbox_top_msb = 0x67;
uint16_t const player_a_hitbox_bottom_msb = 0x68;
uint16_t const player_b_hitbox_bottom_msb = 0x69;

uint16_t const player_a_custom_hitbox_routine_lsb = player_a_hitbox_base_knock_up_v_low; // $3e
uint16_t const player_b_custom_hitbox_routine_lsb = player_b_hitbox_base_knock_up_v_low; // $3f
uint16_t const player_a_custom_hitbox_routine_msb = player_a_hitbox_base_knock_up_v_high; // $3a
uint16_t const player_b_custom_hitbox_routine_msb = player_b_hitbox_base_knock_up_v_high; // $3b
uint16_t const player_a_custom_hitbox_directional1_lsb = player_a_hitbox_base_knock_up_h_low; // $40
uint16_t const player_b_custom_hitbox_directional1_lsb = player_b_hitbox_base_knock_up_h_low; // $41
uint16_t const player_a_custom_hitbox_directional1_msb = player_a_hitbox_base_knock_up_h_high; // $3c
uint16_t const player_b_custom_hitbox_directional1_msb = player_b_hitbox_base_knock_up_h_high; // $3d
uint16_t const player_a_custom_hitbox_directional2_lsb = player_a_hitbox_force_h_low; // $38
uint16_t const player_b_custom_hitbox_directional2_lsb = player_b_hitbox_force_h_low; // $39
uint16_t const player_a_custom_hitbox_directional2_msb = player_a_hitbox_force_h; // $28
uint16_t const player_b_custom_hitbox_directional2_msb = player_b_hitbox_force_h; // $29
uint16_t const player_a_custom_hitbox_value1 = player_a_hitbox_force_v_low; // $36
uint16_t const player_b_custom_hitbox_value1 = player_b_hitbox_force_v_low; // $37
uint16_t const player_a_custom_hitbox_value2 = player_a_hitbox_force_v; // $26
uint16_t const player_b_custom_hitbox_value2 = player_b_hitbox_force_v; // $27
uint16_t const player_a_custom_hitbox_value3 = player_a_hitbox_damages; // $2a
uint16_t const player_b_custom_hitbox_value3 = player_b_hitbox_damages; // $2b

uint16_t const player_a_last_shown_damage = 0x6a;
uint16_t const player_b_last_shown_damage = 0x6b;
uint16_t const player_a_last_shown_stocks = 0x6c;
uint16_t const player_b_last_shown_stocks = 0x6d;

uint16_t const stage_fade_level = 0x6e;
uint16_t const stage_screen_effect = 0x6f; // 0 - The screen is clean from effects, any other - There are effects at play (inc when starting an effect, dec on end)

uint16_t const screen_shake_counter = 0x70;
uint16_t const screen_shake_current_x = 0x71;
uint16_t const screen_shake_current_y = 0x72;

uint16_t const directional_indicator_player_a_counter = 0x73;
uint16_t const directional_indicator_player_b_counter = 0x74;
uint16_t const directional_indicator_player_a_direction_x_high = 0x75;
uint16_t const directional_indicator_player_b_direction_x_high = 0x76;
uint16_t const directional_indicator_player_a_direction_x_low = 0x77;
uint16_t const directional_indicator_player_b_direction_x_low = 0x78;
uint16_t const directional_indicator_player_a_direction_y_high = 0x79;
uint16_t const directional_indicator_player_b_direction_y_high = 0x7a;
uint16_t const directional_indicator_player_a_direction_y_low = 0x7b;
uint16_t const directional_indicator_player_b_direction_y_low = 0x7c;

uint16_t const death_particles_player_a_counter = 0x7d;
uint16_t const death_particles_player_b_counter = 0x7e;

uint16_t const slow_down_counter = 0x7f;

uint16_t const stage_state_begin = 0x80; // $80 to $8f

// particles lo position tables
//  | byte 0 | bytes 1 to 7       | byte 8 | bytes 9 to 15      |
//  | unused | player A particles | unused | player B particles |
uint16_t const directional_indicator_player_a_position_x_low = 0x90; // $90 to $9f - unused $90 and $98
uint16_t const directional_indicator_player_a_position_y_low = 0xa0; // $a0 to $af - unused $a0 and $a8

//$b0 to $bf used by network engine
//$c0 to $c9 used by audio engine
//$d0 to $ff used by global labels, constants and registers ($e5 and $e6 are still free)

// Stages common variables
uint16_t const stage_restore_screen_step = 0x0560; // Set to zero to start asynchrone restoration of the screen by stage's logic
uint16_t const stage_current_fade_level = 0x0561;

// Deathplosion
uint16_t const deathplosion_step = 0x0562;
uint16_t const deathplosion_pos = 0x0563;
uint16_t const deathplosion_origin = 0x0564;

// Temporary velocity
uint16_t const player_a_temporary_velocity_h_low = 0x0565;
uint16_t const player_b_temporary_velocity_h_low = 0x0566;
uint16_t const player_a_temporary_velocity_h = 0x0567;
uint16_t const player_b_temporary_velocity_h = 0x0568;
uint16_t const player_a_temporary_velocity_v_low = 0x0569;
uint16_t const player_b_temporary_velocity_v_low = 0x056a;
uint16_t const player_a_temporary_velocity_v = 0x056b;
uint16_t const player_b_temporary_velocity_v = 0x056c;

//$056d-$057f unused

uint16_t const players_palettes = 0x0580; // $0580 to $059f - 4 nametable buffers (8 bytes each) containing avatars palettes in normal and alternate mode
uint16_t const player_a_animation = 0x05a0; // $05a0 to $05ac - player a's animation state
uint16_t const player_b_animation = 0x05ad; // $05ad to $05b9 - player b's animation state
uint16_t const player_a_out_of_screen_indicator = 0x05ba; // $05ba to $05c6 - player a's out of screen animation state
uint16_t const player_b_out_of_screen_indicator = 0x05c7; // $05c7 to $05d3 - player b's out of screen animation state

uint16_t const ai_current_action_lsb = 0x05d4;
uint16_t const ai_current_action_msb = 0x05d5;
uint16_t const ai_current_action_counter = 0x05d6;
uint16_t const ai_current_action_step = 0x05d7;
uint16_t const ai_current_action_modifier = 0x05d8;
uint16_t const ai_delay = 0x05d9;
uint16_t const ai_max_delay = 0x05da;

uint16_t const game_winner = 0x05db; // Set to winner's player number after the game is finished

uint16_t const game_mode_state_begin = 0x05dc;

uint16_t const local_mode_paused = game_mode_state_begin; // $05dc
uint16_t const local_mode_state_end = local_mode_paused+1;

// Arcade mode stuff not expected to be preseved by the encounter
uint16_t const arcade_mode_stage_type = 0x05dd;

uint16_t const arcade_mode_targets_x = 0x05de; // $05de to $05e7
uint16_t const arcade_mode_targets_y = 0x05e8; // $05e8 to $05f1
uint16_t const arcade_mode_target_break_animation = 0x05f2; // $05f2 to $05fe
uint16_t const arcade_mode_target_break_animation_timer = 0x05ff;

uint16_t const arcade_mode_run_teleport_animation = 0x05f2; // $05f2 to $05fe
uint16_t const arcade_mode_run_teleport_timer = 0x05ff;

uint16_t const game_mode_state_end = 0x05ff; // Inclusive (game mode can safely write here)

//
// Stage specific labels
//

uint16_t const stages_magma_frame_cnt = 0x8f;

uint16_t const stage_pit_platform1_direction_v = 0x80;
uint16_t const stage_pit_platform2_direction_v = 0x81;
uint16_t const stage_pit_platform1_direction_h = 0x82;
uint16_t const stage_pit_platform2_direction_h = 0x83;

uint16_t const stage_thehunt_gem_position_x_low = 0x80;
uint16_t const stage_thehunt_gem_position_x_high = 0x81;
uint16_t const stage_thehunt_gem_position_y_low = 0x82;
uint16_t const stage_thehunt_gem_position_y_high = 0x83;
uint16_t const stage_thehunt_gem_velocity_h_low = 0x84;
uint16_t const stage_thehunt_gem_velocity_h_high = 0x85;
uint16_t const stage_thehunt_gem_velocity_v_low = 0x86;
uint16_t const stage_thehunt_gem_velocity_v_high = 0x87;
uint16_t const stage_thehunt_gem_cooldown_low = 0x88;
uint16_t const stage_thehunt_gem_cooldown_high = 0x89;
uint16_t const stage_thehunt_gem_state = 0x8a; // one of STAGE_GEM_GEM_STATE_*
uint16_t const stage_thehunt_buffed_player = 0x8b;
uint16_t const stage_thehunt_last_opponent_state = 0x8c;
uint16_t const stage_thehunt_frame_cnt = stages_magma_frame_cnt;

//Note - $90 to $af are used by DI particles

//
// Network engine labels
//

uint16_t const server_current_frame_byte0 = 0xb0;
uint16_t const server_current_frame_byte1 = 0xb1;
uint16_t const server_current_frame_byte2 = 0xb2;
uint16_t const server_current_frame_byte3 = 0xb3;
uint16_t const network_rollback_mode = 0xb4; // 0 - normal, 1 - rolling // Note - also used by game tick to know if a frame will be drawn, may be renamed something more generic like "dummy_frame"

uint16_t const network_current_frame_byte0 = 0xb5;
uint16_t const network_current_frame_byte1 = 0xb6;
uint16_t const network_current_frame_byte2 = 0xb7;
uint16_t const network_current_frame_byte3 = 0xb8;

uint16_t const network_client_id_byte0 = 0xb9;
uint16_t const network_client_id_byte1 = 0xba;
uint16_t const network_client_id_byte2 = 0xbb;
uint16_t const network_client_id_byte3 = 0xbc;

uint16_t const network_last_sent_btns = 0xbd;
uint16_t const network_local_player_number = 0xbe;
uint16_t const network_frame_diff = 0xbf;

//
// Network login labels
//

// TODO for now expects RAINBOW's WRAM at $6000, should fit in normal NES RAM + RAINBOW files

uint16_t const network_login = 0x6000; // $6000-$600f
uint16_t const network_password = 0x6010; // $6010-$601f
uint16_t const network_logged = 0x6020;
uint16_t const network_ranked = 0x6021;
//$6022-$602f unused
uint16_t const network_game_password = 0x6030; // $6030-$603f

//
// TITLE labels
//

uint16_t const title_cheatstate = 0x00;
uint16_t const title_animation_frame = 0x01;
uint16_t const title_animation_state = 0x02;
uint16_t const title_original_music_state = 0x03;
uint16_t const title_wait_time = 0x04;

uint16_t const title_buffer = 0x0580;

//
// MODE_SELECTION labels
//

uint16_t const mode_selection_mem_buffer = 0x0580;

//
// CREDITS labels
//

uint16_t const credits_current_page = last_c_label+1; // $39
uint16_t const credits_page_dirty = credits_current_page+1; // $3a
uint16_t const credits_last_illustration_lsb = credits_page_dirty+1; // $3b
uint16_t const credits_last_illustration_msb = credits_last_illustration_lsb+1; // $3c
uint16_t const credits_last_illustration_bank = credits_last_illustration_msb+1; // $3d

uint16_t const credits_mem_buffer = 0x0580; // $0580 to $05bf (64 bytes)
uint16_t const credits_cursor_anim = 0x05c0; // $05c0 to $05cc
//$05cd to $05ff - unused
uint16_t const credits_bubble_anim_1 = 0x068d; // to $0699
uint16_t const credits_bubble_anim_2 = 0x069a; // to $06a6
uint16_t const credits_bubble_anim_3 = 0x06a7; // to $06b3
uint16_t const credits_bubble_anim_4 = 0x06b4; // to $06c0
uint16_t const credits_bubble_anims = credits_bubble_anim_1;

//
// ONLINE_MODE_SELECTION labels
//

uint16_t const online_mode_selection_current_option = last_c_label+1; // $39
uint16_t const online_mode_ship_dest_x = online_mode_selection_current_option+1; // $3a
uint16_t const online_mode_ship_dest_y = online_mode_ship_dest_x+1; // $3b
uint16_t const online_mode_frame_count = online_mode_ship_dest_y+1; // $3c
uint16_t const online_mode_rnd = online_mode_frame_count+1; // $3d-$40
uint16_t const online_mode_satellite_state = online_mode_rnd+4; // $41-$49

uint16_t const online_mode_selection_mem_buffer = 0x0580; // $0580 to $05bf (64 bytes)
uint16_t const online_mode_selection_cursor_anim = 0x05c0; // $05c0 to $05cc
uint16_t const online_mode_selection_ship_anim = 0x05cd; // $05cd to $05d9
uint16_t const online_mode_selection_monster_anim = 0x05da; // $05da to $05e6
uint16_t const online_mode_selection_satellite_anim = 0x05e7; // $05e7 to $05e3

// Update screen
//  Technically ONLINE_MODE_SELECTION state, but can overide any online screen's field

uint16_t const update_screen_txtx = last_c_label+1; // $39
uint16_t const update_screen_txty = update_screen_txtx+1; // $3a
uint16_t const update_screen_scroll_state = update_screen_txty+1; // $3b
uint16_t const update_screen_log_position = update_screen_scroll_state+1; // 3d
uint16_t const update_screen_erase_sector_result = update_screen_log_position+1; // $3e
uint16_t const update_screen_program_page_result_flags = update_screen_erase_sector_result+1; // $3f
uint16_t const update_screen_program_page_result_count = update_screen_program_page_result_flags+1; // $40

//
// WIFI_SETTINGS labels
//

uint16_t const wifi_settings_zp_mem = last_c_label+1;
uint16_t const wifi_settings_mem = 0x0580;

//
// CONFIG labels
//

uint16_t const config_selected_option = last_c_label+1; // $39
uint16_t const config_music_enabled = config_selected_option+1; // $3a
uint16_t const config_screen_cursor_state = config_music_enabled+1; // $3b-$3c

uint16_t const config_screen_cursor_anim = 0x0580;

//
// CHARACTER_SELECTION labels
//

uint16_t const character_selection_player_a_bg_task = last_c_label+1; // $39-$3f
uint16_t const character_selection_player_b_bg_task = character_selection_player_a_bg_task+7; // $40-$46
uint16_t const character_selection_player_a_ready = character_selection_player_b_bg_task+7; // $47
uint16_t const character_selection_player_b_ready = character_selection_player_a_ready+1; // $48
uint16_t const character_selection_player_a_rnd = character_selection_player_b_ready+1; // $49
uint16_t const character_selection_player_b_rnd = character_selection_player_a_rnd+1; // $4a
uint16_t const character_selection_control_scheme = character_selection_player_b_rnd+1; // $4b
uint16_t const character_selection_fix_screen_bg_task = character_selection_control_scheme+1; // $4c

uint16_t const character_selection_mem_buffer = 0x0580; // $0580 to $05bf (4 tiles of 16 bytes each)
uint16_t const character_selection_player_a_cursor_anim = 0x05c0; // $05c0 to $05cc
uint16_t const character_selection_player_b_cursor_anim = 0x05cd; // $05cd to $05d9
uint16_t const character_selection_player_a_char_anim = 0x05da; // $05da to $05e6
uint16_t const character_selection_player_b_char_anim = 0x05e7; // $05e7 to $05f3
//$05f4-$05ff unused
uint16_t const character_selection_player_a_builder_anim = 0x0680; // $0680 to $068c
uint16_t const character_selection_player_b_builder_anim = 0x068d; // $068d to $0699

//
// STAGE_SELECTION labels
//

uint16_t const stage_selection_cursor_anim = last_c_label+1;
uint16_t const stage_selection_bg_task = stage_selection_cursor_anim+13;

uint16_t const stage_selection_mem_buffer = 0x0580; // $0580 to $05bf (4*16 bytes)

//
// NETPLAY_LAUNCH labels
//

uint16_t const netplay_launch_cursor_anim = last_c_label+1; // $39-$45
uint16_t const netplay_launch_bg_task = netplay_launch_cursor_anim+13; // $46-$47
uint16_t const netplay_launch_fg_task = netplay_launch_bg_task+2; // $48-$49
uint16_t const netplay_launch_server = netplay_launch_fg_task+2; // $4a
uint16_t const netplay_launch_nb_servers = netplay_launch_server+1; // $4b
uint16_t const netplay_launch_local_ping_count = netplay_launch_nb_servers+1; // $4c
uint16_t const netplay_launch_local_ping_values = netplay_launch_local_ping_count+1; // $4d-$4f
uint16_t const netplay_launch_local_ping_quality = netplay_launch_local_ping_values+3; // $50
uint16_t const netplay_launch_rival_ping_count = netplay_launch_local_ping_quality+1; // $51
uint16_t const netplay_launch_rival_ping_values = netplay_launch_rival_ping_count+1; // $52-$54
uint16_t const netplay_launch_rival_ping_quality = netplay_launch_rival_ping_values+3; // $55
uint16_t const netplay_launch_countdown = netplay_launch_rival_ping_quality+1; // $56
uint16_t const netplay_launch_original_music_state = netplay_launch_countdown+1; // $57
uint16_t const netplay_launch_rival_system = netplay_launch_original_music_state+1; // $58

uint16_t const netplay_launch_bg_mem_buffer = 0x0580; // $0580 to $???? (current biggest usage, 3+16 bytes, map illustration draw)

//
// ARCADE_MODE labels
//

uint16_t const arcade_mode_last_game_winner = last_c_label+1; // $39

uint16_t const arcade_mode_bg_mem_buffer = 0x0580; // $0580 to $05a3 (max text size 32 + nt buffer header) //TODO rename to "arcade_mode_mem_buffer", it got more uses than just nt buffers
uint16_t const arcade_mode_encounter = 0x05a4; // $05a4 to $05ac (ENCOUNTER_ENTRY_SIZE)

uint16_t const arcade_mode_congratz_medals_x_subpixel = 0x05a4; // $05a4 to $05b3 (room for 16 medals)
uint16_t const arcade_mode_congratz_medals_y_subpixel = 0x05b4; // $05b4 to $05c3 (room for 16 medals)
uint16_t const arcade_mode_congratz_medals_h_velocity = 0x05c4; // $05c4 to $05d3
uint16_t const arcade_mode_congratz_medals_v_velocity = 0x05d4; // $05d4 to $05e3

uint16_t const cutscene_anims = 0x0580; // $0580 to $05b3 - 4 animation states
uint16_t const cutscene_anims_enabled = 0x05b4; // $05b4 to $05b7 - 4 bytes
uint16_t const cutscene_anims_velocity_h_pixel = 0x05b8; // to $05bb
uint16_t const cutscene_anims_velocity_h_subpixel = 0x05bc; // to $05bf
uint16_t const cutscene_anims_velocity_v_pixel = 0x05c0; // to $05c3
uint16_t const cutscene_anims_velocity_v_subpixel = 0x05c4; // to $05c7
uint16_t const cutscene_anims_pos_x_subpixel = 0x05c8; // to $05cb
uint16_t const cutscene_anims_pos_y_subpixel = 0x05cc; // to $05cf
uint16_t const cutscene_anims_bank = 0x05d0; // to $05d3
uint16_t const cutscene_anims_player = 0x05d4; // to $05d7
uint16_t const cutscene_autoscroll_h = 0x05d8;
uint16_t const cutscene_autoscroll_v = 0x05d9;
uint16_t const cutscene_frame_count = 0x05da;
uint16_t const cutscene_frames_skippable = 0x05db;
uint16_t const cutscene_sprite0_hit = 0x05dc;
uint16_t const cutscene_sprite0_scroll = 0x05dd;
uint16_t const cutscene_flags = 0x05de; // Freely usable by cutscene script, opcodes won't overwrite it

//
// JUKEBOX labels
//

uint16_t const jukebox_zp_mem = last_c_label+1; // $39
uint16_t const jukebox_mem = 0x0580;

//
// SOCIAL labels
//

uint16_t const social_link = 0x00;
uint16_t const social_draw_step = 0x01;
uint16_t const social_draw_line_addr_lsb = 0x02;
uint16_t const social_draw_line_addr_msb = 0x03;
uint16_t const social_link_state = 0x04; // 0 - showing links page, 1 showing a link

uint16_t const social_mem_buffer = 0x0560; // max usage - 4 bytes
uint16_t const social_cursor_anim = 0x580;

//
// Common menus labels
//  Common to TITLE, CONFIG, MODE_SELECTION and CREDITS
//  Note that if other screens use this range, it must be repaired when comming back
//

uint16_t const menu_common_cloud_1_x = 0x50;
uint16_t const menu_common_cloud_2_x = 0x51;
uint16_t const menu_common_cloud_3_x = 0x52;
uint16_t const menu_common_cloud_4_x = 0x53;
uint16_t const menu_common_cloud_5_x = 0x54;

uint16_t const menu_common_cloud_1_y = 0x55;
uint16_t const menu_common_cloud_2_y = 0x56;
uint16_t const menu_common_cloud_3_y = 0x57;
uint16_t const menu_common_cloud_4_y = 0x58;
uint16_t const menu_common_cloud_5_y = 0x59;

uint16_t const menu_common_cloud_1_y_msb = 0x5a;
uint16_t const menu_common_cloud_2_y_msb = 0x5b;
uint16_t const menu_common_cloud_3_y_msb = 0x5c;
uint16_t const menu_common_cloud_4_y_msb = 0x5d;
uint16_t const menu_common_cloud_5_y_msb = 0x5e;

uint16_t const menu_common_cloud_1_x_subpixel = 0x5f;
uint16_t const menu_common_cloud_2_x_subpixel = 0x60;
uint16_t const menu_common_cloud_3_x_subpixel = 0x61;
uint16_t const menu_common_cloud_4_x_subpixel = 0x62;
uint16_t const menu_common_cloud_5_x_subpixel = 0x63;

uint16_t const screen_sprites_y_lsb = 0x0400; // $0400 to $043f
uint16_t const screen_sprites_y_msb = 0x0440; // $0440 to $047f

//
// GAMEOVER labels
//

uint16_t const gameover_balloon0_x = 0x50;
uint16_t const gameover_balloon1_x = 0x51;
uint16_t const gameover_balloon2_x = 0x52;
uint16_t const gameover_balloon3_x = 0x53;
uint16_t const gameover_balloon4_x = 0x54;
uint16_t const gameover_balloon5_x = 0x55;
uint16_t const gameover_balloon0_x_low = 0x56;
uint16_t const gameover_balloon1_x_low = 0x57;
uint16_t const gameover_balloon2_x_low = 0x58;
uint16_t const gameover_balloon3_x_low = 0x59;
uint16_t const gameover_balloon4_x_low = 0x5a;
uint16_t const gameover_balloon5_x_low = 0x5b;
uint16_t const gameover_balloon0_y = 0x5c;
uint16_t const gameover_balloon1_y = 0x5d;
uint16_t const gameover_balloon2_y = 0x5e;
uint16_t const gameover_balloon3_y = 0x5f;
uint16_t const gameover_balloon4_y = 0x60;
uint16_t const gameover_balloon5_y = 0x61;
uint16_t const gameover_balloon0_y_low = 0x62;
uint16_t const gameover_balloon1_y_low = 0x63;
uint16_t const gameover_balloon2_y_low = 0x64;
uint16_t const gameover_balloon3_y_low = 0x65;
uint16_t const gameover_balloon4_y_low = 0x66;
uint16_t const gameover_balloon5_y_low = 0x67;

uint16_t const gameover_balloon0_velocity_h = 0x68;
uint16_t const gameover_balloon1_velocity_h = 0x69;
uint16_t const gameover_balloon2_velocity_h = 0x6a;
uint16_t const gameover_balloon3_velocity_h = 0x6b;
uint16_t const gameover_balloon4_velocity_h = 0x6c;
uint16_t const gameover_balloon5_velocity_h = 0x6d;

uint16_t const gameover_random = 0x4d;
uint16_t const gameover_gamepads_ready_a = 0x4e;
uint16_t const gameover_gamepads_ready_b = 0x4f;

uint16_t const gameover_winner = game_winner;

//
// Audio engine labels
//

uint16_t const audio_music_enabled = 0xc0;

uint16_t const audio_current_track_lsb = 0xc1;
uint16_t const audio_current_track_msb = 0xc2;
uint16_t const audio_current_track_bank = 0xc3;

uint16_t const audio_square1_sample_num = 0xc4;
uint16_t const audio_square2_sample_num = 0xc5;
uint16_t const audio_triangle_sample_num = 0xc6;
uint16_t const audio_noise_sample_num = 0xc7;

uint16_t const audio_vframe_cnt = 0xc8; //TODO merge it with the vframe counter for wait_next_frame
uint16_t const audio_50hz = 0xc9; // 0 - 60 Hz, 1 - 50 Hz

uint16_t const audio_square1_current_opcode = 0x0604;
uint16_t const audio_square2_current_opcode = 0x0605;
uint16_t const audio_triangle_current_opcode = 0x0606;
uint16_t const audio_noise_current_opcode = 0x0607;
uint16_t const audio_square1_current_opcode_msb = 0x0608;
uint16_t const audio_square2_current_opcode_msb = 0x0609;
uint16_t const audio_triangle_current_opcode_msb = 0x060a;
uint16_t const audio_noise_current_opcode_msb = 0x060b;
uint16_t const audio_square1_wait_cnt = 0x060c;
uint16_t const audio_square2_wait_cnt = 0x060d;
uint16_t const audio_triangle_wait_cnt = 0x060e;
uint16_t const audio_noise_wait_cnt = 0x060f;
uint16_t const audio_square1_default_note_duration = 0x0610;
uint16_t const audio_square2_default_note_duration = 0x0611;
uint16_t const audio_triangle_default_note_duration = 0x0612;
uint16_t const audio_square1_apu_envelope_byte = 0x0613;
uint16_t const audio_square2_apu_envelope_byte = 0x0614;
uint16_t const audio_square1_apu_timer_low_byte = 0x0615;
uint16_t const audio_square2_apu_timer_low_byte = 0x0616;
uint16_t const audio_triangle_apu_timer_low_byte = 0x0617;
uint16_t const audio_square1_apu_timer_high_byte = 0x0618;
uint16_t const audio_square2_apu_timer_high_byte = 0x0619;
uint16_t const audio_triangle_apu_timer_high_byte = 0x061a;
uint16_t const audio_square1_apu_timer_high_byte_old = 0x061b;
uint16_t const audio_square2_apu_timer_high_byte_old = 0x061c;
uint16_t const audio_triangle_apu_timer_high_byte_old = 0x061d; // Actually useless for triangle, but allows to easily merge code for pulse/triangle (unused now, triangle timer is handled in a "if triangle" branch) //TODO remove it once code is stable enough to confidently state that we'll never use it
uint16_t const audio_square1_pitch_slide_lsb = 0x061e;
uint16_t const audio_square2_pitch_slide_lsb = 0x061f;
uint16_t const audio_triangle_pitch_slide_lsb = 0x0620;
uint16_t const audio_square1_pitch_slide_msb = 0x0621;
uint16_t const audio_square2_pitch_slide_msb = 0x0622;
uint16_t const audio_triangle_pitch_slide_msb = 0x0623;

uint16_t const audio_noise_apu_envelope_byte = 0x0624;
uint16_t const audio_noise_apu_period_byte = 0x0625; // bit 4 used to silence the channel, so it is Ls.. PPPP with s handled by the engine
uint16_t const audio_noise_pitch_slide = 0x0626;

uint16_t const audio_fx_noise_pitch_slide = 0x0627;
uint16_t const audio_fx_noise_wait_cnt = 0x0628;
uint16_t const audio_fx_noise_current_opcode = 0x0629;
uint16_t const audio_fx_noise_current_opcode_msb = 0x062a;
uint16_t const audio_fx_noise_current_opcode_bank = 0x062b;
uint16_t const audio_fx_noise_apu_envelope_byte = 0x062c;
uint16_t const audio_fx_noise_apu_period_byte = 0x062d;

//
// Global labels
//

uint16_t const controller_a_btns = 0xd0;
uint16_t const controller_b_btns = 0xd1;
uint16_t const controller_a_last_frame_btns = 0xd2;
uint16_t const controller_b_last_frame_btns = 0xd3;
uint16_t const global_game_state = 0xd4;

uint16_t const nmi_processing = 0xd5;

uint16_t const scroll_x = 0xd6;
uint16_t const scroll_y = 0xd7;
uint16_t const ppuctrl_val = 0xd8;

uint16_t const config_initial_stocks = 0xd9;
uint16_t const config_ai_level = 0xda;
uint16_t const config_selected_stage = 0xdb;
uint16_t const config_player_a_character_palette = 0xdc;
uint16_t const config_player_b_character_palette = 0xdd;
uint16_t const config_player_a_weapon_palette = 0xde;
uint16_t const config_player_b_weapon_palette = 0xdf;
uint16_t const config_player_a_character = 0xe0;
uint16_t const config_player_b_character = 0xe1;
uint16_t const config_game_mode = 0xe2;

uint16_t const current_bank = 0xe3;
uint16_t const nt_buffer_timer = 0xe4;

//
// Zero-page constants
//

uint16_t const pal_emulation_counter = 0xe7; // $ff - disabled, set to 5 to enable
uint16_t const system_index = 0xe8; // 0 - PAL, 1 - NTSC

//
// Zero-page registers
//

// Extra register to hold a player number, used when register X is inconvenient
uint16_t const player_number = 0xe9;

// Uncomonly used register, for when we really want to avoid possible conflicts with tmpfields
uint16_t const extra_tmpfield1 = 0xea;
uint16_t const extra_tmpfield2 = 0xeb;
uint16_t const extra_tmpfield3 = 0xec;
uint16_t const extra_tmpfield4 = 0xed;
uint16_t const extra_tmpfield5 = 0xee;
uint16_t const extra_tmpfield6 = 0xef;

// Standard zeropage registers
uint16_t const tmpfield1 = 0xf0;
uint16_t const tmpfield2 = 0xf1;
uint16_t const tmpfield3 = 0xf2;
uint16_t const tmpfield4 = 0xf3;
uint16_t const tmpfield5 = 0xf4;
uint16_t const tmpfield6 = 0xf5;
uint16_t const tmpfield7 = 0xf6;
uint16_t const tmpfield8 = 0xf7;
uint16_t const tmpfield9 = 0xf8;
uint16_t const tmpfield10 = 0xf9;
uint16_t const tmpfield11 = 0xfa;
uint16_t const tmpfield12 = 0xfb;
uint16_t const tmpfield13 = 0xfc;
uint16_t const tmpfield14 = 0xfd;
uint16_t const tmpfield15 = 0xfe;
uint16_t const tmpfield16 = 0xff;

//
// Non-zeropage memory
//

uint16_t const stack = 0x0100;
uint16_t const oam_mirror = 0x0200;
uint16_t const nametable_buffers = 0x0300;

uint16_t const stage_data = 0x0400;
uint16_t const player_a_objects = 0x0480; // Objects independent to character's state like floating hitboxes, temporary platforms, etc
uint16_t const player_b_objects = 0x04c0; //

uint16_t const sha_w = 0x0400; // $0400 to $04ff - One page, completely garbaged by sha256_sum routine
uint16_t const sha_msg = 0x0440; // $0440 to $047f - Overlaps sha_w, will be overwriten by computations
uint16_t const sha_h = 0x0700; // $0700 to $071f - 32 bytes hash result
uint16_t const sha_working_variables = 0x0720; // $0720 to $073f
uint16_t const sha_length_lsb = 0x0740;
uint16_t const sha_length_msb = 0x0741;

uint16_t const particle_blocks = 0x0500;
uint16_t const particle_block_0 = 0x0500;
uint16_t const particle_block_1 = 0x0520;

uint16_t const previous_global_game_state = 0x0540;

uint16_t const config_requested_stage = 0x0541;
uint16_t const config_requested_player_a_character = 0x0542;
uint16_t const config_requested_player_b_character = 0x0543;
uint16_t const config_requested_player_a_palette = 0x0544;
uint16_t const config_requested_player_b_palette = 0x0545;
uint16_t const config_ingame_track = 0x0546;
uint16_t const config_player_a_present = 0x0547; // 0 - player is absent, and should not impact the screen, 1 - player is there as usual
uint16_t const config_player_b_present = 0x0548; // 0 - player is absent, and should not impact the screen, 1 - player is there as usual

//unused $0549-$054c

// Arcade mode stuff expected to be preseved by the encounter
uint16_t const arcade_mode_medals = 0x054d; // $054d to $054f
uint16_t const arcade_mode_saved_counter_frames = 0x0550;
uint16_t const arcade_mode_saved_counter_seconds = 0x0551;
uint16_t const arcade_mode_saved_counter_minutes = 0x0552;
uint16_t const arcade_mode_current_encounter = 0x0553;
uint16_t const arcade_mode_player_damages = 0x0554;
uint16_t const arcade_mode_counter_frames = 0x0555;
uint16_t const arcade_mode_counter_seconds = 0x0556;
uint16_t const arcade_mode_counter_minutes = 0x0557;
uint16_t const arcade_mode_nb_credits_used = 0x0558;

// Menu state variable that must persist between screens
uint16_t const menu_state_mode_selection_current_option = 0x0559;

// Nine-gine variables
uint16_t const nt_buffers_begin = 0x055a;
uint16_t const nt_buffers_end = 0x055b;

uint16_t const screen_shake_noise_h = 0x055c;
uint16_t const screen_shake_noise_v = 0x055d;
uint16_t const screen_shake_speed_h = 0x055e;
uint16_t const screen_shake_speed_v = 0x055f;

//$0560 to $05ff may be used by game states

//$0600 to $067f may be used by audio engine, see "Audio engine labels"
//$0680 to $06ff may be used by game states

uint16_t const network_last_known_remote_input = 0x07bf;
uint16_t const network_player_local_btns_history = 0x07c0; // one byte per frame, circular buffers, 32 entries
uint16_t const network_player_remote_btns_history = 0x07e0; //

//
// /home/sylvain/workspace/nes/tilt/game/rainbow_lib_declarations.asm
//

//-------------------------------------------------------------------------------
// Commands from NES to ESP
//-------------------------------------------------------------------------------

// ESP CMDS
uint16_t const TOESP_MSG_GET_ESP_STATUS = 0  ; // Get ESP status
uint16_t const TOESP_MSG_DEBUG_GET_LEVEL = 1  ; // Get debug level
uint16_t const TOESP_MSG_DEBUG_SET_LEVEL = 2  ; // Set debug level
uint16_t const TOESP_MSG_DEBUG_LOG = 3  ; // Debug / Log data
uint16_t const TOESP_MSG_CLEAR_BUFFERS = 4  ; // Clear RX/TX buffers
uint16_t const TOESP_MSG_FROMESP_MSG_BUFFER_DROP_FROM_ESP = 5  ; // Drop messages from TX (ESP->outside world) buffer
uint16_t const TOESP_MSG_ESP_GET_FIRMWARE_VERSION = 6  ; // Get Rainbow firmware version
uint16_t const TOESP_MSG_ESP_FACTORY_RESET = 7  ; // Reset ESP to factory settings
uint16_t const TOESP_MSG_ESP_RESTART = 8  ; // Restart ESP

// WIFI CMDS
uint16_t const TOESP_MSG_WIFI_GET_STATUS = 9  ; // Get WiFi connection status
uint16_t const TOESP_MSG_WIFI_GET_SSID = 10 ; // Get WiFi network SSID
uint16_t const TOESP_MSG_WIFI_GET_IP = 11 ; // Get WiFi IP address

// AP CMDS
uint16_t const TOESP_MSG_WIFI_GET_CONFIG = 12 ; // Get WiFi / Access Point / Web Server config
uint16_t const TOESP_MSG_WIFI_SET_CONFIG = 13 ; // Set WiFi / Access Point / Web Server config
uint16_t const TOESP_MSG_AP_GET_SSID = 14 ; // Get Access Point network SSID
uint16_t const TOESP_MSG_AP_GET_IP = 15 ; // Get Access Point IP address

// RND CMDS
uint16_t const TOESP_MSG_RND_GET_BYTE = 16 ; // Get random byte
uint16_t const TOESP_MSG_RND_GET_BYTE_RANGE = 17 ; // Get random byte between custom min/max
uint16_t const TOESP_MSG_RND_GET_WORD = 18 ; // Get random word
uint16_t const TOESP_MSG_RND_GET_WORD_RANGE = 19 ; // Get random word between custom min/max

// SERVER CMDS
uint16_t const TOESP_MSG_SERVER_GET_STATUS = 20 ; // Get server connection status
uint16_t const TOESP_MSG_SERVER_PING = 21 ; // Get ping between ESP and server
uint16_t const TOESP_MSG_SERVER_SET_PROTOCOL = 22 ; // Set protocol to be used to communicate (WS/UDP)
uint16_t const TOESP_MSG_SERVER_GET_SETTINGS = 23 ; // Get current server host name and port
uint16_t const TOESP_MSG_SERVER_SET_SETTINGS = 24 ; // Set current server host name and port
uint16_t const TOESP_MSG_SERVER_GET_SAVED_SETTINGS = 25 ; // Get server host name and port defined in the Rainbow config file
uint16_t const TOESP_MSG_SERVER_SET_SAVED_SETTINGS = 26 ; // Set server host name and port defined in the Rainbow config file
uint16_t const TOESP_MSG_SERVER_RESTORE_SAVED_SETTINGS = 27 ; // Restore server host name and port to values defined in the Rainbow config
uint16_t const TOESP_MSG_SERVER_CONNECT = 28 ; // Connect to server
uint16_t const TOESP_MSG_SERVER_DISCONNECT = 29 ; // Disconnect from server
uint16_t const TOESP_MSG_SERVER_SEND_MESSAGE = 30 ; // Send message to server

// NETWORK CMDS
uint16_t const TOESP_MSG_NETWORK_SCAN = 31 ; // Scan networks around and return count
uint16_t const TOESP_MSG_NETWORK_GET_SCAN_RESULT = 32 ; // Get result of the last scan
uint16_t const TOESP_MSG_NETWORK_GET_SCANNED_DETAILS = 33 ; // Get scanned network details
uint16_t const TOESP_MSG_NETWORK_GET_REGISTERED = 34 ; // Get registered networks status
uint16_t const TOESP_MSG_NETWORK_GET_REGISTERED_DETAILS = 35 ; // Get registered network SSID
uint16_t const TOESP_MSG_NETWORK_REGISTER = 36 ; // Register network
uint16_t const TOESP_MSG_NETWORK_UNREGISTER = 37 ; // Unregister network
uint16_t const TOESP_MSG_NETWORK_SET_ACTIVE = 38 ; // Set active network

// FILE COMMANDS
uint16_t const TOESP_MSG_FILE_OPEN = 39 ; // Open working file
uint16_t const TOESP_MSG_FILE_CLOSE = 40 ; // Close working file
uint16_t const TOESP_MSG_FILE_STATUS = 41 ; // Get working file status
uint16_t const TOESP_MSG_FILE_EXISTS = 42 ; // Check if file exists
uint16_t const TOESP_MSG_FILE_DELETE = 43 ; // Delete a file
uint16_t const TOESP_MSG_FILE_SET_CUR = 44 ; // Set working file cursor position a file
uint16_t const TOESP_MSG_FILE_READ = 45 ; // Read working file (at specific position)
uint16_t const TOESP_MSG_FILE_WRITE = 46 ; // Write working file (at specific position)
uint16_t const TOESP_MSG_FILE_APPEND = 47 ; // Append data to working file
uint16_t const TOESP_MSG_FILE_COUNT = 48 ; // Count files in a specific path
uint16_t const TOESP_MSG_FILE_GET_LIST = 49 ; // Get list of existing files in a path
uint16_t const TOESP_MSG_FILE_GET_FREE_ID = 50 ; // Get an unexisting file ID in a specific path
uint16_t const TOESP_MSG_FILE_GET_FS_INFO = 51 ; // Get file system details (ESP flash or SD card)
uint16_t const TOESP_MSG_FILE_GET_INFO = 52 ; // Get file info (size + crc32)
uint16_t const TOESP_MSG_FILE_DOWNLOAD = 53 ; // Download a file from a giving URL to a specific path index / file index
uint16_t const TOESP_MSG_FILE_FORMAT = 54 ; // Format file system

//-------------------------------------------------------------------------------
// Commands from ESP to NES
//-------------------------------------------------------------------------------

// ESP CMDS
uint16_t const FROMESP_MSG_READY = 0  ; // ESP is ready
uint16_t const FROMESP_MSG_DEBUG_LEVEL = 1  ; // Returns debug configuration
uint16_t const FROMESP_MSG_ESP_FIRMWARE_VERSION = 2  ; // Returns the Rainbow firmware version
uint16_t const FROMESP_MSG_ESP_FACTORY_RESET = 3  ; // Returns ESP reset's return code

// WIFI / AP CMDS
uint16_t const FROMESP_MSG_WIFI_STATUS = 4  ; // Returns WiFi connection status
uint16_t const FROMESP_MSG_SSID = 5  ; // WiFi/AccessPoint SSID
uint16_t const FROMESP_MSG_IP_ADDRESS = 6  ; // WiFi/AccessPoint IP address
uint16_t const FROMESP_MSG_WIFI_CONFIG = 7  ; // Returns WiFi config

// RND CMDS
uint16_t const FROMESP_MSG_RND_BYTE = 8  ; // Returns random byte value
uint16_t const FROMESP_MSG_RND_WORD = 9  ; // Returns random word value

// SERVER CMDS
uint16_t const FROMESP_MSG_SERVER_STATUS = 10 ; // Returns server connection status
uint16_t const FROMESP_MSG_SERVER_PING = 11 ; // Returns min, max and average round-trip time and number of lost packets
uint16_t const FROMESP_MSG_SERVER_SETTINGS = 12 ; // Returns server settings (host name + port)
uint16_t const FROMESP_MSG_MESSAGE_FROM_SERVER = 13 ; // Message from server

// NETWORK CMDS
uint16_t const FROMESP_MSG_NETWORK_SCAN_RESULT = 14 ; // Returns number of networks found
uint16_t const FROMESP_MSG_NETWORK_SCANNED_DETAILS = 15 ; // Returns details for a scanned network
uint16_t const FROMESP_MSG_NETWORK_REGISTERED_DETAILS = 16 ; // Returns SSID for a registered network
uint16_t const FROMESP_MSG_NETWORK_REGISTERED = 17 ; // Returns registered networks status

// FILE CMDS
uint16_t const FROMESP_MSG_FILE_STATUS = 18 ; // Returns the working file status
uint16_t const FROMESP_MSG_FILE_EXISTS = 19 ; // Returns if file exists or not
uint16_t const FROMESP_MSG_FILE_DELETE = 20 ; // Returns when trying to delete a file
uint16_t const FROMESP_MSG_FILE_LIST = 21 ; // Returns path file list (FILE_GET_LIST)
uint16_t const FROMESP_MSG_FILE_DATA = 22 ; // Returns file data (FILE_READ)
uint16_t const FROMESP_MSG_FILE_COUNT = 23 ; // Returns file count in a specific path
uint16_t const FROMESP_MSG_FILE_ID = 24 ; // Returns a free file ID (FILE_GET_FREE_ID)
uint16_t const FROMESP_MSG_FILE_FS_INFO = 25 ; // Returns file system info (FILE_GET_FS_INFO)
uint16_t const FROMESP_MSG_FILE_INFO = 26 ; // Returns file info (size + CRC32) (FILE_GET_INFO)
uint16_t const FROMESP_MSG_FILE_DOWNLOAD = 27 ; // Returns download result code

//-------------------------------------------------------------------------------
// Constants to be used in commands
//-------------------------------------------------------------------------------

// Server protocol
uint16_t const ESP_PROTOCOL_TCP = 0;
uint16_t const ESP_PROTOCOL_TCP_SECURED = 1;
uint16_t const ESP_PROTOCOL_UDP = 2;

// Wi-Fi status
uint16_t const ESP_WIFI_STATUS_IDLE_STATUS = 0;
uint16_t const ESP_WIFI_STATUS_NO_SSID_AVAIL = 1;
uint16_t const ESP_WIFI_STATUS_SCAN_COMPLETED = 2;
uint16_t const ESP_WIFI_STATUS_CONNECTED = 3;
uint16_t const ESP_WIFI_STATUS_CONNECT_FAILED = 4;
uint16_t const ESP_WIFI_STATUS_CONNECTION_LOST = 5;
uint16_t const ESP_WIFI_STATUS_WRONG_PASSWORD = 6;
uint16_t const ESP_WIFI_STATUS_DISCONNECTED = 7;

// Filesystem directories
uint16_t const ESP_FILE_PATH_SAVE = 0;
uint16_t const ESP_FILE_PATH_ROMS = 1;
uint16_t const ESP_FILE_PATH_USER = 2;

// File open options
uint16_t const ESP_FILE_MODE_AUTO = 0b00000000;
uint16_t const ESP_FILE_MODE_MANUAL = 0b00000001;

// File delete results
uint16_t const ESP_FILE_DELETE_SUCCESS = 0;
uint16_t const ESP_FILE_DELETE_ERROR_WHILE_DELETING_FILE = 1;
uint16_t const ESP_FILE_DELETE_FILE_NOT_FOUND = 2;
uint16_t const ESP_FILE_DELETE_INVALID_PATH_OR_FILE = 3;

// File download results
uint16_t const ESP_FILE_DOWNLOAD_SUCCESS = 0; // Success (HTTP status in 2xx)
uint16_t const ESP_FILE_DOWNLOAD_INVALID_DESTINATION = 1; // Invalid destination (path/filename)
uint16_t const ESP_FILE_DOWNLOAD_ERROR_WHILE_DELETING_FILE = 2; // Error while deleting existing file
uint16_t const ESP_FILE_DOWNLOAD_UNKNOWN_PROTOCOL = 3; // Unknown / unsupported protocol
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR = 4; // Network error
uint16_t const ESP_FILE_DOWNLOAD_HTTP_ERROR = 5; // HTTP status is not in 2xx

uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_CONNECTION_FAILED = 255; // Connection failed
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_SEND_HEADER_FAILED = 254; // Send header failed
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_SEND_PAYLOAD_FILED = 253; // Send payload failed
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_NOT_CONNECTED = 252; // Not connected
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_CONNECTION_LOST = 251; // Connection lost
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_NO_STREAM = 250; // No stream
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_NO_HTTP_SERVER = 249; // No HTTP server
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_OUT_OF_RAM = 248; // Too less RAM
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_ENCODING = 247; // Encoding
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_STREAM_WRITE = 246; // Stream write
uint16_t const ESP_FILE_DOWNLOAD_NETWORK_ERROR_READ_TIMEOUT = 245; // Read timeout

// ESP reset results
uint16_t const ESP_FACTORY_RESET_SUCCESS = 0;
uint16_t const ESP_FACTORY_RESET_ERROR_WHILE_RESETTING_CONFIG = 1;
uint16_t const ESP_FACTORY_RESET_ERROR_WHILE_DELETING_TWEB = 2;
uint16_t const ESP_FACTORY_RESET_ERROR_WHILE_DELETING_WEB = 3;

//-------------------------------------------------------------------------------
// Rainbow registers
//-------------------------------------------------------------------------------

uint16_t const RAINBOW_PRG_BANKING_MODE = 0x4100;

uint16_t const RAINBOW_PRG_ROM_BANKING_1_HI = 0x4108;
uint16_t const RAINBOW_PRG_ROM_BANKING_2_HI = 0x4109;
uint16_t const RAINBOW_PRG_ROM_BANKING_3_HI = 0x410a;
uint16_t const RAINBOW_PRG_ROM_BANKING_4_HI = 0x410b;
uint16_t const RAINBOW_PRG_ROM_BANKING_5_HI = 0x410c;
uint16_t const RAINBOW_PRG_ROM_BANKING_6_HI = 0x410d;
uint16_t const RAINBOW_PRG_ROM_BANKING_7_HI = 0x410e;
uint16_t const RAINBOW_PRG_ROM_BANKING_8_HI = 0x410f;
uint16_t const RAINBOW_PRG_ROM_BANKING_1_LO = 0x4118;
uint16_t const RAINBOW_PRG_ROM_BANKING_2_LO = 0x4119;
uint16_t const RAINBOW_PRG_ROM_BANKING_3_LO = 0x411a;
uint16_t const RAINBOW_PRG_ROM_BANKING_4_LO = 0x411b;
uint16_t const RAINBOW_PRG_ROM_BANKING_5_LO = 0x411c;
uint16_t const RAINBOW_PRG_ROM_BANKING_6_LO = 0x411d;
uint16_t const RAINBOW_PRG_ROM_BANKING_7_LO = 0x411e;
uint16_t const RAINBOW_PRG_ROM_BANKING_8_LO = 0x411f;

uint16_t const RAINBOW_PRG_RAM_BANKING_1_HI = 0x4106;
uint16_t const RAINBOW_PRG_RAM_BANKING_2_HI = 0x4107;
uint16_t const RAINBOW_PRG_RAM_BANKING_1_LO = 0x4116;
uint16_t const RAINBOW_PRG_RAM_BANKING_2_LO = 0x4117;

uint16_t const RAINBOW_FPGA_RAM_BANKING = 0x4115;

uint16_t const RAINBOW_CHR_CONTROL = 0x4120;

uint16_t const RAINBOW_EXT_BG_BANK_HI = 0x4121;

uint16_t const RAINBOW_NAMETABLES_BANK_1 = 0x4126;
uint16_t const RAINBOW_NAMETABLES_BANK_2 = 0x4127;
uint16_t const RAINBOW_NAMETABLES_BANK_3 = 0x4128;
uint16_t const RAINBOW_NAMETABLES_BANK_4 = 0x4129;

uint16_t const RAINBOW_NAMETBALES_CTRL_1 = 0x412a;
uint16_t const RAINBOW_NAMETBALES_CTRL_2 = 0x412b;
uint16_t const RAINBOW_NAMETBALES_CTRL_3 = 0x412c;
uint16_t const RAINBOW_NAMETBALES_CTRL_4 = 0x412d;

uint16_t const RAINBOW_NAMETABLES_SPLIT_BANK = 0x412e;
uint16_t const RAINBOW_NAMETABLES_SPLIT_CTRL = 0x412f;

uint16_t const RAINBOW_CHR_BANKING_1_HI = 0x4130;
uint16_t const RAINBOW_CHR_BANKING_2_HI = 0x4131;
uint16_t const RAINBOW_CHR_BANKING_3_HI = 0x4132;
uint16_t const RAINBOW_CHR_BANKING_4_HI = 0x4133;
uint16_t const RAINBOW_CHR_BANKING_5_HI = 0x4134;
uint16_t const RAINBOW_CHR_BANKING_6_HI = 0x4135;
uint16_t const RAINBOW_CHR_BANKING_7_HI = 0x4136;
uint16_t const RAINBOW_CHR_BANKING_8_HI = 0x4137;
uint16_t const RAINBOW_CHR_BANKING_9_HI = 0x4138;
uint16_t const RAINBOW_CHR_BANKING_10_HI = 0x4139;
uint16_t const RAINBOW_CHR_BANKING_11_HI = 0x413a;
uint16_t const RAINBOW_CHR_BANKING_12_HI = 0x413b;
uint16_t const RAINBOW_CHR_BANKING_13_HI = 0x413c;
uint16_t const RAINBOW_CHR_BANKING_14_HI = 0x413d;
uint16_t const RAINBOW_CHR_BANKING_15_HI = 0x413e;
uint16_t const RAINBOW_CHR_BANKING_16_HI = 0x413f;
uint16_t const RAINBOW_CHR_BANKING_1_LO = 0x4140;
uint16_t const RAINBOW_CHR_BANKING_2_LO = 0x4141;
uint16_t const RAINBOW_CHR_BANKING_3_LO = 0x4142;
uint16_t const RAINBOW_CHR_BANKING_4_LO = 0x4143;
uint16_t const RAINBOW_CHR_BANKING_5_LO = 0x4144;
uint16_t const RAINBOW_CHR_BANKING_6_LO = 0x4145;
uint16_t const RAINBOW_CHR_BANKING_7_LO = 0x4146;
uint16_t const RAINBOW_CHR_BANKING_8_LO = 0x4147;
uint16_t const RAINBOW_CHR_BANKING_9_LO = 0x4148;
uint16_t const RAINBOW_CHR_BANKING_10_LO = 0x4149;
uint16_t const RAINBOW_CHR_BANKING_11_LO = 0x414a;
uint16_t const RAINBOW_CHR_BANKING_12_LO = 0x414b;
uint16_t const RAINBOW_CHR_BANKING_13_LO = 0x414c;
uint16_t const RAINBOW_CHR_BANKING_14_LO = 0x414d;
uint16_t const RAINBOW_CHR_BANKING_15_LO = 0x414e;
uint16_t const RAINBOW_CHR_BANKING_16_LO = 0x414f;

uint16_t const RAINBOW_SCANLINE_IRQ_LATCH = 0x4150;
uint16_t const RAINBOW_SCANLINE_IRQ_CONTROL = 0x4151;
uint16_t const RAINBOW_SCANLINE_IRQ_DISABLE = 0x4152;
uint16_t const RAINBOW_SCANLINE_IRQ_OFFSET = 0x4153;
uint16_t const RAINBOW_SCANLINE_IRQ_JITTER_CNT = 0x4154;

uint16_t const RAINBOW_CPU_CYCLES_IRQ_COUNTER_LO = 0x4158;
uint16_t const RAINBOW_CPU_CYCLES_IRQ_COUNTER_HI = 0x4159;
uint16_t const RAINBOW_CPU_CYCLES_IRQ_CONTROL = 0x415a;
uint16_t const RAINBOW_CPU_CYCLES_IRQ_ACK = 0x415b;

uint16_t const RAINBOW_MAPPER_VERSION = 0x4160;

uint16_t const RAINBOW_IRQ_STATUS = 0x4161;

uint16_t const RAINBOW_WINDOW_SPLIT_X_START = 0x4170;
uint16_t const RAINBOW_WINDOW_SPLIT_X_END = 0x4171;
uint16_t const RAINBOW_WINDOW_SPLIT_Y_START = 0x4172;
uint16_t const RAINBOW_WINDOW_SPLIT_Y_END = 0x4173;
uint16_t const RAINBOW_WINDOW_SPLIT_X_SCROLL = 0x4174;
uint16_t const RAINBOW_WINDOW_SPLIT_Y_SCROLL = 0x4175;

uint16_t const RAINBOW_WIFI_CONF = 0x4190;
uint16_t const RAINBOW_WIFI_RX = 0x4191;
uint16_t const RAINBOW_WIFI_TX = 0x4192;
uint16_t const RAINBOW_WIFI_RX_DEST = 0x4193;
uint16_t const RAINBOW_WIFI_TX_SOURCE = 0x4194;

uint16_t const RAINBOW_PULSE_CHANNEL_1_CONTROL = 0x41a0;
uint16_t const RAINBOW_PULSE_CHANNEL_1_FREQ_LOW = 0x41a1;
uint16_t const RAINBOW_PULSE_CHANNEL_1_FREQ_HIGH = 0x41a2;
uint16_t const RAINBOW_PULSE_CHANNEL_2_CONTROL = 0x41a3;
uint16_t const RAINBOW_PULSE_CHANNEL_2_FREQ_LOW = 0x41a4;
uint16_t const RAINBOW_PULSE_CHANNEL_2_FREQ_HIGH = 0x41a5;
uint16_t const RAINBOW_SAW_CHANNEL_ACCUMULATOR = 0x41a6;
uint16_t const RAINBOW_SAW_CHANNEL_FREQ_LOW = 0x41a7;
uint16_t const RAINBOW_SAW_CHANNEL_FREQ_HIGH = 0x41a8;

uint16_t const RAINBOW_AUDIO_OUTPUT_CONTROL = 0x41a9;

// Aliases
uint16_t const RAINBOW_PRG_BANK_8000_MODE_1_HI = RAINBOW_PRG_ROM_BANKING_1_HI;
uint16_t const RAINBOW_PRG_BANK_8000_MODE_1_LO = RAINBOW_PRG_ROM_BANKING_1_LO;
uint16_t const RAINBOW_PRG_BANK_C000_MODE_1_HI = RAINBOW_PRG_ROM_BANKING_5_HI;
uint16_t const RAINBOW_PRG_BANK_C000_MODE_1_LO = RAINBOW_PRG_ROM_BANKING_5_LO;

//-------------------------------------------------------------------------------
// Message parsing constants
//-------------------------------------------------------------------------------

uint16_t const ESP_MSG_SIZE = 0;
uint16_t const ESP_MSG_TYPE = 1;
uint16_t const ESP_MSG_PAYLOAD = 2;

//-------------------------------------------------------------------------------
// Utility macros
//-------------------------------------------------------------------------------

// Hardcoded position of the buffers for convenience routines
//  If you change buffers positions (RAINBOW_WIFI_RX_DEST/TX_DEST), you should update it
uint16_t const esp_rx_buffer = 0x4800;
uint16_t const esp_tx_buffer = 0x4900;
uint16_t const fixed_bank_index = 35;

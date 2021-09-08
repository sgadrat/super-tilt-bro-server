#pragma once
#include <stdint.h>

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
uint16_t const player_a_hitbox_enabled = 0x24; // 0 - hitbox disabled
uint16_t const player_b_hitbox_enabled = 0x25; // 1 - hitbox enabled
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
uint16_t const player_a_walljump = 0x46;
uint16_t const player_b_walljump = 0x47;
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

// $52 to $56 - unused

uint16_t const player_a_hurtbox_left_msb = 0x57;
uint16_t const player_b_hurtbox_left_msb = 0x58;
uint16_t const player_a_hurtbox_right_msb = 0x59;
uint16_t const player_b_hurtbox_right_msb = 0x5a;
uint16_t const player_a_hurtbox_top_msb = 0x5b;
uint16_t const player_b_hurtbox_top_msb = 0x5c;
uint16_t const player_a_hurtbox_bottom_msb = 0x5d;
uint16_t const player_b_hurtbox_bottom_msb = 0x5e;
uint16_t const player_a_hitbox_left_msb = 0x5f;
uint16_t const player_b_hitbox_left_msb = 0x60;
uint16_t const player_a_hitbox_right_msb = 0x61;
uint16_t const player_b_hitbox_right_msb = 0x62;
uint16_t const player_a_hitbox_top_msb = 0x63;
uint16_t const player_b_hitbox_top_msb = 0x64;
uint16_t const player_a_hitbox_bottom_msb = 0x65;
uint16_t const player_b_hitbox_bottom_msb = 0x66;

uint16_t const player_a_grounded = 0x67; // $00 if not grounded, else the offset of grounded platform from stage_data
uint16_t const player_b_grounded = 0x68;
uint16_t const player_a_walled = 0x69; // $00 if not touching a wall, else the offset of the platform from stage_data
uint16_t const player_b_walled = 0x6a;
uint16_t const player_a_walled_direction = 0x6b; // DIRECTION_LEFT - player is on the left of the wall
uint16_t const player_b_walled_direction = 0x6c; // DIRECTION_RIGHT - player is on the right of the wall

uint16_t const screen_shake_counter = 0x70;
uint16_t const screen_shake_nextval_x = 0x71;
uint16_t const screen_shake_nextval_y = 0x72;

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
// particles lo position tables
//  | byte 0 | bytes 1 to 7       | byte 8 | bytes 9 to 15      |
//  | unused | player A particles | unused | player B particles |
uint16_t const directional_indicator_player_a_position_x_low = 0x90; // $90 to $9f - unused $90 and $98
uint16_t const directional_indicator_player_a_position_y_low = 0xa0; // $a0 to $af - unused $a0 and $a8

uint16_t const death_particles_player_a_counter = 0x7d;
uint16_t const death_particles_player_b_counter = 0x7e;

uint16_t const slow_down_counter = 0x7f;

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

//
// Stage specific labels
//

uint16_t const stage_state_begin = 0x80;

uint16_t const stage_pit_platform1_direction_v = 0x80;
uint16_t const stage_pit_platform2_direction_v = 0x81;
uint16_t const stage_pit_platform1_direction_h = 0x82;
uint16_t const stage_pit_platform2_direction_h = 0x83;

uint16_t const stage_gem_gem_position_x_low = 0x80;
uint16_t const stage_gem_gem_position_x_high = 0x81;
uint16_t const stage_gem_gem_position_y_low = 0x82;
uint16_t const stage_gem_gem_position_y_high = 0x83;
uint16_t const stage_gem_gem_velocity_h_low = 0x84;
uint16_t const stage_gem_gem_velocity_h_high = 0x85;
uint16_t const stage_gem_gem_velocity_v_low = 0x86;
uint16_t const stage_gem_gem_velocity_v_high = 0x87;
uint16_t const stage_gem_gem_cooldown_low = 0x88;
uint16_t const stage_gem_gem_cooldown_high = 0x89;
uint16_t const stage_gem_gem_state = 0x8a; // one of STAGE_GEM_GEM_STATE_*
uint16_t const stage_gem_buffed_player = 0x8b;
uint16_t const stage_gem_last_opponent_state = 0x8c;
uint16_t const stage_gem_frame_cnt = 0x8d;

//Note - $90 to $af are used by DI particles

//
// Network engine labels
//

uint16_t const server_current_frame_byte0 = 0xb1;
uint16_t const server_current_frame_byte1 = 0xb2;
uint16_t const server_current_frame_byte2 = 0xb3;
uint16_t const server_current_frame_byte3 = 0xb4;
uint16_t const network_rollback_mode = 0xb5; // 0 - normal, 1 - rolling // Note - also used by game tick to know if a frame will be drawn, may be renamed something more generic like "dummy_frame"

uint16_t const network_current_frame_byte0 = 0xb6;
uint16_t const network_current_frame_byte1 = 0xb7;
uint16_t const network_current_frame_byte2 = 0xb8;
uint16_t const network_current_frame_byte3 = 0xb9;

uint16_t const network_client_id_byte0 = 0xba;
uint16_t const network_client_id_byte1 = 0xbb;
uint16_t const network_client_id_byte2 = 0xbc;
uint16_t const network_client_id_byte3 = 0xbd;

uint16_t const network_last_sent_btns = 0xbe;
uint16_t const network_local_player_number = 0xbf;

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

//
// MODE_SELECTION labels
//

uint16_t const mode_selection_current_option = last_c_label+1; // $39

uint16_t const mode_selection_mem_buffer = 0x0580;

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

uint16_t const netplay_launch_state = 0x00;
uint16_t const netplay_launch_counter = 0x01;
uint16_t const netplay_launch_ping_min = 0x02;
uint16_t const netplay_launch_ping_max = 0x03;
uint16_t const netplay_launch_server = 0x04;
uint16_t const netplay_launch_nb_servers = 0x05;

//
// DONATION labels
//

uint16_t const support_method = 0x00;
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

uint16_t const gameover_random = 0x4e;

uint16_t const gameover_winner = 0x0580;

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

//
// Zero-page constants
//

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
//$0580 to $05ff may be used by game states

//$06xx may be used by audio engine, see "Audio engine labels"

uint16_t const virtual_frame_cnt = 0x0700;
uint16_t const network_last_known_remote_input = 0x07bf;
uint16_t const network_player_local_btns_history = 0x07c0; // one byte per frame, circular buffers, 32 entries
uint16_t const network_player_remote_btns_history = 0x07e0; //
uint16_t const netplay_launch_received_msg = 0x0702;

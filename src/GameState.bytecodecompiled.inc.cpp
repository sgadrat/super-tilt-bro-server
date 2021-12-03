namespace emulator_compiled_segments_funcs {
void seg_c000_cursed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTI_IMP();
	if (emu.stopped) { return; }
}
void seg_c003_nmi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c00d_c00d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c01a_c01a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTI_IMP();
	if (emu.stopped) { return; }
}
void seg_c030_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTI_IMP();
	if (emu.stopped) { return; }
}
void seg_c037_reset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c03a_c03a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c03c_clrmem(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c05a_c05a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c05e_vblankwait2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c061_c061(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c062_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c067_c067(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c06b_c06b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c06f_pal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c076_c076(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c079_c079(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c07e_forever(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c081_c081(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c084_c084(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c087_c087(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c098_c098(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c09b_c09b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c0d3_characters_tiles_data_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c0d9_characters_tiles_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INX();
	if (emu.stopped) { return; }
}
void seg_c0dc_characters_properties_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INX();
	if (emu.stopped) { return; }
}
void seg_c0df_characters_properties_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
}
void seg_c0e2_characters_palettes_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
}
void seg_c0e5_characters_palettes_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
}
void seg_c0eb_characters_alternate_palettes_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
}
void seg_c0ee_characters_weapon_palettes_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
}
void seg_c0f1_characters_weapon_palettes_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
}
void seg_c0fa_characters_start_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SED_IMP();
	if (emu.stopped) { return; }
}
void seg_c0fd_characters_start_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
}
void seg_c100_characters_update_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c10c_characters_onground_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
}
void seg_c112_characters_input_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
}
void seg_c118_characters_onhurt_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c11a_c11a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_c11e_set_player_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c12b_c12b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c132_animation_state_vectors_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
}
void seg_c134_animation_state_vectors_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
}
void seg_c136_stages_init_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
}
void seg_c14e_stages_nametable(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
}
void seg_c154_c154(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
}
void seg_c156_stage_palettes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
}
void seg_c15c_c15c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
}
void seg_c17f_c17f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
}
void seg_c17e_stages_tileset_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
}
void seg_c183_c183(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
}
void seg_c186_player_respawn_max_duration(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c188_player_down_tap_max_duration(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
}
void seg_c18c_tech_window(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c18e_stb_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c1c1_not_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1c7_c1c7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1cc_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1ce_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1d7_c1d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1dc_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1de_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1e4_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1ed_c1ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1f2_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1f4_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c200_c200(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c205_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c207_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c20a_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c210_c210(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c215_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c217_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c220_c220(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c225_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c227_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c262_c262(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c267_fetch_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c26c_not_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c272_c272(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c277_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c279_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c282_c282(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c287_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c289_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2a3_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2ac_c2ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2b1_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2b3_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2bf_c2bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2c4_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2c6_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2ef_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2f5_c2f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2fa_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2fc_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c305_c305(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c30a_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c30c_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c32c_c32c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c332_ignore_enabled(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c367_end_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c36b_c36b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c36e_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c36f_particle_directional_indicator_start(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3a8_c3a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3a9_set_particle_position(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3cf_particle_directional_indicator_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c3d3_c3d3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3d4_do_something(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c3e1_c3e1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3e4_c3e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c3e7_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3ec_c3ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3ee_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3ef_move_particles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3fa_c3fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3fb_move_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c421_c421(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c426_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c428_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c438_c438(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c43d_separate(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c442_set_y_direction(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c457_c457(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c45c_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c45e_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c478_particle_death_start(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c4ba_c4ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4bb_place_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c4c9_c4c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c4cb_no_reposition_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c4dc_c4dc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4de_no_reposition_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c506_particles_start_position_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c50d_particles_start_position_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c514_particle_death_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c51a_c51a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c528_c528(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c52f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c531_do_nothing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c532_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c537_c537(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c53c_audio_music_ingame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c541_c541(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c546_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c558_ingame_themes_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c55a_c55a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
}
void seg_c55b_ingame_themes_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
}
void seg_c561_audio_music_weak(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c56a_audio_music_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c573_audio_play_sfx_from_common_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c578_c578(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c57d_audio_play_crash(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c588_audio_play_death(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c593_audio_play_hit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c59e_audio_play_parry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5a9_audio_play_shield_hit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5b4_audio_play_shield_break(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5bf_audio_play_title_screen_text(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5ca_audio_play_interface_click(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5d5_audio_play_fast_fall(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5e0_audio_play_land(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5eb_audio_play_tech(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5f6_audio_play_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c601_audio_play_aerial_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c60c_audio_play_strike_lite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c617_sinbad_audio_play_jab3_land(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c622_global_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c627_c627(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c63a_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c642_c642(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c64a_c64a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c667_c667(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c66c_c66c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c66f_c66f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c679_game_states_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
}
void seg_c695_game_states_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
}
void seg_c6b1_init_character_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c6b4_c6b4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6bc_character_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6c4_character_selection_tick_char_anims(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c6da_c6da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c6f0_c6f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c6f6_tick_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c6fb_c6fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6fe_character_selection_get_char_property(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c721_character_selection_construct_char_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c72c_c72c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c732_character_selection_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c73f_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c748_c748(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c74b_c74b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c751_character_selection_reset_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c759_c759(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c75f_default_config(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c78c_init_config_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c78f_c78f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c797_config_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c79f_init_credits_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7a2_c7a2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7b2_c7b2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c7c5_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c7ce_c7ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c7d0_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c7d6_c7d6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c7dc_c7dc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7ee_c7ee(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7f3_c7f3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7f8_c7f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7fd_c7fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c802_c802(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c807_c807(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c827_write_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c836_c836(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c850_write_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c856_c856(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c858_end_inc_cursor(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c85c_c85c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c860_c860(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c864_c864(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c868_c868(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c871_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c879_filled_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c881_new_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c886_end_write_credits(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c889_c889(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c88a_fill_attributes_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c88c_write_attribute_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c894_c894(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c895_credits_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c89d_c89d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8a1_c8a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8a5_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8a9_c8a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8ad_c8ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8b0_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8b5_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c8b6_init_support_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8d5_c8d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8e7_c8e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8f7_c8f7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c907_c907(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c912_c912(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c922_c922(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c925_c925(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c92a_support_screen_draw_contents(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c934_copy_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c943_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c949_c949(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c94d_c94d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c950_tile_value_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c958_c958(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c961_c961(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c963_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c96c_c96c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c96e_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c971_c971(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c972_support_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c975_c975(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c978_c978(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c97a_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c97e_c97e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c982_c982(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c986_c986(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c98a_c98a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c98e_c98e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c992_c992(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c996_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c99b_c99b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c99e_go_back(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9a3_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9ab_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c9af_c9af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9b3_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9ca_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c9cb_option_to_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_c9d0_nt_payload_btc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c9d6_nt_payload_paypal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c9dc_nt_payload_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9de_nt_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c9e0_init_support_btc_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c9eb_init_support_paypal_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9f3_init_support_qr_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9fb_c9fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca02_ca02(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca0e_support_qr_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca11_ca11(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca14_ca14(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca18_ca18(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca1c_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca20_ca20(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca24_ca24(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca27_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca2c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ca2f_game_modes_init_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
}
void seg_ca33_game_modes_pre_update_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca35_init_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca38_ca38(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca3d_ca3d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca42_ca42(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca47_ca47(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca4c_ca4c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca4f_zero_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca56_ca56(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca59_ca59(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca6e_ca6e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca86_ca86(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca9a_position_player_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cab9_cab9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cabe_cabe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cac3_cac3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cade_cade(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_caf3_caf3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb10_cb10(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb23_cb23(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb37_initialize_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb50_cb50(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cb53_cb53(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb60_cb60(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb65_cb65(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb68_cb68(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb6d_cb6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb78_cb78(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb7d_cb7d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb80_cb80(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb85_cb85(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb88_cb88(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cba3_cba3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cbbe_cbbe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cbc1_cbc1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cbc4_cbc4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cbd3_cbd3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cbd4_place_player_a_header(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cbd6_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cbe2_cbe2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cbe3_place_player_b_header(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cbe5_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cbf1_cbf1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cbf2_place_character_normal_palette(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZEY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cc05_place_character_alternate_palette(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZEY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc15_place_character_palette(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc39_place_character_ppu_illustrations(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc6c_cc6c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc6d_illustrations_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_cc6f_illustrations_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_cc71_header_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_cc75_header_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_cc79_game_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc7c_cc7c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc8b_cc8b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc8f_cc8f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc92_cc92(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cca7_cca7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ccb3_ccb3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccb8_ccb8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccbd_ccbd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccc0_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ccc1_no_screen_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ccc5_ccc5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccc8_ccc8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cccc_no_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cce4_cce4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cce7_cce7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccea_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cceb_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ccef_ccef(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ccf5_ccf5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ccfc_keep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd03_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd0c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd0d_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd0f_hitstun_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd13_cd13(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd15_hitstun_next_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd1a_cd1a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd1c_hitbox_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd1f_cd1f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd24_cd24(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd26_update_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd3b_cd3b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd41_cd41(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd50_end_input_event(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd56_cd56(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd59_cd59(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd5d_cd5d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd60_cd60(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd63_end_visuals(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd68_cd68(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd69_player_state_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_cd79_check_player_hit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd7f_cd7f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd82_process_checks(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cda5_cda5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cda7_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cdab_cdab(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cdce_cdce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cdd0_cdd0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cdd3_cdd3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cdfa_cdfa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ce07_check_hitbox_hurtbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce2a_ce2a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ce2c_ce2c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ce31_ce31(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ce33_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ce38_ce38(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce3a_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce4f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce52_hurt_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce55_ce55(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce58_ce58(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce5b_ce5b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ce68_ce68(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ce6b_cap_damages(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce6d_apply_damages(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ce88_ce88(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce95_apply_force_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ceca_ceca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cee6_cee6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cefb_cefb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf0f_passthrough_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cf15_end_abs_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cf19_cf19(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf2d_passthrough_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cf33_end_abs_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cf58_cf58(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cf5c_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf73_negative(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cf87_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cf8b_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfa2_negative(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cfb6_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cfca_ntsc_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cfcd_cfcd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cfce_plus_20_percent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d00e_move_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d01e_vertical(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d02f_d02f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d034_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d036_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d042_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d04b_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d051_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d056_d056(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d058_horizontal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d069_d069(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d06e_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d070_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d07c_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d085_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d08b_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d090_d090(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d0ab_move_player_handle_one_platform_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_d0c3_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d0ce_d0ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0d0_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0d2_d0d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d0dd_d0dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0df_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0e1_d0e1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d0ec_d0ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0ee_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0f0_d0f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d0fb_d0fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0fd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0ff_d0ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d114_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d115_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d121_d121(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d123_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d125_d125(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d131_d131(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d133_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d135_d135(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d141_d141(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d143_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d145_d145(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d151_d151(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d153_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d155_d155(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d16b_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d16c_move_player_handle_one_platform_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_d184_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d18f_d18f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d191_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d193_d193(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d19e_d19e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1a0_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1a2_d1a2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d1ad_d1ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1af_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1b1_d1b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d1bc_d1bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1be_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1c0_d1c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d1d5_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d1d6_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d1e2_d1e2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1e4_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1e6_d1e6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d1f2_d1f2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1f4_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1f6_d1f6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d202_d202(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d204_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d206_d206(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d212_d212(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d214_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d216_d216(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d22c_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d22d_move_player_handle_one_platform_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_d245_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d250_d250(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d252_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d254_d254(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d25f_d25f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d261_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d263_d263(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d26e_d26e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d270_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d272_d272(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d27d_d27d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d27f_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d281_d281(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d28e_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d28f_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d29b_d29b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d29d_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d29f_d29f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d2ab_d2ab(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d2ad_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d2af_d2af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d2bb_d2bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2bd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2bf_d2bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d2cb_d2cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2cd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2cf_d2cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d2dd_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d2de_move_player_handle_one_platform_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_d2f6_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d301_d301(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d303_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d305_d305(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d310_d310(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d312_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d314_d314(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d31f_d31f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d321_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d323_d323(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d32e_d32e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d330_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d332_d332(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d343_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d344_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d350_d350(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d352_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d354_d354(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d360_d360(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d362_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d364_d364(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d370_d370(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d372_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d374_d374(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d380_d380(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d382_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d384_d384(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d396_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d397_check_player_position(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d3a1_d3a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3a3_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3a5_d3a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d3af_d3af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3b1_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3b3_d3b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d3bd_d3bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3bf_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3c1_d3c1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d3cb_d3cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3cd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d3cf_d3cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d3d3_d3d3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3da_d3da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3e9_d3e9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d3ec_offground(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3fb_d3fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d3fe_set_death_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d401_d401(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d40a_d40a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d40e_d40e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d410_d410(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d415_pass_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d41a_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d41c_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d41e_end_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d422_d422(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d424_d424(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d429_pass_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d42e_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d430_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d432_end_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d435_d435(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d439_d439(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d44c_d44c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d44f_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d453_d453(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d456_d456(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d458_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d45f_d45f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d461_no_set_winner(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d478_d478(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d47c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d47d_write_player_damages(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d483_d483(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d489_d489(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d48a_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d499_d499(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d4b5_less_than_one_hundred(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d4bf_one_hundred(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4c8_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4d2_d4d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4da_less_than_fifty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4e0_d4e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4e4_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4e8_d4e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4ec_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4f0_d4f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4f4_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4f8_d4f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d4fc_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d51d_stocks_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d538_filled_stock(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d53d_empty_stock(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d53f_set_stock_tile(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d547_d547(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d54f_end_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d557_damages_ppu_position(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
}
void seg_d561_character_icons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d563_player_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d566_d566(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d569_d569(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d56c_d56c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d56d_blinking(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d57b_d57b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d584_d584(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d586_d586(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d58d_alternate_palette(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d59a_palette_selected(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d59e_d59e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5ab_player_one(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5b0_d5b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d5b2_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d5bd_d5bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d5c0_update_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5c2_update_one_player_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5f1_d5f1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5f4_d5f4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d5fa_d5fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d608_d608(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d60a_d60a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d60e_d60e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d610_d610(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d613_oos_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d628_oos_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d63d_oss_top(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d652_oos_bot(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d664_oos_indicator_placed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d669_d669(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d66c_d66c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d66e_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d671_d671(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d674_all_player_sprites_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d677_d677(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d678_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
}
void seg_d67a_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
}
void seg_d67c_oos_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
}
void seg_d67e_oos_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d680_game_mode_local_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d683_game_mode_local_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d687_d687(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d68b_d68b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d68f_d68f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d693_d693(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d696_end_ai(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d697_game_mode_online_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d69a_game_mode_online_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d69d_init_gameover_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6ad_d6ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6b0_d6b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6cd_d6cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6dd_d6dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6e0_d6e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d6ef_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d6fa_d6fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d715_d715(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d730_d730(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d742_winner_name_writing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d74f_d74f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d77c_d77c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d796_d796(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7c0_d7c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7d6_initialize_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7f1_d7f1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7f3_position_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7f6_d7f6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7fc_d7fc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d807_d807(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d80a_d80a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d817_gameover_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d819_check_ready(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d81d_d81d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d821_d821(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d825_controller_a_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d82a_d82a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d82c_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d830_d830(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d834_d834(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d83a_d83a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d83e_d83e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d842_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d847_d847(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d84a_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d852_update_animations(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d855_d855(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d858_d858(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d859_next_screen_by_game_mode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d85b_gamover_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d873_d873(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d876_d876(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d884_d884(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d891_d891(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d894_d894(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d895_update_balloons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d899_update_one_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d89c_d89c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d8b0_d8b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8b4_end_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8b7_d8b7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d8c9_d8c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8ce_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d8d0_high_byte_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d8ed_d8ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8f8_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d900_end_sprite_layer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d90a_d90a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d90b_gameover_random_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d918_init_mode_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d91b_d91b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d923_mode_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d92b_init_netplay_launch_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d92e_d92e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d936_netplay_launch_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d93e_online_mode_screen_fadein(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d946_init_online_mode_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d949_d949(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d951_online_mode_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d959_init_stage_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d95c_d95c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d964_stage_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d96c_stage_selection_screen_long_memcopy(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d973_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d97a_d97a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d980_stage_selection_back_to_char_select(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d994_init_title_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d99c_d99c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9a7_d9a7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9b2_d9b2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d9ca_d9ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9de_ntsc_indicator_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9e5_d9e5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d9f0_d9f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d9f4_d9f4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9fc_d9fc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9ff_d9ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da02_da02(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da05_soft_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da0c_end_menu_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da0d_set_title_chr(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da1d_da1d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da20_init_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da23_da23(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da34_da34(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da35_palette_title_initial(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da55_title_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da5d_da5d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da60_da60(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da63_da63(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_da6b_da6b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_da70_da70(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da73_update_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_da77_da77(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da7e_cheat_succeed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da83_press_any_key(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da87_da87(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da8b_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da8f_da8f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da93_da93(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da96_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da99_da99(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da9e_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da9f_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dab3_tick_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dac4_dac4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dac5_anim_state_handlers_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLD_IMP();
	if (emu.stopped) { return; }
}
void seg_dad1_change_anim_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dad8_wait_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dade_dade(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dae1_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dae2_show_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dae5_dae5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dae7_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_daf3_daf3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_daf6_daf6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db05_db05(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db06_logo_palette_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_db0e_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db11_db11(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_db15_db15(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db18_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db19_wait_text(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_db1f_db1f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db22_db22(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db25_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db26_show_text(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db2e_db2e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db31_db31(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_db64_finish(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db67_db67(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db6f_db6f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db72_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db73_text_colors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
}
void seg_db76_title_screen_restore_music_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db7a_db7a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db7d_db7d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_db80_mute(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db83_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db8e_state_transition_pretransition_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
}
void seg_dba0_state_transition_posttransition_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_dbb2_dummy_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dbc0_dbc0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dbc6_state_transition_pre_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dbd9_dbd9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dbda_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_dbf6_state_transition_pre_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc09_dc09(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc0a_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dc26_state_transition_post_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc3b_dc3b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc44_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLP_IMP();
	if (emu.stopped) { return; }
}
void seg_dc6c_state_transition_post_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc81_dc81(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc82_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dc96_dc96(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dcaa_scroll_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dcae_dcae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dcc2_set_up_values(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dcd5_end_set_values(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dcd9_dcd9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_dcdf_do_not_touch_offsets(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_dce3_save_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_dcea_dcea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dcfa_hidden_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dcff_two_byte_position_stored(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dd0b_dd0b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd0d_scroll_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd13_dd13(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dd17_dd17(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd19_set_camera_scroll(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd30_dd30(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dd34_dd34(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd3c_dd3c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd44_simple_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd47_end_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd57_clean(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd58_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd59_move_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd5c_dd5c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd60_dd60(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd64_dd64(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd68_dd68(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd6c_dd6c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd70_dd70(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd74_dd74(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd7b_update_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd7e_vertical_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd94_dd94(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd97_dd97(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd9a_dd9a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dd9e_update_screen_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ddb2_move_one_screen_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ddc1_ddc1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ddc6_hide_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ddc8_update_oam(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ddd6_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ddd7_init_wifi_settings_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ddda_ddda(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dde2_wifi_settings_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ddea_clouds_initial_position(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ddef_ddef(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ddf9_menu_common_clouds_speed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ddfe_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_de02_position_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_de1d_re_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de2b_copy_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de36_de36(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_de3f_de3f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_de41_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_de44_de44(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de47_cloud_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_de5b_set_menu_chr(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de6b_de6b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de6e_tick_moving_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_de70_move_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_de7a_de7a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de7c_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de7f_de7f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de82_de82(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_de83_menu_position_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de85_position_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de88_de88(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de8b_de8b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_de8c_menu_position_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de98_de98(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de9c_do_not_hide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dea9_place_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_deaf_deaf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_deb3_skip_y_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dec8_dec8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_decb_sprite_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_decd_decd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ded0_sprite_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ded5_stage_generic_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dedd_dedd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_def8_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df02_df02(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df11_df11(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df21_copy_header_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df2c_copy_elements_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df33_df33(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df3b_copy_one_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df46_df46(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df49_copy_data_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df4a_stage_iterate_all_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df4c_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df51_df51(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df54_df54(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df58_df58(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df5f_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df63_df63(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df65_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df6a_df6a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df6d_df6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df71_df71(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df78_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df7c_df7c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df7e_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df83_df83(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df86_df86(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df8a_df8a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df91_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df93_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df94_ai_action_double_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df9d_ai_action_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dfa7_ai_action_right_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dfac_ai_action_down_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dfb1_ai_action_special_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dfb9_ai_action_idle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dfbc_ai_level_to_delay(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dfbf_ai_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dfd1_ai_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfe4_find_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dff7_run_current_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e016_e016(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e01f_e01f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e021_do_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e024_e024(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e02b_e02b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e02c_ai_continue_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e041_e041(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e045_next_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e054_e054(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e05a_set_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e064_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e065_ai_attack_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e099_e099(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e09e_right_facing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e0a0_end_direction_flag(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e0a4_e0a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0a9_grounded(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e0ab_end_ground_flag(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e0b1_check_one_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e0b8_e0b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0bf_condition_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e11a_e11a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e11c_e11c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e134_e134(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e137_next_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e13b_e13b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e13e_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e13f_ai_shield_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e143_e143(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e147_e147(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e14d_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e155_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e15a_distance_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e15e_e15e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e175_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e176_ai_space_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e17c_e17c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e182_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e188_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e18b_spot_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e198_e198(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e19d_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e1af_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e1b0_ai_chase_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e1ba_e1ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e1bc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e1be_e1be(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e1c2_e1c2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e1c9_e1c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e1cc_check_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e1d0_e1d0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e1d3_no_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e1d7_e1d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e1d9_e1d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e1df_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e1e4_go_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e1e6_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e1ef_e1ef(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e1f3_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e1f9_e1f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e200_end_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e20f_e20f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e21a_negative_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e222_end_set_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e23a_e23a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e23e_dont_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e24b_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e258_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e267_action_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e270_ai_delay_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e275_e275(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e28d_no_delay(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e293_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e294_network_init_stage(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e29f_clear_one_input(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e2aa_e2aa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e2ba_network_tick_ingame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e2be_e2be(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e2c1_do_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e2d2_e2d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e310_controller_sent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e315_e315(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e324_e324(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e32b_e32b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e331_e331(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e33c_skip_message(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e346_state_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e355_e355(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e357_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e35a_e35a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e35e_e35e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e362_e362(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e366_e366(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e368_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e369_update_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e387_e387(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e38d_future(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e392_past(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e394_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e396_rollback_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e3a6_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e3b3_e3b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3bb_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e3ca_e3ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3d2_end_delayed_inputs(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3d7_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3f3_e3f3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3fa_e3fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e402_screen_shake_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e410_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e41b_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e422_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e481_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e498_e498(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e49f_e49f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4b4_e4b4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e4bb_e4bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e4bd_e4bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e4c3_roll_forward_one_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e4c7_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e4de_e4de(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4e0_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4e3_e4e3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4e6_e4e6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4eb_dont_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4f0_no_rollback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e501_set_opponent_buttons_from_history(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e506_e506(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e50d_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e513_mark_nexts_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e51b_known(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e521_place_character_ppu_tiles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e530_e530(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e53a_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e541_end_set_ppu_addr(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e556_sleep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e559_e559(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e55c_e55c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e55f_copy_common_tileset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e57c_process_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e581_handle_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e586_e586(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e59b_write_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e5a6_e5a6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e5a9_end_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5aa_keep_input_dirty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5af_get_transition_id(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5b9_change_global_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5c5_e5c5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5d2_e5d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5db_e5db(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e5dd_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e5e5_e5e5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5f6_e5f6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5f9_e5f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e5ff_find_transition_index(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e602_e602(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e606_check_one_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e60b_e60b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e60f_e60f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e613_not_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e615_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e616_pre_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e619_e619(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e61d_e61d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e62a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e62b_post_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e62e_e62e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e632_e632(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e63f_e63f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e642_no_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e64c_e64c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e651_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e652_animation_init_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e68f_animation_state_change_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e6b0_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6d7_animation_draw_pre_initialized(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6e7_e6e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e6ee_default_direction(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6f2_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6fb_e6fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e710_end_foreground_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e714_e714(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e71b_e71b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e72c_default_direction(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e73a_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e73f_clear_unused_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e748_e748(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e750_clear_one_unused_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e75a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e75b_animation_handle_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e760_e760(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e765_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e767_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e776_e776(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e77b_e77b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e780_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e786_e786(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e789_end_anim_hook(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e79d_e79d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7a2_flip_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7a9_got_relative_pos(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7ac_e7ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7b1_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e7b3_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e7c2_e7c2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7c5_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e7c6_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e7cf_e7cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e7d0_skip(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7d3_skip2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7dc_animation_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e7e0_e7e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7e9_e7e9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e7eb_skip_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e7ee_reset_cnt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e7f0_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e7f2_skip(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e80c_e80c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e833_e833(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e83e_store_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e84f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e850_boxes_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e85a_e85a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e85c_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e85e_e85e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e868_e868(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e86a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e86c_e86c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e876_e876(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e878_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e87a_e87a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e884_e884(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e886_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e888_e888(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e88d_no_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e88f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e890_audio_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e893_e893(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e898_audio_cut_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e89e_audio_play_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e8ba_audio_play_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8c3_e8c3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8ce_e8ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8d3_e8d3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8eb_e8eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8ff_e8ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e900_init_channel(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e90b_e90b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e91b_e91b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e921_pulse_2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e924_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e932_end_pulse_specifics(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e94f_audio_mute_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e96a_audio_unmute_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e972_square_reinit_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e98b_e98b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e98c_audio_music_extra_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e990_e990(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e994_e994(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e998_e998(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e99f_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e9a0_audio_music_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e9a9_e9a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9ae_e9ae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9b3_e9b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9b8_e9b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9bb_music_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e9c0_play_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9c3_e9c3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9c6_e9c6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e9c7_apply_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e9cb_e9cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e9ce_sfx_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e9cf_noise_fx_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea0e_ea0e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea11_ea11(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea4e_noise_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ea5b_ea5b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea6a_overflow(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ea6f_ea6f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea77_negative(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea7c_store_result(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea7f_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea84_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eaa6_eaa6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eaba_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eabe_noise_apply_mirrored_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_eac3_eac3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eacb_regular_write(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eadc_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eadd_pulse_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eae2_eae2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eae9_do_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eafb_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb01_negative(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb04_end_byte_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb0c_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb14_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb37_eb37(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb3d_eb3d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb4c_skip_opcode_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb51_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb5e_eb5e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb72_eb72(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb7b_triangle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb80_eb80(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb85_eb85(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb8a_unmute(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb98_write_linear_cnt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb9b_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb9c_opcode_noise_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb9e_opcode_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ebc3_ebc3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ebd3_no_track_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ebde_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ebe1_opcode_chan_params(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ebfe_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec10_opcode_chan_volume_low(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec18_opcode_chan_volume_high(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec22_opcode_noise_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec2a_opcode_set_duty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec40_opcode_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec58_note_table_lookup(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec66_opcode_play_note(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec76_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ec78_one_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ec7b_ec7b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec7f_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ec81_one_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ec84_ec84(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec88_end_wait_compute(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec93_ec93(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eca7_opcode_play_timed_note(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecaf_ecaf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eccd_opcode_wait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ecda_opcode_noise_wait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ece5_opcode_noise_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ece7_opcode_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ecf0_opcode_halt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed05_opcode_noise_halt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed1a_opcode_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed20_ed20(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed22_set_value(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed2e_opcode_pulse_meta_uslide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ed35_opcode_pulse_meta_dslide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed39_opcode_pulse_meta_common(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed43_ed43(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed47_ed47(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed4d_ed4d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed59_end_note(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed65_ed65(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed6c_ed6c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ed71_keep_volume(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed73_set_volume_mask(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed7b_ed7b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed81_replace_duty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed8b_end_volume_duty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed91_ed91(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed9c_end_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed9f_opcode_noise_set_periodic(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eda3_eda3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_edab_unset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edb0_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edb6_opcode_noise_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edcd_opcode_noise_pitch_slide_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edda_opcode_noise_pitch_slide_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ede2_opcode_noise_end_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ede5_ede5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee27_particle_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee2d_process_one_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee32_ee32(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ee35_ee35(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ee38_skip_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ee3d_next_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ee48_ee48(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee49_process_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee59_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee63_ee63(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ee6a_ee6a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ee6f_ee6f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ee88_hide_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ee8d_particle_drawn(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ee94_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee95_particle_handlers_reinit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eea0_eea0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eea1_loop_on_particle_boxes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eea3_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eea8_eea8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eeb1_eeb1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eeb2_loop_on_particles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eeb6_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eebc_eebc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eec5_eec5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eec8_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eec9_deactivate_particle_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eed1_eed1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eed2_hide_particles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eed6_eed6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eedb_second_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eedd_set_sprite_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eeea_eeea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eeeb_hide_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eef9_fixed_bank_code_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f000_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f00d_f00d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f012_vblank_wait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f017_f017(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f01a_wait_empty_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f01f_f01f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f026_f026(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f029_f029(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f033_f033(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f036_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f03d_f03d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f040_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f04c_f04c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f04f_f04f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f05a_f05a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f05d_expected_length(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f064_f064(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f067_expected_type(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f06c_f06c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f06f_file_exists(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f076_f076(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f079_f079(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f086_flash_safe_sectors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f08b_flash_all_sectors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f08d_flash_sectors_launch(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0ae_copy_one_page(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0b0_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0b7_f0b7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f0bf_f0bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f0c5_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0c8_f0c8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f0cb_prepare_display(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0dd_f0dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0e4_f0e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0eb_f0eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0f2_f0f2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0f9_f0f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f100_f100(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f107_f107(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f129_oam_mirror_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f12f_f12f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f132_f132(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f156_f156(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f173_fatal_failure(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f176_f176(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f187_testdll(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f18d_infinite_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f18f_flash_sectors_rom(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f19b_flash_one_sector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1a7_first_sector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1ab_second_sector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f1ad_write_val(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f1b6_f1b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f1ba_wait_esp_ready(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f1bf_f1bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f1ce_wait_answer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f1d3_f1d3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1d5_burn_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1db_f1db(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1dd_write_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1f5_wait_write_complete(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1f8_f1f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1fc_f1fc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f200_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f206_f206(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f20c_end_wait_write_complete(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f211_f211(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f219_f219(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f21b_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f21f_f21f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f224_f224(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f22a_f22a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f22d_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f233_f233(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f238_end_last_progress_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f23c_f23c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f240_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f242_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f245_show_progress(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f24b_f24b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f253_vblankwait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f258_f258(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f26d_f26d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f273_no_failure(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f277_erase_failure(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f27b_write_failure(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f27d_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f292_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f293_erase_sector_sequence(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2c6_wait_completion(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2c9_f2c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2d1_f2d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2d5_f2d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2d9_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2df_end_wait_completion(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f2e0_mapper_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLD_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f323_f323(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f329_f329(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f32d_full_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f332_safe_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f337_no_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f33a_esp_cmd_clear_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f33c_esp_cmd_get_esp_status(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f33e_esp_send_cmd_short(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f342_esp_send_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f34b_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f354_f354(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f355_esp_get_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f35c_f35c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f363_store_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f36e_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f371_f371(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f37a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f37b_wait_ready_bit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f380_f380(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f381_fetch_controllers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f38d_fetch_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f397_next_btn(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3a3_f3a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3a8_f3a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3a9_wait_next_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3ad_waiting(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3b1_f3b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3b2_absolute_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f3b6_f3b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3bb_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3bc_multiply(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3c7_additions_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3cb_f3cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f3dc_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3df_last_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3e1_handle_buff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3e6_f3e6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f3f3_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3f4_reset_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3fa_dummy_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3fb_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f408_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f411_f411(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f414_f414(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f41a_draw_zipped_nametable(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f429_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f42d_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f433_f433(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f436_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f439_f439(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f43d_f43d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f440_write_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f446_f446(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f449_f449(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f44c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f44d_next_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f451_f451(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f453_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f454_call_pointed_subroutine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f457_copy_palette_to_ppu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f46b_copy_one_color(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f474_f474(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f475_shake_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f491_f491(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f496_set_screen_two(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f49d_set_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4a3_f4a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f4ad_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f4ae_get_unzipped_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4b6_skip_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4ba_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4be_f4be(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4c0_no_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4c2_loop_without_dec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4c6_f4c6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4ca_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4cd_f4cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4cf_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4d2_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4d5_f4d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4d7_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4dd_f4dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4df_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4e3_skip_all(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4f4_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4f7_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4fb_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4ff_f4ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f503_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f510_f510(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f512_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f517_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f51a_f51a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f51c_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f522_f522(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f524_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f527_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f538_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f53a_force_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f53c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f53d_construct_palettes_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f540_f540(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f556_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f561_f561(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f567_push_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f575_construct_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f578_f578(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f580_copy_header_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f58b_f58b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f58f_copy_payload_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f59a_f59a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f5a0_clear_bg_bot_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5b3_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5bc_f5bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5be_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5c4_f5c4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5ca_f5ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f5cb_switch_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f5cf_trampoline(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f5d7_f5d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f5da_f5da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f5de_exec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f5e1_cpu_to_ppu_copy_tileset_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5ee_cpu_to_ppu_copy_tileset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5f8_f5f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5fa_copy_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5fc_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f606_f606(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f617_f617(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f618_cpu_to_ppu_copy_charset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f63e_f63e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f640_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f645_f645(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f64a_f64a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f653_f653(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f655_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f659_f659(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f65a_copy_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f65c_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f66b_f66b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f673_f673(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f674_modifier_force_0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f677_modifier_force_1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f67a_modifier_swap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f681_bits_modifiers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
}
void seg_f685_fill_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f68b_f68b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f68c_fixed_memcpy(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f68e_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f692_f692(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f69a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f69b_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f69e_f69e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6a0_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6a1_merge_to_player_velocity(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f6a3_add_component(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f6b2_f6b2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f6c3_check_diff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f6c7_f6c7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f6cd_f6cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f6da_add_step_size(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_f6e6_f6e6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f6e8_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f6ea_f6ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f6fa_decrement(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f707_next_component(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f70e_f70e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f713_apply_player_gravity(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f72d_f72d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f72e_gravity_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f730_reset_default_gravity(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f73d_check_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f744_f744(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f748_f748(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f749_simple_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f74d_f74d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f751_f751(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f758_end_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f75f_end_right_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f766_end_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f76d_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f76f_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f770_oos_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_f77c_f77c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f77e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f780_f780(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f787_f787(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f78e_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_f79a_f79a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f79c_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f79e_f79e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7a5_f7a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f7ac_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_f7b8_f7b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f7ba_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f7bc_f7bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7c3_f7c3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f7ca_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_f7d6_f7d6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f7d8_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f7da_f7da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7e1_f7e1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f7e8_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f7ea_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f7eb_controller_callbacks(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7ed_switch_linear(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7ef_check_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7f3_f7f3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f80a_next_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f80f_f80f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f821_reinit_c_stack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f82a_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f82d_vblankwait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f832_f832(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f9b5_default_gravity_per_system_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f9b7_pal_to_ntsc_velocity_high_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_fa19_fa19(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_INY();
	if (emu.stopped) { return; }
}
void seg_fab7_pal_to_ntsc_velocity_low_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_fbb7_pal_to_ntsc_velocity_neg_high_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_fc59_fc59(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
}
void seg_fdb7_server_bytecode_error(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fdbc_server_bytecode_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fdbf_fdbf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fde0_fde0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fde5_server_bytecode_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fde8_fde8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
}

std::array<void(*)(mos6502<GameState::EmulatorRunContext>&), 0x4000> GameState::emulator_compiled_segments = {
	&emulator_compiled_segments_funcs::seg_c000_cursed,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c003_nmi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c00d_c00d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c01a_c01a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c030_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c037_reset,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c03a_c03a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c03c_clrmem,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c05a_c05a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c05e_vblankwait2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c061_c061,
	&emulator_compiled_segments_funcs::seg_c062_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c067_c067,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c06b_c06b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c06f_pal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c076_c076,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c079_c079,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c07e_forever,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c081_c081,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c084_c084,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c087_c087,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c098_c098,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c09b_c09b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0d3_characters_tiles_data_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0d9_characters_tiles_number,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0dc_characters_properties_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0df_characters_properties_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0e2_characters_palettes_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0e5_characters_palettes_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0eb_characters_alternate_palettes_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0ee_characters_weapon_palettes_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0f1_characters_weapon_palettes_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0fa_characters_start_routines_table_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0fd_characters_start_routines_table_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c100_characters_update_routines_table_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c10c_characters_onground_routines_table_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c112_characters_input_routines_table_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c118_characters_onhurt_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c11a_c11a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c11e_set_player_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c12b_c12b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c132_animation_state_vectors_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c134_animation_state_vectors_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c136_stages_init_routine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c14e_stages_nametable,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c154_c154,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c156_stage_palettes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c15c_c15c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c17e_stages_tileset_msb,
	&emulator_compiled_segments_funcs::seg_c17f_c17f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c183_c183,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c186_player_respawn_max_duration,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c188_player_down_tap_max_duration,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c18c_tech_window,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c18e_stb_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1c1_not_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1c7_c1c7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1cc_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1ce_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1d7_c1d7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1dc_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1de_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1e4_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1ed_c1ed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1f2_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1f4_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c200_c200,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c205_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c207_end_sign_extend,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c20a_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c210_c210,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c215_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c217_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c220_c220,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c225_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c227_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c262_c262,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c267_fetch_hitbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c26c_not_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c272_c272,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c277_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c279_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c282_c282,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c287_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c289_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2a3_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ac_c2ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b1_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b3_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2bf_c2bf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2c4_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2c6_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ef_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2f5_c2f5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2fa_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2fc_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c305_c305,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c30a_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c30c_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c32c_c32c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c332_ignore_enabled,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c367_end_hitbox,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c36b_c36b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c36e_end,
	&emulator_compiled_segments_funcs::seg_c36f_particle_directional_indicator_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3a8_c3a8,
	&emulator_compiled_segments_funcs::seg_c3a9_set_particle_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3cf_particle_directional_indicator_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d3_c3d3,
	&emulator_compiled_segments_funcs::seg_c3d4_do_something,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e1_c3e1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e4_c3e4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e7_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ec_c3ec,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ee_end,
	&emulator_compiled_segments_funcs::seg_c3ef_move_particles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3fa_c3fa,
	&emulator_compiled_segments_funcs::seg_c3fb_move_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c421_c421,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c426_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c428_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c438_c438,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c43d_separate,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c442_set_y_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c457_c457,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c45c_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c45e_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c478_particle_death_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4ba_c4ba,
	&emulator_compiled_segments_funcs::seg_c4bb_place_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4c9_c4c9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4cb_no_reposition_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4dc_c4dc,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4de_no_reposition_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c506_particles_start_position_offset_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c50d_particles_start_position_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c514_particle_death_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c51a_c51a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c528_c528,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c52f_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c531_do_nothing,
	&emulator_compiled_segments_funcs::seg_c532_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c537_c537,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c53c_audio_music_ingame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c541_c541,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c546_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c558_ingame_themes_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c55a_c55a,
	&emulator_compiled_segments_funcs::seg_c55b_ingame_themes_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c561_audio_music_weak,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c56a_audio_music_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c573_audio_play_sfx_from_common_bank,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c578_c578,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c57d_audio_play_crash,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c588_audio_play_death,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c593_audio_play_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c59e_audio_play_parry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5a9_audio_play_shield_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b4_audio_play_shield_break,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5bf_audio_play_title_screen_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5ca_audio_play_interface_click,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5d5_audio_play_fast_fall,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5e0_audio_play_land,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5eb_audio_play_tech,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5f6_audio_play_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c601_audio_play_aerial_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c60c_audio_play_strike_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c617_sinbad_audio_play_jab3_land,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c622_global_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c627_c627,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c63a_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c642_c642,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c64a_c64a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c667_c667,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c66c_c66c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c66f_c66f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c679_game_states_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c695_game_states_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b1_init_character_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b4_c6b4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6bc_character_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6c4_character_selection_tick_char_anims,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6da_c6da,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f0_c6f0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f6_tick_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6fb_c6fb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6fe_character_selection_get_char_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c721_character_selection_construct_char_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c72c_c72c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c732_character_selection_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c73f_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c748_c748,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c74b_c74b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c751_character_selection_reset_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c759_c759,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c75f_default_config,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c78c_init_config_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c78f_c78f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c797_config_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c79f_init_credits_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7a2_c7a2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7b2_c7b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7c5_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7ce_c7ce,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d0_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d6_c7d6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7dc_c7dc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7ee_c7ee,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7f3_c7f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7f8_c7f8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7fd_c7fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c802_c802,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c807_c807,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c827_write_one_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c836_c836,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c850_write_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c856_c856,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c858_end_inc_cursor,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c85c_c85c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c860_c860,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c864_c864,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c868_c868,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c871_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c879_filled_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c881_new_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c886_end_write_credits,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c889_c889,
	&emulator_compiled_segments_funcs::seg_c88a_fill_attributes_line,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c88c_write_attribute_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c894_c894,
	&emulator_compiled_segments_funcs::seg_c895_credits_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c89d_c89d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a1_c8a1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a5_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a9_c8a9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8ad_c8ad,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8b0_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8b5_end,
	&emulator_compiled_segments_funcs::seg_c8b6_init_support_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d5_c8d5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8e7_c8e7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8f7_c8f7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c907_c907,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c912_c912,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c922_c922,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c925_c925,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c92a_support_screen_draw_contents,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c934_copy_one_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c943_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c949_c949,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c94d_c94d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c950_tile_value_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c958_c958,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c961_c961,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c963_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c96c_c96c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c96e_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c971_c971,
	&emulator_compiled_segments_funcs::seg_c972_support_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c975_c975,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c978_c978,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97a_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97e_c97e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c982_c982,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c986_c986,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c98a_c98a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c98e_c98e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c992_c992,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c996_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c99b_c99b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c99e_go_back,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a3_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9ab_go_right,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9af_c9af,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b3_no_press,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9ca_end,
	&emulator_compiled_segments_funcs::seg_c9cb_option_to_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d0_nt_payload_btc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d6_nt_payload_paypal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9dc_nt_payload_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9de_nt_payload_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9e0_init_support_btc_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9eb_init_support_paypal_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f3_init_support_qr_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9fb_c9fb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca02_ca02,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca0e_support_qr_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca11_ca11,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca14_ca14,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca18_ca18,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca1c_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca20_ca20,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca24_ca24,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca27_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca2c_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca2f_game_modes_init_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca33_game_modes_pre_update_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca35_init_game_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca38_ca38,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca3d_ca3d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca42_ca42,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca47_ca47,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca4c_ca4c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca4f_zero_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca56_ca56,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca59_ca59,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca6e_ca6e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca86_ca86,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca9a_position_player_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cab9_cab9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cabe_cabe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cac3_cac3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cade_cade,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caf3_caf3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb10_cb10,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb23_cb23,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb37_initialize_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb50_cb50,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb53_cb53,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb60_cb60,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb65_cb65,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb68_cb68,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb6d_cb6d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb78_cb78,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb7d_cb7d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb80_cb80,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb85_cb85,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb88_cb88,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cba3_cba3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbbe_cbbe,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbc1_cbc1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbc4_cbc4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbd3_cbd3,
	&emulator_compiled_segments_funcs::seg_cbd4_place_player_a_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbd6_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbe2_cbe2,
	&emulator_compiled_segments_funcs::seg_cbe3_place_player_b_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbe5_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbf1_cbf1,
	&emulator_compiled_segments_funcs::seg_cbf2_place_character_normal_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc05_place_character_alternate_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc15_place_character_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc39_place_character_ppu_illustrations,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc6c_cc6c,
	&emulator_compiled_segments_funcs::seg_cc6d_illustrations_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc6f_illustrations_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc71_header_player_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc75_header_player_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc79_game_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc7c_cc7c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc8b_cc8b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc8f_cc8f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc92_cc92,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cca7_cca7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb3_ccb3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb8_ccb8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccbd_ccbd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc0_end_effects,
	&emulator_compiled_segments_funcs::seg_ccc1_no_screen_shake,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc5_ccc5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc8_ccc8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cccc_no_slowdown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cce4_cce4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cce7_cce7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccea_end,
	&emulator_compiled_segments_funcs::seg_cceb_slowdown,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccef_ccef,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccf5_ccf5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccfc_keep_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd03_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd0c_end,
	&emulator_compiled_segments_funcs::seg_cd0d_update_players,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd0f_hitstun_one_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd13_cd13,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd15_hitstun_next_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd1a_cd1a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd1c_hitbox_one_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd1f_cd1f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd24_cd24,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd26_update_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd3b_cd3b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd41_cd41,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd50_end_input_event,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd56_cd56,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd59_cd59,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd5d_cd5d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd60_cd60,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd63_end_visuals,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd68_cd68,
	&emulator_compiled_segments_funcs::seg_cd69_player_state_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd79_check_player_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd7f_cd7f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd82_process_checks,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cda5_cda5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cda7_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdab_cdab,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdce_cdce,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd0_cdd0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd3_cdd3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdfa_cdfa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce07_check_hitbox_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce2a_ce2a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce2c_ce2c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce31_ce31,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce33_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce38_ce38,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce3a_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce4f_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce52_hurt_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce55_ce55,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce58_ce58,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce5b_ce5b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce68_ce68,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce6b_cap_damages,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce6d_apply_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce88_ce88,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce95_apply_force_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceca_ceca,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cee6_cee6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cefb_cefb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf0f_passthrough_kb_h,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf15_end_abs_kb_h,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf19_cf19,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf2d_passthrough_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf33_end_abs_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf58_cf58,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf5c_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf73_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf87_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf8b_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa2_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfb6_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfca_ntsc_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfcd_cfcd,
	&emulator_compiled_segments_funcs::seg_cfce_plus_20_percent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d00e_move_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d01e_vertical,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d02f_d02f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d034_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d036_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d042_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d04b_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d051_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d056_d056,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d058_horizontal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d069_d069,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d06e_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d070_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d07c_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d085_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d08b_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d090_d090,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ab_move_player_handle_one_platform_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0c3_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ce_d0ce,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0d0_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0d2_d0d2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0dd_d0dd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0df_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0e1_d0e1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ec_d0ec,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ee_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0f0_d0f0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0fb_d0fb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0fd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ff_d0ff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d114_no_collision,
	&emulator_compiled_segments_funcs::seg_d115_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d121_d121,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d123_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d125_d125,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d131_d131,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d133_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d135_d135,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d141_d141,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d143_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d145_d145,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d151_d151,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d153_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d155_d155,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d16b_no_collision,
	&emulator_compiled_segments_funcs::seg_d16c_move_player_handle_one_platform_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d184_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d18f_d18f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d191_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d193_d193,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d19e_d19e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1a0_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1a2_d1a2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1ad_d1ad,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1af_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1b1_d1b1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1bc_d1bc,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1be_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1c0_d1c0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1d5_no_collision,
	&emulator_compiled_segments_funcs::seg_d1d6_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e2_d1e2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e4_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e6_d1e6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1f2_d1f2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1f4_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1f6_d1f6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d202_d202,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d204_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d206_d206,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d212_d212,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d214_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d216_d216,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d22c_no_collision,
	&emulator_compiled_segments_funcs::seg_d22d_move_player_handle_one_platform_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d245_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d250_d250,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d252_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d254_d254,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d25f_d25f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d261_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d263_d263,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d26e_d26e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d270_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d272_d272,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d27d_d27d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d27f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d281_d281,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d28e_no_collision,
	&emulator_compiled_segments_funcs::seg_d28f_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d29b_d29b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d29d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d29f_d29f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ab_d2ab,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ad_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2af_d2af,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2bb_d2bb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2bd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2bf_d2bf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2cb_d2cb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2cd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2cf_d2cf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2dd_no_collision,
	&emulator_compiled_segments_funcs::seg_d2de_move_player_handle_one_platform_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2f6_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d301_d301,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d303_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d305_d305,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d310_d310,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d312_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d314_d314,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d31f_d31f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d321_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d323_d323,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d32e_d32e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d330_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d332_d332,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d343_no_collision,
	&emulator_compiled_segments_funcs::seg_d344_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d350_d350,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d352_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d354_d354,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d360_d360,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d362_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d364_d364,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d370_d370,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d372_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d374_d374,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d380_d380,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d382_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d384_d384,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d396_no_collision,
	&emulator_compiled_segments_funcs::seg_d397_check_player_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3a1_d3a1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3a3_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3a5_d3a5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3af_d3af,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b1_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b3_d3b3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3bd_d3bd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3bf_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3c1_d3c1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3cb_d3cb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3cd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3cf_d3cf,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3d3_d3d3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3da_d3da,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e9_d3e9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ec_offground,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3fb_d3fb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3fe_set_death_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d401_d401,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d40a_d40a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d40e_d40e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d410_d410,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d415_pass_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d41a_left_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d41c_cap_vertical_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d41e_end_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d422_d422,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d424_d424,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d429_pass_cap_horizontal_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d42e_top_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d430_cap_horizontal_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d432_end_cap_horizontal_blast,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d435_d435,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d439_d439,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d44c_d44c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d44f_gameover,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d453_d453,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d456_d456,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d458_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d45f_d45f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d461_no_set_winner,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d478_d478,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d47c_end,
	&emulator_compiled_segments_funcs::seg_d47d_write_player_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d483_d483,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d489_d489,
	&emulator_compiled_segments_funcs::seg_d48a_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d499_d499,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b5_less_than_one_hundred,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4bf_one_hundred,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c8_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4d2_d4d2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4da_less_than_fifty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4e0_d4e0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4e4_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4e8_d4e8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ec_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f0_d4f0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f4_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f8_d4f8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4fc_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d51d_stocks_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d538_filled_stock,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d53d_empty_stock,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d53f_set_stock_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d547_d547,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d54f_end_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d557_damages_ppu_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d561_character_icons,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d563_player_effects,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d566_d566,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d569_d569,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d56c_d56c,
	&emulator_compiled_segments_funcs::seg_d56d_blinking,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d57b_d57b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d584_d584,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d586_d586,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d58d_alternate_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d59a_palette_selected,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d59e_d59e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ab_player_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b0_d5b0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b2_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5bd_d5bd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5c0_update_sprites,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5c2_update_one_player_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5f1_d5f1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5f4_d5f4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5fa_d5fa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d608_d608,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d60a_d60a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d60e_d60e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d610_d610,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d613_oos_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d628_oos_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d63d_oss_top,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d652_oos_bot,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d664_oos_indicator_placed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d669_d669,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d66c_d66c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d66e_loop,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d671_d671,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d674_all_player_sprites_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d677_d677,
	&emulator_compiled_segments_funcs::seg_d678_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d67a_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d67c_oos_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d67e_oos_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d680_game_mode_local_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d683_game_mode_local_pre_update,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d687_d687,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d68b_d68b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d68f_d68f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d693_d693,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d696_end_ai,
	&emulator_compiled_segments_funcs::seg_d697_game_mode_online_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d69a_game_mode_online_pre_update,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d69d_init_gameover_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6ad_d6ad,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6b0_d6b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6cd_d6cd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6dd_d6dd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6e0_d6e0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6ef_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6fa_d6fa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d715_d715,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d730_d730,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d742_winner_name_writing,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d74f_d74f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d77c_d77c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d796_d796,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7c0_d7c0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7d6_initialize_a_balloon,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f1_d7f1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f3_position_a_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f6_d7f6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7fc_d7fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d807_d807,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d80a_d80a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d817_gameover_screen_tick,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d819_check_ready,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d81d_d81d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d821_d821,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d825_controller_a_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d82a_d82a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d82c_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d830_d830,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d834_d834,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d83a_d83a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d83e_d83e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d842_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d847_d847,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d84a_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d852_update_animations,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d855_d855,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d858_d858,
	&emulator_compiled_segments_funcs::seg_d859_next_screen_by_game_mode,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d85b_gamover_update_players,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d873_d873,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d876_d876,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d884_d884,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d891_d891,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d894_d894,
	&emulator_compiled_segments_funcs::seg_d895_update_balloons,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d899_update_one_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d89c_d89c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8b0_d8b0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8b4_end_y,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8b7_d8b7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8c9_d8c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8ce_positive,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8d0_high_byte_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8ed_d8ed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8f8_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d900_end_sprite_layer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d90a_d90a,
	&emulator_compiled_segments_funcs::seg_d90b_gameover_random_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d918_init_mode_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d91b_d91b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d923_mode_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d92b_init_netplay_launch_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d92e_d92e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d936_netplay_launch_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d93e_online_mode_screen_fadein,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d946_init_online_mode_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d949_d949,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d951_online_mode_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d959_init_stage_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d95c_d95c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d964_stage_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d96c_stage_selection_screen_long_memcopy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d973_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d97a_d97a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d980_stage_selection_back_to_char_select,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d994_init_title_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d99c_d99c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a7_d9a7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9b2_d9b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9ca_d9ca,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9de_ntsc_indicator_done,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9e5_d9e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9f0_d9f0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9f4_d9f4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9fc_d9fc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9ff_d9ff,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da02_da02,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da05_soft_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da0c_end_menu_init,
	&emulator_compiled_segments_funcs::seg_da0d_set_title_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da1d_da1d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da20_init_title_animation,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da23_da23,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da34_da34,
	&emulator_compiled_segments_funcs::seg_da35_palette_title_initial,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da55_title_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da5d_da5d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da60_da60,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da63_da63,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da6b_da6b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da70_da70,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da73_update_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da77_da77,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da7e_cheat_succeed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da83_press_any_key,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da87_da87,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da8b_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da8f_da8f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da93_da93,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da96_next_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da99_da99,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da9e_end,
	&emulator_compiled_segments_funcs::seg_da9f_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab3_tick_title_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac4_dac4,
	&emulator_compiled_segments_funcs::seg_dac5_anim_state_handlers_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad1_change_anim_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad8_wait_logo,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dade_dade,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae1_end,
	&emulator_compiled_segments_funcs::seg_dae2_show_logo,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae5_dae5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae7_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daf3_daf3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daf6_daf6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db05_db05,
	&emulator_compiled_segments_funcs::seg_db06_logo_palette_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db0e_shake,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db11_db11,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db15_db15,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db18_end,
	&emulator_compiled_segments_funcs::seg_db19_wait_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db1f_db1f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db22_db22,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db25_end,
	&emulator_compiled_segments_funcs::seg_db26_show_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db2e_db2e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db31_db31,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db64_finish,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db67_db67,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db6f_db6f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db72_end,
	&emulator_compiled_segments_funcs::seg_db73_text_colors,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db76_title_screen_restore_music_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db7a_db7a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db7d_db7d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db80_mute,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db83_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db8e_state_transition_pretransition_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dba0_state_transition_posttransition_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbb2_dummy_transition,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbc0_dbc0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbc6_state_transition_pre_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbd9_dbd9,
	&emulator_compiled_segments_funcs::seg_dbda_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbf6_state_transition_pre_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc09_dc09,
	&emulator_compiled_segments_funcs::seg_dc0a_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc26_state_transition_post_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc3b_dc3b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc44_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc6c_state_transition_post_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc81_dc81,
	&emulator_compiled_segments_funcs::seg_dc82_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc96_dc96,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcaa_scroll_transition,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcae_dcae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcc2_set_up_values,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd5_end_set_values,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd9_dcd9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcdf_do_not_touch_offsets,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce3_save_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcea_dcea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcfa_hidden_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcff_two_byte_position_stored,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd0b_dd0b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd0d_scroll_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd13_dd13,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd17_dd17,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd19_set_camera_scroll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd30_dd30,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd34_dd34,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd3c_dd3c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd44_simple_sleep,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd47_end_sleep,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd57_clean,
	&emulator_compiled_segments_funcs::seg_dd58_end,
	&emulator_compiled_segments_funcs::seg_dd59_move_sprites,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd5c_dd5c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd60_dd60,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd64_dd64,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd68_dd68,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd6c_dd6c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd70_dd70,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd74_dd74,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd7b_update_clouds,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd7e_vertical_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd94_dd94,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd97_dd97,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd9a_dd9a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd9e_update_screen_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddb2_move_one_screen_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc1_ddc1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc6_hide_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc8_update_oam,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddd6_end,
	&emulator_compiled_segments_funcs::seg_ddd7_init_wifi_settings_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddda_ddda,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde2_wifi_settings_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddea_clouds_initial_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddef_ddef,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddf9_menu_common_clouds_speed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddfe_init_menu,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de02_position_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de1d_re_init_menu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de2b_copy_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de36_de36,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de3f_de3f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de41_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de44_de44,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de47_cloud_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de5b_set_menu_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de6b_de6b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de6e_tick_moving_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de70_move_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de7a_de7a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de7c_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de7f_de7f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de82_de82,
	&emulator_compiled_segments_funcs::seg_de83_menu_position_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de85_position_one_cloud,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de88_de88,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de8b_de8b,
	&emulator_compiled_segments_funcs::seg_de8c_menu_position_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de98_de98,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de9c_do_not_hide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dea9_place_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deaf_deaf,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb3_skip_y_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec8_dec8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_decb_sprite_offset_x,
	nullptr,
	&emulator_compiled_segments_funcs::seg_decd_decd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded0_sprite_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded5_stage_generic_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dedd_dedd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_def8_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df02_df02,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df11_df11,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df21_copy_header_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df2c_copy_elements_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df33_df33,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df3b_copy_one_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df46_df46,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df49_copy_data_end,
	&emulator_compiled_segments_funcs::seg_df4a_stage_iterate_all_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df4c_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df51_df51,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df54_df54,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df58_df58,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df5f_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df63_df63,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df65_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df6a_df6a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df6d_df6d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df71_df71,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df78_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df7c_df7c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df7e_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df83_df83,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df86_df86,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8a_df8a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df91_end_iterate_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df93_end,
	&emulator_compiled_segments_funcs::seg_df94_ai_action_double_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df9d_ai_action_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfa7_ai_action_right_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfac_ai_action_down_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb1_ai_action_special_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb9_ai_action_idle,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfbc_ai_level_to_delay,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfbf_ai_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd1_ai_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfe4_find_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dff7_run_current_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e016_e016,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e01f_e01f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e021_do_action,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e024_e024,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e02b_e02b,
	&emulator_compiled_segments_funcs::seg_e02c_ai_continue_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e041_e041,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e045_next_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e054_e054,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e05a_set_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e064_end,
	&emulator_compiled_segments_funcs::seg_e065_ai_attack_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e099_e099,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09e_right_facing,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a0_end_direction_flag,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a4_e0a4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a9_grounded,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0ab_end_ground_flag,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b1_check_one_attack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b8_e0b8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0bf_condition_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e11a_e11a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e11c_e11c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e134_e134,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e137_next_attack,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e13b_e13b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e13e_end,
	&emulator_compiled_segments_funcs::seg_e13f_ai_shield_selector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e143_e143,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e147_e147,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e14d_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e155_bot_on_the_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e15a_distance_computed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e15e_e15e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e175_end,
	&emulator_compiled_segments_funcs::seg_e176_ai_space_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e17c_e17c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e182_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e188_bot_on_the_left,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e18b_spot_computed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e198_e198,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e19d_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1af_end,
	&emulator_compiled_segments_funcs::seg_e1b0_ai_chase_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1ba_e1ba,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1bc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1be_e1be,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1c2_e1c2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1c9_e1c9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1cc_check_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1d0_e1d0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1d3_no_tap_down,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1d7_e1d7,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1d9_e1d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1df_go_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e4_go_left,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e6_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1ef_e1ef,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1f3_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1f9_e1f9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e200_end_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e20f_e20f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e21a_negative_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e222_end_set_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e23a_e23a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e23e_dont_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e24b_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e258_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e267_action_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e270_ai_delay_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e275_e275,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e28d_no_delay,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e293_end,
	&emulator_compiled_segments_funcs::seg_e294_network_init_stage,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e29f_clear_one_input,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2aa_e2aa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2ba_network_tick_ingame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2be_e2be,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2c1_do_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2d2_e2d2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e310_controller_sent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e315_e315,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e324_e324,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e32b_e32b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e331_e331,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e33c_skip_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e346_state_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e355_e355,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e357_end_switch_selected_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e35a_e35a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e35e_e35e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e362_e362,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e366_e366,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e368_end,
	&emulator_compiled_segments_funcs::seg_e369_update_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e387_e387,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e38d_future,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e392_past,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e394_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e396_rollback_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3a6_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3b3_e3b3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3bb_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ca_e3ca,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d2_end_delayed_inputs,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d7_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3f3_e3f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3fa_e3fa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e402_screen_shake_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e410_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e41b_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e422_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e481_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e498_e498,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e49f_e49f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4b4_e4b4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4bb_e4bb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4bd_e4bd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4c3_roll_forward_one_step,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4c7_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4de_e4de,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4e0_end_switch_selected_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4e3_e4e3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4e6_e4e6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4eb_dont_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4f0_no_rollback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e501_set_opponent_buttons_from_history,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e506_e506,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e50d_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e513_mark_nexts_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e51b_known,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e521_place_character_ppu_tiles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e530_e530,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e53a_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e541_end_set_ppu_addr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e556_sleep_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e559_e559,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e55c_e55c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e55f_copy_common_tileset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e57c_process_nt_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e581_handle_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e586_e586,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e59b_write_one_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a6_e5a6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a9_end_buffers,
	&emulator_compiled_segments_funcs::seg_e5aa_keep_input_dirty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5af_get_transition_id,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5b9_change_global_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5c5_e5c5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5d2_e5d2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5db_e5db,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5dd_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5e5_e5e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f6_e5f6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f9_e5f9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ff_find_transition_index,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e602_e602,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e606_check_one_entry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e60b_e60b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e60f_e60f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e613_not_found,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e615_found,
	&emulator_compiled_segments_funcs::seg_e616_pre_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e619_e619,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e61d_e61d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e62a_end,
	&emulator_compiled_segments_funcs::seg_e62b_post_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e62e_e62e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e632_e632,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e63f_e63f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e642_no_transition,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e64c_e64c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e651_end,
	&emulator_compiled_segments_funcs::seg_e652_animation_init_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e68f_animation_state_change_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6b0_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6d7_animation_draw_pre_initialized,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6e7_e6e7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6ee_default_direction,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6f2_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6fb_e6fb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e710_end_foreground_sprites,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e714_e714,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e71b_e71b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72c_default_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e73a_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e73f_clear_unused_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e748_e748,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e750_clear_one_unused_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e75a_end,
	&emulator_compiled_segments_funcs::seg_e75b_animation_handle_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e760_e760,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e765_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e767_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e776_e776,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e77b_e77b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e780_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e786_e786,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e789_end_anim_hook,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e79d_e79d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a2_flip_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a9_got_relative_pos,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ac_e7ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b1_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b3_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c2_e7c2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c5_continue,
	&emulator_compiled_segments_funcs::seg_e7c6_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7cf_e7cf,
	&emulator_compiled_segments_funcs::seg_e7d0_skip,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7d3_skip2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7dc_animation_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7e0_e7e0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7e9_e7e9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7eb_skip_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ee_reset_cnt,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7f0_ok,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7f2_skip,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e80c_e80c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e833_e833,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e83e_store_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e84f_end,
	&emulator_compiled_segments_funcs::seg_e850_boxes_overlap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e85a_e85a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e85c_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e85e_e85e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e868_e868,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e86a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e86c_e86c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e876_e876,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e878_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e87a_e87a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e884_e884,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e886_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e888_e888,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e88d_no_overlap,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e88f_end,
	&emulator_compiled_segments_funcs::seg_e890_audio_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e893_e893,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e898_audio_cut_sfx,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e89e_audio_play_sfx,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8ba_audio_play_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8c3_e8c3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8ce_e8ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8d3_e8d3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8eb_e8eb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8ff_e8ff,
	&emulator_compiled_segments_funcs::seg_e900_init_channel,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e90b_e90b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e91b_e91b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e921_pulse_2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e924_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e932_end_pulse_specifics,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e94f_audio_mute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e96a_audio_unmute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e972_square_reinit_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e98b_e98b,
	&emulator_compiled_segments_funcs::seg_e98c_audio_music_extra_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e990_e990,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e994_e994,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e998_e998,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e99f_ok,
	&emulator_compiled_segments_funcs::seg_e9a0_audio_music_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9a9_e9a9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ae_e9ae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b3_e9b3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b8_e9b8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9bb_music_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c0_play_sfx,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c3_e9c3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c6_e9c6,
	&emulator_compiled_segments_funcs::seg_e9c7_apply_music,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9cb_e9cb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ce_sfx_ok,
	&emulator_compiled_segments_funcs::seg_e9cf_noise_fx_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea0e_ea0e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea11_ea11,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea4e_noise_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea5b_ea5b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea6a_overflow,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea6f_ea6f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea77_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea7c_store_result,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea7f_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea84_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaa6_eaa6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaba_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eabe_noise_apply_mirrored_apu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac3_eac3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eacb_regular_write,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eadc_end_write_apu,
	&emulator_compiled_segments_funcs::seg_eadd_pulse_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eae2_eae2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eae9_do_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eafb_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb01_negative,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb04_end_byte_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb0c_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb14_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb37_eb37,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb3d_eb3d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb4c_skip_opcode_update,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb51_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb5e_eb5e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb72_eb72,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb7b_triangle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb80_eb80,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb85_eb85,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb8a_unmute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb98_write_linear_cnt,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb9b_end_write_apu,
	&emulator_compiled_segments_funcs::seg_eb9c_opcode_noise_sample_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb9e_opcode_sample_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebc3_ebc3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd3_no_track_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebde_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebe1_opcode_chan_params,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebfe_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec10_opcode_chan_volume_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec18_opcode_chan_volume_high,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec22_opcode_noise_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec2a_opcode_set_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec40_opcode_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec58_note_table_lookup,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec66_opcode_play_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec76_left_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec78_one_left_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec7b_ec7b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec7f_right_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec81_one_right_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec84_ec84,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec88_end_wait_compute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec93_ec93,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca7_opcode_play_timed_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecaf_ecaf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eccd_opcode_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecda_opcode_noise_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ece5_opcode_noise_long_wait,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ece7_opcode_long_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecf0_opcode_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed05_opcode_noise_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed1a_opcode_pitch_slide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed20_ed20,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed22_set_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed2e_opcode_pulse_meta_uslide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed35_opcode_pulse_meta_dslide,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed39_opcode_pulse_meta_common,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed43_ed43,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed47_ed47,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed4d_ed4d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed59_end_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed65_ed65,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed6c_ed6c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed71_keep_volume,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed73_set_volume_mask,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed7b_ed7b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed81_replace_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed8b_end_volume_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed91_ed91,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed9c_end_pitch_slide,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed9f_opcode_noise_set_periodic,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eda3_eda3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edab_unset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb0_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb6_opcode_noise_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edcd_opcode_noise_pitch_slide_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edda_opcode_noise_pitch_slide_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ede2_opcode_noise_end_sfx,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ede5_ede5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee27_particle_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee2d_process_one_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee32_ee32,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee35_ee35,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee38_skip_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee3d_next_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee48_ee48,
	&emulator_compiled_segments_funcs::seg_ee49_process_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee59_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee63_ee63,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee6a_ee6a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee6f_ee6f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee88_hide_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee8d_particle_drawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee94_end,
	&emulator_compiled_segments_funcs::seg_ee95_particle_handlers_reinit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eea0_eea0,
	&emulator_compiled_segments_funcs::seg_eea1_loop_on_particle_boxes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eea3_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eea8_eea8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeb1_eeb1,
	&emulator_compiled_segments_funcs::seg_eeb2_loop_on_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeb6_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eebc_eebc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eec5_eec5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eec8_end,
	&emulator_compiled_segments_funcs::seg_eec9_deactivate_particle_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eed1_eed1,
	&emulator_compiled_segments_funcs::seg_eed2_hide_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eed6_eed6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eedb_second_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eedd_set_sprite_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeea_eeea,
	&emulator_compiled_segments_funcs::seg_eeeb_hide_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eef9_fixed_bank_code_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f000_rescue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f00d_f00d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f012_vblank_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f017_f017,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f01a_wait_empty_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f01f_f01f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f026_f026,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f029_f029,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f033_f033,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f036_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f03d_f03d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f040_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f04c_f04c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f04f_f04f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f05a_f05a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f05d_expected_length,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f064_f064,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f067_expected_type,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f06c_f06c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f06f_file_exists,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f076_f076,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f079_f079,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f086_flash_safe_sectors,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f08b_flash_all_sectors,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f08d_flash_sectors_launch,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0ae_copy_one_page,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0b0_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0b7_f0b7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0bf_f0bf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c5_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c8_f0c8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0cb_prepare_display,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0dd_f0dd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0e4_f0e4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0eb_f0eb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0f2_f0f2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0f9_f0f9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f100_f100,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f107_f107,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f129_oam_mirror_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f12f_f12f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f132_f132,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f156_f156,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f173_fatal_failure,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f176_f176,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f187_testdll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f18d_infinite_loop,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f18f_flash_sectors_rom,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f19b_flash_one_sector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a7_first_sector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ab_second_sector,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ad_write_val,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b6_f1b6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ba_wait_esp_ready,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1bf_f1bf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ce_wait_answer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1d3_f1d3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1d5_burn_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1db_f1db,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1dd_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1f5_wait_write_complete,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1f8_f1f8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1fc_f1fc,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f200_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f206_f206,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f20c_end_wait_write_complete,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f211_f211,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f219_f219,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21b_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21f_f21f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f224_f224,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22a_f22a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22d_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f233_f233,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f238_end_last_progress_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f23c_f23c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f240_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f242_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f245_show_progress,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f24b_f24b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f253_vblankwait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f258_f258,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f26d_f26d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f273_no_failure,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f277_erase_failure,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f27b_write_failure,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f27d_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f292_end,
	&emulator_compiled_segments_funcs::seg_f293_erase_sector_sequence,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2c6_wait_completion,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2c9_f2c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2d1_f2d1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2d5_f2d5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2d9_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2df_end_wait_completion,
	&emulator_compiled_segments_funcs::seg_f2e0_mapper_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f323_f323,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f329_f329,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f32d_full_rescue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f332_safe_rescue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f337_no_rescue,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33a_esp_cmd_clear_buffers,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33c_esp_cmd_get_esp_status,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33e_esp_send_cmd_short,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f342_esp_send_cmd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f34b_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f354_f354,
	&emulator_compiled_segments_funcs::seg_f355_esp_get_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f35c_f35c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f363_store_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f36e_copy_one_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f371_f371,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f37a_end,
	&emulator_compiled_segments_funcs::seg_f37b_wait_ready_bit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f380_f380,
	&emulator_compiled_segments_funcs::seg_f381_fetch_controllers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f38d_fetch_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f397_next_btn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a3_f3a3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a8_f3a8,
	&emulator_compiled_segments_funcs::seg_f3a9_wait_next_frame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ad_waiting,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3b1_f3b1,
	&emulator_compiled_segments_funcs::seg_f3b2_absolute_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3b6_f3b6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3bb_end,
	&emulator_compiled_segments_funcs::seg_f3bc_multiply,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c7_additions_loop,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3cb_f3cb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3dc_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3df_last_nt_buffer,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e1_handle_buff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e6_f3e6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3f3_end,
	&emulator_compiled_segments_funcs::seg_f3f4_reset_nt_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3fa_dummy_routine,
	&emulator_compiled_segments_funcs::seg_f3fb_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f408_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f411_f411,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f414_f414,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f41a_draw_zipped_nametable,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f429_load_background,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f42d_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f433_f433,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f436_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f439_f439,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f43d_f43d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f440_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f446_f446,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f449_f449,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f44c_end,
	&emulator_compiled_segments_funcs::seg_f44d_next_byte,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f451_f451,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f453_end_inc_vector,
	&emulator_compiled_segments_funcs::seg_f454_call_pointed_subroutine,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f457_copy_palette_to_ppu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f46b_copy_one_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f474_f474,
	&emulator_compiled_segments_funcs::seg_f475_shake_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f491_f491,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f496_set_screen_two,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f49d_set_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4a3_f4a3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ad_end,
	&emulator_compiled_segments_funcs::seg_f4ae_get_unzipped_bytes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4b6_skip_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ba_carry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4be_f4be,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c0_no_carry,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c2_loop_without_dec,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c6_f4c6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ca_normal_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4cd_f4cd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4cf_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d2_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d5_f4d5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d7_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4dd_f4dd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4df_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e3_skip_all,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f4_done,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f7_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4fb_get_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ff_f4ff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f503_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f510_f510,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f512_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f517_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51a_f51a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51c_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f522_f522,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f524_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f527_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f538_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f53a_force_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f53c_end,
	&emulator_compiled_segments_funcs::seg_f53d_construct_palettes_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f540_f540,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f556_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f561_f561,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f567_push_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f575_construct_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f578_f578,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f580_copy_header_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f58b_f58b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f58f_copy_payload_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f59a_f59a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5a0_clear_bg_bot_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5b3_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5bc_f5bc,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5be_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5c4_f5c4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ca_f5ca,
	&emulator_compiled_segments_funcs::seg_f5cb_switch_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5cf_trampoline,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5d7_f5d7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5da_f5da,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5de_exec,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5e1_cpu_to_ppu_copy_tileset_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ee_cpu_to_ppu_copy_tileset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f8_f5f8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5fa_copy_one_tile,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5fc_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f606_f606,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f617_f617,
	&emulator_compiled_segments_funcs::seg_f618_cpu_to_ppu_copy_charset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f63e_f63e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f640_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f645_f645,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f64a_f64a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f653_f653,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f655_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f659_f659,
	&emulator_compiled_segments_funcs::seg_f65a_copy_one_line,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f65c_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f66b_f66b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f673_f673,
	&emulator_compiled_segments_funcs::seg_f674_modifier_force_0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f677_modifier_force_1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f67a_modifier_swap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f681_bits_modifiers_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f685_fill_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f68b_f68b,
	&emulator_compiled_segments_funcs::seg_f68c_fixed_memcpy,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f68e_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f692_f692,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f69a_end,
	&emulator_compiled_segments_funcs::seg_f69b_switch_selected_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f69e_f69e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a0_end,
	&emulator_compiled_segments_funcs::seg_f6a1_merge_to_player_velocity,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a3_add_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6b2_f6b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c3_check_diff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c7_f6c7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6cd_f6cd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6da_add_step_size,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6e6_f6e6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6e8_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6ea_f6ea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6fa_decrement,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f707_next_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f70e_f70e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f713_apply_player_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f72d_f72d,
	&emulator_compiled_segments_funcs::seg_f72e_gravity_step,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f730_reset_default_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f73d_check_in_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f744_f744,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f748_f748,
	&emulator_compiled_segments_funcs::seg_f749_simple_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f74d_f74d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f751_f751,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f758_end_left_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f75f_end_right_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f766_end_top_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f76d_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f76f_not_in_platform,
	&emulator_compiled_segments_funcs::seg_f770_oos_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f77c_f77c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f77e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f780_f780,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f787_f787,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f78e_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f79a_f79a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f79c_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f79e_f79e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7a5_f7a5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ac_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7b8_f7b8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ba_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7bc_f7bc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c3_f7c3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ca_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7d6_f7d6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7d8_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7da_f7da,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e1_f7e1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e8_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ea_not_in_platform,
	&emulator_compiled_segments_funcs::seg_f7eb_controller_callbacks,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ed_switch_linear,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ef_check_controller_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7f3_f7f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f80a_next_controller_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f80f_f80f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f821_reinit_c_stack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f82a_wait_vbi,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f82d_vblankwait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f832_f832,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9b5_default_gravity_per_system_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9b7_pal_to_ntsc_velocity_high_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa19_fa19,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fab7_pal_to_ntsc_velocity_low_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fbb7_pal_to_ntsc_velocity_neg_high_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc59_fc59,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdb7_server_bytecode_error,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdbc_server_bytecode_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdbf_fdbf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fde0_fde0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fde5_server_bytecode_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fde8_fde8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
};

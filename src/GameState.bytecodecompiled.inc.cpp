namespace emulator_compiled_segments_funcs {
void seg_c000_cursed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTI_IMP();
	if (emu.stopped) { return; }
}
void seg_c003_nmi(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c00c_c00c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c017_c017(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTI_IMP();
	if (emu.stopped) { return; }
}
void seg_c02d_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTI_IMP();
	if (emu.stopped) { return; }
}
void seg_c033_special_processing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c037_c037(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c03a_nmi_tick_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c03c_save_one_couple(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c047_c047(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c04d_c04d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c050_c050(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c054_c054(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c056_restore_one_couple(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c05f_c05f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c062_reset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c065_c065(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c067_clrmem(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c085_c085(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c089_vblankwait2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c08c_c08c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c08d_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c092_c092(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c096_c096(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
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
void seg_c09a_pal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
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
void seg_c0a9_c0a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c0ac_c0ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c0b5_forever(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c0b8_c0b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c0be_tick_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c0c1_c0c1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c0c4_c0c4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c0d5_c0d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c0d8_c0d8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c0dd_c0dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c112_characters_bank_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c117_c117(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c116_characters_tiles_data_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c11e_characters_tiles_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c122_characters_properties_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
}
void seg_c12e_characters_palettes_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
}
void seg_c136_characters_alternate_palettes_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ZEX();
	if (emu.stopped) { return; }
}
void seg_c13a_characters_weapon_palettes_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ZEX();
	if (emu.stopped) { return; }
}
void seg_c13f_c13f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
}
void seg_c14a_characters_start_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
}
void seg_c16f_c16f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
}
void seg_c176_characters_onhurt_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
}
void seg_c17a_set_player_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c187_c187(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c18e_animation_state_vectors_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
}
void seg_c190_animation_state_vectors_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
}
void seg_c1a4_stages_tick_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c1d6_c1d6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INX();
	if (emu.stopped) { return; }
}
void seg_c1da_stage_palettes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_c1f5_stage_routine_fadeout_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
}
void seg_c1fe_stages_data(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c20c_c20c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZEY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
}
void seg_c23d_stages_tileset_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_INY();
	if (emu.stopped) { return; }
}
void seg_c246_stages_tileset_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
}
void seg_c24f_stages_tileset_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
}
void seg_c25a_player_respawn_max_duration(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c25c_player_down_tap_max_duration(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
}
void seg_c260_tech_window(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c262_stb_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c295_not_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c29b_c29b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2a0_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2a2_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2ab_c2ab(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2b0_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2b2_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2b8_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2c1_c2c1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2c6_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2c8_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2d4_c2d4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2d9_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2db_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2de_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2e4_c2e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2e9_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2eb_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2f4_c2f4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2f9_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2fb_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c336_c336(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c33b_fetch_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c340_not_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c346_c346(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c34b_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c34d_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c356_c356(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c35b_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c35d_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c377_flipped(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c380_c380(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c385_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c387_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c393_c393(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c398_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c39a_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3c3_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c3c9_c3c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c3ce_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3d0_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3d9_c3d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c3de_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3e0_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c400_c400(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c404_c404(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c406_ignore_enabled(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c43b_end_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c43f_c43f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c442_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c443_particle_directional_indicator_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c47c_c47c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c47d_set_particle_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4a3_particle_directional_indicator_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c4a7_c4a7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4a8_do_something(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4b5_c4b5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c4b8_c4b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c4bb_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c4c0_c4c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4c2_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4c3_move_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4ce_c4ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4cf_move_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4f5_c4f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c4fa_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4fc_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c50c_c50c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c511_separate(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c516_set_y_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c52b_c52b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c530_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c532_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c54c_particle_death_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c58e_c58e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c58f_place_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c59d_c59d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c59f_no_reposition_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5b0_c5b0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5b2_no_reposition_y(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5da_particles_start_position_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c5e1_particles_start_position_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c5e8_particle_death_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c5ee_c5ee(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5fc_c5fc(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c603_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c605_do_nothing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c606_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c60b_c60b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c610_audio_music_weak(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c619_audio_music_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c622_audio_play_sfx_from_common_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c627_c627(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c62c_audio_play_sfx_from_list(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c643_sfx_list_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c645_sfx_list_bnk(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
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
void seg_c647_audio_play_crash(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c652_audio_play_death(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c65d_audio_play_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c668_audio_play_parry(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c673_audio_play_shield_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c67e_audio_play_shield_break(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c689_audio_play_title_screen_subtitle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c694_audio_play_interface_click(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c69f_audio_play_fast_fall(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6aa_audio_play_land(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6b5_audio_play_tech(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6c0_audio_play_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6cb_audio_play_aerial_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6d6_audio_play_strike_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6e1_sinbad_audio_play_jab3_land(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6ec_audio_play_target_break(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6f7_audio_play_teleport(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c702_global_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c707_c707(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c71a_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c722_c722(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c72a_c72a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c72f_c72f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c732_c732(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c75f_game_states_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
}
void seg_c77d_init_character_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c780_c780(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c78a_character_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c794_character_selection_tick_char_anims(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_c7ac_c7ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_c7c4_c7c4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c7cc_tick_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7d1_c7d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c7d4_character_selection_get_char_property(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c7fb_character_selection_construct_char_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c808_c808(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c810_character_selection_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c81d_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c826_c826(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c829_c829(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c82f_character_selection_reset_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c839_c839(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c841_default_config(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c871_init_config_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c874_c874(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c87e_config_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c888_init_credits_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c88b_c88b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c895_credits_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c89f_init_support_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_c8c0_c8c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_c8d4_c8d4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_c8e6_c8e6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_c8f8_c8f8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c903_c903(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_c915_c915(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c918_c918(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c91d_support_screen_draw_contents(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c927_copy_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c936_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_c93c_c93c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c940_c940(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c943_tile_value_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c94b_c94b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c954_c954(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c956_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c95f_c95f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c961_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c964_c964(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c965_support_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c968_c968(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c96b_c96b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c96d_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c971_c971(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c975_c975(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c979_c979(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c97d_c97d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c981_c981(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c985_c985(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c989_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c98e_c98e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c991_go_back(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c996_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c99e_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c9a2_c9a2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9a6_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9bd_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c9be_option_to_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_c9c3_nt_payload_btc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c9c9_nt_payload_paypal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c9d1_nt_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9d3_init_support_btc_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9de_init_support_paypal_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9e6_init_support_qr_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9f0_c9f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9f7_c9f7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca03_support_qr_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca06_ca06(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca09_ca09(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca0d_ca0d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca11_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca15_ca15(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ca19_ca19(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca1c_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca21_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ca22_init_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca2c_game_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca2f_ca2f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca3e_ca3e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ca42_ca42(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca45_ca45(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_ca5c_ca5c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca68_ca68(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca6d_ca6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca72_ca72(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca75_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ca76_no_screen_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ca7a_ca7a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca7d_ca7d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ca81_ca81(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca8a_no_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_caa4_caa4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_caa7_caa7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_caaa_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_caae_caae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cab4_cab4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cabb_keep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cac2_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cad1_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cad2_game_mode_goto_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cadb_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cadd_hitstun_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cae1_cae1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cae3_hitstun_next_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cae8_cae8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_caea_hitbox_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_caed_caed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_caf2_caf2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_caf4_update_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_cb0b_cb0b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb11_cb11(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb20_end_input_event(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb26_cb26(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb29_cb29(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cb2d_cb2d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb30_cb30(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb33_end_visuals(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cb38_cb38(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cb39_player_state_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb49_check_player_hit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cb51_cb51(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cb54_check_hitbox_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb77_cb77(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cb79_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cb7d_cb7d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cb80_do_hitbox_check(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cba3_cba3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cba5_cba5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cbab_custom_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cbae_cbae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
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
void seg_cbb0_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
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
void seg_cbc7_cbc7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cbca_direct_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cbcd_cbcd(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
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
void seg_cbf6_cbf6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc03_check_hitbox_hurtbox(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc26_cc26(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cc28_cc28(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cc2b_cc2b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc2d_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc33_custom_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
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
void seg_cc4a_cc4a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cc4d_direct_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cc52_cc52(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_cc54_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_cc6d_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc70_hurt_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc73_cc73(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc76_cc76(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc79_cc79(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc86_cc86(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cc89_cap_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc8b_apply_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cca6_cca6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccb3_bump_player_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccb8_ccb8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ccd3_ccd3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ccd6_invert(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ccea_nullify(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ccf0_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ccf3_bump_player_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccf8_ccf8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd02_cd02(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cd05_invert(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd19_nullify(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd1f_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd22_bump_player_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd27_cd27(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd31_cd31(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd36_invert(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd4a_nullify(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd50_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd64_bump_player_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd69_cd69(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd73_cd73(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd78_invert(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd8c_nullify(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd92_set_thrown_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cda5_bump_player_common(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_cdb1_cdb1(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_LDA_ABY();
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
void seg_cdb3_apply_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_LDA_ABY();
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
void seg_cdde_cdde(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cde1_cde1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_cdeb_cdeb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cded_screen_shake_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cdf0_apply_force_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce14_apply_force_vector_direct(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce25_ce25(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce41_ce41(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce56_ce56(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce6a_passthrough_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce70_end_abs_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ce74_ce74(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce88_passthrough_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce8e_end_abs_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ceb3_ceb3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ceb7_positive(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cece_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cee2_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cee6_positive(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cefd_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf11_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf25_ntsc_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cf28_cf28(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf29_plus_20_percent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_cf69_move_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf79_vertical(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf8a_cf8a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf8f_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf91_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf9f_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfa8_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfae_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cfb3_cfb3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfb5_horizontal(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfc6_cfc6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfcb_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfcd_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfd9_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfe2_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfe8_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cfed_cfed(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d008_move_player_handle_one_platform_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d022_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d02d_d02d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d02f_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d031_d031(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d03c_d03c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d03e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d040_d040(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d04b_d04b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d04d_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d04f_d04f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d05a_d05a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d05c_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d05e_d05e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d073_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d074_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d080_d080(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d082_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d084_d084(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d090_d090(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d092_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d094_d094(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0a0_d0a0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0a2_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0a4_d0a4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0b0_d0b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0b2_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0b4_d0b4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0ca_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d0cb_move_player_handle_one_platform_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0e5_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0f0_d0f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0f2_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0f4_d0f4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0ff_d0ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d101_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d103_d103(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d10e_d10e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d110_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d112_d112(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d11d_d11d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d11f_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d121_d121(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d136_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d137_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d143_d143(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d145_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d147_d147(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d153_d153(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d155_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d157_d157(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d163_d163(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d165_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d167_d167(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d173_d173(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d175_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d177_d177(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d18d_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d18e_move_player_handle_one_platform_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1a8_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1b3_d1b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1b5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1b7_d1b7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1c2_d1c2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1c4_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1c6_d1c6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1d1_d1d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1d3_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1d5_d1d5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1e0_d1e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1e2_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1e4_d1e4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1f5_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d1f6_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d204_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
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
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d214_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d216_d216(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d222_d222(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d224_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d226_d226(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d232_d232(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d234_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d236_d236(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d248_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d249_move_player_handle_one_platform_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d263_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d26e_d26e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d270_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d272_d272(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d27d_d27d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d27f_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d281_d281(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d28c_d28c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d28e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d290_d290(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d29b_d29b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d29d_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d29f_d29f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2b0_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d2b1_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2bd_d2bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d2bf_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d2c1_d2c1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2cd_d2cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d2cf_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d2d1_d2d1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2dd_d2dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2df_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2e1_d2e1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2ed_d2ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2ef_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2f1_d2f1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d303_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d304_check_player_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d30e_d30e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d310_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d312_d312(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d31c_d31c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d31e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d320_d320(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d32a_d32a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d32c_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d32e_d32e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d338_d338(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d33a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d33c_set_death_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d33f_d33f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d348_d348(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d34c_d34c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d34e_d34e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d353_pass_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d358_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d35a_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d35c_end_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d360_d360(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d362_d362(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d367_pass_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d36c_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d36e_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d370_end_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d373_d373(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d377_respawn(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d38a_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d38e_d38e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d391_d391(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d393_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d39a_d39a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d39c_no_set_winner(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3b3_d3b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d3b8_check_collisions(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d3bc_d3bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3c3_d3c3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d3cc_normal(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3db_d3db(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d3de_bumper_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3e1_d3e1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d3e4_offground(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3f3_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d3f7_d3f7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d3fe_bumper_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d401_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d405_d405(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d40c_bumper_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d410_d410(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d413_d413(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d416_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d419_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d41a_write_player_damages(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d420_d420(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d426_d426(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d427_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d434_d434(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d435_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d43c_d43c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d45c_less_than_one_hundred(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d467_one_hundred(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
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
void seg_d471_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d47b_d47b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d483_less_than_fifty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d489_d489(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d48d_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d491_d491(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d495_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d499_d499(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d49d_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d4a1_d4a1(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
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
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d4a5_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
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
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d4c8_stocks_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d4e7_filled_stock(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d4ec_empty_stock(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d4ee_set_stock_tile(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d4f7_end_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d500_damages_ppu_position(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
}
void seg_d50a_character_icons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d50c_player_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d511_d511(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d514_d514(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d517_d517(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d51a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d51b_blinking(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d529_d529(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_d532_d532(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d534_d534(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d53b_alternate_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d548_palette_selected(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d54c_d54c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d559_player_one(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d55e_d55e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d560_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d56b_d56b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d56e_update_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d570_update_one_player_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d5a1_d5a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5a4_d5a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d5aa_d5aa(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5b8_d5b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d5ba_d5ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d5be_d5be(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d5c0_d5c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d5c3_oos_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5d8_oos_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5ed_oss_top(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d602_oos_bot(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d614_oos_indicator_placed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d619_d619(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d61c_d61c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d61e_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d621_d621(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d624_all_player_sprites_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d627_d627(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d628_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
}
void seg_d62a_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
}
void seg_d62c_oos_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	if (emu.stopped) { return; }
}
void seg_d62e_oos_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d630_game_mode_local_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d633_game_mode_local_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d637_d637(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d63b_d63b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d63f_d63f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d643_d643(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d646_end_ai(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d647_game_modes_init_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d64a_game_modes_init_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
}
void seg_d650_game_modes_pre_update_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
}
void seg_d656_game_modes_gameover_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
}
void seg_d659_init_gameover_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d66b_d66b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d66e_d66e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d68d_d68d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d69f_d69f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6a2_d6a2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6b1_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6bc_d6bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d6d9_d6d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d6f6_d6f6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d708_winner_name_writing(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d715_d715(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d744_d744(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d75e_d75e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d78a_d78a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7a0_initialize_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7bb_d7bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7bd_position_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7c0_d7c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7c6_d7c6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7d1_d7d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7d4_d7d4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d7e1_gameover_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7e3_check_ready(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7e7_d7e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7eb_d7eb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7ef_controller_a_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7f4_d7f4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7f6_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7fa_d7fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7fe_d7fe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d804_d804(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d808_d808(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d80c_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d811_d811(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d814_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d81b_d81b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_d81e_no_turbo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d826_update_animations(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d829_d829(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d82c_d82c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d82d_next_screen_by_game_mode(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d82f_gamover_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d849_d849(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d84c_d84c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d85a_d85a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d869_d869(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d86c_d86c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d86d_update_balloons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d871_update_one_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d874_d874(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d888_d888(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d88c_end_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d88f_d88f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8a1_d8a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8a6_positive(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8a8_high_byte_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8c5_d8c5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8d0_background(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8d8_end_sprite_layer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8e2_d8e2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d8e3_gameover_random_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8f0_init_mode_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8f3_d8f3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8fd_mode_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d907_init_netplay_launch_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d90a_d90a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d914_netplay_launch_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d91e_online_mode_screen_fadein(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d928_init_online_mode_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d92b_d92b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d935_online_mode_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d93f_init_stage_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d942_d942(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d94c_stage_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d956_stage_selection_screen_long_memcopy(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d95f_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d966_d966(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d96e_stage_selection_back_to_char_select(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_d984_init_title_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d98e_title_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d9a0_state_transition_pretransition_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d9a2_d9a2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d9a4_d9a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d9a7_state_transition_pretransition_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
}
void seg_d9ae_state_transition_posttransition_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d9b0_d9b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d9b2_d9b2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ZEX();
	if (emu.stopped) { return; }
}
void seg_d9bc_dummy_transition(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9ca_d9ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d9d0_state_transition_pre_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9e3_d9e3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d9e4_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_da00_state_transition_pre_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da13_da13(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da14_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_da30_state_transition_post_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da45_da45(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da4e_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLP_IMP();
	if (emu.stopped) { return; }
}
void seg_da76_state_transition_post_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da8b_da8b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da8c_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_daa0_daa0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dab4_scroll_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dab8_dab8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dacc_set_up_values(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dadf_end_set_values(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dae3_dae3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dae9_do_not_touch_offsets(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_daed_save_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_daf4_daf4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db04_hidden_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db09_two_byte_position_stored(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db15_db15(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db17_scroll_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db1d_db1d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_db21_db21(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db23_set_camera_scroll(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db3a_db3a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_db3e_db3e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db46_db46(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_db4e_simple_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db51_end_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db61_clean(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db62_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db63_move_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db66_db66(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db6a_db6a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db6e_db6e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db72_db72(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db76_db76(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db7a_db7a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db7e_db7e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_db85_update_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db88_vertical_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db9e_db9e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dba1_dba1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dba4_dba4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dba8_update_screen_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbbc_move_one_screen_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbcb_dbcb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dbd0_hide_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbd2_update_oam(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbe0_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dbe1_init_wifi_settings_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dbe4_dbe4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dbee_wifi_settings_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dbf8_init_arcade_mode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dbfb_dbfb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc05_arcade_mode_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc0f_game_mode_arcade_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc19_game_mode_arcade_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc23_game_mode_arcade_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc2d_copy_one_target(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc3c_dc3c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc3d_arcade_copy_exit_rectangle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
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
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dc41_copy_one_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dc50_dc50(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc51_clouds_initial_position(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dc65_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc69_position_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc84_re_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc92_copy_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc9d_dc9d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dca6_dca6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dca8_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dcab_dcab(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dcae_cloud_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dcc2_tick_moving_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcc4_move_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcce_dcce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dcd0_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dcd3_dcd3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dcd6_dcd6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dcd7_menu_position_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dcd9_position_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dcdc_dcdc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dcdf_dcdf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dce0_menu_position_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcec_dcec(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcf0_do_not_hide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcfd_place_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd03_dd03(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd07_skip_y_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd1c_dd1c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd1f_sprite_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd21_dd21(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd24_sprite_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dd29_stage_iterate_all_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd2b_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd30_dd30(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd33_dd33(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd37_dd37(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd3e_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd42_dd42(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd44_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd49_dd49(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd4c_dd4c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd50_dd50(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd57_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd5b_dd5b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd5d_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd62_dd62(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd65_dd65(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dd69_dd69(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd70_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd72_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd73_ai_action_double_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dd7c_ai_action_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dd86_ai_action_right_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dd8b_ai_action_down_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dd90_ai_action_special_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dd98_ai_action_idle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_dd9b_ai_level_to_delay(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd9e_ai_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddb0_ai_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ddc5_find_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddd8_run_current_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddf7_ddf7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de00_de00(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de02_do_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de05_de05(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de0c_de0c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_de0d_ai_continue_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de22_de22(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de26_next_step(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de35_de35(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de3b_set_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de45_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_de46_ai_attack_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de7a_de7a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de7f_right_facing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_de81_end_direction_flag(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_de85_de85(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de8a_grounded(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de8c_end_ground_flag(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de92_check_one_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de99_de99(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dea0_condition_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_defb_defb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_defd_defd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df15_df15(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df18_next_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df1c_df1c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df1f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df20_ai_shield_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df24_df24(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df28_df28(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_df2e_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df36_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df3b_distance_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_df3f_df3f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df56_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df57_ai_space_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df5d_df5d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_df63_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df69_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df6c_spot_computed(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df79_df79(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df7e_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df90_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df91_ai_chase_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df9b_df9b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_df9d_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_df9f_df9f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dfa3_dfa3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfaa_dfaa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dfad_check_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfb1_dfb1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dfb4_no_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dfb8_dfb8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfba_dfba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_dfc0_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dfc5_go_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfc7_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dfd0_dfd0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfd4_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_dfda_dfda(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_dfe1_end_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dff0_dff0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dffb_negative_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e003_end_set_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e01b_e01b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e01f_dont_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e02c_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e039_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e048_action_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e051_ai_delay_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e056_e056(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e06e_no_delay(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e074_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e075_network_init_stage(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e080_clear_one_input(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e08b_e08b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e09b_network_tick_ingame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e09f_e09f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0a2_do_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0b3_wait_mapper(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e0b8_e0b8(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e0f9_controller_sent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e0fe_e0fe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e105_e105(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e10c_e10c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e10f_e10f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
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
void seg_e11d_skip_message(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e127_state_updated(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e136_e136(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e138_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e13b_e13b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e13f_e13f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e143_e143(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e147_e147(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e149_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e14a_update_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e168_e168(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e16e_future(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e173_past(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e175_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e177_rollback_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e187_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e193_e193(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e19b_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e1ad_e1ad(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1b5_end_delayed_inputs(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
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
void seg_e1c4_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
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
void seg_e1e0_e1e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e1e7_e1e7(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e1ef_screen_shake_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e1f4_e1f4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1f8_restore_screen_updated(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e206_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e20d_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e211_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e273_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e28e_e28e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e297_e297(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2b0_e2b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e2b7_e2b7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e2b9_e2b9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2bf_roll_forward_one_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e2c3_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2da_e2da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2dc_end_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2df_e2df(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2e2_e2e2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e2e7_dont_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e2ec_no_rollback(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2fd_set_opponent_buttons_from_history(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e302_e302(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e309_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e30f_mark_nexts_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e317_known(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e31d_place_character_ppu_tiles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_e31f_place_character_ppu_tiles_direct(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_e32e_e32e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e338_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e33f_end_set_ppu_addr(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e354_sleep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e357_e357(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e35a_e35a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e35d_copy_common_tileset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
void seg_e37c_process_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_e38c_handle_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_e39d_basic_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e3bc_e3bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3be_write_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3c8_e3c8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3ce_end_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e3d5_attributes_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e3dc_e3dc(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDY_IMM();
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
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3ea_one_step(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e409_e409(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e40f_buffer_handlers_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
}
void seg_e415_smart_keep_input_dirty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e419_keep_input_dirty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e41d_keep_input_dirty_rts(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e41e_get_transition_id(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e428_change_global_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e434_e434(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e447_e447(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e450_e450(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e452_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e45a_e45a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e46b_e46b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e46e_e46e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e474_find_transition_index(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e477_e477(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e47b_check_one_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e480_e480(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e484_e484(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e488_not_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e48a_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e48b_pre_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e48e_e48e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e492_e492(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e49f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4a0_post_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4a3_e4a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e4a7_e4a7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e4b4_e4b4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4b7_no_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4c1_e4c1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4c6_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4c7_animation_init_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e504_animation_state_change_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e525_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e54c_animation_draw_pre_initialized(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e55c_e55c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e563_default_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e567_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e570_e570(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e585_end_foreground_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e589_e589(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e590_e590(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5a1_default_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5af_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5b4_clear_unused_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5bd_e5bd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5c5_clear_one_unused_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5cf_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5d0_animation_handle_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e5d5_e5d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e5da_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5dc_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5eb_e5eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e5f0_e5f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e5f5_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e5fb_e5fb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5fe_end_anim_hook(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e612_e612(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e617_flip_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e61e_got_relative_pos(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e621_e621(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e626_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e628_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e637_e637(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e63a_continue(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e63b_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e644_e644(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e645_skip(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e648_skip2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e651_animation_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e655_e655(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e65e_e65e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e660_skip_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e663_reset_cnt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e665_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e667_skip(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e681_e681(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6a8_e6a8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6b3_store_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6c4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e6c5_boxes_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6cf_e6cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6d1_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6d3_e6d3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6dd_e6dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6df_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6e1_e6e1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6eb_e6eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6ed_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6ef_e6ef(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6f9_e6f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6fb_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e6fd_e6fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e702_no_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e704_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e705_audio_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e708_e708(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e70d_audio_cut_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e713_audio_play_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e71c_audio_play_sfx_direct(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e72f_audio_play_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
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
void seg_e735_audio_play_music_direct(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
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
void seg_e747_e747(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e74c_e74c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e764_e764(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e778_e778(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e779_init_channel(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e784_e784(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e794_e794(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e79a_pulse_2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e79d_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7ab_end_pulse_specifics(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7c8_audio_mute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7e3_audio_unmute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7eb_square_reinit_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e804_e804(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e805_audio_music_extra_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e809_e809(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e80d_e80d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e811_e811(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e818_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e819_audio_music_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e824_e824(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e829_e829(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e82e_e82e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e833_e833(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e836_music_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e83b_play_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e83e_e83e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e841_e841(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e842_apply_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e846_e846(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e849_sfx_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e84a_noise_fx_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e889_e889(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e88c_e88c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8c9_noise_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8d6_e8d6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8e5_overflow(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e8ea_e8ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e8f2_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8f7_store_result(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e8fa_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e8ff_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e921_e921(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e935_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e939_noise_apply_mirrored_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e93e_e93e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e946_regular_write(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e957_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e958_pulse_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e95d_e95d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e964_do_effects(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e976_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e97c_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e97f_end_byte_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e987_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e98f_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9b2_e9b2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e9b8_e9b8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9c7_skip_opcode_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e9cc_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9d9_e9d9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9ed_e9ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e9f6_triangle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e9fb_e9fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea00_ea00(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea05_unmute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea13_write_linear_cnt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea16_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea17_opcode_noise_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea19_opcode_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea3e_ea3e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea4e_no_track_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea59_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea5c_opcode_chan_params(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea79_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea8b_opcode_chan_volume_low(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea93_opcode_chan_volume_high(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea9d_opcode_noise_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eaa5_opcode_set_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eabb_opcode_pulse_frequency_add(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_ead8_ead8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
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
void seg_eae1_value_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
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
void seg_eaf4_opcode_pulse_frequency_sub(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_eb11_eb11(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
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
void seg_eb18_value_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
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
void seg_eb2b_opcode_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb43_note_table_lookup(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb51_opcode_play_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb61_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb63_one_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb66_eb66(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb6a_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb6c_one_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb6f_eb6f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb73_end_wait_compute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb7e_eb7e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb92_opcode_play_timed_note(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb9a_eb9a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebb8_opcode_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebc5_opcode_noise_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebd0_opcode_noise_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebd2_opcode_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebdb_opcode_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebf0_opcode_noise_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec05_opcode_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec0b_ec0b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec0d_set_value(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec19_opcode_pulse_meta_uslide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec20_opcode_pulse_meta_dslide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec24_opcode_pulse_meta_common(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec2e_ec2e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec32_ec32(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec38_ec38(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec44_end_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec50_ec50(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec57_ec57(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec5c_keep_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec5e_set_volume_mask(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ec66_ec66(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec6c_replace_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec76_end_volume_duty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec7c_ec7c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec87_end_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec8a_opcode_noise_set_periodic(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec8e_ec8e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec96_unset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec9b_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eca1_opcode_noise_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecb8_opcode_noise_pitch_slide_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecc5_opcode_noise_pitch_slide_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eccd_opcode_noise_end_sfx(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecd0_ecd0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecde_pulse1_opcode_routines_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_ecf0_pulse1_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_ed09_ed09(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ABS();
	if (emu.stopped) { return; }
}
void seg_ed0c_noise_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ABS();
	if (emu.stopped) { return; }
}
void seg_ed16_particle_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed1c_process_one_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed21_ed21(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed24_ed24(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ed27_skip_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed2c_next_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed37_ed37(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed38_process_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed48_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed52_ed52(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed59_ed59(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed5e_ed5e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed77_hide_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed7c_particle_drawn(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed83_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed84_particle_handlers_reinit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed8f_ed8f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed90_loop_on_particle_boxes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed92_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed97_ed97(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eda0_eda0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eda1_loop_on_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eda5_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_edab_edab(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edb4_edb4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_edb7_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edb8_deactivate_particle_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_edc0_edc0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edc1_hide_particles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_edc5_edc5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_edca_second_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edcc_set_sprite_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edd9_edd9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edda_hide_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ede8_fixed_bank_code_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f01a_f01a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f021_f021(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f024_f024(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f02b_f02b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f02e_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f035_f035(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f038_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f047_f047(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f04a_f04a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f051_f051(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f054_expected_length(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f05b_f05b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f05e_expected_type(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f063_f063(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f066_file_exists(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f070_f070(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f073_f073(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f080_flash_safe_sectors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f085_flash_all_sectors(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f087_flash_sectors_launch(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0a8_copy_one_page(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0aa_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0b1_f0b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f0b9_f0b9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f0bf_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0c2_f0c2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f0c5_prepare_display(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0d7_f0d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0de_f0de(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0e5_f0e5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0ec_f0ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0f3_f0f3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f0fa_f0fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f101_f101(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f123_oam_mirror_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f129_f129(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f12c_f12c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f150_f150(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f16d_fatal_failure(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f170_f170(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f181_testdll(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f187_infinite_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f189_flash_sectors_rom(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f195_flash_one_sector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1a1_first_sector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1a5_second_sector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1a7_write_val(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f1b0_f1b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f1b4_wait_esp_ready(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f1b9_f1b9(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f1cb_wait_answer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f1d0_f1d0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1d5_write_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1f2_wait_write_complete(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1f5_f1f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1f9_f1f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f1fd_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f203_f203(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f209_end_wait_write_complete(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f20e_f20e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f217_f217(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f219_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f220_f220(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f225_f225(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f22b_f22b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f22e_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f234_f234(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f239_end_last_progress_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f23d_f23d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f241_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f243_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f246_show_progress(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f24c_f24c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f254_vblankwait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f259_f259(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f26e_f26e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f274_no_failure(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f278_erase_failure(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f27c_write_failure(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f27e_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f293_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f294_erase_sector_sequence(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2c7_wait_completion(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2ca_f2ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2d2_f2d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2d6_f2d6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2da_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2e0_end_wait_completion(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f2e1_mapper_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f335_f335(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f33b_f33b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f33f_full_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f344_safe_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f349_no_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f34c_esp_cmd_clear_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f34e_esp_cmd_connect(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f350_esp_cmd_get_esp_status(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f352_esp_send_cmd_short(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f356_esp_send_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f359_f359(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f361_copy_payload_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f36a_f36a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f36e_esp_get_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f375_f375(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f37a_store_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f380_store_payload(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f389_f389(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f38d_wait_ready_bit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f392_f392(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f393_wait_ready_bit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f398_f398(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f399_fetch_controllers(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3a5_fetch_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3af_next_btn(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3bb_f3bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3c0_f3c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3c1_wait_next_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3c5_waiting(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3c9_f3c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3ca_absolute_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f3ce_f3ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3d3_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3d4_multiply(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3df_additions_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3e3_f3e3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3f4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3f7_last_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3fa_handle_buff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3ff_f3ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f403_basic_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f410_attributes_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f418_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f419_reset_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f41a_dummy_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f41b_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f428_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f431_f431(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f434_f434(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f43a_draw_zipped_nametable(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f447_draw_zipped_vram(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f449_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f44d_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f453_f453(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f456_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f459_f459(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f45d_f45d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f460_write_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f466_f466(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f469_f469(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f46c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f46d_next_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f471_f471(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f473_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f474_call_pointed_subroutine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f477_copy_palette_to_ppu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f48b_copy_one_color(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f494_f494(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f495_shake_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4b1_f4b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4b6_set_screen_two(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4bd_set_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4c3_f4c3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4cd_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f4ce_get_unzipped_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4d6_skip_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4da_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4de_f4de(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4e0_no_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4e2_loop_without_dec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4e6_f4e6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4ea_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4ed_f4ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4ef_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f4f2_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4f5_f4f5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4f7_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4fd_f4fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4ff_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f503_skip_all(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f514_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f517_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f51b_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f51f_f51f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f523_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f530_f530(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f532_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f537_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f53a_f53a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f53c_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f542_f542(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f544_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f547_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f558_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f55a_force_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f55c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f55d_construct_palettes_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f560_f560(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
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
void seg_f57a_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f585_f585(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f58b_push_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f599_construct_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f59c_f59c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5a4_copy_header_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5af_f5af(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5b3_copy_payload_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5be_f5be(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f5c4_clear_bg_bot_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5d7_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5e0_f5e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5e2_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5e8_f5e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f5ee_f5ee(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f5ef_switch_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f5f5_trampoline(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f5fd_f5fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f600_f600(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f604_exec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f607_far_lda_tmpfield1_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f60c_f60c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f613_f613(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f615_cpu_to_ppu_copy_tileset_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f623_cpu_to_ppu_copy_tileset_background(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f630_cpu_to_ppu_copy_tileset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f63a_f63a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f63c_copy_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f63e_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f648_f648(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f659_f659(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f65a_cpu_to_ppu_copy_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f65c_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f666_f666(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f667_cpu_to_ppu_copy_charset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f671_f671(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f673_cpu_to_ppu_copy_charset_raw(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f68f_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f694_f694(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f699_f699(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f6a2_f6a2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f6a4_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f6a8_f6a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6a9_copy_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f6ab_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f6ba_f6ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f6c2_f6c2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6c3_modifier_force_0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6c6_modifier_force_1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6c9_modifier_swap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6d0_bits_modifiers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
}
void seg_f6d4_fill_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f6da_f6da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6db_fixed_memcpy(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f6dd_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f6e1_f6e1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f6e9_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6ea_inline_parameters(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
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
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f712_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f715_f715(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f717_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f718_merge_to_player_velocity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f71a_add_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f729_f729(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f73a_check_diff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f73e_f73e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f744_f744(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f751_add_step_size(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f75d_f75d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f75f_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f761_f761(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f771_decrement(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f77e_next_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f785_f785(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f78a_apply_player_gravity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f7a4_f7a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f7a5_gravity_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f7a7_reset_default_gravity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f7b4_check_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f7bb_f7bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f7bf_f7bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f7c3_f7c3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f7c4_simple_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7c8_f7c8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f7cc_f7cc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f7d3_end_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f7da_end_right_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f7e1_end_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
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
void seg_f7eb_oos_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f7f7_f7f7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f7f9_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f7fb_f7fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f802_f802(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f809_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f815_f815(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f817_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f819_f819(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f820_f820(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f827_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f833_f833(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f835_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f837_f837(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f83e_f83e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f845_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f851_f851(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f853_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f855_f855(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f85c_f85c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f863_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f865_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f866_controller_callbacks(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f868_switch_linear(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f86a_check_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f86e_f86e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f885_next_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f88a_f88a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f89c_reinit_c_stack(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f8a5_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f8a8_vblankwait(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f8ad_f8ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_fa30_default_gravity_per_system_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_fa32_pal_to_ntsc_velocity_high_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_fa94_fa94(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_INY();
	if (emu.stopped) { return; }
}
void seg_fb32_pal_to_ntsc_velocity_low_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_fc32_pal_to_ntsc_velocity_neg_high_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_fcd4_fcd4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
}
void seg_fe32_server_bytecode_error(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fe37_server_bytecode_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fe3a_fe3a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_fe5b_fe5b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fe60_server_bytecode_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_fe63_fe63(mos6502<GameState::EmulatorRunContext>& emu) {
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
	&emulator_compiled_segments_funcs::seg_c00c_c00c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c017_c017,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c02d_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c033_special_processing,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c037_c037,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c03a_nmi_tick_music,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c03c_save_one_couple,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c047_c047,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c04d_c04d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c050_c050,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c054_c054,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c056_restore_one_couple,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c05f_c05f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c062_reset,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c065_c065,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c067_clrmem,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c085_c085,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c089_vblankwait2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c08c_c08c,
	&emulator_compiled_segments_funcs::seg_c08d_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c092_c092,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c096_c096,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c09a_pal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0a9_c0a9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0ac_c0ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0b5_forever,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0b8_c0b8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0be_tick_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0c1_c0c1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0c4_c0c4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0d5_c0d5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0d8_c0d8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0dd_c0dd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c112_characters_bank_number,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c116_characters_tiles_data_lsb,
	&emulator_compiled_segments_funcs::seg_c117_c117,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c11e_characters_tiles_number,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c122_characters_properties_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c12e_characters_palettes_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c136_characters_alternate_palettes_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c13a_characters_weapon_palettes_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c13f_c13f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c14a_characters_start_routines_table_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c16f_c16f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c176_characters_onhurt_routines_table_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c17a_set_player_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c187_c187,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c18e_animation_state_vectors_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c190_animation_state_vectors_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1a4_stages_tick_routine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1d6_c1d6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1da_stage_palettes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1f5_stage_routine_fadeout_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1fe_stages_data,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c20c_c20c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c23d_stages_tileset_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c246_stages_tileset_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c24f_stages_tileset_bank,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c25a_player_respawn_max_duration,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c25c_player_down_tap_max_duration,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c260_tech_window,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c262_stb_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c295_not_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c29b_c29b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2a0_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2a2_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ab_c2ab,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b0_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b2_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b8_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2c1_c2c1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2c6_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2c8_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2d4_c2d4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2d9_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2db_end_sign_extend,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2de_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2e4_c2e4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2e9_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2eb_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2f4_c2f4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2f9_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2fb_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c336_c336,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c33b_fetch_hitbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c340_not_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c346_c346,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c34b_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c34d_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c356_c356,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c35b_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c35d_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c377_flipped,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c380_c380,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c385_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c387_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c393_c393,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c398_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c39a_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3c3_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3c9_c3c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ce_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d0_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d9_c3d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3de_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e0_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c400_c400,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c404_c404,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c406_ignore_enabled,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c43b_end_hitbox,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c43f_c43f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c442_end,
	&emulator_compiled_segments_funcs::seg_c443_particle_directional_indicator_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c47c_c47c,
	&emulator_compiled_segments_funcs::seg_c47d_set_particle_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4a3_particle_directional_indicator_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4a7_c4a7,
	&emulator_compiled_segments_funcs::seg_c4a8_do_something,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4b5_c4b5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4b8_c4b8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4bb_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4c0_c4c0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4c2_end,
	&emulator_compiled_segments_funcs::seg_c4c3_move_particles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4ce_c4ce,
	&emulator_compiled_segments_funcs::seg_c4cf_move_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4f5_c4f5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4fa_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4fc_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c50c_c50c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c511_separate,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c516_set_y_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c52b_c52b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c530_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c532_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c54c_particle_death_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c58e_c58e,
	&emulator_compiled_segments_funcs::seg_c58f_place_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c59d_c59d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c59f_no_reposition_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b0_c5b0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b2_no_reposition_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5da_particles_start_position_offset_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5e1_particles_start_position_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5e8_particle_death_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5ee_c5ee,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5fc_c5fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c603_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c605_do_nothing,
	&emulator_compiled_segments_funcs::seg_c606_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c60b_c60b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c610_audio_music_weak,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c619_audio_music_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c622_audio_play_sfx_from_common_bank,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c627_c627,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62c_audio_play_sfx_from_list,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c643_sfx_list_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c645_sfx_list_bnk,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c647_audio_play_crash,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c652_audio_play_death,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c65d_audio_play_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c668_audio_play_parry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c673_audio_play_shield_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c67e_audio_play_shield_break,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c689_audio_play_title_screen_subtitle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c694_audio_play_interface_click,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c69f_audio_play_fast_fall,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6aa_audio_play_land,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b5_audio_play_tech,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6c0_audio_play_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6cb_audio_play_aerial_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d6_audio_play_strike_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6e1_sinbad_audio_play_jab3_land,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ec_audio_play_target_break,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f7_audio_play_teleport,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c702_global_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c707_c707,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c71a_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c722_c722,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c72a_c72a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c72f_c72f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c732_c732,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c75f_game_states_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c77d_init_character_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c780_c780,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c78a_character_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c794_character_selection_tick_char_anims,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7ac_c7ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7c4_c7c4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7cc_tick_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d1_c7d1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d4_character_selection_get_char_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7fb_character_selection_construct_char_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c808_c808,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c810_character_selection_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c81d_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c826_c826,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c829_c829,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c82f_character_selection_reset_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c839_c839,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c841_default_config,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c871_init_config_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c874_c874,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c87e_config_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c888_init_credits_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c88b_c88b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c895_credits_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c89f_init_support_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8c0_c8c0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d4_c8d4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8e6_c8e6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8f8_c8f8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c903_c903,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c915_c915,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c918_c918,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c91d_support_screen_draw_contents,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c927_copy_one_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c936_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c93c_c93c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c940_c940,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c943_tile_value_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c94b_c94b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c954_c954,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c956_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c95f_c95f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c961_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c964_c964,
	&emulator_compiled_segments_funcs::seg_c965_support_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c968_c968,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c96b_c96b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c96d_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c971_c971,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c975_c975,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c979_c979,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97d_c97d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c981_c981,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c985_c985,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c989_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c98e_c98e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c991_go_back,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c996_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c99e_go_right,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a2_c9a2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a6_no_press,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9bd_end,
	&emulator_compiled_segments_funcs::seg_c9be_option_to_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9c3_nt_payload_btc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9c9_nt_payload_paypal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d1_nt_payload_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d3_init_support_btc_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9de_init_support_paypal_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9e6_init_support_qr_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f0_c9f0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f7_c9f7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca03_support_qr_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca06_ca06,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca09_ca09,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca0d_ca0d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca11_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca15_ca15,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca19_ca19,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca1c_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca21_end,
	&emulator_compiled_segments_funcs::seg_ca22_init_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca2c_game_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca2f_ca2f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca3e_ca3e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca42_ca42,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca45_ca45,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca5c_ca5c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca68_ca68,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca6d_ca6d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca72_ca72,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca75_end_effects,
	&emulator_compiled_segments_funcs::seg_ca76_no_screen_shake,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca7a_ca7a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca7d_ca7d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca81_ca81,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca8a_no_slowdown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caa4_caa4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caa7_caa7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caaa_slowdown,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caae_caae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cab4_cab4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cabb_keep_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cac2_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cad1_end,
	&emulator_compiled_segments_funcs::seg_cad2_game_mode_goto_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cadb_update_players,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cadd_hitstun_one_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cae1_cae1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cae3_hitstun_next_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cae8_cae8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caea_hitbox_one_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caed_caed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caf2_caf2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caf4_update_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb0b_cb0b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb11_cb11,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb20_end_input_event,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb26_cb26,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb29_cb29,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb2d_cb2d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb30_cb30,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb33_end_visuals,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb38_cb38,
	&emulator_compiled_segments_funcs::seg_cb39_player_state_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb49_check_player_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb51_cb51,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb54_check_hitbox_hitbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb77_cb77,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb79_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb7d_cb7d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb80_do_hitbox_check,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_cba5_cba5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbab_custom_hitbox,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbae_cbae,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb0_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbc7_cbc7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbca_direct_hitbox,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbcd_cbcd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbf6_cbf6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc03_check_hitbox_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc26_cc26,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc28_cc28,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc2b_cc2b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc2d_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc33_custom_hitbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc4a_cc4a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc4d_direct_hitbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc52_cc52,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc54_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc6d_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc70_hurt_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc73_cc73,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc76_cc76,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc79_cc79,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc86_cc86,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc89_cap_damages,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc8b_apply_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cca6_cca6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb3_bump_player_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb8_ccb8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccd3_ccd3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccd6_invert,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccea_nullify,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccf0_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccf3_bump_player_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccf8_ccf8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd02_cd02,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd05_invert,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd19_nullify,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd1f_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd22_bump_player_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd27_cd27,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd31_cd31,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd36_invert,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd4a_nullify,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd50_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd64_bump_player_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd69_cd69,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd73_cd73,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd78_invert,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd8c_nullify,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd92_set_thrown_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cda5_bump_player_common,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdb1_cdb1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdb3_apply_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdde_cdde,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cde1_cde1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdeb_cdeb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cded_screen_shake_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdf0_apply_force_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce14_apply_force_vector_direct,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce25_ce25,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce41_ce41,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce56_ce56,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce6a_passthrough_kb_h,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce70_end_abs_kb_h,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce74_ce74,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce88_passthrough_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce8e_end_abs_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceb3_ceb3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceb7_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cece_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cee2_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cee6_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cefd_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf11_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf25_ntsc_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf28_cf28,
	&emulator_compiled_segments_funcs::seg_cf29_plus_20_percent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf69_move_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf79_vertical,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf8a_cf8a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf8f_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf91_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf9f_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa8_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfae_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfb3_cfb3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfb5_horizontal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfc6_cfc6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfcb_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfcd_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd9_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfe2_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfe8_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfed_cfed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d008_move_player_handle_one_platform_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d022_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d02d_d02d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d02f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d031_d031,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d03c_d03c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d03e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d040_d040,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d04b_d04b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d04d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d04f_d04f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d05a_d05a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d05c_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d05e_d05e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d073_no_collision,
	&emulator_compiled_segments_funcs::seg_d074_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d080_d080,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d082_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d084_d084,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d090_d090,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d092_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d094_d094,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a0_d0a0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a2_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a4_d0a4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0b0_d0b0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0b2_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0b4_d0b4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ca_no_collision,
	&emulator_compiled_segments_funcs::seg_d0cb_move_player_handle_one_platform_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0e5_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0f0_d0f0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0f2_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0f4_d0f4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ff_d0ff,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d101_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d103_d103,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d10e_d10e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d110_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d112_d112,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d11d_d11d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d11f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d121_d121,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d136_no_collision,
	&emulator_compiled_segments_funcs::seg_d137_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d143_d143,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d145_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d147_d147,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d153_d153,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d155_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d157_d157,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d163_d163,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d165_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d167_d167,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d173_d173,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d175_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d177_d177,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d18d_no_collision,
	&emulator_compiled_segments_funcs::seg_d18e_move_player_handle_one_platform_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1a8_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1b3_d1b3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1b5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1b7_d1b7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1c2_d1c2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1c4_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1c6_d1c6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1d1_d1d1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1d3_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1d5_d1d5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e0_d1e0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e2_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e4_d1e4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1f5_no_collision,
	&emulator_compiled_segments_funcs::seg_d1f6_oos_platform,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d222_d222,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d224_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d226_d226,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d232_d232,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d234_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d236_d236,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d248_no_collision,
	&emulator_compiled_segments_funcs::seg_d249_move_player_handle_one_platform_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d263_one_screen_platform,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d28c_d28c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d28e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d290_d290,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b0_no_collision,
	&emulator_compiled_segments_funcs::seg_d2b1_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2bd_d2bd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2bf_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2c1_d2c1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2cd_d2cd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2cf_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2d1_d2d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2dd_d2dd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2df_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2e1_d2e1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ed_d2ed,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ef_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2f1_d2f1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d303_no_collision,
	&emulator_compiled_segments_funcs::seg_d304_check_player_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d30e_d30e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d310_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d312_d312,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d31c_d31c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d31e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d320_d320,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d32a_d32a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d32c_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d32e_d32e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d338_d338,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d33a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d33c_set_death_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d33f_d33f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d348_d348,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d34c_d34c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d34e_d34e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d353_pass_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d358_left_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d35a_cap_vertical_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d35c_end_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d360_d360,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d362_d362,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d367_pass_cap_horizontal_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d36c_top_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d36e_cap_horizontal_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d370_end_cap_horizontal_blast,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d373_d373,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d377_respawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d38a_gameover,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d38e_d38e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d391_d391,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d393_end_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d39a_d39a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d39c_no_set_winner,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b3_d3b3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b8_check_collisions,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3bc_d3bc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3c3_d3c3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3cc_normal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3db_d3db,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3de_bumper_collision,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e1_d3e1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e4_offground,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3f3_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3f7_d3f7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3fe_bumper_collision,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d401_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d405_d405,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d40c_bumper_collision,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d410_d410,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d413_d413,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d416_left,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d419_ok,
	&emulator_compiled_segments_funcs::seg_d41a_write_player_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d420_d420,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d426_d426,
	&emulator_compiled_segments_funcs::seg_d427_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d434_d434,
	&emulator_compiled_segments_funcs::seg_d435_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d43c_d43c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d45c_less_than_one_hundred,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d467_one_hundred,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d471_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d47b_d47b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d483_less_than_fifty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d489_d489,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d48d_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d491_d491,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d495_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d499_d499,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d49d_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4a1_d4a1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4a5_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c8_stocks_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4e7_filled_stock,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ec_empty_stock,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ee_set_stock_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f7_end_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d500_damages_ppu_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d50a_character_icons,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d50c_player_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d511_d511,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d514_d514,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d517_d517,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d51a_end,
	&emulator_compiled_segments_funcs::seg_d51b_blinking,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d529_d529,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d532_d532,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d534_d534,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d53b_alternate_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d548_palette_selected,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d54c_d54c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d559_player_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d55e_d55e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d560_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d56b_d56b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d56e_update_sprites,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d570_update_one_player_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5a1_d5a1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5a4_d5a4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5aa_d5aa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b8_d5b8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ba_d5ba,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5be_d5be,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5c0_d5c0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5c3_oos_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5d8_oos_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ed_oss_top,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d602_oos_bot,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d614_oos_indicator_placed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d619_d619,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d61c_d61c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d61e_loop,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d621_d621,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d624_all_player_sprites_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d627_d627,
	&emulator_compiled_segments_funcs::seg_d628_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d62a_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d62c_oos_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d62e_oos_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d630_game_mode_local_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d633_game_mode_local_pre_update,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d637_d637,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d63b_d63b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d63f_d63f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d643_d643,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d646_end_ai,
	&emulator_compiled_segments_funcs::seg_d647_game_modes_init_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d64a_game_modes_init_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d650_game_modes_pre_update_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d656_game_modes_gameover_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d659_init_gameover_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d66b_d66b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d66e_d66e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d68d_d68d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d69f_d69f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6a2_d6a2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6b1_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6bc_d6bc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6d9_d6d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6f6_d6f6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d708_winner_name_writing,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d744_d744,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d75e_d75e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d78a_d78a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7a0_initialize_a_balloon,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7bb_d7bb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7bd_position_a_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7c0_d7c0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7c6_d7c6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7d1_d7d1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7d4_d7d4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e1_gameover_screen_tick,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e3_check_ready,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e7_d7e7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7eb_d7eb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7ef_controller_a_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f4_d7f4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f6_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7fa_d7fa,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7fe_d7fe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d804_d804,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d808_d808,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d80c_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d811_d811,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d814_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d81b_d81b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d81e_no_turbo,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d826_update_animations,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d829_d829,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d82c_d82c,
	&emulator_compiled_segments_funcs::seg_d82d_next_screen_by_game_mode,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d82f_gamover_update_players,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d849_d849,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d84c_d84c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d85a_d85a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d869_d869,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d86c_d86c,
	&emulator_compiled_segments_funcs::seg_d86d_update_balloons,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d871_update_one_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d874_d874,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d888_d888,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d88c_end_y,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d88f_d88f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a1_d8a1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a6_positive,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a8_high_byte_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8c5_d8c5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8d0_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8d8_end_sprite_layer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8e2_d8e2,
	&emulator_compiled_segments_funcs::seg_d8e3_gameover_random_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8f0_init_mode_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8f3_d8f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8fd_mode_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d907_init_netplay_launch_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d90a_d90a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d914_netplay_launch_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d91e_online_mode_screen_fadein,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d928_init_online_mode_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d92b_d92b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d935_online_mode_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d93f_init_stage_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d942_d942,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d94c_stage_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d956_stage_selection_screen_long_memcopy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d95f_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d966_d966,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d96e_stage_selection_back_to_char_select,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d984_init_title_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d98e_title_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a0_state_transition_pretransition_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a2_d9a2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a4_d9a4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a7_state_transition_pretransition_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9ae_state_transition_posttransition_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9b0_d9b0,
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
	&emulator_compiled_segments_funcs::seg_d9bc_dummy_transition,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d9d0_state_transition_pre_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9e3_d9e3,
	&emulator_compiled_segments_funcs::seg_d9e4_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da00_state_transition_pre_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da13_da13,
	&emulator_compiled_segments_funcs::seg_da14_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da30_state_transition_post_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da45_da45,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da4e_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da76_state_transition_post_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da8b_da8b,
	&emulator_compiled_segments_funcs::seg_da8c_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daa0_daa0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab4_scroll_transition,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab8_dab8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dacc_set_up_values,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dadf_end_set_values,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae3_dae3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae9_do_not_touch_offsets,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daed_save_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daf4_daf4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db04_hidden_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db09_two_byte_position_stored,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db15_db15,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db17_scroll_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db1d_db1d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db21_db21,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db23_set_camera_scroll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db3a_db3a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db3e_db3e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db46_db46,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db4e_simple_sleep,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db51_end_sleep,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db61_clean,
	&emulator_compiled_segments_funcs::seg_db62_end,
	&emulator_compiled_segments_funcs::seg_db63_move_sprites,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db66_db66,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db6a_db6a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db6e_db6e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db72_db72,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db76_db76,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db7a_db7a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db7e_db7e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db85_update_clouds,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db88_vertical_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db9e_db9e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dba1_dba1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dba4_dba4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dba8_update_screen_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbbc_move_one_screen_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbcb_dbcb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbd0_hide_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbd2_update_oam,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbe0_end,
	&emulator_compiled_segments_funcs::seg_dbe1_init_wifi_settings_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbe4_dbe4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbee_wifi_settings_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbf8_init_arcade_mode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbfb_dbfb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc05_arcade_mode_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc0f_game_mode_arcade_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc19_game_mode_arcade_pre_update,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc23_game_mode_arcade_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc2d_copy_one_target,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc3c_dc3c,
	&emulator_compiled_segments_funcs::seg_dc3d_arcade_copy_exit_rectangle,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc41_copy_one_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc50_dc50,
	&emulator_compiled_segments_funcs::seg_dc51_clouds_initial_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc65_init_menu,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc69_position_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc84_re_init_menu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc92_copy_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc9d_dc9d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca6_dca6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca8_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcab_dcab,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcae_cloud_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcc2_tick_moving_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcc4_move_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcce_dcce,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd0_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd3_dcd3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd6_dcd6,
	&emulator_compiled_segments_funcs::seg_dcd7_menu_position_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd9_position_one_cloud,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcdc_dcdc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcdf_dcdf,
	&emulator_compiled_segments_funcs::seg_dce0_menu_position_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcec_dcec,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcf0_do_not_hide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcfd_place_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd03_dd03,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd07_skip_y_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd1c_dd1c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd1f_sprite_offset_x,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd21_dd21,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd24_sprite_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd29_stage_iterate_all_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd2b_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd30_dd30,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd33_dd33,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd37_dd37,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd3e_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd42_dd42,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd44_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd49_dd49,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd4c_dd4c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd50_dd50,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd57_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd5b_dd5b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd5d_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd62_dd62,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd65_dd65,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd69_dd69,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd70_end_iterate_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd72_end,
	&emulator_compiled_segments_funcs::seg_dd73_ai_action_double_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd7c_ai_action_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd86_ai_action_right_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd8b_ai_action_down_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd90_ai_action_special_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd98_ai_action_idle,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd9b_ai_level_to_delay,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd9e_ai_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddb0_ai_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc5_find_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddd8_run_current_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddf7_ddf7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de00_de00,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de02_do_action,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de05_de05,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de0c_de0c,
	&emulator_compiled_segments_funcs::seg_de0d_ai_continue_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de22_de22,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de26_next_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de35_de35,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de3b_set_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de45_end,
	&emulator_compiled_segments_funcs::seg_de46_ai_attack_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de7f_right_facing,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de81_end_direction_flag,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de85_de85,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de8a_grounded,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de8c_end_ground_flag,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de92_check_one_attack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de99_de99,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dea0_condition_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_defb_defb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_defd_defd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df15_df15,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df18_next_attack,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df1c_df1c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df1f_end,
	&emulator_compiled_segments_funcs::seg_df20_ai_shield_selector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df24_df24,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df28_df28,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df2e_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df36_bot_on_the_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df3b_distance_computed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df3f_df3f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df56_end,
	&emulator_compiled_segments_funcs::seg_df57_ai_space_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df5d_df5d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df63_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df69_bot_on_the_left,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df6c_spot_computed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df79_df79,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df7e_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df90_end,
	&emulator_compiled_segments_funcs::seg_df91_ai_chase_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df9b_df9b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df9d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df9f_df9f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfa3_dfa3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfaa_dfaa,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfad_check_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb1_dfb1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb4_no_tap_down,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb8_dfb8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfba_dfba,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc0_go_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc5_go_left,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc7_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd0_dfd0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd4_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfda_dfda,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfe1_end_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dff0_dff0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dffb_negative_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e003_end_set_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e01b_e01b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e01f_dont_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e02c_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e039_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e048_action_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e051_ai_delay_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e056_e056,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e06e_no_delay,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e074_end,
	&emulator_compiled_segments_funcs::seg_e075_network_init_stage,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e080_clear_one_input,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e08b_e08b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09b_network_tick_ingame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09f_e09f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a2_do_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b3_wait_mapper,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0f9_controller_sent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0fe_e0fe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e105_e105,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e10c_e10c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e10f_e10f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e11d_skip_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e127_state_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e136_e136,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e138_end_switch_selected_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e13b_e13b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e13f_e13f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e143_e143,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e147_e147,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e149_end,
	&emulator_compiled_segments_funcs::seg_e14a_update_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e168_e168,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e16e_future,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e173_past,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e175_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e177_rollback_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e187_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e193_e193,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e19b_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1ad_e1ad,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1b5_end_delayed_inputs,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1c4_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e0_e1e0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e7_e1e7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1ef_screen_shake_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1f4_e1f4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1f8_restore_screen_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e206_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e20d_player_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e211_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e273_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e28e_e28e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e297_e297,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2b0_e2b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2b7_e2b7,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2b9_e2b9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2bf_roll_forward_one_step,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2c3_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2da_e2da,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2dc_end_switch_selected_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2df_e2df,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2e2_e2e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2e7_dont_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2ec_no_rollback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2fd_set_opponent_buttons_from_history,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e302_e302,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e309_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e30f_mark_nexts_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e317_known,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e31d_place_character_ppu_tiles,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e31f_place_character_ppu_tiles_direct,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e32e_e32e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e338_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e33f_end_set_ppu_addr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e354_sleep_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e357_e357,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e35a_e35a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e35d_copy_common_tileset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e37c_process_nt_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e38c_handle_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e39d_basic_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3bc_e3bc,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3be_write_one_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3c8_e3c8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ce_end_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d5_attributes_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3dc_e3dc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ea_one_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e409_e409,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e40f_buffer_handlers_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e415_smart_keep_input_dirty,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e419_keep_input_dirty,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e41d_keep_input_dirty_rts,
	&emulator_compiled_segments_funcs::seg_e41e_get_transition_id,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e428_change_global_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e434_e434,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e447_e447,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e450_e450,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e452_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e45a_e45a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e46b_e46b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e46e_e46e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e474_find_transition_index,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e477_e477,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e47b_check_one_entry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e480_e480,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e484_e484,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e488_not_found,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e48a_found,
	&emulator_compiled_segments_funcs::seg_e48b_pre_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e48e_e48e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e492_e492,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e49f_end,
	&emulator_compiled_segments_funcs::seg_e4a0_post_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4a3_e4a3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4a7_e4a7,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e4b7_no_transition,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4c1_e4c1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4c6_end,
	&emulator_compiled_segments_funcs::seg_e4c7_animation_init_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e504_animation_state_change_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e525_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e54c_animation_draw_pre_initialized,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e55c_e55c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e563_default_direction,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e567_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e570_e570,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e585_end_foreground_sprites,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e589_e589,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e590_e590,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a1_default_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5af_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5b4_clear_unused_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5bd_e5bd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5c5_clear_one_unused_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5cf_end,
	&emulator_compiled_segments_funcs::seg_e5d0_animation_handle_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5d5_e5d5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5da_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5dc_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5eb_e5eb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f0_e5f0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f5_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5fb_e5fb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5fe_end_anim_hook,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e612_e612,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e617_flip_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e61e_got_relative_pos,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e621_e621,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e626_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e628_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e637_e637,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e63a_continue,
	&emulator_compiled_segments_funcs::seg_e63b_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e644_e644,
	&emulator_compiled_segments_funcs::seg_e645_skip,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e648_skip2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e651_animation_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e655_e655,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e65e_e65e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e660_skip_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e663_reset_cnt,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e665_ok,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e667_skip,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e681_e681,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6a8_e6a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6b3_store_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6c4_end,
	&emulator_compiled_segments_funcs::seg_e6c5_boxes_overlap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6cf_e6cf,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6d1_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6d3_e6d3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6dd_e6dd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6df_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6e1_e6e1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6eb_e6eb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6ed_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6ef_e6ef,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6f9_e6f9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6fb_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6fd_e6fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e702_no_overlap,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e704_end,
	&emulator_compiled_segments_funcs::seg_e705_audio_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e708_e708,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e70d_audio_cut_sfx,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e713_audio_play_sfx,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e71c_audio_play_sfx_direct,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72f_audio_play_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e735_audio_play_music_direct,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e747_e747,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e74c_e74c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e764_e764,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e778_e778,
	&emulator_compiled_segments_funcs::seg_e779_init_channel,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e784_e784,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e794_e794,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e79a_pulse_2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e79d_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ab_end_pulse_specifics,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c8_audio_mute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7e3_audio_unmute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7eb_square_reinit_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e804_e804,
	&emulator_compiled_segments_funcs::seg_e805_audio_music_extra_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e809_e809,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e80d_e80d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e811_e811,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e818_ok,
	&emulator_compiled_segments_funcs::seg_e819_audio_music_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e824_e824,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e829_e829,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e82e_e82e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e833_e833,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e836_music_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e83b_play_sfx,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e83e_e83e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e841_e841,
	&emulator_compiled_segments_funcs::seg_e842_apply_music,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e846_e846,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e849_sfx_ok,
	&emulator_compiled_segments_funcs::seg_e84a_noise_fx_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e889_e889,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e88c_e88c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8c9_noise_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8d6_e8d6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8e5_overflow,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8ea_e8ea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8f2_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8f7_store_result,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8fa_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8ff_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e921_e921,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e935_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e939_noise_apply_mirrored_apu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e93e_e93e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e946_regular_write,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e957_end_write_apu,
	&emulator_compiled_segments_funcs::seg_e958_pulse_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e95d_e95d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e964_do_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e976_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e97c_negative,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e97f_end_byte_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e987_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e98f_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b2_e9b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b8_e9b8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c7_skip_opcode_update,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9cc_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9d9_e9d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ed_e9ed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9f6_triangle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9fb_e9fb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea00_ea00,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea05_unmute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea13_write_linear_cnt,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea16_end_write_apu,
	&emulator_compiled_segments_funcs::seg_ea17_opcode_noise_sample_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea19_opcode_sample_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea3e_ea3e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea4e_no_track_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea59_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea5c_opcode_chan_params,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea79_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea8b_opcode_chan_volume_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea93_opcode_chan_volume_high,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea9d_opcode_noise_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaa5_opcode_set_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eabb_opcode_pulse_frequency_add,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ead8_ead8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eae1_value_computed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaf4_opcode_pulse_frequency_sub,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb11_eb11,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb18_value_computed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb2b_opcode_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb43_note_table_lookup,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb51_opcode_play_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb61_left_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb63_one_left_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb66_eb66,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb6a_right_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb6c_one_right_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb6f_eb6f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb73_end_wait_compute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb7e_eb7e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb92_opcode_play_timed_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb9a_eb9a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebb8_opcode_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebc5_opcode_noise_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd0_opcode_noise_long_wait,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd2_opcode_long_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebdb_opcode_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebf0_opcode_noise_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec05_opcode_pitch_slide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec0b_ec0b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec0d_set_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec19_opcode_pulse_meta_uslide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec20_opcode_pulse_meta_dslide,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec24_opcode_pulse_meta_common,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec2e_ec2e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec32_ec32,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec38_ec38,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec44_end_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec50_ec50,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec57_ec57,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec5c_keep_volume,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec5e_set_volume_mask,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec66_ec66,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec6c_replace_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec76_end_volume_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec7c_ec7c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec87_end_pitch_slide,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec8a_opcode_noise_set_periodic,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec8e_ec8e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec96_unset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec9b_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca1_opcode_noise_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecb8_opcode_noise_pitch_slide_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc5_opcode_noise_pitch_slide_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eccd_opcode_noise_end_sfx,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd0_ecd0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecde_pulse1_opcode_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecf0_pulse1_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed09_ed09,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed0c_noise_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed16_particle_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed1c_process_one_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed21_ed21,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed24_ed24,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed27_skip_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed2c_next_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed37_ed37,
	&emulator_compiled_segments_funcs::seg_ed38_process_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed48_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed52_ed52,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed59_ed59,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed5e_ed5e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed77_hide_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed7c_particle_drawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed83_end,
	&emulator_compiled_segments_funcs::seg_ed84_particle_handlers_reinit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed8f_ed8f,
	&emulator_compiled_segments_funcs::seg_ed90_loop_on_particle_boxes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed92_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed97_ed97,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eda0_eda0,
	&emulator_compiled_segments_funcs::seg_eda1_loop_on_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eda5_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edab_edab,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb4_edb4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb7_end,
	&emulator_compiled_segments_funcs::seg_edb8_deactivate_particle_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edc0_edc0,
	&emulator_compiled_segments_funcs::seg_edc1_hide_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edc5_edc5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edca_second_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edcc_set_sprite_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd9_edd9,
	&emulator_compiled_segments_funcs::seg_edda_hide_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ede8_fixed_bank_code_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_f01a_f01a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f021_f021,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f024_f024,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f02b_f02b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f02e_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f035_f035,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f038_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f047_f047,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f04a_f04a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f051_f051,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f054_expected_length,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f05b_f05b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f05e_expected_type,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f063_f063,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f066_file_exists,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f070_f070,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f073_f073,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f080_flash_safe_sectors,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f085_flash_all_sectors,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f087_flash_sectors_launch,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0a8_copy_one_page,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0aa_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0b1_f0b1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0b9_f0b9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0bf_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c2_f0c2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c5_prepare_display,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0d7_f0d7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0de_f0de,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0e5_f0e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0ec_f0ec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0f3_f0f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0fa_f0fa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f101_f101,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f123_oam_mirror_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f129_f129,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f12c_f12c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f150_f150,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f16d_fatal_failure,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f170_f170,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f181_testdll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f187_infinite_loop,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f189_flash_sectors_rom,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f195_flash_one_sector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a1_first_sector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a5_second_sector,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a7_write_val,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b0_f1b0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b4_wait_esp_ready,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b9_f1b9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1cb_wait_answer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1d0_f1d0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1d5_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1f2_wait_write_complete,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1f5_f1f5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1f9_f1f9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1fd_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f203_f203,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f209_end_wait_write_complete,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f20e_f20e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f217_f217,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f219_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f220_f220,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f225_f225,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22b_f22b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22e_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f234_f234,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f239_end_last_progress_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f23d_f23d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f241_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f243_ok,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f246_show_progress,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f24c_f24c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f254_vblankwait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f259_f259,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f26e_f26e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f274_no_failure,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f278_erase_failure,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f27c_write_failure,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f27e_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f293_end,
	&emulator_compiled_segments_funcs::seg_f294_erase_sector_sequence,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2c7_wait_completion,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2ca_f2ca,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2d2_f2d2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2d6_f2d6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2da_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e0_end_wait_completion,
	&emulator_compiled_segments_funcs::seg_f2e1_mapper_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f335_f335,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33b_f33b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33f_full_rescue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f344_safe_rescue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f349_no_rescue,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f34c_esp_cmd_clear_buffers,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f34e_esp_cmd_connect,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f350_esp_cmd_get_esp_status,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f352_esp_send_cmd_short,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f356_esp_send_cmd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f359_f359,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f361_copy_payload_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f36a_f36a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f36e_esp_get_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f375_f375,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f37a_store_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f380_store_payload,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f389_f389,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f38d_wait_ready_bit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f392_f392,
	&emulator_compiled_segments_funcs::seg_f393_wait_ready_bit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f398_f398,
	&emulator_compiled_segments_funcs::seg_f399_fetch_controllers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a5_fetch_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3af_next_btn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3bb_f3bb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c0_f3c0,
	&emulator_compiled_segments_funcs::seg_f3c1_wait_next_frame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c5_waiting,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c9_f3c9,
	&emulator_compiled_segments_funcs::seg_f3ca_absolute_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ce_f3ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3d3_end,
	&emulator_compiled_segments_funcs::seg_f3d4_multiply,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3df_additions_loop,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e3_f3e3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3f4_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3f7_last_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3fa_handle_buff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ff_f3ff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f403_basic_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f410_attributes_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f418_end,
	&emulator_compiled_segments_funcs::seg_f419_reset_nt_buffers,
	&emulator_compiled_segments_funcs::seg_f41a_dummy_routine,
	&emulator_compiled_segments_funcs::seg_f41b_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f428_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f431_f431,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f434_f434,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f43a_draw_zipped_nametable,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f447_draw_zipped_vram,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f449_load_background,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f44d_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f453_f453,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f456_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f459_f459,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f45d_f45d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f460_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f466_f466,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f469_f469,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f46c_end,
	&emulator_compiled_segments_funcs::seg_f46d_next_byte,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f471_f471,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f473_end_inc_vector,
	&emulator_compiled_segments_funcs::seg_f474_call_pointed_subroutine,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f477_copy_palette_to_ppu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f48b_copy_one_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f494_f494,
	&emulator_compiled_segments_funcs::seg_f495_shake_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4b1_f4b1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4b6_set_screen_two,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4bd_set_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c3_f4c3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4cd_end,
	&emulator_compiled_segments_funcs::seg_f4ce_get_unzipped_bytes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d6_skip_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4da_carry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4de_f4de,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e0_no_carry,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e2_loop_without_dec,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e6_f4e6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ea_normal_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ed_f4ed,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ef_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f2_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f5_f4f5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f7_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4fd_f4fd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ff_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f503_skip_all,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f514_done,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f517_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51b_get_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51f_f51f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f523_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f530_f530,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f532_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f537_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f53a_f53a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f53c_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f542_f542,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f544_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f547_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f558_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f55a_force_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f55c_end,
	&emulator_compiled_segments_funcs::seg_f55d_construct_palettes_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f560_f560,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f57a_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f585_f585,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f58b_push_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f599_construct_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f59c_f59c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5a4_copy_header_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5af_f5af,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5b3_copy_payload_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5be_f5be,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5c4_clear_bg_bot_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5d7_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5e0_f5e0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5e2_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5e8_f5e8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ee_f5ee,
	&emulator_compiled_segments_funcs::seg_f5ef_switch_bank,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f5_trampoline,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5fd_f5fd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f600_f600,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f604_exec,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f607_far_lda_tmpfield1_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f60c_f60c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f613_f613,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f615_cpu_to_ppu_copy_tileset_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f623_cpu_to_ppu_copy_tileset_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f630_cpu_to_ppu_copy_tileset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f63a_f63a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f63c_copy_one_tile,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f63e_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f648_f648,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f659_f659,
	&emulator_compiled_segments_funcs::seg_f65a_cpu_to_ppu_copy_bytes,
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
	&emulator_compiled_segments_funcs::seg_f666_f666,
	&emulator_compiled_segments_funcs::seg_f667_cpu_to_ppu_copy_charset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f671_f671,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f673_cpu_to_ppu_copy_charset_raw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f68f_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f694_f694,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f699_f699,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a2_f6a2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a4_ok,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a8_f6a8,
	&emulator_compiled_segments_funcs::seg_f6a9_copy_one_line,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6ab_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6ba_f6ba,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c2_f6c2,
	&emulator_compiled_segments_funcs::seg_f6c3_modifier_force_0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c6_modifier_force_1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c9_modifier_swap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6d0_bits_modifiers_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6d4_fill_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6da_f6da,
	&emulator_compiled_segments_funcs::seg_f6db_fixed_memcpy,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6dd_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6e1_f6e1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6e9_end,
	&emulator_compiled_segments_funcs::seg_f6ea_inline_parameters,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f712_switch_selected_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f715_f715,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f717_end,
	&emulator_compiled_segments_funcs::seg_f718_merge_to_player_velocity,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f71a_add_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f729_f729,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f73a_check_diff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f73e_f73e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f744_f744,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f751_add_step_size,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f75d_f75d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f75f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f761_f761,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f771_decrement,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f77e_next_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f785_f785,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f78a_apply_player_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7a4_f7a4,
	&emulator_compiled_segments_funcs::seg_f7a5_gravity_step,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7a7_reset_default_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7b4_check_in_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7bb_f7bb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7bf_f7bf,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c3_f7c3,
	&emulator_compiled_segments_funcs::seg_f7c4_simple_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c8_f7c8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7cc_f7cc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7d3_end_left_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7da_end_right_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e1_end_top_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e8_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ea_not_in_platform,
	&emulator_compiled_segments_funcs::seg_f7eb_oos_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7f7_f7f7,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7f9_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7fb_f7fb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f802_f802,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f809_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f815_f815,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f817_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f819_f819,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f820_f820,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f827_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f833_f833,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f835_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f837_f837,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f83e_f83e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f845_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f851_f851,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f853_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f855_f855,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f85c_f85c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f863_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f865_not_in_platform,
	&emulator_compiled_segments_funcs::seg_f866_controller_callbacks,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f868_switch_linear,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f86a_check_controller_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f86e_f86e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f885_next_controller_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f88a_f88a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f89c_reinit_c_stack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8a5_wait_vbi,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8a8_vblankwait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8ad_f8ad,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa30_default_gravity_per_system_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa32_pal_to_ntsc_velocity_high_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa94_fa94,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb32_pal_to_ntsc_velocity_low_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc32_pal_to_ntsc_velocity_neg_high_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcd4_fcd4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe32_server_bytecode_error,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe37_server_bytecode_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe3a_fe3a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe5b_fe5b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe60_server_bytecode_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe63_fe63,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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

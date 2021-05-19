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
void seg_c037_vblankwait1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
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
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c070_pal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c073_c073(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c076_c076(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c07b_forever(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c07e_c07e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c081_c081(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c084_c084(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c095_c095(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c0a8_characters_bank_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c0ab_characters_tiles_data_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c0b1_characters_tiles_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ABX();
	if (emu.stopped) { return; }
}
void seg_c0b7_characters_properties_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
}
void seg_c0c0_characters_palettes_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_ABX();
	if (emu.stopped) { return; }
}
void seg_c0db_characters_netload_routine_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_c0de_characters_start_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVS_REL();
	if (emu.stopped) { return; }
}
void seg_c0e1_characters_start_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVS_REL();
	if (emu.stopped) { return; }
}
void seg_c0e4_characters_update_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVS_REL();
	if (emu.stopped) { return; }
}
void seg_c0e8_c0e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0e7_characters_update_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0ea_characters_offground_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0ed_characters_offground_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0f0_characters_onground_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0f3_characters_onground_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0f6_characters_input_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0f9_characters_input_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c0fc_characters_onhurt_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c100_c100(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c102_set_player_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c119_c119(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c120_stages_init_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROL_ABX();
	if (emu.stopped) { return; }
}
void seg_c134_stages_freezed_tick_routine_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_c148_stages_data(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c150_stages_illustration(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BVS_REL();
	if (emu.stopped) { return; }
}
void seg_c15c_stages_netload_routine_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_c160_stages_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_c164_stages_tileset_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c166_c166(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c168_stages_tileset_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
}
void seg_c16c_stages_tileset_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
}
void seg_c173_animation_frame_entry_handlers_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_c17b_anim_frame_move_hurtbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
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
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c195_c195(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZEX();
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1aa_apply_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1af_c1af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1b4_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1b6_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1c9_c1c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1ce_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1d0_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1e3_c1e3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c1e8_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1ea_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c1fd_c1fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c202_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c204_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c212_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c213_anim_frame_move_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c221_c221(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c22c_ignore_enabled(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
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
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c22e_end_enabled(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c274_c274(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZEX();
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
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
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2ab_apply_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2b0_c2b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2b5_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2b7_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2ca_c2ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c2cf_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2d1_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2eb_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c2fe_c2fe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c303_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c305_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c314_stb_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c31b_c31b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c31f_c31f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c323_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c324_particle_directional_indicator_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c35d_c35d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c35e_set_particle_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c384_particle_directional_indicator_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c388_c388(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c389_do_something(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c396_c396(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c399_c399(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c39c_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3a1_c3a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3a3_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3a4_move_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3af_c3af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3b0_move_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3d6_c3d6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c3db_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3dd_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3ed_c3ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c3f2_separate(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3f7_set_y_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c40c_c40c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c411_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c413_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c42d_particle_death_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c46f_c46f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c470_place_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c47e_c47e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c480_no_reposition_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c491_c491(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c493_no_reposition_y(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4bb_particles_start_position_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c4c2_particles_start_position_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c4c9_particle_death_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c4cf_c4cf(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4dd_c4dd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4e4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4e6_do_nothing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4e7_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c4ec_c4ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c4f1_audio_music_power(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c502_audio_music_weak(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c50d_audio_music_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c518_audio_play_crash(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c528_audio_play_death(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c538_audio_play_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c548_audio_play_parry(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c558_audio_play_shield_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c568_audio_play_shield_break(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c578_audio_play_title_screen_text(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c588_global_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c58d_c58d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5a0_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c5a8_c5a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c5b0_c5b0(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABS();
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
void seg_c5d2_c5d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c5d7_c5d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c5da_c5da(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5e4_game_states_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ZEX();
	if (emu.stopped) { return; }
}
void seg_c600_game_states_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
}
void seg_c61c_init_character_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c62c_character_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c634_character_selection_screen_copy_property(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c64a_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c655_c655(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c65b_character_selection_screen_copy_portrait(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c67f_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c687_c687(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c68d_character_selection_copy_to_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c693_c693(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c699_stay_on_menu_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c69c_c69c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
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
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c6b6_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c6c1_c6c1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c6cc_character_selection_tick_char_anims(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6e2_c6e2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6f8_c6f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c6fe_tick_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c70d_c70d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c710_character_selection_get_char_property(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c733_character_selection_construct_char_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c73e_c73e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c744_character_selection_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c751_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c75a_c75a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c75d_c75d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c763_character_selection_reset_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c76b_c76b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c771_default_config(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c79b_init_config_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c79e_c79e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7ae_c7ae(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7be_c7be(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c7ce_config_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c7d6_init_credits_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7d9_c7d9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7e9_c7e9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7fc_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c805_c805(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c807_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c80d_c80d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c813_c813(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c825_c825(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c82a_c82a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c82f_c82f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c834_c834(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c839_c839(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c83e_c83e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c859_write_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c868_c868(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c882_write_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c888_c888(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c88a_end_inc_cursor(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c88e_c88e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c892_c892(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c896_c896(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c89a_c89a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8a3_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8ab_filled_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8b3_new_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8b8_end_write_credits(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8bb_c8bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c8bc_fill_attributes_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8be_write_attribute_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8c6_c8c6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c8c7_credits_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8cf_c8cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8d3_c8d3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8d7_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8db_c8db(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8df_c8df(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8e2_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8e7_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c8e8_init_donation_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c906_c906(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c90b_donation_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c90e_c90e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c916_c916(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c918_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c91c_c91c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c920_c920(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c924_c924(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c928_c928(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c92c_c92c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c930_c930(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c934_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c939_c939(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c93c_go_back(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c941_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c949_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c94d_c94d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c951_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c968_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c969_option_to_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_c96e_nt_payload_btc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c974_nt_payload_paypal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_c97a_nt_payload_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROR_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
}
void seg_c97c_nt_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c97e_init_donation_btc_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c989_init_donation_paypal_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c991_init_donation_qr_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c999_c999(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9a4_c9a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9a7_c9a7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c9a8_donation_qr_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9b0_c9b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9b4_c9b4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9b8_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9bc_c9bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9c0_c9c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c9c3_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9c8_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c9cb_game_modes_init_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
}
void seg_c9cf_game_modes_pre_update_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9d1_init_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9d4_c9d4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9d9_c9d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9de_c9de(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9e3_c9e3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c9e8_c9e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
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
void seg_c9ec_zero_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9f3_c9f3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca0f_ca0f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
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
void seg_ca11_update_addr_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca21_ca21(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca39_ca39(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca4d_position_player_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca6c_ca6c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca83_ca83(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca98_ca98(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cab5_cab5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cac8_cac8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cadc_initialize_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_caf5_caf5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cafa_cafa(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb07_cb07(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb0c_cb0c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb0f_cb0f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb14_cb14(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb1f_cb1f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb24_cb24(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb27_cb27(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb2c_cb2c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb31_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb36_cb36(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb51_cb51(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb6c_cb6c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb6f_cb6f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb72_cb72(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb81_cb81(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cb82_place_player_a_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb84_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb90_cb90(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cb91_place_player_b_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb93_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb9f_cb9f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cba0_place_character_normal_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbb3_place_character_alternate_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbc6_place_character_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbea_place_character_ppu_illustrations(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc1d_cc1d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc1e_illustrations_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_cc20_illustrations_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_cc22_header_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
}
void seg_cc26_header_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
}
void seg_cc2a_game_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc2d_cc2d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc3c_cc3c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc40_cc40(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc43_cc43(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc58_cc58(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cc5c_cc5c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc61_cc61(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc66_cc66(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc69_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc6a_no_screen_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc6e_cc6e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc71_cc71(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cc75_no_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc8d_cc8d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc90_cc90(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc93_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc94_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc98_cc98(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc9e_cc9e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cca5_keep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ccac_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccb5_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ccb6_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ccb8_hitstun_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ccbc_ccbc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ccbe_hitstun_next_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ccc3_ccc3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccc5_hitbox_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccc8_ccc8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cccd_cccd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cccf_update_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cce4_cce4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ccea_ccea(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccf9_end_input_event(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccff_ccff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd02_cd02(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd06_cd06(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd09_cd09(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd0c_end_visuals(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd11_cd11(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd12_player_state_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd22_check_player_hit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd28_cd28(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd2b_process_checks(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd4e_cd4e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd52_cd52(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd75_cd75(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd77_cd77(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd7a_cd7a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cda1_cda1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdae_check_hitbox_hurtbox(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdd1_cdd1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cdd3_cdd3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cdd8_cdd8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cddd_cddd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdf2_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cdf5_hurt_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cdf8_cdf8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cdfb_cdfb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce08_ce08(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ce0b_cap_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce0d_apply_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce28_ce28(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce35_apply_force_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce6a_ce6a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce86_ce86(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
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
void seg_ce99_ce99(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cead_passthrough_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ceb3_end_abs_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ceb7_ceb7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cecb_passthrough_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ced1_end_abs_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cef5_cef5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cef6_move_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf06_vertical(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf17_cf17(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf1c_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf1e_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf2a_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf33_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf39_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cf3e_cf3e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf40_horizontal(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf51_cf51(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf56_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf58_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf64_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf6d_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf73_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cf78_cf78(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf93_move_player_handle_one_platform_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfa6_platform_specific_handlers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_cfab_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfb6_cfb6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cfb8_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cfba_cfba(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfc5_cfc5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cfc7_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cfc9_cfc9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfd4_cfd4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cfd6_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cfd8_cfd8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfe3_cfe3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cfe5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cfe7_cfe7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cffc_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cffd_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d009_d009(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d00b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d00d_d00d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d019_d019(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d01b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d01d_d01d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d029_d029(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d02b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d02d_d02d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d039_d039(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d03b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d03d_d03d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d053_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d054_move_player_handle_one_platform_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d067_platform_specific_handlers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_d06c_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d077_d077(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d079_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d07b_d07b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d086_d086(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d088_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d08a_d08a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d095_d095(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d097_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d099_d099(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0a4_d0a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0a6_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0a8_d0a8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0bd_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d0be_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0ca_d0ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0cc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0ce_d0ce(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0da_d0da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0dc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d0de_d0de(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0ea_d0ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0ec_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0ee_d0ee(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0fa_d0fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0fc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d0fe_d0fe(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d114_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d115_move_player_handle_one_platform_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d128_platform_specific_handlers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
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
void seg_d12d_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d138_d138(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d13a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d13c_d13c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d147_d147(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d149_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d14b_d14b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d156_d156(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d158_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d15a_d15a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d165_d165(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d167_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d169_d169(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d176_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d177_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d183_d183(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d185_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d187_d187(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d193_d193(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d195_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d197_d197(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1a3_d1a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1a5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1a7_d1a7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1b3_d1b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1b5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d1b7_d1b7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1c5_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d1c6_move_player_handle_one_platform_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1d9_platform_specific_handlers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
}
void seg_d1de_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1e9_d1e9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1eb_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1ed_d1ed(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1f8_d1f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1fa_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d1fc_d1fc(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d207_d207(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d209_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d20b_d20b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d216_d216(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d218_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d21a_d21a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d22b_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d22c_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d238_d238(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d23a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d23c_d23c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d248_d248(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d24a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d24c_d24c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d258_d258(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d25a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d25c_d25c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d268_d268(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d26a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d26c_d26c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d27e_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d27f_check_player_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d289_d289(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d28b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d28d_d28d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d297_d297(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d299_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d29b_d29b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2a5_d2a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2a7_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2a9_d2a9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2b3_d2b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2b5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2b7_d2b7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d2bb_d2bb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2d2_d2d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d2d5_offground(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2e4_d2e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d2e7_set_death_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d2ea_d2ea(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d2f8_d2f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d2fa_d2fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d2ff_pass_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d304_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d306_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d308_end_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d30c_d30c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d30e_d30e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d313_pass_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d318_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d31a_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d31c_end_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d31f_d31f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d323_d323(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d336_d336(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d339_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d33d_d33d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d340_d340(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d346_no_set_winner(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d35d_d35d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d361_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d362_write_player_damages(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d368_d368(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d373_prepare_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
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
void seg_d37b_end_player_variables(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
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
void seg_d38b_d38b(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ZER();
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
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3b5_d3b5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3ba_stocks_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d3da_d3da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d3df_empty_stock(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
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
void seg_d3e1_set_stock_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3ea_d3ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d3f2_stocks_positions(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d3f6_character_icons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d3f8_player_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3fb_d3fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3fe_d3fe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d401_d401(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d402_blinking(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d410_d410(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d41d_no_hitstun(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d421_d421(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d42e_player_one(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d433_d433(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d435_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d440_d440(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d443_update_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d445_update_one_player_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d47e_d47e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d481_d481(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d487_d487(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d495_d495(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d497_d497(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d49b_d49b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d49d_d49d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d4a0_oos_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4b5_oos_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4ca_oss_top(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4df_oos_bot(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4f1_oos_indicator_placed(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d500_d500(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d503_d503(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d505_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_d508_d508(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d50b_all_player_sprites_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d50e_d50e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d50f_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
}
void seg_d511_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
}
void seg_d513_oos_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
}
void seg_d515_oos_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d517_game_mode_local_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d51a_game_mode_local_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d51e_d51e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d522_d522(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d526_d526(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d52a_d52a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d52d_end_ai(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d52e_game_mode_online_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d531_game_mode_online_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d534_init_gameover_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABS();
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
void seg_d556_d556(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABS();
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
void seg_d578_d578(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d588_d588(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d58d_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d592_d592(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5a1_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5ac_d5ac(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5c7_d5c7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5e2_d5e2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5f3_winner_name_writing(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d600_d600(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
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
void seg_d62c_d62c(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d645_d645(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d66f_d66f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d685_initialize_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6a0_d6a0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6a2_position_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6a5_d6a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6ab_d6ab(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6b6_d6b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6b9_d6b9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d6c0_gameover_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d6c2_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d6d0_d6d0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d6d4_d6d4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d6d7_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d6dc_d6dc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d6df_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d6e7_update_animations(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6ea_d6ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6ed_d6ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d6ee_next_screen_by_game_mode(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDX_ZER();
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
void seg_d6f0_gamover_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
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
void seg_d711_d711(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d714_d714(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d72b_d72b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d738_d738(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d73b_d73b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d73c_update_balloons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d740_update_one_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d743_d743(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d757_d757(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d75b_end_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d75e_d75e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d770_d770(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d775_positive(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d777_high_byte_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d794_d794(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d79f_background(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7a7_end_sprite_layer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7b1_d7b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d7b2_gameover_random_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7bf_init_mode_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7c2_d7c2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7d2_d7d2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7dd_d7dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7e0_d7e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d7e5_mode_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7e8_d7e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7eb_d7eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7ed_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7f1_d7f1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7f5_d7f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7f9_d7f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7fd_d7fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d801_d801(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d805_d805(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d809_d809(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d80d_d80d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d811_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d816_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d819_go_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d81f_d81f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d822_from_donation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d829_go_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d82d_d82d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d834_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d83c_d83c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d843_go_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d848_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d852_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d855_d855(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d859_show_selected_option(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d870_d870(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d874_nt_highlight_payload_local(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d889_nt_highlight_payload_online(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d89e_nt_highlight_payload_donation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d8b6_nt_highlight_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLD_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLD_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLD_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8b9_init_netplay_launch_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8bc_d8bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8c4_netplay_launch_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8cc_init_online_mode_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8dc_online_mode_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8e4_online_mode_screen_tick_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8e7_d8e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d8ed_init_stage_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8fd_stage_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d905_stage_selection_screen_long_memcopy(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d90c_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d913_d913(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d919_stage_selection_tick_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d91c_d91c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d922_stage_selection_back_to_char_select(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d936_init_title_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d93e_d93e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d949_d949(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d954_d954(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d96d_d96d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d981_emu_50hz_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d988_d988(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d993_d993(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d997_d997(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d99f_d99f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9a2_d9a2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9a5_d9a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d9a8_soft_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9af_end_menu_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d9b0_set_title_chr(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABS();
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
void seg_d9d2_d9d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d9d3_init_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9d6_d9d6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9e7_d9e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d9e8_palette_title_initial(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da08_title_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da10_da10(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da13_da13(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da16_da16(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_da1e_da1e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_da23_da23(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da26_update_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_da2a_da2a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da31_cheat_succeed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da36_press_any_key(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da3a_da3a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da3e_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da42_da42(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da46_da46(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da49_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da4c_da4c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da51_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da52_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_da66_tick_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da77_da77(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da84_change_anim_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da8b_wait_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da91_da91(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da94_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da95_show_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da98_da98(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da9a_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_daa6_daa6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_daa9_daa9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dab8_dab8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dab9_logo_palette_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_dac1_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dac4_dac4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dac8_dac8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dacb_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dacc_wait_text(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dad2_dad2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dad5_dad5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dad8_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dad9_show_text(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dae1_dae1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dae4_dae4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db17_finish(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db1a_db1a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
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
void seg_db26_text_colors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
}
void seg_db29_title_screen_restore_music_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_db2d_db2d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db30_db30(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_db33_mute(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db36_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db40_state_transition_pretransition_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db60_state_transition_pre_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db73_db73(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db74_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_db7e_state_transition_pre_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db91_db91(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db92_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
}
void seg_db9c_state_transition_post_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbb1_dbb1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbba_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_dbc8_state_transition_post_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbdd_dbdd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dbde_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ZEX();
	if (emu.stopped) { return; }
}
void seg_dbec_scroll_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dbf0_dbf0(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc0a_set_up_values(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
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
void seg_dc23_end_set_values(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dc27_dc27(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc2d_do_not_touch_offsets(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc31_save_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_dc38_dc38(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc48_hidden_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc4d_two_byte_position_stored(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc59_dc59(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dc5b_scroll_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dc61_dc61(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dc65_dc65(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
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
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc67_set_camera_scroll(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc74_dc74(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dc78_dc78(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc80_dc80(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc88_simple_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc8b_end_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dc97_clean(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc9a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc9b_move_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dc9e_dc9e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dca2_dca2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dca6_dca6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dcaa_dcaa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dcae_dcae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dcb2_dcb2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dcb6_dcb6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dcba_dcba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dcbe_dcbe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dcc5_update_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcc8_vertical_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcde_dcde(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dce1_dce1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dce4_dce4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dce8_update_screen_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcfc_move_one_screen_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd0b_dd0b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd10_hide_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd12_update_oam(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd20_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd21_init_wifi_settings_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd31_wifi_settings_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dd39_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dd5d_re_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dd5f_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dd6a_dd6a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dd6d_dd6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd6e_cloud_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ddaa_set_menu_chr(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABS();
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
void seg_ddcc_ddcc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ddcd_tick_moving_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ddd5_ddd5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ddde_move_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dde2_dde2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dde7_dde7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ddeb_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ddec_menu_position_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ddee_position_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ddf1_ddf1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddf4_ddf4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ddf5_menu_position_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de01_de01(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de05_do_not_hide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de12_place_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de18_de18(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de1c_skip_y_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de31_de31(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_de34_sprite_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de36_de36(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de39_sprite_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_de3e_stage_generic_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de48_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de4d_de4d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de68_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de72_de72(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de81_de81(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de91_copy_header_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de9c_copy_elements_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dea3_dea3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_deab_copy_one_element(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_deb6_deb6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_deb9_copy_data_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_deba_stage_iterate_all_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_debc_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dec1_dec1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dec4_dec4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dec8_dec8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_decf_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ded3_ded3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ded5_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_deda_deda(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dedd_dedd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dee1_dee1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dee8_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_deec_deec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_deee_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_def3_def3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_def6_def6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_defa_defa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df01_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df03_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df04_ai_action_double_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df0d_ai_action_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df17_ai_action_right_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df1c_ai_action_down_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df21_ai_action_special_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df29_ai_action_idle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df2c_ai_level_to_delay(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df2f_ai_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df3e_ai_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df50_find_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df63_run_current_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df82_df82(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df8a_df8a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df8c_do_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df8f_df8f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df95_df95(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df96_ai_continue_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_df9f_df9f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dfa3_next_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfb0_dfb0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dfb5_set_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dfbd_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dfbe_ai_attack_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dff2_dff2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dff7_right_facing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dff9_end_direction_flag(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dffd_dffd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e002_grounded(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e004_end_ground_flag(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e00a_check_one_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e011_e011(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e018_condition_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e073_e073(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e075_e075(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e088_e088(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e08b_next_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e08f_e08f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e092_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e093_ai_shield_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e097_e097(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e09b_e09b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e0a1_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0a9_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0ae_distance_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e0b2_e0b2(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0c4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0c5_ai_space_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e0cb_e0cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e0d1_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0d7_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e0da_spot_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e0e6_e0e6(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0ea_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0f8_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0f9_ai_chase_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e103_e103(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e105_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e107_e107(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e10b_e10b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e112_e112(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e116_no_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e120_e120(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e124_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e12a_e12a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e12e_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e134_e134(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e13b_end_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e149_e149(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e154_negative_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e15c_end_set_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e174_e174(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e178_dont_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e183_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e18e_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e19a_action_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e1a1_ai_delay_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e1a5_e1a5(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e1b8_no_delay(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e1bc_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e1bd_network_init_stage(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1c8_clear_one_input(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1d3_e1d3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1e3_network_tick_ingame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e1e7_e1e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e1ea_do_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e1fd_e1fd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e23b_controller_sent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e240_e240(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e24f_e24f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e256_e256(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e25c_e25c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e25f_skip_message(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e269_state_updated(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e278_e278(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e27b_e27b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e27f_e27f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e283_e283(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e287_e287(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e289_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e28a_update_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2a8_e2a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e2ae_future(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e2b3_past(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2b5_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2b7_rollback_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2c1_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e2c7_e2c7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e2cd_local_keep(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e2d3_local_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e2e4_e2e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
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
void seg_e2e6_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2f0_e2f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
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
void seg_e2f2_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2fc_e2fc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e303_e303(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e30b_screen_shake_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
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
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e323_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e32e_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e335_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e388_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e39f_e39f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3a6_e3a6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e3bb_e3bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e3bf_roll_forward_one_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e3c5_e3c5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3c7_e3c7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e3cd_e3cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3cf_e3cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e3d5_e3d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3d7_e3d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e3dd_e3dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3e0_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3f7_e3f7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3fa_e3fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3fd_e3fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e401_e401(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e405_e405(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e409_e409(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e40b_end_inc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e40e_dont_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e423_set_opponent_buttons_from_history(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e428_e428(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e42f_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e435_mark_nexts_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e43d_known(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e443_place_character_ppu_tiles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e452_e452(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e45c_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e463_end_set_ppu_addr(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e478_e478(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e479_sleep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e47c_e47c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e47f_process_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e484_handle_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e489_e489(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e49e_write_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e4a9_e4a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4ac_end_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4ad_number_to_tile_indexes(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e4b1_find_one_digit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e4b9_try_digit_value(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e4bf_e4bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e4dc_e4dc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4e3_test_coeff_10(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e4e7_e4e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4ee_coefficent_changed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e4f2_e4f2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4f4_destination_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4f7_next_digit_value(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e503_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e504_keep_input_dirty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e509_get_transition_id(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e513_change_global_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e51f_e51f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e52c_e52c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e535_e535(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e537_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e53f_e53f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e550_e550(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e553_e553(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e559_find_transition_index(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e55c_e55c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e560_check_one_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e565_e565(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e569_e569(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e56d_not_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e56f_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e570_pre_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e573_e573(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e577_e577(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e584_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e585_post_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e588_e588(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e58c_e58c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e599_e599(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e59c_no_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5a6_e5a6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5ab_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5ac_animation_init_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5e3_animation_state_change_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5fe_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
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
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e653_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e654_animation_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e66e_e66e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e671_inc_current_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e676_skip_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e67a_e67a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e67f_e67f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e682_end_skip_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e687_e687(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e68b_e68b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e696_store_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6a7_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e6a8_add_to_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e6b4_draw_anim_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6b6_handle_one_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6ba_e6ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6be_e6be(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6c2_e6c2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6c6_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e6db_e6db(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e6de_clear_unused_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e6e2_e6e2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6eb_e6eb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6f3_clear_one_unused_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6fd_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e6fe_call_pointed_subroutine13(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_e701_anim_frame_move_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e705_e705(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e70f_e70f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e714_use_last_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e716_set_sprite_used(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e71b_default_direction(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e721_end_init_direction_data(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e725_e725(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e72a_use_first_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e72c_sprite_index_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e734_e734(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e739_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e73b_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e74a_e74a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e74f_e74f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e754_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e75a_e75a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e75d_end_anim_hook(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e771_e771(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e776_flip_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e77d_got_relative_pos(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e780_e780(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e785_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e787_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e796_e796(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e79c_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e7a1_e7a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7a6_inc_sprite_index(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7a8_end_next_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7ab_skip(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e7b4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e7b5_boxes_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7bf_e7bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7c1_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7c3_e7c3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7cd_e7cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7cf_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7d1_e7d1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7db_e7db(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7dd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7df_e7df(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7e9_e7e9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7eb_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e7ed_e7ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7f2_no_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e7f4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e7f5_audio_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e7f8_e7f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e7fe_audio_play_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e807_e807(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e80c_e80c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e824_e824(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e838_e838(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e839_init_channel(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e849_e849(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e859_e859(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e85f_pulse_2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
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
void seg_e862_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e86e_end_pulse_specifics(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e88b_audio_mute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8a6_audio_unmute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8ae_square_reinit_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8c7_e8c7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e8c8_audio_music_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e8d1_e8d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8d6_e8d6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8db_e8db(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8e0_e8e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8e3_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e8e4_noise_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e8e8_e8e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e8eb_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8f8_e8f8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e907_overflow(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e90c_e90c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e914_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e919_store_result(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e91c_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e921_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e943_e943(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e957_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e95f_e95f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e967_regular_write(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e978_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e979_pulse_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e97e_e97e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e985_do_effects(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e997_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e99d_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9a0_end_byte_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9a8_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e9b0_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9d3_e9d3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e9d9_e9d9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9e8_skip_opcode_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e9ed_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9fa_e9fa(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea0e_ea0e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea17_triangle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea1c_ea1c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea21_ea21(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea26_unmute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea34_write_linear_cnt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea37_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea38_opcode_noise_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea3a_opcode_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea5f_ea5f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea6f_no_track_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea7a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea7d_opcode_chan_params(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea9a_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eaac_opcode_chan_volume_low(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eab4_opcode_chan_volume_high(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eabe_opcode_noise_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eac6_opcode_set_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eadc_opcode_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eaf4_note_table_lookup(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb02_opcode_play_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb12_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb14_one_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb17_eb17(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb1b_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb1d_one_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_eb20_eb20(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb24_end_wait_compute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb2f_eb2f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb43_opcode_play_timed_note(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb4b_eb4b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb69_opcode_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb76_opcode_noise_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb81_opcode_noise_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb83_opcode_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb8c_opcode_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eba1_opcode_noise_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebb6_opcode_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ebbc_ebbc(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebbe_set_value(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebca_opcode_pulse_meta_uslide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ebd1_opcode_pulse_meta_dslide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebd5_opcode_pulse_meta_common(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebdf_ebdf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ebe3_ebe3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebe9_ebe9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebf5_end_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec01_ec01(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec08_ec08(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec0d_keep_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec0f_set_volume_mask(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ec17_ec17(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec1d_replace_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec27_end_volume_duty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec2d_ec2d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec38_end_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec3b_opcode_noise_set_periodic(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec3f_ec3f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec47_unset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec4c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec52_opcode_noise_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec69_opcode_noise_pitch_slide_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec76_opcode_noise_pitch_slide_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec8e_pulse1_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_ec9e_noise_opcode_routines_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ABS();
	if (emu.stopped) { return; }
}
void seg_eca7_noise_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ABS();
	if (emu.stopped) { return; }
}
void seg_ecb0_particle_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecb6_process_one_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ecbb_ecbb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecbe_ecbe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ecc1_skip_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecc6_next_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecd1_ecd1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ecd2_process_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ece2_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecec_ecec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ecf3_ecf3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ecf8_ecf8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed11_hide_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed16_particle_drawn(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed1d_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed1e_particle_handlers_reinit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed29_ed29(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed2a_loop_on_particle_boxes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed2c_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed31_ed31(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed3a_ed3a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed3b_loop_on_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed3f_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ed45_ed45(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed4e_ed4e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ed51_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed52_deactivate_particle_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed5a_ed5a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed5b_hide_particles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed5f_ed5f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ed64_second_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed66_set_sprite_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed73_ed73(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed74_hide_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed82_credits_begin(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed85_ed85(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed99_ed99(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_edbd_edbd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ee0c_ee0c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BVS_REL();
	if (emu.stopped) { return; }
}
void seg_ee9f_ee9f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef48_credits_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f000_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f007_f007(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f00a_f00a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f011_flash_safe_sectors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f014_f014(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f017_flash_all_sectors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f01a_f01a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f01d_flash_static_sector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f020_flash_safe_sectors_and_return(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f031_flash_one_sector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f03d_first_sector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f041_second_sector(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f043_write_val(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f06c_write_one_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f073_wait_answer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f078_f078(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
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
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f08a_write_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0a3_f0a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0ab_f0ab(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0ad_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f0b1_f0b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f0b9_f0b9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f0bc_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f0c0_mapper_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0fe_f0fe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f104_f104(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f107_no_rescue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f10a_esp_send_cmd_short(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f10e_esp_send_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f117_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f120_f120(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f121_esp_get_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f128_f128(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f12f_store_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f13a_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f13d_f13d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f146_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f147_fetch_controllers(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f153_fetch_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f15d_next_btn(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f169_f169(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f16e_f16e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f16f_wait_next_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f172_f172(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f177_f177(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f17c_f17c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f184_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f185_wait_next_real_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f189_waiting(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f18d_f18d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f18e_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f198_f198(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f19a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f19b_absolute_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f19f_f19f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f1a4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f1a5_multiply(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1b0_additions_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f1b4_f1b4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1c5_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f1c8_last_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f1ca_handle_buff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f1cf_f1cf(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1dc_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f1dd_reset_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f1e3_dummy_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f1e4_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1f1_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1fa_f1fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f1fd_f1fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f203_draw_zipped_nametable(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f212_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f216_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f21c_f21c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f21f_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f222_f222(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f226_f226(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f229_write_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f22f_f22f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f232_f232(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f235_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f236_next_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f23a_f23a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f23c_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f23d_call_pointed_subroutine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f240_copy_palette_to_ppu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f254_copy_one_color(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f25d_f25d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f25e_shake_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f27a_f27a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f27f_set_screen_two(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f286_set_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f28c_f28c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f296_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f297_get_unzipped_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f29f_skip_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2a3_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f2a7_f2a7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2a9_no_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2ab_loop_without_dec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2af_f2af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f2b3_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2b6_f2b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f2b8_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f2bb_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2be_f2be(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2c0_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2c6_f2c6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f2c8_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f2cc_skip_all(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2dd_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f2e0_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f2e4_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2e8_f2e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f2ec_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2f9_f2f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f2fb_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f300_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f303_f303(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f305_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f30b_f30b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f30d_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f310_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f321_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f323_force_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f325_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f326_construct_palettes_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f329_f329(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f33f_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f34a_f34a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f350_push_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f35e_construct_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f361_f361(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f369_copy_header_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f374_f374(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f378_copy_payload_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f383_f383(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f389_clear_bg_bot_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f39c_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3a5_f3a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3a7_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3ad_f3ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3b3_f3b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3b4_switch_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3b8_trampoline(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f3c0_f3c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f3c3_f3c3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f3c7_exec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_f3ca_cpu_to_ppu_copy_tileset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3d4_f3d4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3d6_copy_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3d8_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3e2_f3e2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3f3_f3f3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3f4_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3f8_f3f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f3fc_select_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3fd_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3fe_merge_to_player_velocity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f400_add_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f40f_f40f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f420_check_diff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f424_f424(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f42a_f42a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f437_add_step_size(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f44c_f44c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f44e_f44e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f45e_decrement(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f46b_next_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f472_f472(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f477_apply_player_gravity(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
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
void seg_f48e_f48e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f48f_check_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f496_f496(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f49a_f49a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f49b_simple_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f49f_f49f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4a3_f4a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f4aa_end_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f4b1_end_right_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f4b8_end_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f4bf_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f4c1_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f4c2_oos_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4ce_f4ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f4d0_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f4d2_f4d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4d9_f4d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4e0_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4ec_f4ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f4ee_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f4f0_f4f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4f7_f4f7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f4fe_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f50a_f50a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f50c_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f50e_f50e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f515_f515(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f51c_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f528_f528(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f52a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f52c_f52c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f533_f533(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f53a_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f53c_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f53d_controller_callbacks(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f541_check_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f545_f545(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f55c_next_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f561_f561(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f573_server_bytecode_error(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f578_server_bytecode_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f57b_f57b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f598_f598(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f59d_server_bytecode_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f5a0_f5a0(mos6502<GameState::EmulatorRunContext>& emu) {
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
	&emulator_compiled_segments_funcs::seg_c037_vblankwait1,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	&emulator_compiled_segments_funcs::seg_c070_pal,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c073_c073,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c076_c076,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c07b_forever,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c07e_c07e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c081_c081,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c084_c084,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c095_c095,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0a8_characters_bank_number,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0ab_characters_tiles_data_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0b1_characters_tiles_number,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0b7_characters_properties_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0c0_characters_palettes_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0db_characters_netload_routine_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0de_characters_start_routines_table_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0e1_characters_start_routines_table_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0e4_characters_update_routines_table_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0e7_characters_update_routines_table_msb,
	&emulator_compiled_segments_funcs::seg_c0e8_c0e8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0ea_characters_offground_routines_table_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0ed_characters_offground_routines_table_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0f0_characters_onground_routines_table_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0f3_characters_onground_routines_table_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0f6_characters_input_routines_table_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0f9_characters_input_routines_table_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0fc_characters_onhurt_routines_table_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c100_c100,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c102_set_player_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c119_c119,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c120_stages_init_routine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c134_stages_freezed_tick_routine_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c148_stages_data,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c150_stages_illustration,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c15c_stages_netload_routine_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c160_stages_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c164_stages_tileset_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c166_c166,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c168_stages_tileset_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c16c_stages_tileset_bank,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c173_animation_frame_entry_handlers_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c17b_anim_frame_move_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c195_c195,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1aa_apply_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1af_c1af,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1b4_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1b6_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1c9_c1c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1ce_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1d0_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1e3_c1e3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1e8_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1ea_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1fd_c1fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c202_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c204_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c212_end,
	&emulator_compiled_segments_funcs::seg_c213_anim_frame_move_hitbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c221_c221,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c22c_ignore_enabled,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c22e_end_enabled,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c274_c274,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ab_apply_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b0_c2b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b5_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b7_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ca_c2ca,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2cf_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2d1_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2fe_c2fe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c303_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c305_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c314_stb_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c31b_c31b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c31f_c31f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c323_ok,
	&emulator_compiled_segments_funcs::seg_c324_particle_directional_indicator_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c35d_c35d,
	&emulator_compiled_segments_funcs::seg_c35e_set_particle_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c384_particle_directional_indicator_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c388_c388,
	&emulator_compiled_segments_funcs::seg_c389_do_something,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c396_c396,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c399_c399,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c39c_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3a1_c3a1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3a3_end,
	&emulator_compiled_segments_funcs::seg_c3a4_move_particles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3af_c3af,
	&emulator_compiled_segments_funcs::seg_c3b0_move_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d6_c3d6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3db_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3dd_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ed_c3ed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3f2_separate,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3f7_set_y_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c40c_c40c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c411_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c413_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c42d_particle_death_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c46f_c46f,
	&emulator_compiled_segments_funcs::seg_c470_place_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c47e_c47e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c480_no_reposition_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c491_c491,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c493_no_reposition_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4bb_particles_start_position_offset_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4c2_particles_start_position_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4c9_particle_death_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4cf_c4cf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4dd_c4dd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4e4_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4e6_do_nothing,
	&emulator_compiled_segments_funcs::seg_c4e7_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4ec_c4ec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4f1_audio_music_power,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c502_audio_music_weak,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c50d_audio_music_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c518_audio_play_crash,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c528_audio_play_death,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c538_audio_play_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c548_audio_play_parry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c558_audio_play_shield_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c568_audio_play_shield_break,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c578_audio_play_title_screen_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c588_global_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c58d_c58d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5a0_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5a8_c5a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b0_c5b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5d2_c5d2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5d7_c5d7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5da_c5da,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5e4_game_states_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c600_game_states_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c61c_init_character_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62c_character_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c634_character_selection_screen_copy_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c64a_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c655_c655,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c65b_character_selection_screen_copy_portrait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c67f_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c687_c687,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c68d_character_selection_copy_to_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c693_c693,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c699_stay_on_menu_bank,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c69c_c69c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b6_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6c1_c6c1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6cc_character_selection_tick_char_anims,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6e2_c6e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f8_c6f8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6fe_tick_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c70d_c70d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c710_character_selection_get_char_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c733_character_selection_construct_char_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c73e_c73e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c744_character_selection_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c751_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c75a_c75a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c75d_c75d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c763_character_selection_reset_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c76b_c76b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c771_default_config,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c79b_init_config_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c79e_c79e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7ae_c7ae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7be_c7be,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7ce_config_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d6_init_credits_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d9_c7d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7e9_c7e9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7fc_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c805_c805,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c807_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c80d_c80d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c813_c813,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c825_c825,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c82a_c82a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c82f_c82f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c834_c834,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c839_c839,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c83e_c83e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c859_write_one_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c882_write_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c888_c888,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c88a_end_inc_cursor,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c88e_c88e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c892_c892,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c896_c896,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c89a_c89a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a3_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8ab_filled_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8b3_new_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8b8_end_write_credits,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8bb_c8bb,
	&emulator_compiled_segments_funcs::seg_c8bc_fill_attributes_line,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8be_write_attribute_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8c6_c8c6,
	&emulator_compiled_segments_funcs::seg_c8c7_credits_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8cf_c8cf,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d3_c8d3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d7_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8db_c8db,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8df_c8df,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8e2_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8e7_end,
	&emulator_compiled_segments_funcs::seg_c8e8_init_donation_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_c906_c906,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c90b_donation_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c90e_c90e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c916_c916,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c918_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c91c_c91c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c920_c920,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c924_c924,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c928_c928,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c92c_c92c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c930_c930,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c934_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c939_c939,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c93c_go_back,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c941_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c949_go_right,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c94d_c94d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c951_no_press,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c968_end,
	&emulator_compiled_segments_funcs::seg_c969_option_to_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c96e_nt_payload_btc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c974_nt_payload_paypal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97a_nt_payload_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97c_nt_payload_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97e_init_donation_btc_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c989_init_donation_paypal_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c991_init_donation_qr_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c999_c999,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a4_c9a4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a7_c9a7,
	&emulator_compiled_segments_funcs::seg_c9a8_donation_qr_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b0_c9b0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b4_c9b4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b8_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9bc_c9bc,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9c0_c9c0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9c3_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9c8_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9cb_game_modes_init_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9cf_game_modes_pre_update_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d1_init_game_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d4_c9d4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d9_c9d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9de_c9de,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9e3_c9e3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9e8_c9e8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9ec_zero_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f3_c9f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca0f_ca0f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca11_update_addr_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca21_ca21,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca39_ca39,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca4d_position_player_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca6c_ca6c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca83_ca83,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca98_ca98,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cab5_cab5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cac8_cac8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cadc_initialize_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caf5_caf5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cafa_cafa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb07_cb07,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb0c_cb0c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb0f_cb0f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb14_cb14,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb1f_cb1f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb24_cb24,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb27_cb27,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb2c_cb2c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb31_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb36_cb36,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb6c_cb6c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb6f_cb6f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb72_cb72,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb81_cb81,
	&emulator_compiled_segments_funcs::seg_cb82_place_player_a_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb84_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb90_cb90,
	&emulator_compiled_segments_funcs::seg_cb91_place_player_b_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb93_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb9f_cb9f,
	&emulator_compiled_segments_funcs::seg_cba0_place_character_normal_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb3_place_character_alternate_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbc6_place_character_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbea_place_character_ppu_illustrations,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc1d_cc1d,
	&emulator_compiled_segments_funcs::seg_cc1e_illustrations_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc20_illustrations_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc22_header_player_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc26_header_player_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc2a_game_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc2d_cc2d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc3c_cc3c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc40_cc40,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc43_cc43,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc58_cc58,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc5c_cc5c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc61_cc61,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc66_cc66,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc69_end_effects,
	&emulator_compiled_segments_funcs::seg_cc6a_no_screen_shake,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc6e_cc6e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc71_cc71,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc75_no_slowdown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc8d_cc8d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc90_cc90,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc93_end,
	&emulator_compiled_segments_funcs::seg_cc94_slowdown,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc98_cc98,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc9e_cc9e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cca5_keep_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccac_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb5_end,
	&emulator_compiled_segments_funcs::seg_ccb6_update_players,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb8_hitstun_one_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccbc_ccbc,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccbe_hitstun_next_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc3_ccc3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc5_hitbox_one_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc8_ccc8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cccd_cccd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cccf_update_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccea_ccea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccf9_end_input_event,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccff_ccff,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd02_cd02,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd06_cd06,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd09_cd09,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd0c_end_visuals,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd11_cd11,
	&emulator_compiled_segments_funcs::seg_cd12_player_state_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd22_check_player_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd28_cd28,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd2b_process_checks,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd4e_cd4e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd52_cd52,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd75_cd75,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd77_cd77,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd7a_cd7a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cda1_cda1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdae_check_hitbox_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd1_cdd1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd3_cdd3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd8_cdd8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cddd_cddd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdf2_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdf5_hurt_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdf8_cdf8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdfb_cdfb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce08_ce08,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce0b_cap_damages,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce0d_apply_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce28_ce28,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce35_apply_force_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce6a_ce6a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce86_ce86,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce99_ce99,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cead_passthrough_kb_h,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceb3_end_abs_kb_h,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceb7_ceb7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cecb_passthrough_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ced1_end_abs_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cef5_cef5,
	&emulator_compiled_segments_funcs::seg_cef6_move_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf06_vertical,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf17_cf17,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf1c_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf1e_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf2a_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf33_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf39_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf3e_cf3e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf40_horizontal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf51_cf51,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf56_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf58_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf64_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf6d_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf73_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf78_cf78,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf93_move_player_handle_one_platform_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa6_platform_specific_handlers_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfab_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfb6_cfb6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfb8_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfba_cfba,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfc5_cfc5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfc7_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfc9_cfc9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd4_cfd4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd6_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd8_cfd8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfe3_cfe3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfe5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfe7_cfe7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cffc_no_collision,
	&emulator_compiled_segments_funcs::seg_cffd_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d009_d009,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d00b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d00d_d00d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d019_d019,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d01b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d01d_d01d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d029_d029,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d02b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d02d_d02d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d039_d039,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d03b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d03d_d03d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d053_no_collision,
	&emulator_compiled_segments_funcs::seg_d054_move_player_handle_one_platform_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d067_platform_specific_handlers_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d06c_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d077_d077,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d079_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d07b_d07b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d086_d086,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d088_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d08a_d08a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d095_d095,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d097_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d099_d099,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a4_d0a4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a6_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a8_d0a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0bd_no_collision,
	&emulator_compiled_segments_funcs::seg_d0be_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ca_d0ca,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0cc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ce_d0ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0da_d0da,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0dc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0de_d0de,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ea_d0ea,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ec_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ee_d0ee,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0fa_d0fa,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0fc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0fe_d0fe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d115_move_player_handle_one_platform_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d128_platform_specific_handlers_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d12d_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d138_d138,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d13a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d13c_d13c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d147_d147,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d149_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d14b_d14b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d156_d156,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d158_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d15a_d15a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d165_d165,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d167_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d169_d169,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d176_no_collision,
	&emulator_compiled_segments_funcs::seg_d177_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d183_d183,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d185_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d187_d187,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d193_d193,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d195_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d197_d197,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1a3_d1a3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1a5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1a7_d1a7,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1c5_no_collision,
	&emulator_compiled_segments_funcs::seg_d1c6_move_player_handle_one_platform_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1d9_platform_specific_handlers_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1de_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e9_d1e9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1eb_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1ed_d1ed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1f8_d1f8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1fa_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1fc_d1fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d207_d207,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d209_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d20b_d20b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d216_d216,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d218_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d21a_d21a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d22b_no_collision,
	&emulator_compiled_segments_funcs::seg_d22c_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d238_d238,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d23a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d23c_d23c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d248_d248,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d24a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d24c_d24c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d258_d258,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d25a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d25c_d25c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d268_d268,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d26a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d26c_d26c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d27e_no_collision,
	&emulator_compiled_segments_funcs::seg_d27f_check_player_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d289_d289,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d28b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d28d_d28d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d297_d297,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d299_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d29b_d29b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2a5_d2a5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2a7_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2a9_d2a9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b3_d2b3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b7_d2b7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2bb_d2bb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2d2_d2d2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2d5_offground,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2e4_d2e4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2e7_set_death_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ea_d2ea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2f8_d2f8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2fa_d2fa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ff_pass_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d304_left_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d306_cap_vertical_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d308_end_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d30c_d30c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d30e_d30e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d313_pass_cap_horizontal_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d318_top_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d31a_cap_horizontal_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d31c_end_cap_horizontal_blast,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d31f_d31f,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d336_d336,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d339_gameover,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d33d_d33d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d340_d340,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d346_no_set_winner,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d35d_d35d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d361_end,
	&emulator_compiled_segments_funcs::seg_d362_write_player_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d368_d368,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d373_prepare_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d37b_end_player_variables,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d38b_d38b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b5_d3b5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ba_stocks_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d3df_empty_stock,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e1_set_stock_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ea_d3ea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3f2_stocks_positions,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3f6_character_icons,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3f8_player_effects,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3fb_d3fb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3fe_d3fe,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d401_d401,
	&emulator_compiled_segments_funcs::seg_d402_blinking,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d410_d410,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d41d_no_hitstun,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d421_d421,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d42e_player_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d433_d433,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d435_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d440_d440,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d443_update_sprites,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d445_update_one_player_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d47e_d47e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d481_d481,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d487_d487,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d495_d495,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d497_d497,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d49b_d49b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d49d_d49d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4a0_oos_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b5_oos_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ca_oss_top,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4df_oos_bot,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f1_oos_indicator_placed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d500_d500,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d503_d503,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d505_loop,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d508_d508,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d50b_all_player_sprites_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d50e_d50e,
	&emulator_compiled_segments_funcs::seg_d50f_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d511_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d513_oos_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d515_oos_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d517_game_mode_local_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d51a_game_mode_local_pre_update,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d51e_d51e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d522_d522,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d526_d526,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d52a_d52a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d52d_end_ai,
	&emulator_compiled_segments_funcs::seg_d52e_game_mode_online_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d531_game_mode_online_pre_update,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d534_init_gameover_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d556_d556,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d578_d578,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d588_d588,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d58d_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d592_d592,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5a1_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ac_d5ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5c7_d5c7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5e2_d5e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5f3_winner_name_writing,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d600_d600,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d62c_d62c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d645_d645,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d66f_d66f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d685_initialize_a_balloon,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6a0_d6a0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6a2_position_a_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6a5_d6a5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6ab_d6ab,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6b6_d6b6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6b9_d6b9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6c0_gameover_screen_tick,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6c2_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6d0_d6d0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6d4_d6d4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6d7_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6dc_d6dc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6df_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6e7_update_animations,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6ea_d6ea,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6ed_d6ed,
	&emulator_compiled_segments_funcs::seg_d6ee_next_screen_by_game_mode,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6f0_gamover_update_players,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d711_d711,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d714_d714,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d72b_d72b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d738_d738,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d73b_d73b,
	&emulator_compiled_segments_funcs::seg_d73c_update_balloons,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d740_update_one_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d743_d743,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d757_d757,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d75b_end_y,
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
	&emulator_compiled_segments_funcs::seg_d770_d770,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d775_positive,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d777_high_byte_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d794_d794,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d79f_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7a7_end_sprite_layer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7b1_d7b1,
	&emulator_compiled_segments_funcs::seg_d7b2_gameover_random_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7bf_init_mode_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7c2_d7c2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7d2_d7d2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7dd_d7dd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e0_d7e0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e5_mode_selection_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e8_d7e8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7eb_d7eb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7ed_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f1_d7f1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f5_d7f5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f9_d7f9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7fd_d7fd,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d801_d801,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d805_d805,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d809_d809,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d80d_d80d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d811_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d816_no_press,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d819_go_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d81f_d81f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d822_from_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d829_go_left,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d82d_d82d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d834_go_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d83c_d83c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d843_go_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d848_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d852_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d855_d855,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d859_show_selected_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d870_d870,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d874_nt_highlight_payload_local,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d889_nt_highlight_payload_online,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d89e_nt_highlight_payload_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8b6_nt_highlight_payload_addr_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8b9_init_netplay_launch_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8bc_d8bc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8c4_netplay_launch_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8cc_init_online_mode_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8dc_online_mode_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8e4_online_mode_screen_tick_music,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8e7_d8e7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8ed_init_stage_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8fd_stage_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d905_stage_selection_screen_long_memcopy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d90c_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d913_d913,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d919_stage_selection_tick_music,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d91c_d91c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d922_stage_selection_back_to_char_select,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d936_init_title_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d93e_d93e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d954_d954,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d96d_d96d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d981_emu_50hz_done,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d988_d988,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d993_d993,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d997_d997,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d99f_d99f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a2_d9a2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a5_d9a5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a8_soft_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9af_end_menu_init,
	&emulator_compiled_segments_funcs::seg_d9b0_set_title_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9d2_d9d2,
	&emulator_compiled_segments_funcs::seg_d9d3_init_title_animation,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9d6_d9d6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9e7_d9e7,
	&emulator_compiled_segments_funcs::seg_d9e8_palette_title_initial,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da08_title_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da10_da10,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da13_da13,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da16_da16,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da1e_da1e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da23_da23,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da26_update_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da2a_da2a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da31_cheat_succeed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da36_press_any_key,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da3a_da3a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da3e_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da42_da42,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da46_da46,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da49_next_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da4c_da4c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da51_end,
	&emulator_compiled_segments_funcs::seg_da52_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da66_tick_title_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da84_change_anim_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da8b_wait_logo,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da91_da91,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da94_end,
	&emulator_compiled_segments_funcs::seg_da95_show_logo,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da98_da98,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da9a_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daa6_daa6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daa9_daa9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab8_dab8,
	&emulator_compiled_segments_funcs::seg_dab9_logo_palette_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac1_shake,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac4_dac4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac8_dac8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dacb_end,
	&emulator_compiled_segments_funcs::seg_dacc_wait_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad2_dad2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad5_dad5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad8_end,
	&emulator_compiled_segments_funcs::seg_dad9_show_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae1_dae1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae4_dae4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db17_finish,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db1a_db1a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db22_db22,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db25_end,
	&emulator_compiled_segments_funcs::seg_db26_text_colors,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db29_title_screen_restore_music_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db2d_db2d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db30_db30,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db33_mute,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db36_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db40_state_transition_pretransition_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db60_state_transition_pre_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db73_db73,
	&emulator_compiled_segments_funcs::seg_db74_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db7e_state_transition_pre_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db91_db91,
	&emulator_compiled_segments_funcs::seg_db92_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db9c_state_transition_post_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbb1_dbb1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbba_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbc8_state_transition_post_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbdd_dbdd,
	&emulator_compiled_segments_funcs::seg_dbde_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbec_scroll_transition,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbf0_dbf0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc0a_set_up_values,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc23_end_set_values,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc27_dc27,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc2d_do_not_touch_offsets,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc31_save_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc38_dc38,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc48_hidden_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc4d_two_byte_position_stored,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc59_dc59,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc5b_scroll_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc61_dc61,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc65_dc65,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc67_set_camera_scroll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc74_dc74,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc78_dc78,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc80_dc80,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc88_simple_sleep,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc8b_end_sleep,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc97_clean,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc9a_end,
	&emulator_compiled_segments_funcs::seg_dc9b_move_sprites,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc9e_dc9e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca2_dca2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca6_dca6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcaa_dcaa,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcae_dcae,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcb2_dcb2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcb6_dcb6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcba_dcba,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcbe_dcbe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcc5_update_clouds,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcc8_vertical_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcde_dcde,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce1_dce1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce4_dce4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce8_update_screen_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcfc_move_one_screen_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd10_hide_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd12_update_oam,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd20_end,
	&emulator_compiled_segments_funcs::seg_dd21_init_wifi_settings_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd31_wifi_settings_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd39_init_menu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd5d_re_init_menu,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd5f_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd6a_dd6a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd6d_dd6d,
	&emulator_compiled_segments_funcs::seg_dd6e_cloud_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddaa_set_menu_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddcc_ddcc,
	&emulator_compiled_segments_funcs::seg_ddcd_tick_moving_clouds,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddd5_ddd5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddde_move_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde2_dde2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde7_dde7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddeb_end,
	&emulator_compiled_segments_funcs::seg_ddec_menu_position_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddee_position_one_cloud,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddf1_ddf1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddf4_ddf4,
	&emulator_compiled_segments_funcs::seg_ddf5_menu_position_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de01_de01,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de05_do_not_hide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de12_place_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de18_de18,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de1c_skip_y_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de31_de31,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de34_sprite_offset_x,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de36_de36,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de39_sprite_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de3e_stage_generic_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de48_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de4d_de4d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de68_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de72_de72,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de81_de81,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de91_copy_header_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de9c_copy_elements_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dea3_dea3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deab_copy_one_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb6_deb6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb9_copy_data_end,
	&emulator_compiled_segments_funcs::seg_deba_stage_iterate_all_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_debc_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec1_dec1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec4_dec4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec8_dec8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_decf_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded3_ded3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded5_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deda_deda,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dedd_dedd,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dee1_dee1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dee8_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deec_deec,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deee_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_def3_def3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_def6_def6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_defa_defa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df01_end_iterate_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df03_end,
	&emulator_compiled_segments_funcs::seg_df04_ai_action_double_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df0d_ai_action_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df17_ai_action_right_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df1c_ai_action_down_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df21_ai_action_special_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df29_ai_action_idle,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df2c_ai_level_to_delay,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df2f_ai_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df3e_ai_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df50_find_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df63_run_current_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df82_df82,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8a_df8a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8c_do_action,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8f_df8f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df95_df95,
	&emulator_compiled_segments_funcs::seg_df96_ai_continue_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df9f_df9f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfa3_next_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb0_dfb0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb5_set_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfbd_end,
	&emulator_compiled_segments_funcs::seg_dfbe_ai_attack_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dff2_dff2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dff7_right_facing,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dff9_end_direction_flag,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dffd_dffd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e002_grounded,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e004_end_ground_flag,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e00a_check_one_attack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e011_e011,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e018_condition_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e073_e073,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e075_e075,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e088_e088,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e08b_next_attack,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e08f_e08f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e092_end,
	&emulator_compiled_segments_funcs::seg_e093_ai_shield_selector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e097_e097,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09b_e09b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a1_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a9_bot_on_the_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0ae_distance_computed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b2_e0b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0c4_end,
	&emulator_compiled_segments_funcs::seg_e0c5_ai_space_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0cb_e0cb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0d1_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0d7_bot_on_the_left,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0da_spot_computed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0e6_e0e6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0ea_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0f8_end,
	&emulator_compiled_segments_funcs::seg_e0f9_ai_chase_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e103_e103,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e105_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e107_e107,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e10b_e10b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e112_e112,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e116_no_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e120_e120,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e124_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e12a_e12a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e12e_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e134_e134,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e13b_end_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e149_e149,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e154_negative_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e15c_end_set_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e174_e174,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e178_dont_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e183_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e18e_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e19a_action_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a1_ai_delay_action,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a5_e1a5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1b8_no_delay,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1bc_end,
	&emulator_compiled_segments_funcs::seg_e1bd_network_init_stage,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1c8_clear_one_input,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1d3_e1d3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e3_network_tick_ingame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e7_e1e7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1ea_do_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1fd_e1fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e23b_controller_sent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e240_e240,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e24f_e24f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e256_e256,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e25c_e25c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e25f_skip_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e269_state_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e278_e278,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e27b_e27b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e27f_e27f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e283_e283,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e287_e287,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e289_end,
	&emulator_compiled_segments_funcs::seg_e28a_update_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2a8_e2a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2ae_future,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2b3_past,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2b5_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2b7_rollback_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2c1_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2c7_e2c7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2cd_local_keep,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2d3_local_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2e4_e2e4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2e6_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2f0_e2f0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2f2_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2fc_e2fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e303_e303,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e30b_screen_shake_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e323_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e32e_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e335_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e388_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e39f_e39f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3a6_e3a6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3bb_e3bb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3bf_roll_forward_one_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3c5_e3c5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3c7_e3c7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3cd_e3cd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3cf_e3cf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d5_e3d5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d7_e3d7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3dd_e3dd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3e0_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3f7_e3f7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3fa_e3fa,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3fd_e3fd,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e401_e401,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e405_e405,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e409_e409,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e40b_end_inc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e40e_dont_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e423_set_opponent_buttons_from_history,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e428_e428,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e42f_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e435_mark_nexts_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e43d_known,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e443_place_character_ppu_tiles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e452_e452,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e45c_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e463_end_set_ppu_addr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e478_e478,
	&emulator_compiled_segments_funcs::seg_e479_sleep_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e47c_e47c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e47f_process_nt_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e484_handle_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e489_e489,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e49e_write_one_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4a9_e4a9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4ac_end_buffers,
	&emulator_compiled_segments_funcs::seg_e4ad_number_to_tile_indexes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4b1_find_one_digit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4b9_try_digit_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4bf_e4bf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4dc_e4dc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4e3_test_coeff_10,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4e7_e4e7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4ee_coefficent_changed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4f2_e4f2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4f4_destination_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4f7_next_digit_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e503_end,
	&emulator_compiled_segments_funcs::seg_e504_keep_input_dirty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e509_get_transition_id,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e513_change_global_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e51f_e51f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e52c_e52c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e535_e535,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e537_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e53f_e53f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e550_e550,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e553_e553,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e559_find_transition_index,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e55c_e55c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e560_check_one_entry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e565_e565,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e569_e569,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e56d_not_found,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e56f_found,
	&emulator_compiled_segments_funcs::seg_e570_pre_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e573_e573,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e577_e577,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e584_end,
	&emulator_compiled_segments_funcs::seg_e585_post_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e588_e588,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e58c_e58c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e599_e599,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e59c_no_transition,
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
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ab_end,
	&emulator_compiled_segments_funcs::seg_e5ac_animation_init_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5e3_animation_state_change_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5fe_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e653_end,
	&emulator_compiled_segments_funcs::seg_e654_animation_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e66e_e66e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e671_inc_current_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e676_skip_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e67a_e67a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e67f_e67f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e682_end_skip_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e687_e687,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e68b_e68b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e696_store_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6a7_end,
	&emulator_compiled_segments_funcs::seg_e6a8_add_to_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6b4_draw_anim_frame,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6b6_handle_one_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6ba_e6ba,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6be_e6be,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6c2_e6c2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6c6_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6db_e6db,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6de_clear_unused_sprites,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6e2_e6e2,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6f3_clear_one_unused_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6fd_end,
	&emulator_compiled_segments_funcs::seg_e6fe_call_pointed_subroutine13,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e701_anim_frame_move_sprite,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e705_e705,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e70f_e70f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e714_use_last_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e716_set_sprite_used,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e71b_default_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e721_end_init_direction_data,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e725_e725,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72a_use_first_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72c_sprite_index_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e734_e734,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e739_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e73b_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e74a_e74a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e74f_e74f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e754_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e75a_e75a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e75d_end_anim_hook,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e771_e771,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e776_flip_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e77d_got_relative_pos,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e780_e780,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e785_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e787_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e796_e796,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e79c_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a1_e7a1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a6_inc_sprite_index,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a8_end_next_sprite,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ab_skip,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b4_end,
	&emulator_compiled_segments_funcs::seg_e7b5_boxes_overlap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7bf_e7bf,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c1_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c3_e7c3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7cd_e7cd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7cf_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7d1_e7d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7db_e7db,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7dd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7df_e7df,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e7eb_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ed_e7ed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7f2_no_overlap,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7f4_end,
	&emulator_compiled_segments_funcs::seg_e7f5_audio_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7f8_e7f8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7fe_audio_play_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e807_e807,
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
	&emulator_compiled_segments_funcs::seg_e824_e824,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e838_e838,
	&emulator_compiled_segments_funcs::seg_e839_init_channel,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e849_e849,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e859_e859,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e85f_pulse_2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e862_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e86e_end_pulse_specifics,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e88b_audio_mute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8a6_audio_unmute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8ae_square_reinit_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8c7_e8c7,
	&emulator_compiled_segments_funcs::seg_e8c8_audio_music_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8d1_e8d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8d6_e8d6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8db_e8db,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8e0_e8e0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8e3_end,
	&emulator_compiled_segments_funcs::seg_e8e4_noise_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8e8_e8e8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8eb_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8f8_e8f8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e907_overflow,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e90c_e90c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e914_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e919_store_result,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e91c_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e921_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e943_e943,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e957_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e95f_e95f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e967_regular_write,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e978_end_write_apu,
	&emulator_compiled_segments_funcs::seg_e979_pulse_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e97e_e97e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e985_do_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e997_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e99d_negative,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9a0_end_byte_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9a8_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b0_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9d3_e9d3,
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
	&emulator_compiled_segments_funcs::seg_e9e8_skip_opcode_update,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ed_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9fa_e9fa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea17_triangle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea1c_ea1c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea21_ea21,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea26_unmute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea34_write_linear_cnt,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea37_end_write_apu,
	&emulator_compiled_segments_funcs::seg_ea38_opcode_noise_sample_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea3a_opcode_sample_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea5f_ea5f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea6f_no_track_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea7a_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea7d_opcode_chan_params,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea9a_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaac_opcode_chan_volume_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eab4_opcode_chan_volume_high,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eabe_opcode_noise_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac6_opcode_set_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eadc_opcode_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaf4_note_table_lookup,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb02_opcode_play_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb12_left_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb14_one_left_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb17_eb17,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb1b_right_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb1d_one_right_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb20_eb20,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb24_end_wait_compute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb2f_eb2f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb43_opcode_play_timed_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb4b_eb4b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb69_opcode_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb76_opcode_noise_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb81_opcode_noise_long_wait,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb83_opcode_long_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb8c_opcode_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eba1_opcode_noise_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebb6_opcode_pitch_slide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebbc_ebbc,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebbe_set_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebca_opcode_pulse_meta_uslide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd1_opcode_pulse_meta_dslide,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd5_opcode_pulse_meta_common,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebdf_ebdf,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebe3_ebe3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebe9_ebe9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebf5_end_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec01_ec01,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec08_ec08,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec0d_keep_volume,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec0f_set_volume_mask,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec17_ec17,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec1d_replace_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec27_end_volume_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec2d_ec2d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec38_end_pitch_slide,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3b_opcode_noise_set_periodic,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3f_ec3f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec47_unset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec4c_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec52_opcode_noise_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec69_opcode_noise_pitch_slide_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec76_opcode_noise_pitch_slide_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec8e_pulse1_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec9e_noise_opcode_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca7_noise_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecb0_particle_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecb6_process_one_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecbb_ecbb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecbe_ecbe,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc1_skip_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc6_next_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd1_ecd1,
	&emulator_compiled_segments_funcs::seg_ecd2_process_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ece2_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecec_ecec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecf3_ecf3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecf8_ecf8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed11_hide_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed16_particle_drawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed1d_end,
	&emulator_compiled_segments_funcs::seg_ed1e_particle_handlers_reinit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed29_ed29,
	&emulator_compiled_segments_funcs::seg_ed2a_loop_on_particle_boxes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed2c_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed31_ed31,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed3a_ed3a,
	&emulator_compiled_segments_funcs::seg_ed3b_loop_on_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed3f_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed45_ed45,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed4e_ed4e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed51_end,
	&emulator_compiled_segments_funcs::seg_ed52_deactivate_particle_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed5a_ed5a,
	&emulator_compiled_segments_funcs::seg_ed5b_hide_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed5f_ed5f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed64_second_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed66_set_sprite_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed73_ed73,
	&emulator_compiled_segments_funcs::seg_ed74_hide_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed82_credits_begin,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed85_ed85,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed99_ed99,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edbd_edbd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee0c_ee0c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee9f_ee9f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef48_credits_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_f007_f007,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f00a_f00a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f011_flash_safe_sectors,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f014_f014,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f017_flash_all_sectors,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f01a_f01a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f01d_flash_static_sector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f020_flash_safe_sectors_and_return,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f031_flash_one_sector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f03d_first_sector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f041_second_sector,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f043_write_val,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f06c_write_one_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f073_wait_answer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f078_f078,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f08a_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0a3_f0a3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0ab_f0ab,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0ad_ok,
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
	&emulator_compiled_segments_funcs::seg_f0bc_end,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c0_mapper_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0fe_f0fe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f104_f104,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f107_no_rescue,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f10a_esp_send_cmd_short,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f10e_esp_send_cmd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f117_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f120_f120,
	&emulator_compiled_segments_funcs::seg_f121_esp_get_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f128_f128,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f12f_store_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f13a_copy_one_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f13d_f13d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f146_end,
	&emulator_compiled_segments_funcs::seg_f147_fetch_controllers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f153_fetch_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f15d_next_btn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f169_f169,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f16e_f16e,
	&emulator_compiled_segments_funcs::seg_f16f_wait_next_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f172_f172,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f177_f177,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f17c_f17c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f184_end,
	&emulator_compiled_segments_funcs::seg_f185_wait_next_real_frame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f189_waiting,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f18d_f18d,
	&emulator_compiled_segments_funcs::seg_f18e_signed_cmp,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f198_f198,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f19a_end,
	&emulator_compiled_segments_funcs::seg_f19b_absolute_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f19f_f19f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a4_end,
	&emulator_compiled_segments_funcs::seg_f1a5_multiply,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b0_additions_loop,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b4_f1b4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1c5_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1c8_last_nt_buffer,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ca_handle_buff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1cf_f1cf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1dc_end,
	&emulator_compiled_segments_funcs::seg_f1dd_reset_nt_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1e3_dummy_routine,
	&emulator_compiled_segments_funcs::seg_f1e4_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1f1_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1fa_f1fa,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1fd_f1fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f203_draw_zipped_nametable,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f212_load_background,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f216_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21c_f21c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21f_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f222_f222,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f226_f226,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f229_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22f_f22f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f232_f232,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f235_end,
	&emulator_compiled_segments_funcs::seg_f236_next_byte,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f23a_f23a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f23c_end_inc_vector,
	&emulator_compiled_segments_funcs::seg_f23d_call_pointed_subroutine,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f240_copy_palette_to_ppu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f254_copy_one_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f25d_f25d,
	&emulator_compiled_segments_funcs::seg_f25e_shake_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f27a_f27a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f27f_set_screen_two,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f286_set_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f28c_f28c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f296_end,
	&emulator_compiled_segments_funcs::seg_f297_get_unzipped_bytes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f29f_skip_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2a3_carry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2a7_f2a7,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2a9_no_carry,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2ab_loop_without_dec,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2af_f2af,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2b3_normal_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2b6_f2b6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2b8_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2bb_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2be_f2be,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2c0_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2c6_f2c6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2c8_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2cc_skip_all,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2dd_done,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e0_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e4_get_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e8_f2e8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2ec_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2f9_f2f9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2fb_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f300_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f303_f303,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f305_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f30b_f30b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f30d_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f310_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f321_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f323_force_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f325_end,
	&emulator_compiled_segments_funcs::seg_f326_construct_palettes_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f329_f329,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33f_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f34a_f34a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f350_push_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f35e_construct_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f361_f361,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f369_copy_header_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f374_f374,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f378_copy_payload_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f383_f383,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f389_clear_bg_bot_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f39c_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a5_f3a5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a7_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ad_f3ad,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3b3_f3b3,
	&emulator_compiled_segments_funcs::seg_f3b4_switch_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3b8_trampoline,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c0_f3c0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c3_f3c3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c7_exec,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ca_cpu_to_ppu_copy_tileset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3d4_f3d4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3d6_copy_one_tile,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3d8_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e2_f3e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3f3_f3f3,
	&emulator_compiled_segments_funcs::seg_f3f4_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3f8_f3f8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3fc_select_player_b,
	&emulator_compiled_segments_funcs::seg_f3fd_end,
	&emulator_compiled_segments_funcs::seg_f3fe_merge_to_player_velocity,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f400_add_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f40f_f40f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f420_check_diff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f424_f424,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f42a_f42a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f437_add_step_size,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f44c_f44c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f44e_f44e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f45e_decrement,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f46b_next_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f472_f472,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f477_apply_player_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f48e_f48e,
	&emulator_compiled_segments_funcs::seg_f48f_check_in_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f496_f496,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f49a_f49a,
	&emulator_compiled_segments_funcs::seg_f49b_simple_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f49f_f49f,
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
	&emulator_compiled_segments_funcs::seg_f4aa_end_left_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4b1_end_right_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4b8_end_top_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4bf_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c1_not_in_platform,
	&emulator_compiled_segments_funcs::seg_f4c2_oos_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ce_f4ce,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d0_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d2_f4d2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d9_f4d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e0_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ec_f4ec,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ee_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f0_f4f0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f7_f4f7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4fe_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f50a_f50a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f50c_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f50e_f50e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f515_f515,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51c_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f528_f528,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f52a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f52c_f52c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f533_f533,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f53a_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f53c_not_in_platform,
	&emulator_compiled_segments_funcs::seg_f53d_controller_callbacks,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f541_check_controller_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f545_f545,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f55c_next_controller_state,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f573_server_bytecode_error,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f578_server_bytecode_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f57b_f57b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f598_f598,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f59d_server_bytecode_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5a0_f5a0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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

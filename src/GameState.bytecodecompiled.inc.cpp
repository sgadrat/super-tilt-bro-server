namespace emulator_compiled_segments_funcs {
void seg_c000_animation_frame_entry_handlers_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
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
void seg_c004_animation_frame_entry_handlers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
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
void seg_c008_anim_frame_move_hurtbox(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c022_c022(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c037_apply_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c03c_c03c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c041_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c043_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c056_c056(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c05b_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c05d_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c070_c070(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c075_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c077_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c08a_c08a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c08f_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c091_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c09f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c0a0_anim_frame_move_hitbox(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c0ae_c0ae(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c0b9_ignore_enabled(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c0bb_end_enabled(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c101_c101(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c138_apply_offset(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c13d_c13d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c142_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c144_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c157_c157(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c15c_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c15e_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c171_c171(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c176_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c178_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c18b_c18b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c190_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c192_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c1a1_stb_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c1a8_c1a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c1ac_c1ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c1b0_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c1b1_cursed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTI_IMP();
	if (emu.stopped) { return; }
}
void seg_c1b2_nmi(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c1bc_c1bc(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c1c9_c1c9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c1df_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c1e6_reset(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c1fc_vblankwait1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c201_clrmem(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c21f_c21f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c223_vblankwait2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c226_c226(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c227_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c22c_c22c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c230_c230(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c235_pal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c238_c238(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c23b_c23b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c240_forever(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c243_c243(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c246_c246(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c249_c249(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c25a_c25a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c25d_fetch_controllers(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c269_fetch_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c273_next_btn(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c27f_c27f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c284_c284(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c285_wait_next_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c288_c288(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c28d_c28d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c292_c292(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c29a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c29b_wait_next_real_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c29f_waiting(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c2a3_c2a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2a4_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2ae_c2ae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2b0_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2b1_absolute_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_c2b5_c2b5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2ba_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2bb_multiply(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2c6_additions_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c2ca_c2ca(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2db_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2de_last_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c2e0_handle_buff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c2e5_c2e5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c2f2_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2f3_reset_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c2f9_process_nt_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c2fe_handle_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c303_c303(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c318_write_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c323_c323(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c326_end_buffers(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c327_number_to_tile_indexes(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c32b_find_one_digit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c333_try_digit_value(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c339_c339(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c356_c356(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c35d_test_coeff_10(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c361_c361(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c368_coefficent_changed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c36c_c36c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c36e_destination_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c371_next_digit_value(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c37d_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c37e_keep_input_dirty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c383_dummy_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c384_get_transition_id(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c38e_change_global_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c39a_c39a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3a7_c3a7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3b0_c3b0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3b2_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c3ba_c3ba(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3cb_c3cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3ce_c3ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c3d4_find_transition_index(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3d7_c3d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c3db_check_one_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c3e0_c3e0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c3e4_c3e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c3e8_not_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3ea_found(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c3eb_pre_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c3ee_c3ee(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c3f2_c3f2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c3ff_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c400_post_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c403_c403(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c407_c407(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c414_c414(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c417_no_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c421_c421(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c426_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c427_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c434_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c43d_c43d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c440_c440(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c446_draw_zipped_nametable(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c455_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c459_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c45f_c45f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c462_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c465_c465(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c469_c469(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c46c_write_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c472_c472(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c475_c475(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c478_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c479_next_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c47d_c47d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c47f_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c480_call_pointed_subroutine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_c483_copy_palette_to_ppu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c497_copy_one_color(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4a0_c4a0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4a1_shake_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4bd_c4bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c4c2_set_screen_two(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4c9_set_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c4cf_c4cf(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4d9_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c4da_get_unzipped_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c4e2_skip_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c4e6_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c4ea_c4ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c4ec_no_carry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c4ee_loop_without_dec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c4f2_c4f2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c4f6_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c4f9_c4f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c4fb_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c4fe_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c501_c501(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c503_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c509_c509(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c50b_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c50f_skip_all(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c520_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c523_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c527_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c52b_c52b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c52f_normal_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c53c_c53c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c53e_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c543_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c546_c546(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c548_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c54e_c54e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c550_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c553_compressed_zero(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c564_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c566_force_loop_get_bytes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c568_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c569_animation_init_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5a0_animation_state_change_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5bb_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c610_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c611_animation_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c62b_c62b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c62e_inc_current_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c633_skip_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c637_c637(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c63c_c63c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c63f_end_skip_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c644_c644(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c648_c648(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c653_store_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c664_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c665_add_to_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c671_draw_anim_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c673_handle_one_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c677_c677(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c67b_c67b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c67f_c67f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c683_continue(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c698_c698(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c69b_clear_unused_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c69f_c69f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6a8_c6a8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6b0_clear_one_unused_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6ba_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c6bb_call_pointed_subroutine13(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_c6be_anim_frame_move_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c6c2_c6c2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6cc_c6cc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6d1_use_last_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6d3_set_sprite_used(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6d8_default_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6de_end_init_direction_data(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c6e2_c6e2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6e7_use_first_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6e9_sprite_index_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6f1_c6f1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6f6_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6f8_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c707_c707(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c70c_c70c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c711_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c717_c717(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c71a_end_anim_hook(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c72e_c72e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c733_flip_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c73a_got_relative_pos(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c73d_c73d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c742_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c744_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c753_c753(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c759_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c75e_c75e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c763_inc_sprite_index(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c765_end_next_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c768_skip(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c771_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c772_boxes_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c77c_c77c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c77e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c780_c780(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c78a_c78a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c78c_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c78e_c78e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c798_c798(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c79a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c79c_c79c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7a6_c7a6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c7a8_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c7aa_c7aa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c7af_no_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c7b1_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c7b2_audio_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7b5_c7b5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c7bb_audio_play_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7c4_c7c4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c7c9_c7c9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7e1_c7e1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7f5_c7f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c7f6_init_channel(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c806_c806(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c816_c816(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c81c_pulse_2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c81f_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c82b_end_pulse_specifics(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c848_audio_mute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c863_audio_unmute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c86b_square_reinit_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c884_c884(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c885_audio_music_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c88e_c88e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c893_c893(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c898_c898(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c89d_c89d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c8a0_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c8a1_noise_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c8a5_c8a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8a8_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8b5_c8b5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8c4_overflow(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c8c9_c8c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8d1_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8d6_store_result(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8d9_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8de_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c900_c900(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c914_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c91c_c91c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c924_regular_write(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c935_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c936_pulse_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c93b_c93b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c942_do_effects(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c954_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c95a_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c95d_end_byte_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c965_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c96d_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c990_c990(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c996_c996(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9a5_skip_opcode_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c9aa_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9b7_c9b7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9cb_c9cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c9d4_triangle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9d9_c9d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c9de_c9de(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c9e3_unmute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9f1_write_linear_cnt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c9f4_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c9f5_opcode_noise_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9f7_opcode_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca1c_ca1c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca2c_no_track_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca37_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ca3a_opcode_chan_params(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca57_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca69_opcode_chan_volume_low(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca71_opcode_chan_volume_high(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca7b_opcode_noise_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca83_opcode_set_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca99_opcode_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cab1_note_table_lookup(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cabf_opcode_play_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cacf_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cad1_one_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cad4_cad4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cad8_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cada_one_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cadd_cadd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cae1_end_wait_compute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_caec_caec(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb00_opcode_play_timed_note(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb08_cb08(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb26_opcode_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb33_opcode_noise_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb3e_opcode_noise_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb40_opcode_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb49_opcode_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb5e_opcode_noise_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb73_opcode_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb79_cb79(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb7b_set_value(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb87_opcode_pulse_meta_uslide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cb8e_opcode_pulse_meta_dslide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb92_opcode_pulse_meta_common(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb9c_cb9c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cba0_cba0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cba6_cba6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbb2_end_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbbe_cbbe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cbc5_cbc5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cbca_keep_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbcc_set_volume_mask(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cbd4_cbd4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbda_replace_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbe4_end_volume_duty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cbea_cbea(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbf5_end_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cbf8_opcode_noise_set_periodic(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cbfc_cbfc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cc04_unset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc09_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc0f_opcode_noise_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc26_opcode_noise_pitch_slide_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc33_opcode_noise_pitch_slide_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc4b_pulse1_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
}
void seg_cc5b_noise_opcode_routines_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SED_IMP();
	if (emu.stopped) { return; }
}
void seg_cc64_noise_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
}
void seg_cc6d_particle_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc73_process_one_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc78_cc78(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc7b_cc7b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cc7e_skip_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc83_next_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc8e_cc8e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc8f_process_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc9f_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cca9_cca9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ccb0_ccb0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ccb5_ccb5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccce_hide_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccd3_particle_drawn(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccda_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ccdb_particle_handlers_reinit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cce6_cce6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cce7_loop_on_particle_boxes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cce9_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccee_ccee(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccf7_ccf7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ccf8_loop_on_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccfc_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd02_cd02(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd0b_cd0b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd0e_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd0f_deactivate_particle_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd17_cd17(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd18_hide_particles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd1c_cd1c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd21_second_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd23_set_sprite_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd30_cd30(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd31_hide_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd3f_construct_palettes_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd42_cd42(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd58_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd63_cd63(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd69_push_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd77_construct_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cd7a_cd7a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd82_copy_header_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd8d_cd8d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd91_copy_payload_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd9c_cd9c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cda2_clear_bg_bot_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdb5_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cdbe_cdbe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cdc0_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cdc6_cdc6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cdcc_cdcc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cdcd_switch_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cdd1_copy_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdd3_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cddd_cddd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdee_cdee(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cdef_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cdf3_cdf3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cdf7_select_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cdf8_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cdf9_merge_to_player_velocity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdfb_add_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce0a_ce0a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce1b_check_diff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ce1f_ce1f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ce25_ce25(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce32_add_step_size(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce47_ce47(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ce49_ce49(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce59_decrement(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce66_next_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce6d_ce6d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce72_apply_player_gravity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce89_ce89(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce8a_check_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce91_ce91(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce95_ce95(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce96_simple_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ce9a_ce9a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ce9e_ce9e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_cea5_end_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ceac_end_right_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ceb3_end_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ceba_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cebc_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cebd_oos_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cec9_cec9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cecb_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cecd_cecd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ced4_ced4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cedb_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cee7_cee7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cee9_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ceeb_ceeb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cef2_cef2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cef9_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf05_cf05(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cf07_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cf09_cf09(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf10_cf10(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cf17_not_eq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf23_cf23(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cf25_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_cf27_cf27(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf2e_cf2e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cf35_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf37_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf38_place_character_ppu_tiles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf47_cf47(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf51_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf58_end_set_ppu_addr(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf6d_cf6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf6e_controller_callbacks(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf72_check_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf76_cf76(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf8d_next_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf92_cf92(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfa4_sleep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cfa7_cfa7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfaa_particle_directional_indicator_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfe3_cfe3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cfe4_set_particle_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d00a_particle_directional_indicator_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d00e_d00e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d00f_do_something(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d01c_d01c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d01f_d01f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d022_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d027_d027(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d029_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d02a_move_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d035_d035(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d036_move_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d05c_d05c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d061_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d063_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d073_d073(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d078_separate(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d07d_set_y_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d092_d092(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d097_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d099_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0b3_particle_death_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0f5_d0f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d0f6_place_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d104_d104(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d106_no_reposition_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d117_d117(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d119_no_reposition_y(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d141_particles_start_position_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d148_particles_start_position_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d14f_particle_death_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d155_d155(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d163_d163(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d16a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d16c_do_nothing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d16d_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d172_d172(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d177_audio_music_power(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d188_audio_music_weak(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d193_audio_music_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d19e_audio_play_crash(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1ae_audio_play_death(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1be_audio_play_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1ce_audio_play_parry(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1de_audio_play_shield_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1ee_audio_play_shield_break(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1fe_audio_play_title_screen_text(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d20e_global_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d213_d213(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d226_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d22e_d22e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d236_d236(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d258_d258(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d25d_d25d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d260_d260(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d265_game_states_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d299_init_character_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2a9_character_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d2b1_character_selection_screen_copy_property(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2c7_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2d2_d2d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d2d8_character_selection_screen_copy_portrait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2fc_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d304_d304(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d30a_character_selection_copy_to_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d310_d310(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d316_stay_on_menu_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d319_d319(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d333_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d33e_d33e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d349_character_selection_tick_char_anims(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d35f_d35f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d375_d375(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d37b_tick_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d38a_d38a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d38d_character_selection_get_char_property(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3b0_character_selection_construct_char_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3bb_d3bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d3c1_character_selection_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3ce_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3d7_d3d7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3da_d3da(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d3e0_character_selection_reset_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3e8_d3e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d3ee_default_config(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d418_init_config_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d41b_d41b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d42b_d42b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d43b_d43b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d44b_config_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d453_init_credits_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d456_d456(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d466_d466(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d479_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d482_d482(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d484_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d48a_d48a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d490_d490(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4a2_d4a2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4a7_d4a7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4ac_d4ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4b1_d4b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4b6_d4b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4bb_d4bb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4d6_write_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4e5_d4e5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4ff_write_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d505_d505(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d507_end_inc_cursor(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d50b_d50b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d50f_d50f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d513_d513(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d517_d517(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d520_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d528_filled_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d530_new_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d535_end_write_credits(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d538_d538(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d539_fill_attributes_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d53b_write_attribute_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d543_d543(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d544_credits_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d54c_d54c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d550_d550(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d554_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d558_d558(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d55c_d55c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d55f_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d564_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d565_init_donation_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d575_d575(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d580_d580(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d583_d583(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d588_donation_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d58b_d58b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d593_d593(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d595_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d599_d599(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d59d_d59d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d5a1_d5a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d5a5_d5a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d5a9_d5a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d5ad_d5ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d5b1_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d5b6_d5b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d5b9_go_back(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5be_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d5c6_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d5ca_d5ca(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5ce_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5e5_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d5e6_option_to_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_d5eb_nt_payload_btc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d5f1_nt_payload_paypal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d5f9_nt_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZEX();
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
void seg_d5fb_init_donation_btc_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d606_init_donation_paypal_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d60e_init_donation_qr_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d616_d616(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d621_d621(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d624_d624(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d625_donation_qr_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d62d_d62d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d631_d631(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d635_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d639_d639(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d63d_d63d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d640_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d645_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d648_game_modes_init_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d64a_game_modes_pre_update_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d64c_game_modes_pre_update_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d64e_init_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d651_d651(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d656_d656(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d65b_d65b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d660_d660(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d665_d665(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d669_zero_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d670_d670(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d68c_d68c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d68e_update_addr_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d69e_d69e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6b6_d6b6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6ca_position_player_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6e9_d6e9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d700_d700(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d715_d715(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d732_d732(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d745_d745(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d759_initialize_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d772_d772(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d777_d777(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d784_d784(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d789_d789(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d78c_d78c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d791_d791(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d79c_d79c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7a1_d7a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7a4_d7a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7a9_d7a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7ae_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7b3_d7b3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7ce_d7ce(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7e9_d7e9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7ec_d7ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7ef_d7ef(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7fe_d7fe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d7ff_place_player_a_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d801_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d80d_d80d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d80e_place_player_b_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d810_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d81c_d81c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d81d_place_character_normal_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d830_place_character_alternate_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d843_place_character_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d867_place_character_ppu_illustrations(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d89a_d89a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d89b_illustrations_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d89d_illustrations_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d89f_header_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_d8a3_header_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_d8a7_game_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8aa_d8aa(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8b9_d8b9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d8bd_d8bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8c0_d8c0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8d5_d8d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d8d9_d8d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8de_d8de(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8e3_d8e3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8e6_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d8e7_no_screen_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d8eb_d8eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8ee_d8ee(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d8f2_no_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d90a_d90a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d90d_d90d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d910_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d911_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d915_d915(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d91b_d91b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d922_keep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d929_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d932_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d933_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d935_hitstun_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d939_d939(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d93b_hitstun_next_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d940_d940(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d942_hitbox_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d945_d945(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d94a_d94a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d94c_update_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d961_d961(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d967_d967(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d976_end_input_event(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d97c_d97c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d97f_d97f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d983_d983(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d986_d986(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d989_end_visuals(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d98e_d98e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d98f_player_state_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d99f_check_player_hit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d9a5_d9a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d9a8_process_checks(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9cb_d9cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d9cf_d9cf(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9f2_d9f2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d9f4_d9f4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d9f7_d9f7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da1e_da1e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da2b_check_hitbox_hurtbox(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da4e_da4e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_da50_da50(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da55_da55(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da5a_da5a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da6f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da72_hurt_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da75_da75(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_da78_da78(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da85_da85(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_da88_cap_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da8a_apply_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_daa5_daa5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dab2_apply_force_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dae7_dae7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db03_db03(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db16_db16(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db2a_passthrough_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db30_end_abs_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_db34_db34(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db48_passthrough_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db4e_end_abs_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db70_db70(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db71_move_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db81_vertical(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db92_db92(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_db97_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db99_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dba5_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dbae_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbb4_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dbb9_dbb9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbbb_horizontal(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbcc_dbcc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dbd1_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbd3_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbdf_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dbe8_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbee_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dbf3_dbf3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbf5_horizontal_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc0e_move_player_handle_one_platform_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc26_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc31_dc31(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc33_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc35_dc35(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc40_dc40(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc42_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc44_dc44(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc4f_dc4f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc51_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc53_dc53(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc5e_dc5e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc60_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc62_dc62(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc77_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc78_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc84_dc84(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc86_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc88_dc88(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc94_dc94(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc96_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc98_dc98(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dca4_dca4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dca6_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dca8_dca8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcb4_dcb4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dcb6_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dcb8_dcb8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcce_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dccf_move_player_handle_one_platform_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dce7_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcf2_dcf2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dcf4_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dcf6_dcf6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd01_dd01(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd03_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd05_dd05(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd10_dd10(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd12_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd14_dd14(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd1f_dd1f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd21_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd23_dd23(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd38_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd39_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd45_dd45(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd47_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd49_dd49(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd55_dd55(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd57_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd59_dd59(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd65_dd65(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd67_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd69_dd69(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd75_dd75(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd77_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd79_dd79(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd8f_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd90_move_player_handle_one_platform_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dda8_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddb3_ddb3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddb5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddb7_ddb7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddc2_ddc2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddc4_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddc6_ddc6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddd1_ddd1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddd3_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddd5_ddd5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dde0_dde0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dde2_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dde4_dde4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddf1_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ddf2_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddfe_ddfe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de00_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de02_de02(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de0e_de0e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de10_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de12_de12(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de1e_de1e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de20_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de22_de22(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de2e_de2e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de30_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de32_de32(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de40_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_de41_move_player_handle_one_platform_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de59_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de64_de64(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de66_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de68_de68(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de73_de73(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de75_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_de77_de77(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de82_de82(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de84_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de86_de86(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de91_de91(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de93_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de95_de95(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dea6_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dea7_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_deb3_deb3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_deb5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_deb7_deb7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dec3_dec3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dec5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dec7_dec7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ded3_ded3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ded5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ded7_ded7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dee3_dee3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dee5_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dee7_dee7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_def9_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_defa_check_player_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df04_df04(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df06_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df08_df08(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df12_df12(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df14_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df16_df16(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df20_df20(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df22_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df24_df24(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df2e_df2e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df30_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df32_df32(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df36_df36(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df4d_df4d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df50_offground(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df5f_df5f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df62_set_death_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df65_df65(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df73_df73(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df75_df75(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df7a_pass_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df7f_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df81_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df83_end_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df87_df87(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_df89_df89(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df8e_pass_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df93_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df95_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df97_end_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df9a_df9a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_df9e_df9e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfb1_dfb1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dfb4_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfb8_dfb8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dfbb_dfbb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dfc1_no_set_winner(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfd8_dfd8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dfdc_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dfdd_write_player_damages(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dfe3_dfe3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfee_prepare_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dff6_end_player_variables(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e006_e006(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e030_e030(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e035_stocks_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e055_e055(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e05a_empty_stock(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e05c_set_stock_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e065_e065(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e06d_stocks_positions(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e071_character_icons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e073_player_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e076_e076(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e079_e079(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e07c_e07c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e07d_blinking(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e08b_e08b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e098_no_hitstun(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e09c_e09c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0a9_player_one(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e0ae_e0ae(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0b0_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0bb_e0bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0be_update_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0c0_update_one_player_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0f9_e0f9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e0fc_e0fc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e102_e102(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e110_e110(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e112_e112(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e116_e116(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e118_e118(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e11b_oos_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e130_oos_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e145_oss_top(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e15a_oos_bot(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e16c_oos_indicator_placed(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e17b_e17b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e17e_e17e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e180_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e183_e183(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e186_all_player_sprites_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e189_e189(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e18a_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_e18c_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_e18e_oos_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_e190_oos_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e192_game_mode_local_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e195_game_mode_local_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e199_e199(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e19d_e19d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e1a1_e1a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e1a5_e1a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e1a8_end_ai(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e1a9_game_mode_online_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e1ac_game_mode_online_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e1af_init_gameover_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1d1_e1d1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1f3_e1f3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e203_e203(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e208_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e20d_e20d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e21c_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e227_e227(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e242_e242(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e25d_e25d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e26e_winner_name_writing(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e27b_e27b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2a7_e2a7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2c0_e2c0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2ea_e2ea(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e300_initialize_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e31b_e31b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e31d_position_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e320_e320(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e326_e326(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e331_e331(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e334_e334(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e33b_gameover_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e33d_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e34b_e34b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e34f_e34f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e352_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e357_e357(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e35a_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e362_update_animations(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e365_e365(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e368_e368(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e369_next_screen_by_game_mode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e36b_gamover_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e38c_e38c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e38f_e38f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e3a6_e3a6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e3b3_e3b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3b6_e3b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e3b7_update_balloons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3bb_update_one_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3be_e3be(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e3d2_e3d2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3d6_end_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3d9_e3d9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e3eb_e3eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3f0_positive(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e3f2_high_byte_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e40f_e40f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e41a_background(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e422_end_sprite_layer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e42c_e42c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e42d_gameover_random_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e43a_init_mode_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e43d_e43d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e44d_e44d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e458_e458(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e45b_e45b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e460_mode_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e463_e463(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e466_e466(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e468_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e46c_e46c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e470_e470(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e474_e474(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e478_e478(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e47c_e47c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e480_e480(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e484_e484(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e488_e488(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e48c_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e491_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e494_go_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e49a_e49a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e49d_from_donation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4a4_go_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e4a8_e4a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4af_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e4b7_e4b7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e4be_go_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4c3_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4cd_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4d0_e4d0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4d4_show_selected_option(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e4eb_e4eb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4ef_nt_highlight_payload_local(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e504_nt_highlight_payload_online(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e519_nt_highlight_payload_donation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e531_nt_highlight_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
}
void seg_e534_init_netplay_launch_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e537_e537(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e54c_e54c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e557_e557(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e55a_e55a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e55e_wait_esp(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e569_e569(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e574_e574(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e578_e578(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e583_e583(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e584_esp_status_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_e589_netplay_launch_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e58c_e58c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e58f_e58f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e59e_e59e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e5a9_e5a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_e5bb_error_state_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5bf_connecting_wifi_query(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e5c6_e5c6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5d1_e5d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e5ea_cmd_get_wifi_status(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
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
void seg_e5ec_connecting_wifi_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5f7_e5f7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e5fb_e5fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e602_e602(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e60f_connected(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e614_failed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e61b_crazy(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e622_in_progress(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e624_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e62e_wifi_status_action_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e635_select_server_query_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e63c_e63c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e647_e647(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e64c_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e660_cmd_get_server_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e662_select_server_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e669_e669(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e67c_e67c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e68f_e68f(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e6b1_e6b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6b5_e6b5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e6bc_e6bc(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6cf_e6cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e6d7_end_custom_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e6d9_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e6dc_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SED_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
}
void seg_e6fd_server2_name(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_e703_server3_name(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
}
void seg_e709_server1_buffer_header(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e70c_server2_buffer_header(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e712_select_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e716_e716(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e71c_e71c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e720_e720(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e724_e724(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e728_e728(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e72c_e72c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e72f_next_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e737_e737(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e73e_previous_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e742_e742(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e747_end_inputs(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e752_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e755_next_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e760_standard_server(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e76d_e76d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e770_custom_server(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e77b_server_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e786_e786(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e799_e799(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7a4_e7a4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7af_e7af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7b9_restore_server_config_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_e7bb_connect_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_e7bd_server_north_america_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_e7d3_server_europe_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_e7eb_server_cfg_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e7ed_server_name_hidden(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e7fa_the_purge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e801_e801(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e810_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_e824_estimate_latency_1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e82b_e82b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e836_e836(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e83b_estimate_latency_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SED_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_e852_estimate_latency_2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e857_e857(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e862_e862(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e874_e874(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e87d_e87d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e882_error_no_contact(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e889_error_bad_ping(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e88d_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e890_connection_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e897_e897(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e89c_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
}
void seg_e8b0_connection_send_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
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
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e919_connection_wait_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e924_e924(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e928_e928(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e92c_e92c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e931_handle_message(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e938_e938(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e93f_e93f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e943_e943(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e947_disconnected_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e94e_start_game_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e951_connected_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e956_error_crazy_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e95a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e95d_wait_game(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e964_e964(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e981_got_start_game_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9b7_e9b7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9ba_e9ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9c1_e9c1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9c8_e9c8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9cb_e9cb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
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
void seg_e9e8_e9e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
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
void seg_ea03_ea03(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea05_wait_one_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea09_ea09(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea0f_ea0f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea14_buffer_you_are_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ea27_buffer_you_are_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ea3c_buffers_you_are_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
}
void seg_ea3e_buffer_player_a_ping(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
}
void seg_ea62_header_player_a_indicator(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_ea68_indicator_excellent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_ea71_indicator_good(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
}
void seg_ea7a_indicator_poor(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ZEX();
	if (emu.stopped) { return; }
}
void seg_ea83_indicator_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea86_indicator_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea89_no_contact(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea90_ea90(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea93_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_eaa7_bad_ping(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eaae_eaae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eab1_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_eac5_crazy_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eacc_eacc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eacf_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_eae3_disconnected(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
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
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
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
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb19_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb20_eb20(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb26_space(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb28_char_ok(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb31_eb31(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb39_back_on_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb3d_eb3d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eb43_eb43(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb48_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb49_show_step_name(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
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
void seg_eb58_eb58(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb59_buffer_header(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
}
void seg_eb5c_init_online_mode_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb6c_online_mode_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb74_online_mode_screen_tick_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb77_eb77(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb7d_init_stage_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb8d_stage_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb95_stage_selection_screen_long_memcopy(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb9c_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_eba3_eba3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eba9_stage_selection_tick_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebac_ebac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ebb2_stage_selection_back_to_char_select(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebc6_init_title_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebce_ebce(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebd9_ebd9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebe4_ebe4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ebfd_ebfd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec11_emu_50hz_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec18_ec18(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec23_ec23(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ec27_ec27(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec2f_ec2f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec32_ec32(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec35_ec35(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ec38_soft_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec3f_end_menu_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec40_set_title_chr(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec62_ec62(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec63_init_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec66_ec66(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec77_ec77(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec78_palette_title_initial(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec98_title_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eca0_eca0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eca3_eca3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eca6_eca6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ecae_ecae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ecb3_ecb3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ecb6_update_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ecba_ecba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ecc1_cheat_succeed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecc6_press_any_key(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ecca_ecca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ecce_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ecd2_ecd2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ecd6_ecd6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ecd9_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecdc_ecdc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ece1_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ece2_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ecf6_tick_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed07_ed07(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed0e_anim_state_handlers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed14_change_anim_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed1b_wait_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed21_ed21(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed24_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed25_show_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed28_ed28(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed2a_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed36_ed36(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed39_ed39(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed48_ed48(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed49_logo_palette_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_ed51_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed54_ed54(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed58_ed58(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed5b_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed5c_wait_text(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed62_ed62(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed65_ed65(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed68_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed69_show_text(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed71_ed71(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ed74_ed74(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eda7_finish(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_edaa_edaa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_edb2_edb2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_edb5_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edb6_text_colors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
}
void seg_edb9_title_screen_restore_music_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_edbd_edbd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_edc0_edc0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_edc3_mute(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_edc6_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_edd0_state_transition_pretransition_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_edd2_edd2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_edd4_edd4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_edd6_edd6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_edd8_state_transition_pretransition_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
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
void seg_ede0_state_transition_posttransition_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLI_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ede8_state_transition_posttransition_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_edf0_state_transition_pre_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee03_ee03(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee04_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_ee0e_state_transition_pre_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee21_ee21(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee22_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
}
void seg_ee2c_state_transition_post_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee41_ee41(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee4a_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_ee58_state_transition_post_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee6d_ee6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee6e_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee7c_scroll_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ee80_ee80(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee9a_set_up_values(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eeb3_end_set_values(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eeb7_eeb7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eebd_do_not_touch_offsets(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eec1_save_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_eec8_eec8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eed8_hidden_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eedd_two_byte_position_stored(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eee9_eee9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eeeb_scroll_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eef1_eef1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_eef5_eef5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eef7_set_camera_scroll(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef04_ef04(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ef08_ef08(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef10_ef10(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ef18_simple_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef1b_end_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef27_clean(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ef2a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ef2b_move_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef2e_ef2e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef32_ef32(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef36_ef36(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef3a_ef3a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef3e_ef3e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef42_ef42(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef46_ef46(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef4a_ef4a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef4e_ef4e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ef55_update_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef58_vertical_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef6e_ef6e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef71_ef71(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef74_ef74(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef78_update_screen_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef8c_move_one_screen_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef9b_ef9b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_efa0_hide_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efa2_update_oam(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efb0_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_efb1_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efd5_re_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efd7_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efe2_efe2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_efe5_efe5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_efe6_cloud_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f022_set_menu_chr(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f044_f044(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f045_tick_moving_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f04d_f04d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f056_move_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f05a_f05a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f05f_f05f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f063_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f064_menu_position_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f066_position_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f069_f069(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f06c_f06c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f06d_menu_position_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f079_f079(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f07d_do_not_hide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f08a_place_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f090_f090(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f094_skip_y_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0a9_f0a9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f0ac_sprite_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f0ae_f0ae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f0b1_sprite_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f0b6_stage_generic_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0c0_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f0c5_f0c5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0e0_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0ea_f0ea(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0f9_f0f9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f109_copy_header_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f114_copy_elements_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f11b_f11b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f123_copy_one_element(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f12e_f12e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f131_copy_data_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f132_stage_iterate_all_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f134_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f139_f139(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f13c_f13c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f140_f140(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f147_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f14b_f14b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f14d_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f152_f152(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f155_f155(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f159_f159(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f160_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f164_f164(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f166_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f16b_f16b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f16e_f16e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f172_f172(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f179_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f17b_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f17c_ai_action_double_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f185_ai_action_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f18f_ai_action_right_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f194_ai_action_down_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f199_ai_action_special_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f1a4_ai_action_idle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f1a7_ai_level_to_delay(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1aa_ai_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1b9_ai_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1cb_find_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1de_run_current_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1fd_f1fd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f205_f205(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f207_do_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f20a_f20a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f210_f210(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f211_ai_continue_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f21a_f21a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f21e_next_step(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f22b_f22b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f230_set_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f238_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f239_ai_attack_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f26d_f26d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f272_right_facing(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f274_end_direction_flag(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f27a_check_one_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f281_f281(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f288_condition_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2e3_f2e3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f2e5_f2e5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2f8_f2f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f2fb_next_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f2ff_f2ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f302_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f303_ai_shield_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f307_f307(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f30b_f30b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f311_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f319_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f31e_distance_computed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f322_f322(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f334_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f335_ai_space_selector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f33b_f33b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f341_bot_on_the_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f347_bot_on_the_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f34a_spot_computed(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f356_f356(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f35a_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f368_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f369_ai_chase_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f373_f373(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f375_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f377_f377(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f37b_f37b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f382_f382(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f386_no_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f390_f390(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f394_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f39a_f39a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f39e_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f3a4_f3a4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f3ab_end_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3b9_f3b9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3c4_negative_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3cc_end_set_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3e4_f3e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f3e8_dont_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3f3_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3fe_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f40a_action_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f411_ai_delay_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f415_f415(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f428_no_delay(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f42c_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f42d_esp_send_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f436_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f43f_f43f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f440_esp_get_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f447_f447(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f44e_store_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f459_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f45c_f45c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f465_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f466_network_init_stage(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f471_clear_one_input(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f47c_f47c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f48c_network_tick_ingame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f490_f490(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f493_do_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4a6_f4a6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4e4_controller_sent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f4e9_f4e9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4f8_f4f8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4ff_f4ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f505_f505(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f508_skip_message(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f512_state_updated(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f521_f521(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f524_f524(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f528_f528(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f52c_f52c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f530_f530(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f532_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f533_update_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f547_ancient(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f54a_f54a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f54d_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f54e_rollback_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f558_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f569_f569(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f56b_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f575_f575(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f577_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f581_f581(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f588_f588(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f590_screen_shake_updated(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5a8_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5b3_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5ba_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f60d_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f624_f624(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f62b_f62b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f640_f640(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f644_roll_forward_one_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f64a_f64a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f64c_f64c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f652_f652(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f654_f654(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f65a_f65a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f65c_f65c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f662_f662(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f665_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f67c_f67c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f67f_f67f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f682_f682(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f686_f686(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f68a_f68a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f68e_f68e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f690_end_inc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f693_dont_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f6a8_set_opponent_buttons_from_history(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f6ad_f6ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f6b4_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f6ba_mark_nexts_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f6c2_known(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f6c8_mapper_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f6e6_stages_init_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZEY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZEY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f70e_stages_data(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f716_stages_illustration(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BVS_REL();
	if (emu.stopped) { return; }
}
void seg_f726_stages_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_f72a_stages_tileset_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f72d_f72d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f72e_stages_tileset_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f732_stages_tileset_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f736_characters_bank_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f738_characters_tiles_data_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f73c_characters_tiles_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
}
void seg_f740_characters_properties_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
}
void seg_f746_characters_palettes_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_ABX();
	if (emu.stopped) { return; }
}
void seg_f75a_characters_start_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f75c_characters_start_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f75e_characters_update_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f760_characters_update_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f762_characters_offground_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f764_characters_offground_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f766_characters_onground_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f768_characters_onground_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f76a_characters_input_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f76c_characters_input_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
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
void seg_f76e_characters_onhurt_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_f772_set_player_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f789_f789(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f79b_server_bytecode_error(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7a0_server_bytecode_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7a3_f7a3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f7c0_f7c0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7c5_server_bytecode_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7c8_f7c8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7cd_credits_begin(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7d0_f7d0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7e4_f7e4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f808_f808(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f8cd_f8cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f976_credits_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
}

std::array<void(*)(mos6502<GameState::EmulatorRunContext>&), 0x4000> GameState::emulator_compiled_segments = {
	&emulator_compiled_segments_funcs::seg_c000_animation_frame_entry_handlers_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c004_animation_frame_entry_handlers_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c008_anim_frame_move_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c022_c022,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c037_apply_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c03c_c03c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c041_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c043_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c056_c056,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c05b_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c05d_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c070_c070,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c075_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c077_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c08a_c08a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c08f_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c091_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c09f_end,
	&emulator_compiled_segments_funcs::seg_c0a0_anim_frame_move_hitbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0ae_c0ae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0b9_ignore_enabled,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c0bb_end_enabled,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c101_c101,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c138_apply_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c13d_c13d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c142_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c144_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c157_c157,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c15c_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c15e_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c171_c171,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c176_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c178_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c18b_c18b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c190_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c192_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1a1_stb_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1a8_c1a8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1ac_c1ac,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1b0_ok,
	&emulator_compiled_segments_funcs::seg_c1b1_cursed,
	&emulator_compiled_segments_funcs::seg_c1b2_nmi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1bc_c1bc,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1df_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1e6_reset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c1fc_vblankwait1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c201_clrmem,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c21f_c21f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c223_vblankwait2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c226_c226,
	&emulator_compiled_segments_funcs::seg_c227_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c22c_c22c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c230_c230,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c235_pal,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c238_c238,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c23b_c23b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c240_forever,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c243_c243,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c246_c246,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c249_c249,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c25a_c25a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c25d_fetch_controllers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c269_fetch_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c273_next_btn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c27f_c27f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c284_c284,
	&emulator_compiled_segments_funcs::seg_c285_wait_next_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c288_c288,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c28d_c28d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c292_c292,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c29a_end,
	&emulator_compiled_segments_funcs::seg_c29b_wait_next_real_frame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c29f_waiting,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2a3_c2a3,
	&emulator_compiled_segments_funcs::seg_c2a4_signed_cmp,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ae_c2ae,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b0_end,
	&emulator_compiled_segments_funcs::seg_c2b1_absolute_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2b5_c2b5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ba_end,
	&emulator_compiled_segments_funcs::seg_c2bb_multiply,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2c6_additions_loop,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2ca_c2ca,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2db_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2de_last_nt_buffer,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2e0_handle_buff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2e5_c2e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2f2_end,
	&emulator_compiled_segments_funcs::seg_c2f3_reset_nt_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2f9_process_nt_buffers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c2fe_handle_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c303_c303,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c318_write_one_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c323_c323,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c326_end_buffers,
	&emulator_compiled_segments_funcs::seg_c327_number_to_tile_indexes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c32b_find_one_digit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c333_try_digit_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c339_c339,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c35d_test_coeff_10,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c361_c361,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c368_coefficent_changed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c36c_c36c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c36e_destination_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c371_next_digit_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c37d_end,
	&emulator_compiled_segments_funcs::seg_c37e_keep_input_dirty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c383_dummy_routine,
	&emulator_compiled_segments_funcs::seg_c384_get_transition_id,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c38e_change_global_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c39a_c39a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3a7_c3a7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3b0_c3b0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3b2_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ba_c3ba,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3cb_c3cb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ce_c3ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d4_find_transition_index,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d7_c3d7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3db_check_one_entry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e0_c3e0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e4_c3e4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e8_not_found,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ea_found,
	&emulator_compiled_segments_funcs::seg_c3eb_pre_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ee_c3ee,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3f2_c3f2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ff_end,
	&emulator_compiled_segments_funcs::seg_c400_post_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c403_c403,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c407_c407,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c414_c414,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c417_no_transition,
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
	&emulator_compiled_segments_funcs::seg_c426_end,
	&emulator_compiled_segments_funcs::seg_c427_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c434_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c43d_c43d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c440_c440,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c446_draw_zipped_nametable,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c455_load_background,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c459_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c45f_c45f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c462_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c465_c465,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c469_c469,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c46c_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c472_c472,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c475_c475,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c478_end,
	&emulator_compiled_segments_funcs::seg_c479_next_byte,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c47d_c47d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c47f_end_inc_vector,
	&emulator_compiled_segments_funcs::seg_c480_call_pointed_subroutine,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c483_copy_palette_to_ppu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c497_copy_one_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4a0_c4a0,
	&emulator_compiled_segments_funcs::seg_c4a1_shake_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4bd_c4bd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4c2_set_screen_two,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4c9_set_screen,
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
	&emulator_compiled_segments_funcs::seg_c4d9_end,
	&emulator_compiled_segments_funcs::seg_c4da_get_unzipped_bytes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4e2_skip_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4e6_carry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4ea_c4ea,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4ec_no_carry,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4ee_loop_without_dec,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4f2_c4f2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4f6_normal_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4f9_c4f9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4fb_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4fe_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c501_c501,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c503_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c509_c509,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c50b_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c50f_skip_all,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c520_done,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c523_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c527_get_bytes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c52b_c52b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c52f_normal_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c53c_c53c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c53e_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c543_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c546_c546,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c548_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c54e_c54e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c550_end_inc_vector,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c553_compressed_zero,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c564_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c566_force_loop_get_bytes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c568_end,
	&emulator_compiled_segments_funcs::seg_c569_animation_init_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5a0_animation_state_change_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5bb_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c610_end,
	&emulator_compiled_segments_funcs::seg_c611_animation_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62b_c62b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62e_inc_current_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c633_skip_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c637_c637,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c63c_c63c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c63f_end_skip_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c644_c644,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c648_c648,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c653_store_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c664_end,
	&emulator_compiled_segments_funcs::seg_c665_add_to_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c671_draw_anim_frame,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c673_handle_one_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c677_c677,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c67b_c67b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c67f_c67f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c683_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c698_c698,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c69b_clear_unused_sprites,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c69f_c69f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6a8_c6a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b0_clear_one_unused_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ba_end,
	&emulator_compiled_segments_funcs::seg_c6bb_call_pointed_subroutine13,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6be_anim_frame_move_sprite,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6c2_c6c2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6cc_c6cc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d1_use_last_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d3_set_sprite_used,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d8_default_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6de_end_init_direction_data,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6e2_c6e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6e7_use_first_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6e9_sprite_index_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f1_c6f1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f6_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f8_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c707_c707,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c70c_c70c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c711_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c717_c717,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c71a_end_anim_hook,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c72e_c72e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c733_flip_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c73a_got_relative_pos,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c73d_c73d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c742_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c744_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c753_c753,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c759_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c75e_c75e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c763_inc_sprite_index,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c765_end_next_sprite,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c768_skip,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c771_end,
	&emulator_compiled_segments_funcs::seg_c772_boxes_overlap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c77c_c77c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c77e_end_signed_cmp,
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
	&emulator_compiled_segments_funcs::seg_c78a_c78a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c78c_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c78e_c78e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c798_c798,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c79a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c79c_c79c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7a6_c7a6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7a8_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7aa_c7aa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7af_no_overlap,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7b1_end,
	&emulator_compiled_segments_funcs::seg_c7b2_audio_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7b5_c7b5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7bb_audio_play_music,
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
	&emulator_compiled_segments_funcs::seg_c7c9_c7c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7e1_c7e1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7f5_c7f5,
	&emulator_compiled_segments_funcs::seg_c7f6_init_channel,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c806_c806,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c816_c816,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c81c_pulse_2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c81f_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c82b_end_pulse_specifics,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c848_audio_mute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c863_audio_unmute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c86b_square_reinit_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c884_c884,
	&emulator_compiled_segments_funcs::seg_c885_audio_music_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c88e_c88e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c893_c893,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c898_c898,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c89d_c89d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a0_end,
	&emulator_compiled_segments_funcs::seg_c8a1_noise_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a5_c8a5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a8_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8b5_c8b5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8c4_overflow,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8c9_c8c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d1_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d6_store_result,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d9_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8de_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c900_c900,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c914_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c91c_c91c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c924_regular_write,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c935_end_write_apu,
	&emulator_compiled_segments_funcs::seg_c936_pulse_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c93b_c93b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c942_do_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c954_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c95a_negative,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c95d_end_byte_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c965_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c96d_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c990_c990,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c996_c996,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a5_skip_opcode_update,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9aa_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b7_c9b7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9cb_c9cb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9d4_triangle,
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
	&emulator_compiled_segments_funcs::seg_c9e3_unmute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f1_write_linear_cnt,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f4_end_write_apu,
	&emulator_compiled_segments_funcs::seg_c9f5_opcode_noise_sample_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f7_opcode_sample_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca1c_ca1c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca2c_no_track_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca37_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca3a_opcode_chan_params,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca57_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca69_opcode_chan_volume_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca71_opcode_chan_volume_high,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca7b_opcode_noise_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca83_opcode_set_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca99_opcode_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cab1_note_table_lookup,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cabf_opcode_play_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cacf_left_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cad1_one_left_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cad4_cad4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cad8_right_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cada_one_right_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cadd_cadd,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cae1_end_wait_compute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caec_caec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb00_opcode_play_timed_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb08_cb08,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb26_opcode_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb33_opcode_noise_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb3e_opcode_noise_long_wait,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb40_opcode_long_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb49_opcode_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb5e_opcode_noise_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb73_opcode_pitch_slide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb79_cb79,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb7b_set_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb87_opcode_pulse_meta_uslide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb8e_opcode_pulse_meta_dslide,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb92_opcode_pulse_meta_common,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb9c_cb9c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cba0_cba0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cba6_cba6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb2_end_note,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbc5_cbc5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbca_keep_volume,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbcc_set_volume_mask,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbd4_cbd4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbda_replace_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbe4_end_volume_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbea_cbea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbf5_end_pitch_slide,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbf8_opcode_noise_set_periodic,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbfc_cbfc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc04_unset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc09_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc0f_opcode_noise_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc26_opcode_noise_pitch_slide_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc33_opcode_noise_pitch_slide_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc4b_pulse1_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc5b_noise_opcode_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc64_noise_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc6d_particle_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc73_process_one_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc78_cc78,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc7b_cc7b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc7e_skip_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc83_next_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc8e_cc8e,
	&emulator_compiled_segments_funcs::seg_cc8f_process_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc9f_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cca9_cca9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb0_ccb0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb5_ccb5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccce_hide_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccd3_particle_drawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccda_end,
	&emulator_compiled_segments_funcs::seg_ccdb_particle_handlers_reinit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cce6_cce6,
	&emulator_compiled_segments_funcs::seg_cce7_loop_on_particle_boxes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cce9_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccee_ccee,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccf7_ccf7,
	&emulator_compiled_segments_funcs::seg_ccf8_loop_on_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccfc_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd02_cd02,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd0b_cd0b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd0e_end,
	&emulator_compiled_segments_funcs::seg_cd0f_deactivate_particle_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd17_cd17,
	&emulator_compiled_segments_funcs::seg_cd18_hide_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd1c_cd1c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd21_second_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd23_set_sprite_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd30_cd30,
	&emulator_compiled_segments_funcs::seg_cd31_hide_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd3f_construct_palettes_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd42_cd42,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd58_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd63_cd63,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd69_push_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd77_construct_nt_buffer,
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
	&emulator_compiled_segments_funcs::seg_cd82_copy_header_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd8d_cd8d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd91_copy_payload_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd9c_cd9c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cda2_clear_bg_bot_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdb5_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdbe_cdbe,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdc0_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdc6_cdc6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdcc_cdcc,
	&emulator_compiled_segments_funcs::seg_cdcd_switch_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd1_copy_one_tile,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd3_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_cdee_cdee,
	&emulator_compiled_segments_funcs::seg_cdef_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdf3_cdf3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdf7_select_player_b,
	&emulator_compiled_segments_funcs::seg_cdf8_end,
	&emulator_compiled_segments_funcs::seg_cdf9_merge_to_player_velocity,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdfb_add_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce0a_ce0a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce1b_check_diff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce1f_ce1f,
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
	&emulator_compiled_segments_funcs::seg_ce32_add_step_size,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce47_ce47,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce49_ce49,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce59_decrement,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce66_next_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce6d_ce6d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce72_apply_player_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce89_ce89,
	&emulator_compiled_segments_funcs::seg_ce8a_check_in_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce91_ce91,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce95_ce95,
	&emulator_compiled_segments_funcs::seg_ce96_simple_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce9a_ce9a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce9e_ce9e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cea5_end_left_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceac_end_right_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceb3_end_top_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceba_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cebc_not_in_platform,
	&emulator_compiled_segments_funcs::seg_cebd_oos_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cec9_cec9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cecb_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cecd_cecd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ced4_ced4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cedb_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cee7_cee7,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cee9_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceeb_ceeb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cef2_cef2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cef9_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf05_cf05,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf07_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf09_cf09,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf10_cf10,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf17_not_eq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf23_cf23,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf25_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf27_cf27,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf2e_cf2e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf35_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf37_not_in_platform,
	&emulator_compiled_segments_funcs::seg_cf38_place_character_ppu_tiles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf47_cf47,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf51_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf58_end_set_ppu_addr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf6d_cf6d,
	&emulator_compiled_segments_funcs::seg_cf6e_controller_callbacks,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf72_check_controller_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf76_cf76,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf8d_next_controller_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf92_cf92,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa4_sleep_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa7_cfa7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfaa_particle_directional_indicator_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_cfe4_set_particle_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d00a_particle_directional_indicator_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d00e_d00e,
	&emulator_compiled_segments_funcs::seg_d00f_do_something,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d01c_d01c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d01f_d01f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d022_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d027_d027,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d029_end,
	&emulator_compiled_segments_funcs::seg_d02a_move_particles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d035_d035,
	&emulator_compiled_segments_funcs::seg_d036_move_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d05c_d05c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d061_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d063_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d073_d073,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d078_separate,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d07d_set_y_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d092_d092,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d097_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d099_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0b3_particle_death_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0f5_d0f5,
	&emulator_compiled_segments_funcs::seg_d0f6_place_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d104_d104,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d106_no_reposition_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d117_d117,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d119_no_reposition_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d141_particles_start_position_offset_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d148_particles_start_position_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d14f_particle_death_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d163_d163,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d16a_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d16c_do_nothing,
	&emulator_compiled_segments_funcs::seg_d16d_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d172_d172,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d177_audio_music_power,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d188_audio_music_weak,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d193_audio_music_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d19e_audio_play_crash,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1ae_audio_play_death,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1be_audio_play_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1ce_audio_play_parry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1de_audio_play_shield_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1ee_audio_play_shield_break,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1fe_audio_play_title_screen_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d20e_global_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d213_d213,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d226_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d22e_d22e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d25d_d25d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d260_d260,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d265_game_states_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d299_init_character_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2a9_character_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b1_character_selection_screen_copy_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2c7_copy_one_byte,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2d8_character_selection_screen_copy_portrait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2fc_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d304_d304,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d30a_character_selection_copy_to_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d310_d310,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d316_stay_on_menu_bank,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d319_d319,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d333_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d33e_d33e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d349_character_selection_tick_char_anims,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d35f_d35f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d375_d375,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d37b_tick_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d38a_d38a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d38d_character_selection_get_char_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b0_character_selection_construct_char_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3bb_d3bb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3c1_character_selection_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ce_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3d7_d3d7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3da_d3da,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e0_character_selection_reset_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e8_d3e8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ee_default_config,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d418_init_config_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d41b_d41b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d42b_d42b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d43b_d43b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d44b_config_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d453_init_credits_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d456_d456,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d466_d466,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d479_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d482_d482,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d484_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d48a_d48a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d490_d490,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4a2_d4a2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4a7_d4a7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ac_d4ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b1_d4b1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b6_d4b6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4bb_d4bb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4d6_write_one_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4e5_d4e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ff_write_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d505_d505,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d507_end_inc_cursor,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d50b_d50b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d50f_d50f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d513_d513,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d517_d517,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d520_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d528_filled_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d530_new_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d535_end_write_credits,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d538_d538,
	&emulator_compiled_segments_funcs::seg_d539_fill_attributes_line,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d53b_write_attribute_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d543_d543,
	&emulator_compiled_segments_funcs::seg_d544_credits_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d54c_d54c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d550_d550,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d554_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d558_d558,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d55c_d55c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d55f_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d564_end,
	&emulator_compiled_segments_funcs::seg_d565_init_donation_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d575_d575,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d580_d580,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d583_d583,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d588_donation_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d58b_d58b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d593_d593,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d595_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d599_d599,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d59d_d59d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5a1_d5a1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5a5_d5a5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5a9_d5a9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ad_d5ad,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b1_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b6_d5b6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b9_go_back,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5be_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5c6_go_right,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ca_d5ca,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ce_no_press,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5e5_end,
	&emulator_compiled_segments_funcs::seg_d5e6_option_to_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5eb_nt_payload_btc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5f1_nt_payload_paypal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5f9_nt_payload_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5fb_init_donation_btc_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d606_init_donation_paypal_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d60e_init_donation_qr_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d616_d616,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d621_d621,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d624_d624,
	&emulator_compiled_segments_funcs::seg_d625_donation_qr_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d62d_d62d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d631_d631,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d635_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d639_d639,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d63d_d63d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d640_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d645_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d648_game_modes_init_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d64a_game_modes_pre_update_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d64c_game_modes_pre_update_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d64e_init_game_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d651_d651,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d656_d656,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d65b_d65b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d660_d660,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d665_d665,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d669_zero_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d670_d670,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d68c_d68c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d68e_update_addr_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d69e_d69e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6ca_position_player_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6e9_d6e9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d700_d700,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d732_d732,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d745_d745,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d759_initialize_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d772_d772,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d777_d777,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d784_d784,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d789_d789,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d78c_d78c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d791_d791,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d79c_d79c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7a1_d7a1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7a4_d7a4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7a9_d7a9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7ae_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7b3_d7b3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7ce_d7ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e9_d7e9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7ec_d7ec,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7ef_d7ef,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7fe_d7fe,
	&emulator_compiled_segments_funcs::seg_d7ff_place_player_a_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d801_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d80d_d80d,
	&emulator_compiled_segments_funcs::seg_d80e_place_player_b_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d810_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d81c_d81c,
	&emulator_compiled_segments_funcs::seg_d81d_place_character_normal_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d830_place_character_alternate_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d843_place_character_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d867_place_character_ppu_illustrations,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d89a_d89a,
	&emulator_compiled_segments_funcs::seg_d89b_illustrations_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d89d_illustrations_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d89f_header_player_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a3_header_player_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a7_game_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8aa_d8aa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8b9_d8b9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8bd_d8bd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8c0_d8c0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8d5_d8d5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8d9_d8d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8de_d8de,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8e3_d8e3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8e6_end_effects,
	&emulator_compiled_segments_funcs::seg_d8e7_no_screen_shake,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8eb_d8eb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8ee_d8ee,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8f2_no_slowdown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d90d_d90d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d910_end,
	&emulator_compiled_segments_funcs::seg_d911_slowdown,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d915_d915,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d91b_d91b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d922_keep_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d929_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d932_end,
	&emulator_compiled_segments_funcs::seg_d933_update_players,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d935_hitstun_one_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d939_d939,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d93b_hitstun_next_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d940_d940,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d942_hitbox_one_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d945_d945,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d94a_d94a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d94c_update_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d961_d961,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d967_d967,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d976_end_input_event,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d97c_d97c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d97f_d97f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d983_d983,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d986_d986,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d989_end_visuals,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d98e_d98e,
	&emulator_compiled_segments_funcs::seg_d98f_player_state_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d99f_check_player_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a5_d9a5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a8_process_checks,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9cb_d9cb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9cf_d9cf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9f2_d9f2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9f4_d9f4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9f7_d9f7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da2b_check_hitbox_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da4e_da4e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da50_da50,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da55_da55,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da5a_da5a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da6f_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da72_hurt_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da75_da75,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da78_da78,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da85_da85,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da88_cap_damages,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da8a_apply_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daa5_daa5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab2_apply_force_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae7_dae7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db03_db03,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db16_db16,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db2a_passthrough_kb_h,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db30_end_abs_kb_h,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db34_db34,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db48_passthrough_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db4e_end_abs_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db70_db70,
	&emulator_compiled_segments_funcs::seg_db71_move_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db81_vertical,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db92_db92,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db97_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db99_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dba5_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbae_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbb4_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbb9_dbb9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbbb_horizontal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbcc_dbcc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbd1_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbd3_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbdf_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbe8_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbee_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbf3_dbf3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbf5_horizontal_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc0e_move_player_handle_one_platform_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc26_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc31_dc31,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc33_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc35_dc35,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc40_dc40,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc42_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc44_dc44,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc4f_dc4f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc51_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc53_dc53,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc5e_dc5e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc60_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc62_dc62,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc77_no_collision,
	&emulator_compiled_segments_funcs::seg_dc78_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc84_dc84,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc86_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc88_dc88,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc94_dc94,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc96_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc98_dc98,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca4_dca4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca6_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca8_dca8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcb4_dcb4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcb6_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcb8_dcb8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcce_no_collision,
	&emulator_compiled_segments_funcs::seg_dccf_move_player_handle_one_platform_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce7_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcf2_dcf2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcf4_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcf6_dcf6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd01_dd01,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd03_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd05_dd05,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd10_dd10,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd12_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd14_dd14,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd1f_dd1f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd21_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd23_dd23,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd38_no_collision,
	&emulator_compiled_segments_funcs::seg_dd39_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd45_dd45,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd47_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd49_dd49,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd55_dd55,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd57_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd59_dd59,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd65_dd65,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd67_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd69_dd69,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd75_dd75,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd77_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd79_dd79,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd8f_no_collision,
	&emulator_compiled_segments_funcs::seg_dd90_move_player_handle_one_platform_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dda8_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddb3_ddb3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddb5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddb7_ddb7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc2_ddc2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc4_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc6_ddc6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddd1_ddd1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddd3_end_signed_cmp,
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
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde0_dde0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde2_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde4_dde4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddf1_no_collision,
	&emulator_compiled_segments_funcs::seg_ddf2_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddfe_ddfe,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de00_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de02_de02,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de0e_de0e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de10_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de12_de12,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de1e_de1e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de20_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de22_de22,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de2e_de2e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de30_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de32_de32,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de40_no_collision,
	&emulator_compiled_segments_funcs::seg_de41_move_player_handle_one_platform_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de59_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de64_de64,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de66_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de68_de68,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de73_de73,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de75_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de77_de77,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de82_de82,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de84_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de86_de86,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de91_de91,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de93_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de95_de95,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dea6_no_collision,
	&emulator_compiled_segments_funcs::seg_dea7_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb3_deb3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb7_deb7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec3_dec3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec7_dec7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded3_ded3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded7_ded7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dee3_dee3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dee5_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dee7_dee7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_def9_no_collision,
	&emulator_compiled_segments_funcs::seg_defa_check_player_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df04_df04,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df06_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df08_df08,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df12_df12,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df14_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df16_df16,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df20_df20,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df22_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df24_df24,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df2e_df2e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df30_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df32_df32,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df36_df36,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df4d_df4d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df50_offground,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df5f_df5f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df62_set_death_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df65_df65,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df73_df73,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df75_df75,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df7a_pass_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df7f_left_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df81_cap_vertical_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df83_end_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df87_df87,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df89_df89,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8e_pass_cap_horizontal_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df93_top_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df95_cap_horizontal_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df97_end_cap_horizontal_blast,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df9a_df9a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df9e_df9e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb1_dfb1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb4_gameover,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb8_dfb8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfbb_dfbb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc1_no_set_winner,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd8_dfd8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfdc_end,
	&emulator_compiled_segments_funcs::seg_dfdd_write_player_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfe3_dfe3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfee_prepare_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dff6_end_player_variables,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e006_e006,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e030_e030,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e035_stocks_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e055_e055,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e05a_empty_stock,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e05c_set_stock_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e065_e065,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e06d_stocks_positions,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e071_character_icons,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e073_player_effects,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e076_e076,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e079_e079,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e07c_e07c,
	&emulator_compiled_segments_funcs::seg_e07d_blinking,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e098_no_hitstun,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09c_e09c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a9_player_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0ae_e0ae,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b0_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0bb_e0bb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0be_update_sprites,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0c0_update_one_player_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0f9_e0f9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0fc_e0fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e102_e102,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e110_e110,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e112_e112,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e116_e116,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e118_e118,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e11b_oos_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e130_oos_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e145_oss_top,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e15a_oos_bot,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e16c_oos_indicator_placed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e17b_e17b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e17e_e17e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e180_loop,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e183_e183,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e186_all_player_sprites_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e189_e189,
	&emulator_compiled_segments_funcs::seg_e18a_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e18c_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e18e_oos_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e190_oos_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e192_game_mode_local_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e195_game_mode_local_pre_update,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e199_e199,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e19d_e19d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a1_e1a1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a5_e1a5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a8_end_ai,
	&emulator_compiled_segments_funcs::seg_e1a9_game_mode_online_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1ac_game_mode_online_pre_update,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1af_init_gameover_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1d1_e1d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1f3_e1f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e203_e203,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e208_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e20d_e20d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e21c_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e227_e227,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e242_e242,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e25d_e25d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e26e_winner_name_writing,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e27b_e27b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2a7_e2a7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2c0_e2c0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2ea_e2ea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e300_initialize_a_balloon,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e31b_e31b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e31d_position_a_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e320_e320,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e326_e326,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e331_e331,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e334_e334,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e33b_gameover_screen_tick,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e33d_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e34b_e34b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e34f_e34f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e352_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e357_e357,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e35a_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e362_update_animations,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e365_e365,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e368_e368,
	&emulator_compiled_segments_funcs::seg_e369_next_screen_by_game_mode,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e36b_gamover_update_players,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e38c_e38c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e38f_e38f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e3b3_e3b3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3b6_e3b6,
	&emulator_compiled_segments_funcs::seg_e3b7_update_balloons,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3bb_update_one_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3be_e3be,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d2_e3d2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d6_end_y,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d9_e3d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3eb_e3eb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3f0_positive,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3f2_high_byte_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e40f_e40f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e41a_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e422_end_sprite_layer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e42c_e42c,
	&emulator_compiled_segments_funcs::seg_e42d_gameover_random_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e43a_init_mode_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e43d_e43d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e44d_e44d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e458_e458,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e45b_e45b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e460_mode_selection_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e463_e463,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e466_e466,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e468_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e46c_e46c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e470_e470,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e474_e474,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e478_e478,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e47c_e47c,
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
	&emulator_compiled_segments_funcs::seg_e488_e488,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e48c_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e491_no_press,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e494_go_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e49a_e49a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e49d_from_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4a4_go_left,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4a8_e4a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4af_go_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4b7_e4b7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4be_go_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4c3_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4cd_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4d0_e4d0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4d4_show_selected_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4eb_e4eb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4ef_nt_highlight_payload_local,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e504_nt_highlight_payload_online,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e519_nt_highlight_payload_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e531_nt_highlight_payload_addr_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e534_init_netplay_launch_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e537_e537,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e54c_e54c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e557_e557,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e55a_e55a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e55e_wait_esp,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e569_e569,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e574_e574,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e578_e578,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e583_e583,
	&emulator_compiled_segments_funcs::seg_e584_esp_status_cmd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e589_netplay_launch_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e58c_e58c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e58f_e58f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e59e_e59e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a9_e5a9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5bb_error_state_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5bf_connecting_wifi_query,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5c6_e5c6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5d1_e5d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ea_cmd_get_wifi_status,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ec_connecting_wifi_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f7_e5f7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5fb_e5fb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e602_e602,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e60f_connected,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e614_failed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e61b_crazy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e622_in_progress,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e624_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e62e_wifi_status_action_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e635_select_server_query_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e63c_e63c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e647_e647,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e64c_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e660_cmd_get_server_settings,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e662_select_server_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e669_e669,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e67c_e67c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e68f_e68f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6b1_e6b1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6b5_e6b5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6bc_e6bc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6d7_end_custom_server,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6d9_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6dc_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6fd_server2_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e703_server3_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e709_server1_buffer_header,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e70c_server2_buffer_header,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e712_select_server,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e716_e716,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e71c_e71c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e720_e720,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e724_e724,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e728_e728,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72c_e72c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72f_next_server,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e737_e737,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e73e_previous_server,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e742_e742,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e747_end_inputs,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e752_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e755_next_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e760_standard_server,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e76d_e76d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e770_custom_server,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e77b_server_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e786_e786,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e799_e799,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a4_e7a4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7af_e7af,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b9_restore_server_config_cmd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7bb_connect_cmd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7bd_server_north_america_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7d3_server_europe_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7eb_server_cfg_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ed_server_name_hidden,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7fa_the_purge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e801_e801,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e810_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e824_estimate_latency_1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e82b_e82b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e836_e836,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e83b_estimate_latency_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e852_estimate_latency_2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e857_e857,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e862_e862,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e874_e874,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e87d_e87d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e882_error_no_contact,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e889_error_bad_ping,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e88d_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e890_connection_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e897_e897,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e89c_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8b0_connection_send_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e919_connection_wait_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e924_e924,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e928_e928,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e92c_e92c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e931_handle_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e938_e938,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e93f_e93f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e943_e943,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e947_disconnected_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e94e_start_game_msg,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e951_connected_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e956_error_crazy_msg,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e95a_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e95d_wait_game,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e964_e964,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e981_got_start_game_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b7_e9b7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ba_e9ba,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c1_e9c1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c8_e9c8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9cb_e9cb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9e8_e9e8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea03_ea03,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea05_wait_one_frame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea09_ea09,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea0f_ea0f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea14_buffer_you_are_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea27_buffer_you_are_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea3c_buffers_you_are_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea3e_buffer_player_a_ping,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea62_header_player_a_indicator,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea68_indicator_excellent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea71_indicator_good,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea7a_indicator_poor,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea83_indicator_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea86_indicator_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea89_no_contact,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea90_ea90,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea93_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaa7_bad_ping,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaae_eaae,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eab1_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac5_crazy_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eacc_eacc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eacf_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eae3_disconnected,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb19_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb20_eb20,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb26_space,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb28_char_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb31_eb31,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb39_back_on_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb3d_eb3d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb43_eb43,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb48_end,
	&emulator_compiled_segments_funcs::seg_eb49_show_step_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb58_eb58,
	&emulator_compiled_segments_funcs::seg_eb59_buffer_header,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb5c_init_online_mode_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb6c_online_mode_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb74_online_mode_screen_tick_music,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb77_eb77,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb7d_init_stage_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb8d_stage_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb95_stage_selection_screen_long_memcopy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb9c_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eba3_eba3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eba9_stage_selection_tick_music,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebac_ebac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebb2_stage_selection_back_to_char_select,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebc6_init_title_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebce_ebce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd9_ebd9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebe4_ebe4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebfd_ebfd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec11_emu_50hz_done,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec18_ec18,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec23_ec23,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec27_ec27,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec2f_ec2f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec32_ec32,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec35_ec35,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec38_soft_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3f_end_menu_init,
	&emulator_compiled_segments_funcs::seg_ec40_set_title_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec62_ec62,
	&emulator_compiled_segments_funcs::seg_ec63_init_title_animation,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec66_ec66,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec77_ec77,
	&emulator_compiled_segments_funcs::seg_ec78_palette_title_initial,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec98_title_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca0_eca0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca3_eca3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca6_eca6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecae_ecae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecb3_ecb3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecb6_update_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecba_ecba,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc1_cheat_succeed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc6_press_any_key,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecca_ecca,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecce_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd2_ecd2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd6_ecd6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd9_next_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecdc_ecdc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ece1_end,
	&emulator_compiled_segments_funcs::seg_ece2_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecf6_tick_title_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed07_ed07,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed0e_anim_state_handlers_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed14_change_anim_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed1b_wait_logo,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed21_ed21,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed24_end,
	&emulator_compiled_segments_funcs::seg_ed25_show_logo,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed28_ed28,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed2a_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed36_ed36,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed39_ed39,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed48_ed48,
	&emulator_compiled_segments_funcs::seg_ed49_logo_palette_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed51_shake,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed54_ed54,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed58_ed58,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed5b_end,
	&emulator_compiled_segments_funcs::seg_ed5c_wait_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed62_ed62,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed65_ed65,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed68_end,
	&emulator_compiled_segments_funcs::seg_ed69_show_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed71_ed71,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed74_ed74,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eda7_finish,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edaa_edaa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb2_edb2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb5_end,
	&emulator_compiled_segments_funcs::seg_edb6_text_colors,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb9_title_screen_restore_music_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edbd_edbd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edc0_edc0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edc3_mute,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edc6_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd0_state_transition_pretransition_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd2_edd2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd4_edd4,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd6_edd6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd8_state_transition_pretransition_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ede0_state_transition_posttransition_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ede8_state_transition_posttransition_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edf0_state_transition_pre_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee03_ee03,
	&emulator_compiled_segments_funcs::seg_ee04_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee0e_state_transition_pre_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee21_ee21,
	&emulator_compiled_segments_funcs::seg_ee22_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee2c_state_transition_post_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee41_ee41,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee4a_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee58_state_transition_post_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee6d_ee6d,
	&emulator_compiled_segments_funcs::seg_ee6e_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee7c_scroll_transition,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee80_ee80,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee9a_set_up_values,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeb3_end_set_values,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeb7_eeb7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eebd_do_not_touch_offsets,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eec1_save_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eec8_eec8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eed8_hidden_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eedd_two_byte_position_stored,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eee9_eee9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeeb_scroll_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eef1_eef1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eef5_eef5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eef7_set_camera_scroll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef04_ef04,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef08_ef08,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef10_ef10,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef18_simple_sleep,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef1b_end_sleep,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef27_clean,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef2a_end,
	&emulator_compiled_segments_funcs::seg_ef2b_move_sprites,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef2e_ef2e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef32_ef32,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef36_ef36,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef3a_ef3a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef3e_ef3e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef42_ef42,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef46_ef46,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef4a_ef4a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef4e_ef4e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef55_update_clouds,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef58_vertical_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef6e_ef6e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef71_ef71,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef74_ef74,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef78_update_screen_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef8c_move_one_screen_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef9b_ef9b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efa0_hide_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efa2_update_oam,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efb0_end,
	&emulator_compiled_segments_funcs::seg_efb1_init_menu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efd5_re_init_menu,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efd7_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efe2_efe2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efe5_efe5,
	&emulator_compiled_segments_funcs::seg_efe6_cloud_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f022_set_menu_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f044_f044,
	&emulator_compiled_segments_funcs::seg_f045_tick_moving_clouds,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f04d_f04d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f056_move_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f05a_f05a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f05f_f05f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f063_end,
	&emulator_compiled_segments_funcs::seg_f064_menu_position_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f066_position_one_cloud,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f069_f069,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f06c_f06c,
	&emulator_compiled_segments_funcs::seg_f06d_menu_position_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f079_f079,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f07d_do_not_hide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f08a_place_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f090_f090,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f094_skip_y_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0a9_f0a9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0ac_sprite_offset_x,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0ae_f0ae,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0b1_sprite_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0b6_stage_generic_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c0_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c5_f0c5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0e0_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0ea_f0ea,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f109_copy_header_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f114_copy_elements_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f11b_f11b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f123_copy_one_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f12e_f12e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f131_copy_data_end,
	&emulator_compiled_segments_funcs::seg_f132_stage_iterate_all_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f134_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f139_f139,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f13c_f13c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f140_f140,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f147_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f14b_f14b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f14d_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f152_f152,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f155_f155,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f159_f159,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f160_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f164_f164,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f166_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f16b_f16b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f16e_f16e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f172_f172,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f179_end_iterate_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f17b_end,
	&emulator_compiled_segments_funcs::seg_f17c_ai_action_double_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f185_ai_action_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f18f_ai_action_right_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f194_ai_action_down_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f199_ai_action_special_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a4_ai_action_idle,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a7_ai_level_to_delay,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1aa_ai_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b9_ai_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1cb_find_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1de_run_current_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1fd_f1fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f205_f205,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f207_do_action,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f20a_f20a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f210_f210,
	&emulator_compiled_segments_funcs::seg_f211_ai_continue_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21a_f21a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21e_next_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22b_f22b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f230_set_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f238_end,
	&emulator_compiled_segments_funcs::seg_f239_ai_attack_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_f272_right_facing,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f274_end_direction_flag,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f27a_check_one_attack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f281_f281,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f288_condition_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e3_f2e3,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e5_f2e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2f8_f2f8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2fb_next_attack,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2ff_f2ff,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f302_end,
	&emulator_compiled_segments_funcs::seg_f303_ai_shield_selector,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f307_f307,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f30b_f30b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f311_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f319_bot_on_the_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f31e_distance_computed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f322_f322,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f334_end,
	&emulator_compiled_segments_funcs::seg_f335_ai_space_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33b_f33b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f341_bot_on_the_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f347_bot_on_the_left,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f34a_spot_computed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f356_f356,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f35a_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f368_end,
	&emulator_compiled_segments_funcs::seg_f369_ai_chase_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f373_f373,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f375_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f377_f377,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f37b_f37b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f382_f382,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f386_no_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f390_f390,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f394_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f39a_f39a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f39e_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a4_f3a4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ab_end_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3b9_f3b9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c4_negative_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3cc_end_set_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e4_f3e4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e8_dont_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3f3_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3fe_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f40a_action_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f411_ai_delay_action,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f415_f415,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f428_no_delay,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f42c_end,
	&emulator_compiled_segments_funcs::seg_f42d_esp_send_cmd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f436_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f43f_f43f,
	&emulator_compiled_segments_funcs::seg_f440_esp_get_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f447_f447,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f44e_store_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f459_copy_one_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f45c_f45c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f465_end,
	&emulator_compiled_segments_funcs::seg_f466_network_init_stage,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f471_clear_one_input,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f47c_f47c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f48c_network_tick_ingame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f490_f490,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f493_do_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4a6_f4a6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e4_controller_sent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e9_f4e9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f8_f4f8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ff_f4ff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f505_f505,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f508_skip_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f512_state_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f521_f521,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f524_f524,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f528_f528,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f52c_f52c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f530_f530,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f532_end,
	&emulator_compiled_segments_funcs::seg_f533_update_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f547_ancient,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f54a_f54a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f54d_end,
	&emulator_compiled_segments_funcs::seg_f54e_rollback_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f558_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f569_f569,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f56b_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f575_f575,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f577_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f581_f581,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f588_f588,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f590_screen_shake_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5a8_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5b3_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ba_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f60d_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f624_f624,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f62b_f62b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f640_f640,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f644_roll_forward_one_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f64a_f64a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f64c_f64c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f652_f652,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f654_f654,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f65a_f65a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f65c_f65c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f662_f662,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f665_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f67c_f67c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f67f_f67f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f682_f682,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f686_f686,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f68a_f68a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f68e_f68e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f690_end_inc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f693_dont_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a8_set_opponent_buttons_from_history,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6ad_f6ad,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6b4_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6ba_mark_nexts_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c2_known,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c8_mapper_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6e6_stages_init_routine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f70e_stages_data,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f716_stages_illustration,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f726_stages_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f72a_stages_tileset_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f72d_f72d,
	&emulator_compiled_segments_funcs::seg_f72e_stages_tileset_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f732_stages_tileset_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f736_characters_bank_number,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f738_characters_tiles_data_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f73c_characters_tiles_number,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f740_characters_properties_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f746_characters_palettes_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f75a_characters_start_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f75c_characters_start_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f75e_characters_update_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f760_characters_update_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f762_characters_offground_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f764_characters_offground_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f766_characters_onground_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f768_characters_onground_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f76a_characters_input_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f76c_characters_input_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f76e_characters_onhurt_routines_table_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f772_set_player_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f789_f789,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f79b_server_bytecode_error,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7a0_server_bytecode_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7a3_f7a3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c0_f7c0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c5_server_bytecode_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c8_f7c8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7cd_credits_begin,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7d0_f7d0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e4_f7e4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f808_f808,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8cd_f8cd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f976_credits_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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

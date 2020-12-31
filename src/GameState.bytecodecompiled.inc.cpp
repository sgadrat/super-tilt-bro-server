namespace emulator_compiled_segments_funcs {
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
void seg_c4da_animation_init_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c511_animation_state_change_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c52c_animation_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c581_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c582_animation_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c59c_c59c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c59f_inc_current_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c5a4_skip_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c5a8_c5a8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c5ad_c5ad(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c5b0_end_skip_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c5b5_c5b5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c5b9_c5b9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5c4_store_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5d5_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c5d6_add_to_frame_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c5e2_draw_anim_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c5e4_handle_one_entry(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c5e8_c5e8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c5ec_c5ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c5f0_c5f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c5f4_continue(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c609_c609(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c60c_clear_unused_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c610_c610(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c619_c619(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c621_clear_one_unused_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c62b_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c62c_call_pointed_subroutine13(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_c62f_anim_frame_move_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c633_c633(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c63d_c63d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c642_use_last_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c644_set_sprite_used(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c649_default_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c64f_end_init_direction_data(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c653_c653(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c658_use_first_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c65a_sprite_index_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c662_c662(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c667_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c669_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c678_c678(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c67d_c67d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c682_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_c688_c688(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c68b_end_anim_hook(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c69f_c69f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6a4_flip_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6ab_got_relative_pos(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c6ae_c6ae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6b3_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6b5_set_relative_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6c4_c6c4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6ca_continue(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c6cf_c6cf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6d4_inc_sprite_index(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6d6_end_next_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c6d9_skip(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6e2_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c6e3_boxes_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6ed_c6ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c6ef_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c6f1_c6f1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c6fb_c6fb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c6fd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c6ff_c6ff(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c709_c709(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c70b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c70d_c70d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c717_c717(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c719_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c71b_c71b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c720_no_overlap(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c722_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c723_audio_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c726_c726(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c72c_audio_play_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c735_c735(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c73a_c73a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c752_c752(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c766_c766(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c767_init_channel(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c777_c777(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c787_c787(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c78d_pulse_2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c790_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c79c_end_pulse_specifics(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7b9_audio_mute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7d4_audio_unmute_music(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7dc_square_reinit_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c7f5_c7f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c7f6_audio_music_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c7ff_c7ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c804_c804(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c809_c809(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c80e_c80e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_c811_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c812_noise_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c816_c816(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c819_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c826_c826(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c835_overflow(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_c83a_c83a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c842_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c847_store_result(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c84a_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c84f_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c871_c871(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c885_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_c88d_c88d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c895_regular_write(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8a6_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c8a7_pulse_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8ac_c8ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c8b3_do_effects(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8c5_positive(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c8cb_negative(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8ce_end_byte_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c8d6_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c8de_execute_current_opcode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c901_c901(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c907_c907(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c916_skip_opcode_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_c91b_end_opcodes_execution(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c928_c928(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c93c_c93c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c945_triangle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c94a_c94a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_c94f_c94f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c954_unmute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c962_write_linear_cnt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c965_end_write_apu(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c966_opcode_noise_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c968_opcode_sample_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c98d_c98d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c99d_no_track_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9a8_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_c9ab_opcode_chan_params(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9c8_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9da_opcode_chan_volume_low(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c9e2_opcode_chan_volume_high(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_c9ec_opcode_noise_set_volume(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_c9f4_opcode_set_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca0a_opcode_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca22_note_table_lookup(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca30_opcode_play_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca40_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ca42_one_left_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ca45_ca45(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca49_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ca4b_one_right_shift(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ca4e_ca4e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ca52_end_wait_compute(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca5d_ca5d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca71_opcode_play_timed_note(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ca79_ca79(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ca97_opcode_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_caa4_opcode_noise_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_caaf_opcode_noise_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cab1_opcode_long_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_caba_opcode_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cacf_opcode_noise_halt(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cae4_opcode_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_caea_caea(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_caec_set_value(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_caf8_opcode_pulse_meta_uslide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_caff_opcode_pulse_meta_dslide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb03_opcode_pulse_meta_common(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb0d_cb0d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb11_cb11(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cb17_cb17(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb23_end_note(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb2f_cb2f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb36_cb36(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cb3b_keep_volume(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb3d_set_volume_mask(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cb45_cb45(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb4b_replace_duty(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb55_end_volume_duty(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb5b_cb5b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb66_end_pitch_slide(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cb69_opcode_noise_set_periodic(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cb6d_cb6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cb75_unset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb7a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cb80_opcode_noise_play_timed_freq(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cb97_opcode_noise_pitch_slide_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cba4_opcode_noise_pitch_slide_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cbac_pulse1_opcode_routines_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
}
void seg_cbb3_cbb3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_INY();
	if (emu.stopped) { return; }
}
void seg_cbbc_pulse1_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
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
	++emu.pc; emu.Op_ROR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
}
void seg_cbcc_noise_opcode_routines_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROR_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
}
void seg_cbd5_noise_opcode_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
}
void seg_cbde_particle_draw(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbe4_process_one_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cbe9_cbe9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cbec_cbec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cbef_skip_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbf4_next_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cbff_cbff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc00_process_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc10_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc1a_cc1a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cc21_cc21(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cc26_cc26(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc3f_hide_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc44_particle_drawn(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc4b_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc4c_particle_handlers_reinit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc57_cc57(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc58_loop_on_particle_boxes(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc5a_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc5f_cc5f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc68_cc68(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc69_loop_on_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc6d_next_particle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cc73_cc73(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc7c_cc7c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cc7f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc80_deactivate_particle_block(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cc88_cc88(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cc89_hide_particles(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cc8d_cc8d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cc92_second_block(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cc94_set_sprite_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cca1_cca1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cca2_hide_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccb0_construct_palettes_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ccb3_ccb3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccc9_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccd4_ccd4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ccda_push_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cce8_construct_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cceb_cceb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccf3_copy_header_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ccfe_ccfe(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd02_copy_payload_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd0d_cd0d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd13_clear_bg_bot_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd26_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd2f_cd2f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd31_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd37_cd37(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd3d_cd3d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd3e_switch_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd42_copy_one_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd44_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd4e_cd4e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd5f_cd5f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd60_switch_selected_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_cd64_cd64(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cd68_select_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd69_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cd6a_merge_to_player_velocity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd6c_add_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd7b_cd7b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cd8c_check_diff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cd90_cd90(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_cd96_cd96(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cda3_add_step_size(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdb8_cdb8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_cdba_cdba(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdca_decrement(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdd7_next_component(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdde_cdde(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cde3_apply_player_gravity(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cdfa_cdfa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cdfb_check_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce02_ce02(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce06_ce06(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce07_simple_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ce0b_ce0b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ce0f_ce0f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce16_ce16(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ce18_end_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce1f_ce1f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ce21_end_right_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce28_ce28(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ce2a_end_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ce31_ce31(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ce33_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce35_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce36_oos_platform_handler(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce42_ce42(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce44_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce46_ce46(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce52_ce52(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce54_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce56_ce56(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce62_ce62(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce64_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce66_ce66(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce72_ce72(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce74_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ce76_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce78_not_in_platform(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ce79_place_character_ppu_tiles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce88_ce88(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ce92_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ce99_end_set_ppu_addr(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ceae_ceae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ceaf_controller_callbacks(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ceb3_check_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ceb7_ceb7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cece_next_controller_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ced3_ced3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cee5_sleep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cee8_cee8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ceeb_particle_directional_indicator_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf24_cf24(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf25_set_particle_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf4b_particle_directional_indicator_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_cf4f_cf4f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf50_do_something(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf5d_cf5d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cf60_cf60(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cf63_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_cf68_cf68(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf6a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf6b_move_particles(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf76_cf76(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_cf77_move_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cf9d_cf9d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfa2_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfa4_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfb4_cfb4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfb9_separate(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfbe_set_y_direction(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfd3_cfd3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_cfd8_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cfda_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_cff4_particle_death_start(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d036_d036(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d037_place_one_particle(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d045_d045(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d047_no_reposition_x(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d058_d058(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d05a_no_reposition_y(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d082_particles_start_position_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d089_particles_start_position_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d090_particle_death_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d096_d096(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0a4_d0a4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0ab_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d0ad_do_nothing(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d0ae_go_disable_box(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d0b3_d0b3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d0b8_audio_music_power(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0c9_audio_music_weak(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0d4_audio_music_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0df_audio_play_crash(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0ef_audio_play_death(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d0ff_audio_play_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d10f_audio_play_parry(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d11f_audio_play_shield_hit(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d12f_audio_play_shield_break(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d13f_audio_play_title_screen_text(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d14f_global_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d154_d154(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d167_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d16f_d16f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d177_d177(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d199_d199(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d19e_d19e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d1a1_d1a1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d1d6_init_character_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d1e6_character_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d1ee_character_selection_screen_copy_property(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d204_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d20f_d20f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d215_character_selection_screen_copy_portrait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d239_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d241_d241(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d247_character_selection_copy_to_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_d24d_d24d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d253_stay_on_menu_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d256_d256(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d270_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d27b_d27b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d286_character_selection_tick_char_anims(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
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
void seg_d29b_d29b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZER();
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
void seg_d2b0_d2b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d2b6_tick_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2c5_d2c5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d2c8_character_selection_get_char_property(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d2eb_character_selection_construct_char_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d2f6_d2f6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d2fc_character_selection_change_global_game_state_lite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d309_clr_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d312_d312(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d315_d315(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXS_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d31b_character_selection_reset_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d323_d323(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d329_default_config(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d344_init_config_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d347_d347(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d357_d357(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d367_d367(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d377_config_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d37f_init_credits_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d382_d382(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d392_d392(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3a5_load_background(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d3ae_d3ae(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d3b0_end_inc_vector(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d3b6_d3b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d3bc_d3bc(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d3ce_d3ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3d3_d3d3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3d8_d3d8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3dd_d3dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3e2_d3e2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d3e7_d3e7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d402_write_one_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d411_d411(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d42b_write_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d431_d431(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d433_end_inc_cursor(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d437_d437(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d43b_d43b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d43f_d43f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d443_d443(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d44c_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d454_filled_space(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d45c_new_line(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d461_end_write_credits(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d464_d464(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d465_fill_attributes_line(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d467_write_attribute_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d46f_d46f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d470_credits_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d478_d478(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d47c_d47c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d480_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d484_d484(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d488_d488(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d48b_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d490_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d491_init_donation_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4a1_d4a1(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4ac_d4ac(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4af_d4af(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d4b4_donation_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4b7_d4b7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4bf_d4bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d4c1_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d4c5_d4c5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d4c9_d4c9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d4cd_d4cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d4d1_d4d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d4d5_d4d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d4d9_d4d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d4dd_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d4e2_d4e2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d4e5_go_back(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4ea_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d4f2_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_d4f6_d4f6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d4fa_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d511_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d512_option_to_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_d517_nt_payload_btc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d51d_nt_payload_paypal(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d525_nt_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d527_init_donation_btc_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d532_init_donation_paypal_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d53a_init_donation_qr_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d542_d542(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d54d_d54d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d550_d550(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d551_donation_qr_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d559_d559(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d55d_d55d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d561_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d565_d565(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d569_d569(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d56c_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d571_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d572_game_modes_init_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
}
void seg_d574_game_modes_init_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
}
void seg_d576_game_modes_pre_update_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
}
void seg_d578_game_modes_pre_update_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d57a_init_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d57d_d57d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d582_d582(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d587_d587(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d58c_d58c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d591_d591(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d595_zero_game_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d59c_d59c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5b8_d5b8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5ba_update_addr_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5ca_d5ca(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5e2_d5e2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d5f6_position_player_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d615_d615(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d641_d641(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d65e_d65e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d671_d671(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d685_initialize_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d69e_d69e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d6a3_d6a3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6b0_d6b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6b5_d6b5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6b8_d6b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6bd_d6bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6c8_d6c8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6cd_d6cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6d0_d6d0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d6d5_d6d5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d6da_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d6df_d6df(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d6fa_d6fa(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d715_d715(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d718_d718(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d71b_d71b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d72a_d72a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d72b_place_player_a_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d72d_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d739_d739(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d73a_place_player_b_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d73c_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d748_d748(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d749_place_character_normal_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d75c_place_character_alternate_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d76f_place_character_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d793_place_character_ppu_illustrations(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7c6_d7c6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d7c7_illustrations_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_d7c9_illustrations_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_d7cb_header_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_d7cf_header_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ABY();
	if (emu.stopped) { return; }
}
void seg_d7d3_game_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7d6_d7d6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d7e5_d7e5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d7e9_d7e9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7ec_d7ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d7f0_d7f0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7f5_d7f5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7fa_d7fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d7fd_end_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d7fe_no_screen_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d802_d802(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d805_d805(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d809_no_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d821_d821(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d824_d824(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d827_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d828_slowdown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d82c_d82c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d832_d832(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d839_keep_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d840_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d849_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d84a_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d84c_hitstun_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d850_d850(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d852_hitstun_next_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d857_d857(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d859_hitbox_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d85c_d85c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d861_d861(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d863_update_one_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d878_d878(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d87e_d87e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d88d_end_input_event(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d893_d893(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d896_d896(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d89a_d89a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d89d_d89d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d8a0_end_visuals(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d8a5_d8a5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d8a6_player_state_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8b6_check_player_hit(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d8bc_d8bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d8bf_process_checks(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d8e2_d8e2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_d8e6_d8e6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d909_d909(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d90b_d90b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d90e_d90e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d935_d935(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d942_check_hitbox_hurtbox(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d965_d965(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_d967_d967(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d96c_d96c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d971_d971(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d986_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_d989_hurt_player(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d98c_d98c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_d98f_d98f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d99c_d99c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_d99f_cap_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9a1_apply_damages(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9bc_d9bc(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9c9_apply_force_vector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_d9fe_d9fe(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da1a_da1a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da2d_da2d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da41_passthrough_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da47_end_abs_kb_h(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_da4b_da4b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da5f_passthrough_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da65_end_abs_kb_v(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da87_da87(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_da88_move_player(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_da98_vertical(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_daa9_daa9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_daae_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dab0_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dabc_down(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dac5_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dacb_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dad0_dad0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dad2_horizontal(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dae3_dae3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dae8_set_relative_msb_neg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_daea_end_sign_extend(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_daf6_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_daff_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db05_end_set_callback(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_db0a_db0a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db0c_horizontal_end(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db25_move_player_handle_one_platform_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db3d_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db48_db48(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_db4a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_db4c_db4c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db57_db57(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_db59_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_db5b_db5b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db66_db66(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_db68_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_db6a_db6a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db75_db75(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_db77_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_db79_db79(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db8e_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_db8f_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_db9b_db9b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_db9d_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_db9f_db9f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbab_dbab(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dbad_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dbaf_dbaf(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbbb_dbbb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dbbd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dbbf_dbbf(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbcb_dbcb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dbcd_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dbcf_dbcf(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbe5_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dbe6_move_player_handle_one_platform_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dbfe_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc09_dc09(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc0b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc0d_dc0d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc18_dc18(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc1a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc1c_dc1c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc27_dc27(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc29_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc2b_dc2b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc36_dc36(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc38_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc3a_dc3a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc4f_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dc50_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc5c_dc5c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc5e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc60_dc60(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc6c_dc6c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc6e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dc70_dc70(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc7c_dc7c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc7e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc80_dc80(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dc8c_dc8c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc8e_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dc90_dc90(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dca6_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dca7_move_player_handle_one_platform_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcbf_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcca_dcca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dccc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dcce_dcce(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcd9_dcd9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dcdb_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dcdd_dcdd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dce8_dce8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dcea_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dcec_dcec(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dcf7_dcf7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dcf9_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dcfb_dcfb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd08_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd09_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd15_dd15(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd17_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd19_dd19(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd25_dd25(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd27_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd29_dd29(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd35_dd35(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd37_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd39_dd39(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd47_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd49_dd49(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd57_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dd58_move_player_handle_one_platform_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd70_one_screen_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd7b_dd7b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd7d_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd7f_dd7f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd8a_dd8a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd8c_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dd8e_dd8e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dd99_dd99(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd9b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_dd9d_dd9d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dda8_dda8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddaa_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddac_ddac(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddbd_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ddbe_oos_platform(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddca_ddca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddcc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddce_ddce(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddda_ddda(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_dddc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ddde_ddde(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddea_ddea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddec_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddee_ddee(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ddfa_ddfa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddfc_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_ddfe_ddfe(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de10_no_collision(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_de11_check_player_position(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de1b_de1b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de1d_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de1f_de1f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de29_de29(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de2b_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de2d_de2d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de37_de37(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de39_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de3b_de3b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de45_de45(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de47_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de49_de49(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de4d_de4d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de64_de64(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de67_offground(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de76_de76(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de79_set_death_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_de7c_de7c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_de8a_de8a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_de8c_de8c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de91_pass_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_de96_left_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de98_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de9a_end_cap_vertical_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_de9e_de9e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_dea0_dea0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_dea5_pass_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_deaa_top_edge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_deac_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_deae_end_cap_horizontal_blast(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_deb1_deb1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_deb5_deb5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dec8_dec8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_decb_gameover(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_decf_decf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ded2_ded2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ded8_no_set_winner(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_deef_deef(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_def3_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_def4_write_player_damages(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_defa_defa(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df05_prepare_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df0d_end_player_variables(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df1d_df1d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df47_df47(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df4c_stocks_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df6c_df6c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_df71_empty_stock(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df73_set_stock_tile(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df7c_df7c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_df84_stocks_positions(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_df88_character_icons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_df8a_player_effects(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df8d_df8d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df90_df90(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_df93_df93(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_df94_blinking(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfa2_dfa2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfaf_no_hitstun(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_dfb3_dfb3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfc0_player_one(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_dfc5_dfc5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfc7_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfd2_dfd2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_dfd5_update_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_dfd7_update_one_player_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e010_e010(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e013_e013(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e019_e019(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e027_e027(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e029_e029(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e02d_e02d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e02f_e02f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e032_oos_left(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e047_oos_right(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e05c_oss_top(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e071_oos_bot(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e083_oos_indicator_placed(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e092_e092(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e095_e095(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e097_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e09a_e09a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e09d_all_player_sprites_updated(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e0a0_e0a0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0a1_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e0a3_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e0a5_oos_anim_state_per_player_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLV_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e0a7_oos_anim_state_per_player_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0a9_game_mode_local_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0ac_game_mode_local_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e0b0_e0b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e0b4_e0b4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e0b8_e0b8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e0bc_e0bc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e0bf_end_ai(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e0c0_game_mode_online_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0c3_game_mode_online_pre_update(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e0c6_init_gameover_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e0e8_e0e8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e10a_e10a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e11a_e11a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e11f_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e124_e124(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e133_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e13e_e13e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e159_e159(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e174_e174(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e185_winner_name_writing(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e192_e192(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1be_e1be(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e1d7_e1d7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e201_e201(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e217_initialize_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e232_e232(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e234_position_a_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e237_e237(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e23d_e23d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e248_e248(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e24b_e24b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e252_gameover_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e254_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e262_e262(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e266_e266(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e269_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e26e_e26e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e271_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e279_update_animations(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e27c_e27c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e27f_e27f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e280_next_screen_by_game_mode(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e282_gamover_update_players(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2a3_e2a3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2a6_e2a6(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2bd_e2bd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2ca_e2ca(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2cd_e2cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e2ce_update_balloons(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2d2_update_one_balloon(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2d5_e2d5(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e2e9_e2e9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2ed_end_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e2f0_e2f0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e302_e302(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e307_positive(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e309_high_byte_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e326_e326(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e331_background(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e339_end_sprite_layer(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e343_e343(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e344_gameover_random_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e351_init_mode_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e354_e354(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e364_e364(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e36f_e36f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e372_e372(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e377_mode_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e37a_e37a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e37d_e37d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e37f_check_one_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e383_e383(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e387_e387(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e38b_e38b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e38f_e38f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e393_e393(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e397_e397(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e39b_e39b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e39f_e39f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e3a3_next_controller(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3a8_no_press(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3ab_go_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e3b1_e3b1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3b4_from_donation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3bb_go_left(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e3bf_e3bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3c6_go_right(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e3ce_e3ce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e3d5_go_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3da_go_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3e4_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e3e7_e3e7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e3eb_show_selected_option(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e402_e402(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e406_nt_highlight_payload_local(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e41b_nt_highlight_payload_online(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e430_nt_highlight_payload_donation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e445_nt_highlight_payload_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e448_nt_highlight_payload_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
}
void seg_e44b_init_netplay_launch_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e460_e460(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e46b_e46b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e46e_e46e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e472_wait_esp(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e47d_e47d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e488_e488(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e48c_e48c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e497_e497(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e498_esp_status_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_e49d_netplay_launch_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4a0_e4a0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4a3_e4a3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e4b2_e4b2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e4b3_state_routines_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_EOR_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ROL_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e4bb_e4bb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_e4c3_error_state_routines_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_e4d7_error_state_routines_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
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
void seg_e4db_connecting_wifi_query(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e4e2_e4e2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e4ed_e4ed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e506_cmd_get_wifi_status(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e508_connecting_wifi_wait(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e513_e513(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e517_e517(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_e51e_e51e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e52b_connected(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e530_failed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e537_crazy(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e53e_in_progress(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e540_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e543_wifi_status_action_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROL_ABX();
	if (emu.stopped) { return; }
}
void seg_e54a_wifi_status_action_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e551_select_server_query_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e558_e558(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e563_e563(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e568_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e57c_cmd_get_server_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e57e_select_server_draw(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e585_e585(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e598_e598(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5ab_e5ab(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5cd_e5cd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e5d1_e5d1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e5d8_e5d8(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5eb_e5eb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e5f3_end_custom_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e5f5_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e5f8_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e619_server2_name(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_e61f_server3_name(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
}
void seg_e625_server1_buffer_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e628_server2_buffer_header(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e62e_select_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e632_e632(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e638_e638(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e63c_e63c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e640_e640(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e644_e644(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e648_e648(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e64b_next_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_e653_e653(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e65a_previous_server(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e65e_e65e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e663_end_inputs(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e66e_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e671_next_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e67c_e67c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e689_server_set(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e694_e694(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6a7_e6a7(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6b2_e6b2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e6bd_e6bd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e6c7_connect_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_e6c9_server_north_america_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_e6df_server_europe_settings(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_e6f5_server_cfg_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e6f7_server_cfg_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e6f9_server_name_hidden(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_e706_the_purge(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e70d_e70d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e71c_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
}
void seg_e730_client_id_request_rnd(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e73d_client_id_set_generic(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e742_e742(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e75b_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_e75c_client_id_set_low(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e761_client_id_set_hi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e766_estimate_latency_1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e76d_e76d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e778_e778(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e77d_estimate_latency_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e794_estimate_latency_2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e799_e799(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7a4_e7a4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e7b6_e7b6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e7bf_e7bf(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7c4_error_no_contact(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7cb_error_bad_ping(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7cf_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7d2_connection_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e7d9_e7d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e7de_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
}
void seg_e7f2_connection_send_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e855_connection_wait_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e860_e860(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e864_e864(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e868_e868(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e86d_handle_message(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e874_e874(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e87b_e87b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_e87f_e87f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e883_disconnected_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e88a_start_game_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e88d_connected_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e892_error_crazy_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e896_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e899_wait_game(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8a0_e8a0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e8bd_got_start_game_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e8f3_e8f3(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8f6_e8f6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e8fd_e8fd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e904_e904(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e907_e907(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e924_e924(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e93f_e93f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e941_wait_one_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e945_e945(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_e94b_e94b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e950_buffer_you_are_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e963_buffer_you_are_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_e976_buffers_you_are_addr_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_e978_buffers_you_are_addr_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
}
void seg_e97a_buffer_player_a_ping(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
}
void seg_e99e_header_player_a_indicator(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_e9a4_indicator_excellent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_e9ad_indicator_good(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
}
void seg_e9b6_indicator_poor(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ZEX();
	if (emu.stopped) { return; }
}
void seg_e9bf_indicator_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZEY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9c2_indicator_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_IMM();
	if (emu.stopped) { return; }
}
void seg_e9c5_no_contact(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9cc_e9cc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e9cf_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_e9e3_bad_ping(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_e9ea_e9ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_e9ed_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_ea01_crazy_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea08_ea08(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea0b_step_title(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	if (emu.stopped) { return; }
}
void seg_ea1f_disconnected(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea55_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ea5c_ea5c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea62_space(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea64_char_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea6d_ea6d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ea75_back_on_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea79_ea79(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ea7f_ea7f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ea84_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea85_show_step_name(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ea94_ea94(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ea95_buffer_header(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
}
void seg_ea98_init_stage_selection_screen(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eaa8_stage_selection_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eab0_stage_selection_screen_long_memcopy(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eab7_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_eabe_eabe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eac4_stage_selection_tick_music(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eac7_eac7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eacd_stage_selection_back_to_char_select(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eae1_init_title_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eae9_eae9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eaf4_eaf4(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eaff_eaff(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb18_eb18(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb2c_emu_50hz_done(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb33_eb33(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb3e_eb3e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_eb42_eb42(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb4a_eb4a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb4d_eb4d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb50_eb50(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eb53_soft_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb5a_end_menu_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb5b_set_title_chr(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb7d_eb7d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb7e_init_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eb81_eb81(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eb92_eb92(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eb93_palette_title_initial(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebb3_title_screen_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebbb_ebbb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebbe_ebbe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebc1_ebc1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ebc9_ebc9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ebce_ebce(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ebd1_update_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ebd5_ebd5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ebdc_cheat_succeed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebe1_press_any_key(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ebe5_ebe5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ebe9_check_controller_b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ebed_ebed(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ebf1_ebf1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ebf4_next_screen(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebf7_ebf7(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ebfc_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ebfd_cheatcode(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ec11_tick_title_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec22_ec22(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec23_anim_state_handlers_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ROL_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABI();
	if (emu.stopped) { return; }
}
void seg_ec29_anim_state_handlers_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_ABS();
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
void seg_ec2f_change_anim_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec36_wait_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ec3c_ec3c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec3f_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec40_show_logo(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec43_ec43(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec45_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec51_ec51(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec54_ec54(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec63_ec63(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec64_logo_palette_nt_buffer(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_ec6c_shake(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec6f_ec6f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ec73_ec73(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec76_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec77_wait_text(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ec7d_ec7d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec80_ec80(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec83_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ec84_show_text(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ec8c_ec8c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ec8f_ec8f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ecc2_finish(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecc5_ecc5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_eccd_eccd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecd0_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ecd1_text_colors(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
}
void seg_ecd4_title_screen_restore_music_state(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ecd8_ecd8(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ecdb_ecdb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ecde_mute(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ece1_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ecf3_state_transition_pretransition_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
}
void seg_ed03_state_transition_posttransition_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ed0b_state_transition_pre_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed1e_ed1e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed1f_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	if (emu.stopped) { return; }
}
void seg_ed29_state_transition_pre_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed3c_ed3c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed3d_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	if (emu.stopped) { return; }
}
void seg_ed47_state_transition_post_scroll_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed5c_ed5c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed65_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLP_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BVC_REL();
	if (emu.stopped) { return; }
}
void seg_ed73_state_transition_post_scroll_up(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed88_ed88(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ed89_camera_steps(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ed97_scroll_transition(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ed9b_ed9b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edb5_set_up_values(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edce_end_set_values(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_edd2_edd2(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edd8_do_not_touch_offsets(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eddc_save_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_ede3_ede3(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edf3_hidden_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_edf8_two_byte_position_stored(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee04_ee04(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee06_scroll_frame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee0c_ee0c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ee10_ee10(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee12_set_camera_scroll(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee1f_ee1f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_ee23_ee23(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ee2b_ee2b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ee33_simple_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ee36_end_sleep(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee42_clean(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee45_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ee46_move_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ee49_ee49(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee4d_ee4d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee51_ee51(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee55_ee55(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee59_ee59(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee5d_ee5d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee61_ee61(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee65_ee65(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ee69_ee69(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ee70_update_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee73_vertical_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee89_ee89(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ee8c_ee8c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ee8f_ee8f(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ee93_update_screen_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eea7_move_one_screen_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eeb6_eeb6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_eebb_hide_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eebd_update_oam(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eecb_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_eecc_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eef0_re_init_menu(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eef2_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_eefd_eefd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef00_ef00(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ef01_cloud_sprites(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_ef3d_set_menu_chr(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef5f_ef5f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ef60_tick_moving_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef68_ef68(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef71_move_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_ef75_ef75(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef7a_ef7a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_ef7e_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ef7f_menu_position_clouds(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef81_position_one_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_ef84_ef84(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_ef87_ef87(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_ef88_menu_position_cloud(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef94_ef94(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_ef98_do_not_hide(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efa5_place_one_sprite(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_efab_efab(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efaf_skip_y_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efc4_efc4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_efc7_sprite_offset_x(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_efc9_efc9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_efcc_sprite_offset_y(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_efd1_stage_generic_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_efdb_wait_vbi(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_efe0_efe0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_effb_copy_palette(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f005_f005(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f014_f014(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f024_copy_header_loop(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f02f_copy_elements_loop(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f036_f036(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f03e_copy_one_element(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f049_f049(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f04c_copy_data_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f04d_stage_iterate_all_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f04f_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f054_f054(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f057_f057(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f05b_f05b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f062_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f066_f066(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f068_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f06d_f06d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f070_f070(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f074_f074(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f07b_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f07f_f07f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f081_check_current_element(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f086_f086(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f089_f089(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f08d_f08d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ADC_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f094_end_iterate_elements(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f096_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f097_ai_action_double_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f0a0_ai_action_jump(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f0aa_ai_action_right_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f0af_ai_action_down_tilt(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STY_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f0b4_ai_action_special_up(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f0bf_ai_action_idle(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f0c2_ai_level_to_delay(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0c5_ai_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0d4_ai_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0e6_find_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f0f9_run_current_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f118_f118(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f120_f120(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f122_do_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f125_f125(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f12b_f12b(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f12c_ai_continue_action(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f135_f135(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f139_next_step(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f146_f146(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f14b_set_controller(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f153_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f154_ai_attack_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f188_f188(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f18d_right_facing(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f18f_end_direction_flag(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f195_check_one_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f19c_f19c(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1a3_condition_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f1fe_f1fe(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f200_f200(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f213_f213(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f216_next_attack(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f21a_f21a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f21d_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f21e_ai_chase_selector(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f228_f228(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f22a_end_signed_cmp(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f22c_f22c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f230_f230(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f237_f237(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f23b_no_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f245_f245(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f249_direction_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f24f_f24f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f253_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f259_f259(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCS_REL();
	if (emu.stopped) { return; }
}
void seg_f260_end_jump_if_higher(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f26e_f26e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f279_negative_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f281_end_set_offset(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f299_f299(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f29d_dont_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2a8_jump(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2b3_tap_down(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2bf_action_set(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f2c6_ai_delay_action(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f2ca_f2ca(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2dd_no_delay(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f2e1_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f2e2_esp_send_cmd(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2eb_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f2f4_f2f4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f2f5_esp_get_msg(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BMI_REL();
	if (emu.stopped) { return; }
}
void seg_f2fc_f2fc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f303_store_msg(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f30e_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f311_f311(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f31a_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f31b_network_init_stage(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f326_clear_one_input(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f331_f331(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f341_network_tick_ingame(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f345_f345(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f348_do_tick(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f35b_f35b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f399_controller_sent(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BPL_REL();
	if (emu.stopped) { return; }
}
void seg_f39e_f39e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3a9_f3a9(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3b4_f3b4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f3ba_f3ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f3bd_skip_message(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3c7_state_updated(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3d6_f3d6(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f3d9_f3d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3dd_f3dd(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3e1_f3e1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f3e5_f3e5(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3e7_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f3e8_update_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f3fc_ancient(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f3ff_f3ff(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f402_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f403_rollback_state(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f40d_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f41e_f41e(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f420_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f42a_f42a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f42c_copy_one_byte(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f436_f436(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f43d_f43d(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f445_screen_shake_updated(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f45d_player_a(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f468_player_b(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f46f_ok(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4c2_copy_one_char(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4d9_f4d9(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4e0_f4e0(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f4e4_roll_forward_one_step(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f4ea_f4ea(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4ec_f4ec(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f4f2_f4f2(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4f4_f4f4(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f4fa_f4fa(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f4fc_f4fc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f502_f502(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f505_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f51c_f51c(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f51f_f51f(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f522_f522(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f526_f526(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f52a_f52a(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BNE_REL();
	if (emu.stopped) { return; }
}
void seg_f52e_f52e(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_INC_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f530_end_inc(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f533_dont_do_it(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f548_set_opponent_buttons_from_history(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CPY_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BEQ_REL();
	if (emu.stopped) { return; }
}
void seg_f54d_f54d(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BCC_REL();
	if (emu.stopped) { return; }
}
void seg_f554_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_AND_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAY_IMP();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
	if (emu.stopped) { return; }
}
void seg_f55a_mark_nexts_unknown(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f562_known(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f568_mapper_init(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f586_stages_init_routine(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_AND_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CMP_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STX_ZEY();
	if (emu.stopped) { return; }
}
void seg_f5a6_stages_data(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ADC_INX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f5ae_stages_illustration(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BVS_REL();
	if (emu.stopped) { return; }
}
void seg_f5b0_f5b0(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_SBC_ZER();
	if (emu.stopped) { return; }
}
void seg_f5b6_stages_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_INX();
	if (emu.stopped) { return; }
}
void seg_f5be_stages_tileset_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5c2_stages_tileset_bank(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f5c6_characters_bank_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f5c8_characters_tiles_data_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
void seg_f5cc_characters_tiles_number(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LSR_ABX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	if (emu.stopped) { return; }
}
void seg_f5d0_characters_properties_msb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_STA_ABX();
	if (emu.stopped) { return; }
}
void seg_f5d6_characters_palettes_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_EOR_ABX();
	if (emu.stopped) { return; }
}
void seg_f5ea_characters_start_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5ec_characters_start_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5ee_characters_update_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5f0_characters_update_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5f2_characters_offground_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5f4_characters_offground_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5f6_characters_onground_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5f8_characters_onground_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5fa_characters_input_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5fc_characters_input_routines_table_msb(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f5fe_characters_onhurt_routines_table_lsb(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	if (emu.stopped) { return; }
}
void seg_f602_set_player_animation(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f619_f619(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_INY();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
	if (emu.stopped) { return; }
}
void seg_f62b_server_bytecode_error(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f630_server_bytecode_init(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f633_f633(mos6502<GameState::EmulatorRunContext>& emu) {
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
void seg_f650_f650(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f655_server_bytecode_tick(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f658_f658(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f65d_credits_begin(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f660_f660(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f674_f674(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f698_f698(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f6ba_f6ba(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f6e1_f6e1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f6f1_f6f1(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f709_f709(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f732_f732(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f741_f741(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_JSR_ABS();
	if (emu.stopped) { return; }
}
void seg_f7c6_credits_end(mos6502<GameState::EmulatorRunContext>& emu) {
	++emu.pc; emu.Op_BRK_IMP();
	if (emu.stopped) { return; }
}
}

std::array<void(*)(mos6502<GameState::EmulatorRunContext>&), 0x4000> GameState::emulator_compiled_segments = {
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_c4da_animation_init_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c511_animation_state_change_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c52c_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c581_end,
	&emulator_compiled_segments_funcs::seg_c582_animation_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c59c_c59c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c59f_inc_current_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5a4_skip_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5a8_c5a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5ad_c5ad,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b0_end_skip_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b5_c5b5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b9_c5b9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5c4_store_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5d5_end,
	&emulator_compiled_segments_funcs::seg_c5d6_add_to_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5e2_draw_anim_frame,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5e4_handle_one_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5e8_c5e8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5ec_c5ec,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5f0_c5f0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5f4_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c609_c609,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c60c_clear_unused_sprites,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c610_c610,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c619_c619,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c621_clear_one_unused_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62b_end,
	&emulator_compiled_segments_funcs::seg_c62c_call_pointed_subroutine13,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62f_anim_frame_move_sprite,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c633_c633,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c63d_c63d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c642_use_last_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c644_set_sprite_used,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c649_default_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c64f_end_init_direction_data,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c653_c653,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c658_use_first_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c65a_sprite_index_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c662_c662,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c667_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c669_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c678_c678,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c67d_c67d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c682_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c688_c688,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c68b_end_anim_hook,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c69f_c69f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6a4_flip_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ab_got_relative_pos,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ae_c6ae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b3_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b5_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6c4_c6c4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ca_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6cf_c6cf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d4_inc_sprite_index,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d6_end_next_sprite,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d9_skip,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6e2_end,
	&emulator_compiled_segments_funcs::seg_c6e3_boxes_overlap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ed_c6ed,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ef_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6f1_c6f1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6fb_c6fb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6fd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ff_c6ff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c709_c709,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c70b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c70d_c70d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c717_c717,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c719_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c71b_c71b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c720_no_overlap,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c722_end,
	&emulator_compiled_segments_funcs::seg_c723_audio_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c726_c726,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c72c_audio_play_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c735_c735,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c73a_c73a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c752_c752,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c766_c766,
	&emulator_compiled_segments_funcs::seg_c767_init_channel,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c777_c777,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c787_c787,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c78d_pulse_2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c790_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c79c_end_pulse_specifics,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7b9_audio_mute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d4_audio_unmute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7dc_square_reinit_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_c7f6_audio_music_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7ff_c7ff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c804_c804,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c809_c809,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c80e_c80e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c811_end,
	&emulator_compiled_segments_funcs::seg_c812_noise_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c816_c816,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c819_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c835_overflow,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c83a_c83a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c842_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c847_store_result,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c84a_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c84f_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c871_c871,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c885_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c88d_c88d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c895_regular_write,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a6_end_write_apu,
	&emulator_compiled_segments_funcs::seg_c8a7_pulse_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8ac_c8ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8b3_do_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8c5_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8cb_negative,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8ce_end_byte_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8d6_end_effects,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	&emulator_compiled_segments_funcs::seg_c901_c901,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c916_skip_opcode_update,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c91b_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c928_c928,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c93c_c93c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c945_triangle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c94a_c94a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c94f_c94f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c954_unmute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c962_write_linear_cnt,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c965_end_write_apu,
	&emulator_compiled_segments_funcs::seg_c966_opcode_noise_sample_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c968_opcode_sample_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c98d_c98d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c99d_no_track_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a8_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9ab_opcode_chan_params,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9c8_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9da_opcode_chan_volume_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9e2_opcode_chan_volume_high,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9ec_opcode_noise_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f4_opcode_set_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca0a_opcode_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca22_note_table_lookup,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca30_opcode_play_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca40_left_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca42_one_left_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca45_ca45,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca49_right_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca4b_one_right_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca4e_ca4e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca52_end_wait_compute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca5d_ca5d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca71_opcode_play_timed_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca79_ca79,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca97_opcode_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caa4_opcode_noise_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caaf_opcode_noise_long_wait,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cab1_opcode_long_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caba_opcode_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cacf_opcode_noise_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cae4_opcode_pitch_slide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caea_caea,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caec_set_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caf8_opcode_pulse_meta_uslide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caff_opcode_pulse_meta_dslide,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb03_opcode_pulse_meta_common,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb0d_cb0d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb11_cb11,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb17_cb17,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb23_end_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb2f_cb2f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb36_cb36,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb3b_keep_volume,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb3d_set_volume_mask,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb45_cb45,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb4b_replace_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb55_end_volume_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb5b_cb5b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb66_end_pitch_slide,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb69_opcode_noise_set_periodic,
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
	&emulator_compiled_segments_funcs::seg_cb75_unset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb7a_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb80_opcode_noise_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb97_opcode_noise_pitch_slide_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cba4_opcode_noise_pitch_slide_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbac_pulse1_opcode_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb3_cbb3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbbc_pulse1_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbcc_noise_opcode_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbd5_noise_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbde_particle_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbe4_process_one_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbe9_cbe9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbec_cbec,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbef_skip_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbf4_next_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbff_cbff,
	&emulator_compiled_segments_funcs::seg_cc00_process_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc10_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc1a_cc1a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc21_cc21,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc26_cc26,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc3f_hide_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc44_particle_drawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc4b_end,
	&emulator_compiled_segments_funcs::seg_cc4c_particle_handlers_reinit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc57_cc57,
	&emulator_compiled_segments_funcs::seg_cc58_loop_on_particle_boxes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc5a_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc5f_cc5f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc68_cc68,
	&emulator_compiled_segments_funcs::seg_cc69_loop_on_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc6d_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc73_cc73,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc7c_cc7c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc7f_end,
	&emulator_compiled_segments_funcs::seg_cc80_deactivate_particle_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc88_cc88,
	&emulator_compiled_segments_funcs::seg_cc89_hide_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc8d_cc8d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc92_second_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc94_set_sprite_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cca1_cca1,
	&emulator_compiled_segments_funcs::seg_cca2_hide_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb0_construct_palettes_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb3_ccb3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc9_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccd4_ccd4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccda_push_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cce8_construct_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cceb_cceb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccf3_copy_header_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccfe_ccfe,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd02_copy_payload_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd0d_cd0d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd13_clear_bg_bot_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd26_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd2f_cd2f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd31_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd37_cd37,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd3d_cd3d,
	&emulator_compiled_segments_funcs::seg_cd3e_switch_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd42_copy_one_tile,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd44_copy_one_byte,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd5f_cd5f,
	&emulator_compiled_segments_funcs::seg_cd60_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd64_cd64,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd68_select_player_b,
	&emulator_compiled_segments_funcs::seg_cd69_end,
	&emulator_compiled_segments_funcs::seg_cd6a_merge_to_player_velocity,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd6c_add_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd7b_cd7b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd8c_check_diff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd90_cd90,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd96_cd96,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cda3_add_step_size,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdb8_cdb8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdba_cdba,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdca_decrement,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd7_next_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdde_cdde,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cde3_apply_player_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_cdfb_check_in_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce02_ce02,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce06_ce06,
	&emulator_compiled_segments_funcs::seg_ce07_simple_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce0b_ce0b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce0f_ce0f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce16_ce16,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce18_end_left_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce1f_ce1f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce21_end_right_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce28_ce28,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce2a_end_top_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce31_ce31,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce33_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce35_not_in_platform,
	&emulator_compiled_segments_funcs::seg_ce36_oos_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce42_ce42,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce44_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce46_ce46,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce52_ce52,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce54_end_signed_cmp,
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
	&emulator_compiled_segments_funcs::seg_ce62_ce62,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce64_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce66_ce66,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce72_ce72,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce74_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce76_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce78_not_in_platform,
	&emulator_compiled_segments_funcs::seg_ce79_place_character_ppu_tiles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_ce92_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce99_end_set_ppu_addr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceae_ceae,
	&emulator_compiled_segments_funcs::seg_ceaf_controller_callbacks,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceb3_check_controller_state,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cece_next_controller_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ced3_ced3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cee5_sleep_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cee8_cee8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceeb_particle_directional_indicator_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf24_cf24,
	&emulator_compiled_segments_funcs::seg_cf25_set_particle_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf4b_particle_directional_indicator_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf4f_cf4f,
	&emulator_compiled_segments_funcs::seg_cf50_do_something,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf5d_cf5d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf60_cf60,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf63_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf68_cf68,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf6a_end,
	&emulator_compiled_segments_funcs::seg_cf6b_move_particles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf76_cf76,
	&emulator_compiled_segments_funcs::seg_cf77_move_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf9d_cf9d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa2_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa4_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfb4_cfb4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfb9_separate,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfbe_set_y_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd3_cfd3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd8_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfda_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cff4_particle_death_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d036_d036,
	&emulator_compiled_segments_funcs::seg_d037_place_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d045_d045,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d047_no_reposition_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d058_d058,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d05a_no_reposition_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d082_particles_start_position_offset_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d089_particles_start_position_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d090_particle_death_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d096_d096,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ab_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ad_do_nothing,
	&emulator_compiled_segments_funcs::seg_d0ae_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0b3_d0b3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0b8_audio_music_power,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0c9_audio_music_weak,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0d4_audio_music_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0df_audio_play_crash,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ef_audio_play_death,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0ff_audio_play_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d10f_audio_play_parry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d11f_audio_play_shield_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d12f_audio_play_shield_break,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d13f_audio_play_title_screen_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d14f_global_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d154_d154,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d167_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d16f_d16f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d199_d199,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d19e_d19e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1a1_d1a1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1d6_init_character_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e6_character_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1ee_character_selection_screen_copy_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d204_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d20f_d20f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d215_character_selection_screen_copy_portrait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d239_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d241_d241,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d247_character_selection_copy_to_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d24d_d24d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d253_stay_on_menu_bank,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d256_d256,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d270_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d27b_d27b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d286_character_selection_tick_char_anims,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b0_d2b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b6_tick_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2c5_d2c5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2c8_character_selection_get_char_property,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2eb_character_selection_construct_char_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2f6_d2f6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2fc_character_selection_change_global_game_state_lite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d309_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d312_d312,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d315_d315,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d31b_character_selection_reset_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d323_d323,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d329_default_config,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d344_init_config_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d347_d347,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d357_d357,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d367_d367,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d377_config_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d37f_init_credits_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d382_d382,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d392_d392,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3a5_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ae_d3ae,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b0_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3b6_d3b6,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ce_d3ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3d3_d3d3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3d8_d3d8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3dd_d3dd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e2_d3e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3e7_d3e7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d402_write_one_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d411_d411,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d42b_write_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d431_d431,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d433_end_inc_cursor,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d437_d437,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d43b_d43b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d43f_d43f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d443_d443,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d44c_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d454_filled_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d45c_new_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d461_end_write_credits,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d464_d464,
	&emulator_compiled_segments_funcs::seg_d465_fill_attributes_line,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d467_write_attribute_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d46f_d46f,
	&emulator_compiled_segments_funcs::seg_d470_credits_screen_tick,
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
	&emulator_compiled_segments_funcs::seg_d47c_d47c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d480_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d484_d484,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d488_d488,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d48b_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d490_end,
	&emulator_compiled_segments_funcs::seg_d491_init_donation_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4a1_d4a1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ac_d4ac,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4af_d4af,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b4_donation_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b7_d4b7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4bf_d4bf,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c1_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c5_d4c5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c9_d4c9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4cd_d4cd,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4d1_d4d1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4d5_d4d5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4d9_d4d9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4dd_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4e2_d4e2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4e5_go_back,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ea_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f2_go_right,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f6_d4f6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4fa_no_press,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d511_end,
	&emulator_compiled_segments_funcs::seg_d512_option_to_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d517_nt_payload_btc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d51d_nt_payload_paypal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d525_nt_payload_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d527_init_donation_btc_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d532_init_donation_paypal_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d53a_init_donation_qr_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d542_d542,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d54d_d54d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d550_d550,
	&emulator_compiled_segments_funcs::seg_d551_donation_qr_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d559_d559,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d55d_d55d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d561_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d565_d565,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d569_d569,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d56c_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d571_end,
	&emulator_compiled_segments_funcs::seg_d572_game_modes_init_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d574_game_modes_init_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d576_game_modes_pre_update_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d578_game_modes_pre_update_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d57a_init_game_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d57d_d57d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d582_d582,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d587_d587,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d58c_d58c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d591_d591,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d595_zero_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d59c_d59c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d5ba_update_addr_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ca_d5ca,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5f6_position_player_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d615_d615,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d641_d641,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d65e_d65e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d671_d671,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d685_initialize_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d6a3_d6a3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6b0_d6b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6b5_d6b5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6b8_d6b8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6bd_d6bd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6c8_d6c8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6cd_d6cd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6d0_d6d0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6d5_d6d5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6da_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6df_d6df,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d718_d718,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d71b_d71b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d72a_d72a,
	&emulator_compiled_segments_funcs::seg_d72b_place_player_a_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d72d_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d739_d739,
	&emulator_compiled_segments_funcs::seg_d73a_place_player_b_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d73c_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d748_d748,
	&emulator_compiled_segments_funcs::seg_d749_place_character_normal_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d75c_place_character_alternate_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d76f_place_character_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d793_place_character_ppu_illustrations,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7c6_d7c6,
	&emulator_compiled_segments_funcs::seg_d7c7_illustrations_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7c9_illustrations_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7cb_header_player_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7cf_header_player_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7d3_game_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7d6_d7d6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e5_d7e5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e9_d7e9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7ec_d7ec,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f0_d7f0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f5_d7f5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7fa_d7fa,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7fd_end_effects,
	&emulator_compiled_segments_funcs::seg_d7fe_no_screen_shake,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d802_d802,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d805_d805,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d809_no_slowdown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d821_d821,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d824_d824,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d827_end,
	&emulator_compiled_segments_funcs::seg_d828_slowdown,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d82c_d82c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d832_d832,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d839_keep_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d840_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d849_end,
	&emulator_compiled_segments_funcs::seg_d84a_update_players,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d84c_hitstun_one_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d850_d850,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d852_hitstun_next_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d857_d857,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d859_hitbox_one_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d85c_d85c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d861_d861,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d863_update_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d878_d878,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d87e_d87e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d88d_end_input_event,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d893_d893,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d896_d896,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d89a_d89a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d89d_d89d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a0_end_visuals,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a5_d8a5,
	&emulator_compiled_segments_funcs::seg_d8a6_player_state_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8b6_check_player_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8bc_d8bc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8bf_process_checks,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8e6_d8e6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d909_d909,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d90b_d90b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d90e_d90e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d935_d935,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d942_check_hitbox_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d965_d965,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d967_d967,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d96c_d96c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d971_d971,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d986_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d989_hurt_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d98c_d98c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d98f_d98f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d99f_cap_damages,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9a1_apply_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9bc_d9bc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9c9_apply_force_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9fe_d9fe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da1a_da1a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da2d_da2d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da41_passthrough_kb_h,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da47_end_abs_kb_h,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da4b_da4b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da5f_passthrough_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da65_end_abs_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da87_da87,
	&emulator_compiled_segments_funcs::seg_da88_move_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da98_vertical,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daa9_daa9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daae_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab0_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dabc_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac5_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dacb_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad0_dad0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad2_horizontal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae3_dae3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae8_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daea_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daf6_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daff_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db05_end_set_callback,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db0a_db0a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db0c_horizontal_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db25_move_player_handle_one_platform_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db3d_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db48_db48,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db4a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db4c_db4c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db57_db57,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db59_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db5b_db5b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db66_db66,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db68_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db6a_db6a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db75_db75,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db77_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db79_db79,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db8e_no_collision,
	&emulator_compiled_segments_funcs::seg_db8f_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db9b_db9b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db9d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db9f_db9f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbab_dbab,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbad_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbaf_dbaf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbbb_dbbb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbbd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbbf_dbbf,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_dbcd_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbcf_dbcf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbe5_no_collision,
	&emulator_compiled_segments_funcs::seg_dbe6_move_player_handle_one_platform_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbfe_one_screen_platform,
	nullptr,
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
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc0b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc0d_dc0d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc18_dc18,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc1a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc1c_dc1c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc27_dc27,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc29_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc2b_dc2b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc36_dc36,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc38_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc3a_dc3a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc4f_no_collision,
	&emulator_compiled_segments_funcs::seg_dc50_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc5c_dc5c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc5e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc60_dc60,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc6c_dc6c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc6e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc70_dc70,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc7c_dc7c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc7e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc80_dc80,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc8c_dc8c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc8e_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc90_dc90,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dca6_no_collision,
	&emulator_compiled_segments_funcs::seg_dca7_move_player_handle_one_platform_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcbf_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcca_dcca,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dccc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcce_dcce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd9_dcd9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcdb_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcdd_dcdd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce8_dce8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcea_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcec_dcec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcf7_dcf7,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcf9_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcfb_dcfb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd08_no_collision,
	&emulator_compiled_segments_funcs::seg_dd09_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd15_dd15,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd17_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd19_dd19,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd25_dd25,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd27_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd29_dd29,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd35_dd35,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd37_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd39_dd39,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd57_no_collision,
	&emulator_compiled_segments_funcs::seg_dd58_move_player_handle_one_platform_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd70_one_screen_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd7b_dd7b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd7d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd7f_dd7f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd8a_dd8a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd8c_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd8e_dd8e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd99_dd99,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd9b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd9d_dd9d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dda8_dda8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddaa_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddac_ddac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddbd_no_collision,
	&emulator_compiled_segments_funcs::seg_ddbe_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddca_ddca,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddcc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddce_ddce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddda_ddda,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dddc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddde_ddde,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddea_ddea,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddec_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddee_ddee,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddfa_ddfa,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddfc_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddfe_ddfe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de10_no_collision,
	&emulator_compiled_segments_funcs::seg_de11_check_player_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de1b_de1b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de1d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de1f_de1f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de29_de29,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de2b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de2d_de2d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de37_de37,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de39_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de3b_de3b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de45_de45,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de47_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de49_de49,
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
	&emulator_compiled_segments_funcs::seg_de64_de64,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de67_offground,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de76_de76,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de79_set_death_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de7c_de7c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de8a_de8a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de8c_de8c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de91_pass_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de96_left_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de98_cap_vertical_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de9a_end_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de9e_de9e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dea0_dea0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dea5_pass_cap_horizontal_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deaa_top_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deac_cap_horizontal_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deae_end_cap_horizontal_blast,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb1_deb1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deb5_deb5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_decb_gameover,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_decf_decf,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded2_ded2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ded8_no_set_winner,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deef_deef,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_def3_end,
	&emulator_compiled_segments_funcs::seg_def4_write_player_damages,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df05_prepare_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df0d_end_player_variables,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df1d_df1d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df47_df47,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df4c_stocks_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df6c_df6c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df71_empty_stock,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df73_set_stock_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df7c_df7c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df84_stocks_positions,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df88_character_icons,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8a_player_effects,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8d_df8d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df90_df90,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df93_df93,
	&emulator_compiled_segments_funcs::seg_df94_blinking,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfa2_dfa2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfaf_no_hitstun,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb3_dfb3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc0_player_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc5_dfc5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc7_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd2_dfd2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd5_update_sprites,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd7_update_one_player_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e010_e010,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e013_e013,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e019_e019,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e027_e027,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e029_e029,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e02d_e02d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e02f_e02f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e032_oos_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e047_oos_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e05c_oss_top,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e071_oos_bot,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e083_oos_indicator_placed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e092_e092,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e095_e095,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e097_loop,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09a_e09a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09d_all_player_sprites_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a0_e0a0,
	&emulator_compiled_segments_funcs::seg_e0a1_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a3_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a5_oos_anim_state_per_player_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a7_oos_anim_state_per_player_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0a9_game_mode_local_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0ac_game_mode_local_pre_update,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b0_e0b0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b4_e0b4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0b8_e0b8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0bc_e0bc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0bf_end_ai,
	&emulator_compiled_segments_funcs::seg_e0c0_game_mode_online_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0c3_game_mode_online_pre_update,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0c6_init_gameover_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0e8_e0e8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e10a_e10a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e11f_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e124_e124,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e133_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e13e_e13e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e159_e159,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e185_winner_name_writing,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e192_e192,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1be_e1be,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1d7_e1d7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e201_e201,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e217_initialize_a_balloon,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e232_e232,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e234_position_a_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e237_e237,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e23d_e23d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e248_e248,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e24b_e24b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e252_gameover_screen_tick,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e254_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e262_e262,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e266_e266,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e269_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e26e_e26e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e271_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e279_update_animations,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e27c_e27c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e27f_e27f,
	&emulator_compiled_segments_funcs::seg_e280_next_screen_by_game_mode,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e282_gamover_update_players,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2a3_e2a3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2a6_e2a6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2bd_e2bd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2ca_e2ca,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2cd_e2cd,
	&emulator_compiled_segments_funcs::seg_e2ce_update_balloons,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2d2_update_one_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2d5_e2d5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2e9_e2e9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2ed_end_y,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2f0_e2f0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e302_e302,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e307_positive,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e309_high_byte_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e331_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e339_end_sprite_layer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e343_e343,
	&emulator_compiled_segments_funcs::seg_e344_gameover_random_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e351_init_mode_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e354_e354,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e364_e364,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e36f_e36f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e372_e372,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e377_mode_selection_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e37a_e37a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e37d_e37d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e37f_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e383_e383,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e387_e387,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e38b_e38b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e38f_e38f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e393_e393,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e397_e397,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e39b_e39b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e39f_e39f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3a3_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3a8_no_press,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ab_go_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3b1_e3b1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3b4_from_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3bb_go_left,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3bf_e3bf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3c6_go_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ce_e3ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d5_go_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3da_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3e4_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3e7_e3e7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3eb_show_selected_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e402_e402,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e406_nt_highlight_payload_local,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e41b_nt_highlight_payload_online,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e430_nt_highlight_payload_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e445_nt_highlight_payload_addr_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e448_nt_highlight_payload_addr_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e44b_init_netplay_launch_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e460_e460,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e472_wait_esp,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e47d_e47d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e488_e488,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e48c_e48c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e497_e497,
	&emulator_compiled_segments_funcs::seg_e498_esp_status_cmd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e49d_netplay_launch_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4a0_e4a0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4a3_e4a3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4b2_e4b2,
	&emulator_compiled_segments_funcs::seg_e4b3_state_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4bb_e4bb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4c3_error_state_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4d7_error_state_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4db_connecting_wifi_query,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4e2_e4e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4ed_e4ed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e506_cmd_get_wifi_status,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e508_connecting_wifi_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e513_e513,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e517_e517,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e51e_e51e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e52b_connected,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e530_failed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e537_crazy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e53e_in_progress,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e540_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e543_wifi_status_action_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e54a_wifi_status_action_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e551_select_server_query_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e558_e558,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e563_e563,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e568_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e57c_cmd_get_server_settings,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e57e_select_server_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e585_e585,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e598_e598,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ab_e5ab,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5cd_e5cd,
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
	&emulator_compiled_segments_funcs::seg_e5d8_e5d8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f3_end_custom_server,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f5_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f8_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e619_server2_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e61f_server3_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e625_server1_buffer_header,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e628_server2_buffer_header,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e62e_select_server,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e632_e632,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e638_e638,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e63c_e63c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e640_e640,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e644_e644,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e648_e648,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e64b_next_server,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e653_e653,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e65a_previous_server,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e65e_e65e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e663_end_inputs,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e66e_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e671_next_state,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e689_server_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e694_e694,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6a7_e6a7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6b2_e6b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6bd_e6bd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6c7_connect_cmd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6c9_server_north_america_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6df_server_europe_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6f5_server_cfg_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6f7_server_cfg_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6f9_server_name_hidden,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e706_the_purge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e70d_e70d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e71c_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e730_client_id_request_rnd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e73d_client_id_set_generic,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e742_e742,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e75b_end,
	&emulator_compiled_segments_funcs::seg_e75c_client_id_set_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e761_client_id_set_hi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e766_estimate_latency_1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e76d_e76d,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e77d_estimate_latency_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e794_estimate_latency_2,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b6_e7b6,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c4_error_no_contact,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7cb_error_bad_ping,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7cf_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7d2_connection_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7d9_e7d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7de_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7f2_connection_send_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e855_connection_wait_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e860_e860,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e864_e864,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e868_e868,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e86d_handle_message,
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
	&emulator_compiled_segments_funcs::seg_e87b_e87b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e87f_e87f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e883_disconnected_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e88a_start_game_msg,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e88d_connected_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e892_error_crazy_msg,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e896_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e899_wait_game,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8a0_e8a0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8bd_got_start_game_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8f3_e8f3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8f6_e8f6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8fd_e8fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e904_e904,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e907_e907,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e93f_e93f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e941_wait_one_frame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e945_e945,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e94b_e94b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e950_buffer_you_are_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e963_buffer_you_are_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e976_buffers_you_are_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e978_buffers_you_are_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e97a_buffer_player_a_ping,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e99e_header_player_a_indicator,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9a4_indicator_excellent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ad_indicator_good,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b6_indicator_poor,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9bf_indicator_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c2_indicator_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c5_no_contact,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9cc_e9cc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9cf_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9e3_bad_ping,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ea_e9ea,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ed_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea01_crazy_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea08_ea08,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea0b_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea1f_disconnected,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea55_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea5c_ea5c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea62_space,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea64_char_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea6d_ea6d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea75_back_on_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea79_ea79,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea7f_ea7f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea84_end,
	&emulator_compiled_segments_funcs::seg_ea85_show_step_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea94_ea94,
	&emulator_compiled_segments_funcs::seg_ea95_buffer_header,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea98_init_stage_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaa8_stage_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eab0_stage_selection_screen_long_memcopy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eab7_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eabe_eabe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac4_stage_selection_tick_music,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac7_eac7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eacd_stage_selection_back_to_char_select,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eae1_init_title_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eae9_eae9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaf4_eaf4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaff_eaff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb18_eb18,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb2c_emu_50hz_done,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb33_eb33,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb3e_eb3e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb42_eb42,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb4a_eb4a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb4d_eb4d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb50_eb50,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb53_soft_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb5a_end_menu_init,
	&emulator_compiled_segments_funcs::seg_eb5b_set_title_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb7d_eb7d,
	&emulator_compiled_segments_funcs::seg_eb7e_init_title_animation,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb81_eb81,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb92_eb92,
	&emulator_compiled_segments_funcs::seg_eb93_palette_title_initial,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebb3_title_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebbb_ebbb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebbe_ebbe,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebc1_ebc1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebc9_ebc9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebce_ebce,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd1_update_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebd5_ebd5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebdc_cheat_succeed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebe1_press_any_key,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebe5_ebe5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebe9_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebed_ebed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebf1_ebf1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebf4_next_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebf7_ebf7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebfc_end,
	&emulator_compiled_segments_funcs::seg_ebfd_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec11_tick_title_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec22_ec22,
	&emulator_compiled_segments_funcs::seg_ec23_anim_state_handlers_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec29_anim_state_handlers_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec2f_change_anim_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec36_wait_logo,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3c_ec3c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3f_end,
	&emulator_compiled_segments_funcs::seg_ec40_show_logo,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec43_ec43,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec45_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec51_ec51,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec54_ec54,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec63_ec63,
	&emulator_compiled_segments_funcs::seg_ec64_logo_palette_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec6c_shake,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec6f_ec6f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec73_ec73,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec76_end,
	&emulator_compiled_segments_funcs::seg_ec77_wait_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec7d_ec7d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec80_ec80,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec83_end,
	&emulator_compiled_segments_funcs::seg_ec84_show_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec8c_ec8c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec8f_ec8f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc2_finish,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc5_ecc5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eccd_eccd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd0_end,
	&emulator_compiled_segments_funcs::seg_ecd1_text_colors,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd4_title_screen_restore_music_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd8_ecd8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecdb_ecdb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecde_mute,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ece1_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecf3_state_transition_pretransition_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed03_state_transition_posttransition_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed0b_state_transition_pre_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed1e_ed1e,
	&emulator_compiled_segments_funcs::seg_ed1f_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed29_state_transition_pre_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed3c_ed3c,
	&emulator_compiled_segments_funcs::seg_ed3d_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed47_state_transition_post_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed5c_ed5c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed65_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed73_state_transition_post_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed88_ed88,
	&emulator_compiled_segments_funcs::seg_ed89_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed97_scroll_transition,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed9b_ed9b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb5_set_up_values,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edce_end_set_values,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd2_edd2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edd8_do_not_touch_offsets,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eddc_save_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ede3_ede3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edf3_hidden_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edf8_two_byte_position_stored,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee04_ee04,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee06_scroll_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee0c_ee0c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee10_ee10,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee12_set_camera_scroll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee1f_ee1f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee23_ee23,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee2b_ee2b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee33_simple_sleep,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee36_end_sleep,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee42_clean,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee45_end,
	&emulator_compiled_segments_funcs::seg_ee46_move_sprites,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee49_ee49,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee4d_ee4d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee51_ee51,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee55_ee55,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee59_ee59,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee5d_ee5d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee61_ee61,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee65_ee65,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee69_ee69,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee70_update_clouds,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee73_vertical_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee89_ee89,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee8c_ee8c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee8f_ee8f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee93_update_screen_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eea7_move_one_screen_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeb6_eeb6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eebb_hide_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eebd_update_oam,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eecb_end,
	&emulator_compiled_segments_funcs::seg_eecc_init_menu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eef0_re_init_menu,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eef2_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eefd_eefd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef00_ef00,
	&emulator_compiled_segments_funcs::seg_ef01_cloud_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef3d_set_menu_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef5f_ef5f,
	&emulator_compiled_segments_funcs::seg_ef60_tick_moving_clouds,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef68_ef68,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef71_move_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef75_ef75,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef7a_ef7a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef7e_end,
	&emulator_compiled_segments_funcs::seg_ef7f_menu_position_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef81_position_one_cloud,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef84_ef84,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef87_ef87,
	&emulator_compiled_segments_funcs::seg_ef88_menu_position_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef94_ef94,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef98_do_not_hide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efa5_place_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efab_efab,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efaf_skip_y_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efc4_efc4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efc7_sprite_offset_x,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efc9_efc9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efcc_sprite_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efd1_stage_generic_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efdb_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efe0_efe0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_effb_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f005_f005,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f014_f014,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f024_copy_header_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f02f_copy_elements_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f036_f036,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f03e_copy_one_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f049_f049,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f04c_copy_data_end,
	&emulator_compiled_segments_funcs::seg_f04d_stage_iterate_all_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f04f_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f054_f054,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f057_f057,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f05b_f05b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f062_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f066_f066,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f068_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f06d_f06d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f070_f070,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f074_f074,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f07b_end_iterate_elements,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f07f_f07f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f081_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f086_f086,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f089_f089,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f08d_f08d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f094_end_iterate_elements,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f096_end,
	&emulator_compiled_segments_funcs::seg_f097_ai_action_double_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0a0_ai_action_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0aa_ai_action_right_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0af_ai_action_down_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0b4_ai_action_special_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0bf_ai_action_idle,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c2_ai_level_to_delay,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0c5_ai_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0d4_ai_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0e6_find_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f0f9_run_current_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f118_f118,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f120_f120,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f122_do_action,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f125_f125,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f12b_f12b,
	&emulator_compiled_segments_funcs::seg_f12c_ai_continue_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f135_f135,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f139_next_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f146_f146,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f14b_set_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f153_end,
	&emulator_compiled_segments_funcs::seg_f154_ai_attack_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f188_f188,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f18d_right_facing,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f18f_end_direction_flag,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f195_check_one_attack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f19c_f19c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a3_condition_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1fe_f1fe,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f200_f200,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f213_f213,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f216_next_attack,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21a_f21a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21d_end,
	&emulator_compiled_segments_funcs::seg_f21e_ai_chase_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f228_f228,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22a_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22c_f22c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f230_f230,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f237_f237,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f23b_no_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f245_f245,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f249_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f24f_f24f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f253_jump_if_higher,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_f260_end_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f279_negative_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f281_end_set_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f299_f299,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f29d_dont_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2a8_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2b3_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2bf_action_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2c6_ai_delay_action,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2dd_no_delay,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e1_end,
	&emulator_compiled_segments_funcs::seg_f2e2_esp_send_cmd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2eb_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2f4_f2f4,
	&emulator_compiled_segments_funcs::seg_f2f5_esp_get_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2fc_f2fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f303_store_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f30e_copy_one_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f311_f311,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f31a_end,
	&emulator_compiled_segments_funcs::seg_f31b_network_init_stage,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f326_clear_one_input,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f331_f331,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f341_network_tick_ingame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f345_f345,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f348_do_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f35b_f35b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f399_controller_sent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f39e_f39e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a9_f3a9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3b4_f3b4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ba_f3ba,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3bd_skip_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3c7_state_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3d6_f3d6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3d9_f3d9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3dd_f3dd,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e1_f3e1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e5_f3e5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e7_end,
	&emulator_compiled_segments_funcs::seg_f3e8_update_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3fc_ancient,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ff_f3ff,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f402_end,
	&emulator_compiled_segments_funcs::seg_f403_rollback_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f40d_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f41e_f41e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f420_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f42a_f42a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f42c_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f436_f436,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f43d_f43d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f445_screen_shake_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f45d_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f468_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f46f_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c2_copy_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_f4e0_f4e0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e4_roll_forward_one_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ea_f4ea,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4ec_f4ec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f2_f4f2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4f4_f4f4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4fa_f4fa,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4fc_f4fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f502_f502,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f505_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51c_f51c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51f_f51f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f522_f522,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f526_f526,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f52a_f52a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f52e_f52e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f530_end_inc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f533_dont_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f548_set_opponent_buttons_from_history,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f54d_f54d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f554_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f55a_mark_nexts_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f562_known,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f568_mapper_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f586_stages_init_routine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5a6_stages_data,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ae_stages_illustration,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5b0_f5b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5b6_stages_bank,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5be_stages_tileset_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5c2_stages_tileset_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5c6_characters_bank_number,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5c8_characters_tiles_data_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5cc_characters_tiles_number,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5d0_characters_properties_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5d6_characters_palettes_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ea_characters_start_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ec_characters_start_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5ee_characters_update_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f0_characters_update_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f2_characters_offground_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f4_characters_offground_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f6_characters_onground_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f8_characters_onground_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5fa_characters_input_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5fc_characters_input_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5fe_characters_onhurt_routines_table_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f602_set_player_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f619_f619,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f62b_server_bytecode_error,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f630_server_bytecode_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f633_f633,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f650_f650,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f655_server_bytecode_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f658_f658,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f65d_credits_begin,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f660_f660,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f674_f674,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f698_f698,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6f1_f6f1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f709_f709,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f732_f732,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f741_f741,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c6_credits_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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

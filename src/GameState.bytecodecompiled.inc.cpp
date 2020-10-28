namespace emulator_compiled_segments_funcs {
void seg_c000_animation_frame_entry_handlers_lsb(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c004_animation_frame_entry_handlers_msb(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c008_anim_frame_move_hurtbox(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c022_c022(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c037_apply_offset(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c03c_c03c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c041_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c043_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c056_c056(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c05b_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c05d_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c070_c070(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c075_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c077_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c08a_c08a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c08f_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c091_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c09f_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c0a0_anim_frame_move_hitbox(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c0ae_c0ae(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ORA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c0b9_ignore_enabled(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c0bb_end_enabled(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c101_c101(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c138_apply_offset(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c13d_c13d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c142_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c144_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c157_c157(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c15c_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c15e_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c171_c171(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c176_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c178_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c18b_c18b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c190_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c192_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c1a1_stb_animation_draw(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c1a8_c1a8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c1ac_c1ac(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c1b0_ok(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c1b1_cursed(mos6502& emu) {
	++emu.pc; emu.Op_RTI_IMP();
}
void seg_c1b2_nmi(mos6502& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c1bc_c1bc(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c1c9_c1c9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLP_IMP();
	++emu.pc; emu.Op_RTI_IMP();
}
void seg_c1df_end(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLP_IMP();
	++emu.pc; emu.Op_RTI_IMP();
}
void seg_c1e6_reset(mos6502& emu) {
	++emu.pc; emu.Op_SEI_IMP();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_CLD_IMP();
	++emu.pc; emu.Op_STX_ABS();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_TXS_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STX_ABS();
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_STX_ABS();
	++emu.pc; emu.Op_STX_ABS();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c1fc_vblankwait1(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c201_clrmem(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c21f_c21f(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c223_vblankwait2(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c226_c226(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c227_ok(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c22c_c22c(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c230_c230(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c235_pal(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c238_c238(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c23b_c23b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c240_forever(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c243_c243(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c246_c246(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c249_c249(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c25a_c25a(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c25d_fetch_controllers(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_ROL_ZEX();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c269_fetch_one_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_ROL_ZEX();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c273_next_btn(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_ROL_ZEX();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c27f_c27f(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c284_c284(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c285_wait_next_frame(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c288_c288(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c28d_c28d(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c292_c292(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c29a_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c29b_wait_next_real_frame(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c29f_waiting(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c2a3_c2a3(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2a4_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c2ae_c2ae(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2b0_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2b1_absolute_a(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c2b5_c2b5(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2ba_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2bb_multiply(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c2c6_additions_loop(mos6502& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c2ca_c2ca(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c2db_end(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2de_last_nt_buffer(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c2e0_handle_buff(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c2e5_c2e5(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c2f2_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2f3_reset_nt_buffers(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c2f9_process_nt_buffers(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c2fb_handle_nt_buffer(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c300_c300(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c318_write_one_tile(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c31c_c31c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c328_end_buffers(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c329_number_to_tile_indexes(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c32d_find_one_digit(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c335_try_digit_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c33b_c33b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c358_c358(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c35f_test_coeff_10(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c363_c363(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c36a_coefficent_changed(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c36e_c36e(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c370_destination_updated(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c373_next_digit_value(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c37f_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c380_keep_input_dirty(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c385_dummy_routine(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c386_get_transition_id(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c390_change_global_game_state(mos6502& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c39c_c39c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c3a9_c3a9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c3b2_c3b2(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c3b4_clr_sprites(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c3bc_c3bc(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c3cd_c3cd(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c3d0_c3d0(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_TXS_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c3d6_find_transition_index(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c3d9_c3d9(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c3dd_check_one_entry(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c3e2_c3e2(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c3e6_c3e6(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c3ea_not_found(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c3ec_found(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c3ed_pre_transition(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c3f0_c3f0(mos6502& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c3f4_c3f4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c401_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c402_post_transition(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c405_c405(mos6502& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c409_c409(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c416_c416(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c419_no_transition(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c423_c423(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c428_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c429_draw_zipped_nametable(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c438_load_background(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c43c_c43c(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c442_c442(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c445_opcode(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c448_c448(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c44c_c44c(mos6502& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c44f_write_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c455_c455(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c458_c458(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c45b_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c45c_next_byte(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c460_c460(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c462_end_inc_vector(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c463_call_pointed_subroutine(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_c466_copy_palette_to_ppu(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c47a_copy_one_color(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c483_c483(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c484_shake_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c4a0_c4a0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c4a5_set_screen_two(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c4ac_set_screen(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c4b2_c4b2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c4bc_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c4bd_animation_init_state(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c4f4_animation_state_change_animation(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c50f_animation_draw(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c564_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c565_animation_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_CMP_INY();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c57f_c57f(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c582_inc_current_frame(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c587_skip_entry(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c58b_c58b(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c590_c590(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c593_end_skip_frame(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c598_c598(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c59c_c59c(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c5a7_store_frame_vector(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c5b8_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c5b9_add_to_frame_vector(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c5c5_draw_anim_frame(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c5c7_handle_one_entry(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c5cb_c5cb(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c5cf_c5cf(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c5d3_c5d3(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c5d7_continue(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c5ec_c5ec(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c5ef_clear_unused_sprites(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c5f3_c5f3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_c5f9_c5f9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c611_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c612_call_pointed_subroutine13(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_c615_anim_frame_move_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c619_c619(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c623_c623(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c628_use_last_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c62a_set_sprite_used(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c62f_default_direction(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c635_end_init_direction_data(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c639_c639(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c63e_use_first_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c640_sprite_index_set(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c648_c648(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c64d_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c64f_set_relative_msb(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c65e_c65e(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c663_c663(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c668_player_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c66e_c66e(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_INY();
	++emu.pc; emu.Op_EOR_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c671_end_anim_hook(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_INY();
	++emu.pc; emu.Op_EOR_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c685_c685(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c68a_flip_x(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c691_got_relative_pos(mos6502& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c694_c694(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c699_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c69b_set_relative_msb(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c6aa_c6aa(mos6502& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c6b0_continue(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c6b5_c6b5(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c6ba_inc_sprite_index(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c6bc_end_next_sprite(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c6bf_skip(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c6c8_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c6c9_check_collision(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c6cf_c6cf(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c6d5_c6d5(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c6d8_vertical_edges(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c6e8_c6e8(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c6ea_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c6ec_c6ec(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c6fc_c6fc(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c6fe_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c700_left_edge(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c710_c710(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c712_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c714_c714(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c71e_c71e(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c720_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c722_c722(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c733_right_edge(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c743_c743(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c745_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c747_c747(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c751_c751(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c753_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c755_c755(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c766_horizontal_edges(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c776_c776(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c778_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c77a_c77a(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c78a_c78a(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c78c_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c78e_top_edge(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c79e_c79e(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7a0_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7a2_c7a2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c7ac_c7ac(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7ae_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7b0_c7b0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c7c1_bot_edge(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c7d1_c7d1(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7d3_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7d5_c7d5(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c7df_c7df(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7e1_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c7e3_c7e3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c7f4_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c7f5_check_top_collision(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c805_c805(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c807_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c809_c809(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c819_c819(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c81b_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c81d_c81d(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c82d_c82d(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c82f_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c831_c831(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c83b_c83b(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c83d_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c83f_c83f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c850_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c851_boxes_overlap(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c85b_c85b(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c85d_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c85f_c85f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c869_c869(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c86b_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c86d_c86d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c877_c877(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c879_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c87b_c87b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c885_c885(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c887_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c889_c889(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c88e_no_overlap(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c890_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c891_audio_init(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c894_c894(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c89a_audio_play_music(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STY_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c8a3_c8a3(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c8a8_c8a8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c8c0_c8c0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c8d4_c8d4(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c8d5_init_channel(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c8e5_c8e5(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c8f5_c8f5(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c8fb_pulse_2(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c8fe_ok(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c90a_end_pulse_specifics(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c927_audio_mute_music(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c942_audio_unmute_music(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c94a_square_reinit_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_c963_c963(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c964_audio_music_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c96d_c96d(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c972_c972(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c977_c977(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c97c_c97c(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c97f_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_c980_noise_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c984_c984(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c987_ok(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_c994_c994(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c9a3_overflow(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_c9a8_c9a8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ORA_ABS();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_c9b0_negative(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_AND_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c9b5_store_result(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c9b8_end_effects(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_c9bd_execute_current_opcode(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_c9df_c9df(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_c9f3_end_opcodes_execution(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_c9fb_c9fb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ca03_regular_write(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ca14_end_write_apu(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ca15_pulse_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ca1a_ca1a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ca21_do_effects(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ca33_positive(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ca39_negative(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ca3c_end_byte_extend(mos6502& emu) {
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ca44_end_effects(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ca4c_execute_current_opcode(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ca6f_ca6f(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ca75_ca75(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ca84_skip_opcode_update(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ca89_end_opcodes_execution(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ca96_ca96(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_CMP_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_caaa_caaa(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cab3_triangle(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cab8_cab8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cabd_cabd(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cac2_unmute(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cad0_write_linear_cnt(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cad3_end_write_apu(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cad4_opcode_noise_sample_end(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cad6_opcode_sample_end(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cafb_cafb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STY_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cb0b_no_track_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cb16_end(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cb19_opcode_chan_params(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INC_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cb36_set_volume(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ORA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cb48_opcode_chan_volume_low(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cb50_opcode_chan_volume_high(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cb5a_opcode_noise_set_volume(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cb62_opcode_set_duty(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cb78_opcode_play_timed_freq(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cb90_note_table_lookup(mos6502& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cb9e_opcode_play_note(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cbae_left_shift(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_cbb0_one_left_shift(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_cbb3_cbb3(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cbb7_right_shift(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_cbb9_one_right_shift(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_cbbc_cbbc(mos6502& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cbc0_end_wait_compute(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cbcb_cbcb(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cbdf_opcode_play_timed_note(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cbe7_cbe7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc05_opcode_wait(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INC_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc12_opcode_noise_wait(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc1d_opcode_noise_long_wait(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc1f_opcode_long_wait(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc28_opcode_halt(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INC_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc3d_opcode_noise_halt(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ABS();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc52_opcode_pitch_slide(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cc58_cc58(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc5a_set_value(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cc66_opcode_pulse_meta_uslide(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cc6d_opcode_pulse_meta_dslide(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cc71_opcode_pulse_meta_common(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cc7b_cc7b(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cc7f_cc7f(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cc85_cc85(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cc91_end_note(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cc9d_cc9d(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cca4_cca4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cca9_keep_volume(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ccab_set_volume_mask(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ccb3_ccb3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_ZER();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ccb9_replace_duty(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_AND_ZER();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ccc3_end_volume_duty(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ccc9_ccc9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ccd4_end_pitch_slide(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ccd7_opcode_noise_set_periodic(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ccdb_ccdb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cce3_unset(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cce8_end(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ccee_opcode_noise_play_timed_freq(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cd05_opcode_noise_pitch_slide_up(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cd12_opcode_noise_pitch_slide_down(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cd1a_pulse1_opcode_routines_lsb(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_cd2a_pulse1_opcode_routines_msb(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
}
void seg_cd43_noise_opcode_routines_msb(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
}
void seg_cd4c_particle_draw(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cd52_process_one_block(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cd57_cd57(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cd5a_cd5a(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cd5d_skip_block(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cd62_next_block(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cd6d_cd6d(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cd6e_process_block(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cd7e_next_particle(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cd88_cd88(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cd8f_cd8f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cd94_cd94(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cdad_hide_particle(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cdb2_particle_drawn(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cdb9_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cdba_particle_handlers_reinit(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cdc5_cdc5(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cdc6_loop_on_particle_boxes(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cdc8_loop(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cdcd_cdcd(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cdd6_cdd6(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cdd7_loop_on_particles(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cddb_next_particle(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cde1_cde1(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cdea_cdea(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cded_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cdee_deactivate_particle_block(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cdf6_cdf6(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cdf7_hide_particles(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cdfb_cdfb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ce00_second_block(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ce02_set_sprite_offset(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ce0f_ce0f(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ce10_hide_one_particle(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ce1e_construct_palettes_nt_buffer(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ce21_ce21(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce37_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce42_ce42(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ce48_construct_nt_buffer(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ce4b_ce4b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce53_copy_header_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce5e_ce5e(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce62_copy_payload_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce6d_ce6d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ce73_clear_bg_bot_left(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce86_load_background(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce8f_ce8f(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce91_end_inc_vector(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce97_ce97(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ce9d_ce9d(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ce9e_switch_bank(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cea2_copy_one_tile(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cea4_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ceae_ceae(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cebf_cebf(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cec0_switch_selected_player(mos6502& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_cec4_cec4(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cec8_select_player_b(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cec9_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ceca_merge_to_player_velocity(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_cecc_add_component(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_cedb_cedb(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ceec_check_diff(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cef0_cef0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_cef6_cef6(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cf03_add_step_size(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cf18_cf18(mos6502& emu) {
	++emu.pc; emu.Op_BPL_REL();
}
void seg_cf1a_cf1a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cf2a_decrement(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cf37_next_component(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cf3e_cf3e(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cf43_apply_player_gravity(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cf5a_cf5a(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cf5b_check_on_ground(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cf66_cf66(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cf69_check_current_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_cf78_cf78(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cf7b_cf7b(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cf7e_oos_platform(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_cf81_end_platform_handler(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cf83_grounded(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cf8b_not_grounded(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cf8d_end_current_platform(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cf94_check_simple_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cfa6_check_oos_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cfc7_check_on_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cfcb_cfcb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cfcf_cfcf(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_cfd2_offscreen(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cfd3_check_on_platform_screen_unsafe(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_cfd9_cfd9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_cfdf_cfdf(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_cfe7_cfe7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cfeb_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_cfec_check_on_platform_multi_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_cff6_cff6(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_cff8_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_cffa_cffa(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_d004_d004(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d006_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d008_d008(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d00c_d00c(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d00e_dec_16_ok(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d014_d014(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d01a_d01a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d020_d020(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d023_offground(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d026_check_in_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d02d_d02d(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d031_d031(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d032_simple_platform_handler(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d036_d036(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d03a_d03a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d041_d041(mos6502& emu) {
	++emu.pc; emu.Op_BCS_REL();
}
void seg_d043_end_left_edge(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d04a_d04a(mos6502& emu) {
	++emu.pc; emu.Op_BCS_REL();
}
void seg_d04c_end_right_edge(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d053_d053(mos6502& emu) {
	++emu.pc; emu.Op_BCS_REL();
}
void seg_d055_end_top_edge(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d05c_d05c(mos6502& emu) {
	++emu.pc; emu.Op_BCS_REL();
}
void seg_d05e_in_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d060_not_in_platform(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d061_oos_platform_handler(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_d06d_d06d(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d06f_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d071_d071(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_d07d_d07d(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d07f_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d081_d081(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_d08d_d08d(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d08f_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d091_d091(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_d09d_d09d(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d09f_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d0a1_in_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d0a3_not_in_platform(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d0a4_place_character_ppu_tiles(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d0b3_d0b3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d0bd_player_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d0c4_end_set_ppu_addr(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d0d9_d0d9(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d0da_controller_callbacks(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_INY();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d0de_check_controller_state(mos6502& emu) {
	++emu.pc; emu.Op_CMP_INY();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d0e2_d0e2(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_d0f9_next_controller_state(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d0fe_d0fe(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_d110_particle_directional_indicator_start(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d149_d149(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d14a_set_particle_position(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d170_particle_directional_indicator_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d174_d174(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d175_do_something(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d182_d182(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d185_d185(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d188_go_disable_box(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d18d_d18d(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d18f_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d190_move_particles(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d19b_d19b(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d19c_move_one_particle(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d1c2_d1c2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d1c7_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_d1c9_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_d1d9_d1d9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d1de_separate(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d1e3_set_y_direction(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d1f8_d1f8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d1fd_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d1ff_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d219_particle_death_start(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d25b_d25b(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d25c_place_one_particle(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_d26a_d26a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_d26c_no_reposition_x(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_d27d_d27d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d27f_no_reposition_y(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d2a7_particles_start_position_offset_x(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_d2ae_particles_start_position_offset_y(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_d2b5_particle_death_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d2bb_d2bb(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d2c9_d2c9(mos6502& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_INC_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d2d0_end(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d2d2_do_nothing(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d2d3_go_disable_box(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d2d8_d2d8(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d2dd_audio_music_power(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d2ee_audio_music_weak(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d2f9_audio_music_gameover(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d304_audio_play_crash(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d314_audio_play_death(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d324_audio_play_hit(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d334_audio_play_parry(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d344_audio_play_shield_hit(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d354_audio_play_shield_break(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d364_audio_play_title_screen_text(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d374_global_init(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d379_d379(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d38c_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d394_d394(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d39c_d39c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d3be_d3be(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d3c3_d3c3(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d3c6_d3c6(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d3fb_character_selection_animation_states_addresses_lsb(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d3fd_character_selection_animation_states_addresses_msb(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d3ff_init_character_selection_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d415_d415(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d420_d420(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d425_d425(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d42a_d42a(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d454_d454(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d492_d492(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4af_d4af(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d4b4_wait_vbi(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d4b9_d4b9(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4bc_d4bc(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4bf_d4bf(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d4c0_character_selection_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4c3_d4c3(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4c6_d4c6(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4c9_d4c9(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d4cb_check_one_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d4cf_d4cf(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d4d1_btn_search_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d4d8_d4d8(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d4dd_next_controller(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d4e2_d4e2(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d4e5_jump_from_table(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_d4f5_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4fa_previous_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d4ff_next_value(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_d517_previous_value(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_d52f_next_option(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d537_d537(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d53e_previous_option(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_d542_d542(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d549_refresh_player_highlighting(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d552_d552(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d55c_d55c(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d565_d565(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d568_next_character_color(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d570_d570(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d577_previous_character_color(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_d57b_d57b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d582_refresh_player_character_color(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d589_d589(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d58c_next_weapon_color(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d594_d594(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d59b_previous_weapon_color(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_d59f_d59f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d5a6_refresh_player_weapon(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d5ad_d5ad(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d5b0_next_character(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d5b8_d5b8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d5bf_previous_character(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_d5c3_d5c3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d5ca_refresh_player_character(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d5e7_d5e7(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d5f7_d5f7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d600_player_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d606_end_set_ppu_addr(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d613_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d614_buttons_numbering(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_d629_next_value_handlers(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_CMP_ZEX();
}
void seg_d635_async_jobs(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_d63b_d63b(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d63e_do_player_a_job(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d642_d642(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d647_do_player_b_job(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d64b_d64b(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d650_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d651_tick_async_job(mos6502& emu) {
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d659_d659(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d65d_d65d(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d660_update_char_palette(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d66b_d66b(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d672_update_weapon_palette(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d67d_d67d(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d686_d686(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d68d_copy_tiles(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d6ac_d6ac(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d6c6_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d6d1_d6d1(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_d6f6_d6f6(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d6f9_finalize_switch(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d721_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d722_character_selection_tick_animations(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d743_d743(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d746_d746(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d767_d767(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d76a_d76a(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d76b_character_selection_update_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d76f_highlight_one_option(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d774_d774(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d779_d779(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d77e_d77e(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d783_d783(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d78b_d78b(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d78c_character_selection_highligh_option(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d792_d792(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d797_status_inactive(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d799_write_status_component(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d7be_d7be(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d7c0_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d7cb_d7cb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d7d1_options_buffer_length(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ABS();
	++emu.pc; emu.Op_ASL_ABS();
}
void seg_d7e9_options_buffer_msb(mos6502& emu) {
	++emu.pc; emu.Op_CLD_IMP();
}
void seg_d7f5_buffer_player_a_character_palette_active(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_CMP_ABY();
}
void seg_d803_buffer_player_a_character_palette_inactive(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_d811_buffer_player_b_character_palette_active(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_d81f_buffer_player_b_character_palette_inactive(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_d82d_buffer_player_a_weapon_active(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_ZER();
}
void seg_d834_buffer_player_a_weapon_inactive(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_d83b_buffer_player_b_weapon_active(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_CPX_ABS();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_CPX_ABS();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_d842_buffer_player_b_weapon_inactive(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_CPX_ABS();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_d849_buffer_player_a_character_inactive(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_CMP_INY();
}
void seg_d850_buffer_player_a_character_active(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_CMP_INY();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_d857_buffer_player_b_character_inactive(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_d85e_buffer_player_b_character_active(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_d865_character_selection_draw_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_d877_end(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d87b_compute_option_indexes(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_STY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d8a8_draw_character_palette(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d8ab_d8ab(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d8cc_d8cc(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d8ed_d8ed(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d8f0_draw_weapon(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d8f3_d8f3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d914_d914(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d935_d935(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d938_draw_character(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d93b_d93b(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d964_d964(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d981_d981(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_d984_values_handlers(mos6502& emu) {
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_CLD_IMP();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_d990_buffer_header_player_a_character_palette_name(mos6502& emu) {
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_PHP_IMP();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_PHP_IMP();
}
void seg_d993_buffer_header_player_b_character_palette_name(mos6502& emu) {
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_PHP_IMP();
}
void seg_d9ae_default_config(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_d9c9_init_config_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d9d9_d9d9(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d9db_sprite_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_d9e6_d9e6(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d9f1_d9f1(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d9f4_d9f4(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_d9f7_d9f7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_da02_da02(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_da05_da05(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_da36_config_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_da3e_da3e(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_da41_da41(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_da43_check_one_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_da47_da47(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_da49_btn_search_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_da50_da50(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_da55_next_controller(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_da5a_da5a(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_da5d_jump_from_table(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_da6d_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_da72_previous_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_da77_next_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_da8b_previous_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_da9f_next_option(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_daa7_daa7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_daae_previous_option(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_dab2_dab2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dab9_music_next_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dac1_dac1(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dac4_dac4(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dac7_mute(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_daca_daca(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dacd_stocks_next_value(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dad5_dad5(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dadc_ai_next_value(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dae4_dae4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_daeb_music_previous_value(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_daee_stocks_previous_value(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_daf2_daf2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_daf9_ai_previous_value(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_dafd_dafd(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_db04_end(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_db07_db07(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_db08_buttons_numbering(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_db1d_next_value_handlers(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
}
void seg_db29_config_update_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_db2d_values(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_db30_db30(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_db33_db33(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_db3b_db3b(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_db3c_config_highligh_option(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_db3f_db3f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_db44_loop_header(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_db66_db66(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_db6b_enabled(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_db6d_got_attribute(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_db7f_options_buffer_headers(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_db8b_config_draw_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_db9c_draw_music(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dba0_dba0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dbab_music_disabled(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dbb3_send_buffer(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dbb6_dbb6(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dbb8_loop_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dbc3_dbc3(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dbc6_draw_stocks(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dbdb_loop_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dbe7_dbe7(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dbea_draw_ai(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dbff_loop_value(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dc0b_dc0b(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dc0e_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_dc15_buffer_on(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_BVS_REL();
}
void seg_dc1d_buffer_off(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_BVS_REL();
}
void seg_dc25_buffer_one(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_INC_ABS();
}
void seg_dc30_buffer_two(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_INC_ABS();
	++emu.pc; emu.Op_SBC_ABY();
}
void seg_dc3b_buffer_three(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_INC_ABS();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_dc46_buffer_four(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_INC_ABS();
}
void seg_dc51_buffer_five(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_INC_ABS();
}
void seg_dc5c_buffer_human(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ROR_ABS();
	++emu.pc; emu.Op_SBC_ABS();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_dc67_buffer_easy(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ROR_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_INC_ABX();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ROR_ABS();
}
void seg_dc72_buffer_fair(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ROR_ABS();
}
void seg_dc7d_buffer_hard(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ROR_ABS();
	++emu.pc; emu.Op_SBC_ABS();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_dc88_init_credits_screen(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dc8b_dc8b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dc9b_dc9b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dcae_load_background(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dcb7_dcb7(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dcb9_end_inc_vector(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dcbf_dcbf(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dcc5_dcc5(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dcd7_dcd7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dcdc_dcdc(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dce1_dce1(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dce6_dce6(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dceb_dceb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dcf0_dcf0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dd0b_write_one_line(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dd1a_dd1a(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd34_write_one_char(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd3a_dd3a(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dd3c_end_inc_cursor(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dd40_dd40(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dd44_dd44(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dd48_dd48(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dd4c_dd4c(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dd55_space(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dd5d_filled_space(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dd65_new_line(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dd6a_end_write_credits(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dd6d_dd6d(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_dd6e_fill_attributes_line(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd70_write_attribute_byte(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd78_dd78(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_dd79_credits_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dd81_dd81(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd85_dd85(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd89_check_controller_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd8d_dd8d(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dd91_dd91(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_dd94_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dd99_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_dd9a_init_donation_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ddaa_ddaa(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ddb5_ddb5(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ddb8_ddb8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ddbd_donation_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ddc0_ddc0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ddc8_ddc8(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ddca_check_one_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ddce_ddce(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ddd2_ddd2(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ddd6_ddd6(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ddda_ddda(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ddde_ddde(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dde2_dde2(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dde6_next_controller(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ddeb_ddeb(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ddee_go_back(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ddf3_go_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ddfb_go_right(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_ddff_ddff(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de03_no_press(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de1a_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_de1b_option_to_game_state(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
}
void seg_de20_nt_payload_btc(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_de26_nt_payload_paypal(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_de2c_nt_payload_addr_lsb(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de2f_de2f(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_de2e_nt_payload_addr_msb(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ABX();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_de30_init_donation_btc_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_de3b_init_donation_paypal_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de43_init_donation_qr_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de4b_de4b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de56_de56(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de59_de59(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_de5a_donation_qr_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de62_de62(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_de66_de66(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_de6a_check_controller_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_de6e_de6e(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_de72_de72(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_de75_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de7a_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_de7b_game_modes_init_lsb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
}
void seg_de7f_game_modes_pre_update_lsb(mos6502& emu) {
	++emu.pc; emu.Op_BCS_REL();
}
void seg_de83_init_game_state(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de86_de86(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de8b_de8b(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de90_de90(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de95_de95(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_de9a_de9a(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_de9e_zero_game_state(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dea5_dea5(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dec1_dec1(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dec3_update_addr_end(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ded3_ded3(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_deeb_deeb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_deff_position_player_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_df1e_df1e(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_df35_df35(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_df4a_df4a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_df67_df67(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_df7a_df7a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_df8e_initialize_one_player(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfa7_dfa7(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_dfac_dfac(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfb9_dfb9(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfbe_dfbe(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfc1_dfc1(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfc6_dfc6(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfd1_dfd1(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfd6_dfd6(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfd9_dfd9(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_dfde_dfde(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dfe3_wait_vbi(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_dfe8_dfe8(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e003_e003(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e01e_e01e(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e021_e021(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e024_e024(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e033_e033(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e034_place_player_a_header(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e036_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e042_e042(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e043_place_player_b_header(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e045_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e051_e051(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e052_place_character_normal_palette(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDX_ZEY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e065_place_character_alternate_palette(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDX_ZEY();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e078_place_character_palette(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e09c_place_character_ppu_illustrations(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e0cf_e0cf(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e0d0_illustrations_addr_msb(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ABX();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_e0d2_illustrations_addr_lsb(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_e0d4_header_player_a(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ORA_ABY();
}
void seg_e0d8_header_player_b(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ORA_ABY();
}
void seg_e0dc_game_tick(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e0df_e0df(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e0ee_e0ee(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e0f2_e0f2(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e0f5_e0f5(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e0f9_e0f9(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e0fe_e0fe(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e103_e103(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e106_end_effects(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e107_no_screen_shake(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e10b_e10b(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e10e_e10e(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e112_no_slowdown(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e12a_e12a(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e12d_e12d(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e130_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e131_slowdown(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e135_e135(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e13b_e13b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e142_keep_frame(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e149_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e152_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e153_update_players(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e155_hitstun_one_player(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e159_e159(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e15b_hitstun_next_player(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e160_e160(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e162_hitbox_one_player(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e165_e165(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e16a_e16a(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e16c_update_one_player(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e181_e181(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e187_e187(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e196_end_input_event(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e199_e199(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e19c_e19c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e1a0_e1a0(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e1a3_e1a3(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e1a6_end_visuals(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e1ab_e1ab(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e1ac_player_state_action(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e1b8_check_player_hit(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e1be_e1be(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e1c1_process_checks(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e1e4_e1e4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e1e8_e1e8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e20b_e20b(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e20d_e20d(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e210_e210(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e237_e237(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e244_check_hitbox_hurtbox(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e267_e267(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e269_e269(mos6502& emu) {
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e26e_e26e(mos6502& emu) {
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e273_e273(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e288_end(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e28b_hurt_player(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e28e_e28e(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e291_e291(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_e29e_e29e(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e2a1_cap_damages(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e2a3_apply_damages(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e2be_e2be(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e2cb_apply_force_vector(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e300_e300(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e31c_e31c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_e32f_e32f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e343_passthrough_kb_h(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_e349_end_abs_kb_h(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_e34d_e34d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e361_passthrough_kb_v(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e367_end_abs_kb_v(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e389_e389(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e38a_move_player(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e3ad_e3ad(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e3b2_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e3b4_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e3c9_e3c9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e3ce_set_relative_msb_neg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e3d0_end_sign_extend(mos6502& emu) {
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e3d6_check_platform_collision(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e3e1_e3e1(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e3ec_end(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e407_handle_one_platform(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ABY();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_e418_solid_platform_collision(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e43d_e43d(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e452_smooth_platform_collision(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e471_e471(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e485_oos_solid_platform_collision(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e4b4_e4b4(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e4c9_oos_smooth_platform_collision(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e4ef_e4ef(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e503_platform_actions_low(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
}
void seg_e507_platform_actions_high(mos6502& emu) {
	++emu.pc; emu.Op_CPX_ZER();
	++emu.pc; emu.Op_CPX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_e50b_check_player_position(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_e515_e515(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e517_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e519_e519(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_e523_e523(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e525_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e527_e527(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_e531_e531(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e533_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e535_e535(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_e53f_e53f(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e541_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e543_e543(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e546_e546(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e548_e548(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e55f_e55f(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e562_offground(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e571_e571(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e574_set_death_state(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e577_e577(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e585_e585(mos6502& emu) {
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e587_e587(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e58c_pass_cap_vertical_blast(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e591_left_edge(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e593_cap_vertical_blast(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e595_end_cap_vertical_blast(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e599_e599(mos6502& emu) {
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e59b_e59b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e5a0_pass_cap_horizontal_blast(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e5a5_top_edge(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e5a7_cap_horizontal_blast(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e5a9_end_cap_horizontal_blast(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e5ac_e5ac(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e5b0_e5b0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e5c3_e5c3(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e5c6_gameover(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e5ca_e5ca(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e5cd_e5cd(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e5d3_no_set_winner(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e5ea_e5ea(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e5ee_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e5ef_write_player_damages(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e5f5_e5f5(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e600_prepare_player_a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e608_end_player_variables(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e618_e618(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e642_e642(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e647_stocks_buffer(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_e667_e667(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e66c_empty_stock(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e66e_set_stock_tile(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e677_e677(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e67f_stocks_positions(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_e683_character_icons(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e685_player_effects(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e688_e688(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e68b_e68b(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e68e_e68e(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e68f_blinking(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e69d_e69d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e6aa_no_hitstun(mos6502& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e6ae_e6ae(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e6bb_player_one(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e6c0_e6c0(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e6c2_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e6cd_e6cd(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e6d0_update_sprites(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e6d4_update_one_player_sprites(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e717_e717(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e71a_e71a(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e722_e722(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e724_e724(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e728_e728(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e72a_e72a(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e72d_oos_left(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e73f_oos_right(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e751_oss_top(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e763_oos_bot(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e772_oos_indicator_placed(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e795_e795(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e798_e798(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e79c_oos_indicator_drawn(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e7a6_e7a6(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e7a9_all_player_sprites_updated(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e7ac_e7ac(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e7ad_game_mode_local_init(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e7b0_game_mode_local_pre_update(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e7b4_e7b4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e7b8_e7b8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e7bc_e7bc(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e7c0_e7c0(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e7c3_end_ai(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e7c4_game_mode_online_init(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e7c7_game_mode_online_pre_update(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e7ca_init_gameover_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e7ec_e7ec(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e7fc_e7fc(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e801_wait_vbi(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e806_e806(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e815_copy_palette(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e820_e820(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e83b_e83b(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e856_e856(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e867_winner_name_writing(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e874_e874(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e8a0_e8a0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e8b9_e8b9(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e8e3_e8e3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e8f9_initialize_a_balloon(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e914_e914(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e916_position_a_balloon(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e919_e919(mos6502& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e91f_e91f(mos6502& emu) {
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e92a_e92a(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e92d_e92d(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e934_gameover_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e936_check_one_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_e944_e944(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e948_e948(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e94b_next_controller(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_e950_e950(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e953_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e958_update_animations(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e95b_e95b(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e95e_e95e(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e95f_gamover_update_players(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e980_e980(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e983_e983(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e99a_e99a(mos6502& emu) {
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_LDY_ZEX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e9a7_e9a7(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e9aa_e9aa(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_e9ab_update_balloons(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e9af_update_one_balloon(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e9b2_e9b2(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_e9c6_e9c6(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e9ca_end_y(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_e9cd_e9cd(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_e9df_e9df(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_e9e4_positive(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_e9e6_high_byte_set(mos6502& emu) {
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_ea03_ea03(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ea0e_background(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ea16_end_sprite_layer(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ea20_ea20(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ea21_gameover_random_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_ROL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ea2e_init_mode_selection_screen(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ea31_ea31(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ea41_ea41(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ea4c_ea4c(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ea4f_ea4f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ea54_mode_selection_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ea57_ea57(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ea5a_ea5a(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ea5c_check_one_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ea60_ea60(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea64_ea64(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea68_ea68(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea6c_ea6c(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea70_ea70(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea74_ea74(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea78_ea78(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea7c_ea7c(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea80_next_controller(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ea85_no_press(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ea88_go_up(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ea8e_ea8e(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ea91_from_donation(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ea98_go_left(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_ea9c_ea9c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eaa3_go_right(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_eaab_eaab(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eab2_go_title(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eab7_go_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eac1_end(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eac4_eac4(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_eac8_show_selected_option(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eadf_eadf(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_eae3_nt_highlight_payload_local(mos6502& emu) {
	++emu.pc; emu.Op_EOR_ZEX();
	++emu.pc; emu.Op_EOR_ZEX();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_eaf8_nt_highlight_payload_online(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_eb0d_nt_highlight_payload_donation(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_eb25_nt_highlight_payload_addr_msb(mos6502& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_NOP_IMP();
}
void seg_eb28_init_netplay_launch_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb3d_eb3d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb48_eb48(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb4b_eb4b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb5a_eb5a(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_eb5e_netplay_launch_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb61_eb61(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb64_eb64(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb73_eb73(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_eb74_state_routines_lsb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_EOR_ABS();
}
void seg_eb98_select_server_query_settings(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eb9f_eb9f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ebaa_ebaa(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ebaf_step_title(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_SBC_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ebc3_cmd_get_server_settings(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ebc5_select_server_draw(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ebcc_ebcc(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ebdf_ebdf(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ebf2_ebf2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ec14_ec14(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ec18_ec18(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ec1f_ec1f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ec32_ec32(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ec3a_end_custom_server(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ec3c_end(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ec3f_step_title(mos6502& emu) {
	++emu.pc; emu.Op_SED_IMP();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_SBC_INY();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_SBC_ABY();
}
void seg_ec60_server2_name(mos6502& emu) {
	++emu.pc; emu.Op_NOP_IMP();
}
void seg_ec66_server3_name(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
}
void seg_ec6c_server1_buffer_header(mos6502& emu) {
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_ABS();
	++emu.pc; emu.Op_ASL_ZER();
	++emu.pc; emu.Op_PHP_IMP();
	++emu.pc; emu.Op_ASL_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ec6f_server2_buffer_header(mos6502& emu) {
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ASL_ZER();
	++emu.pc; emu.Op_PHP_IMP();
	++emu.pc; emu.Op_ASL_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ec75_select_server(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ec79_ec79(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ec7f_ec7f(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ec83_ec83(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ec87_ec87(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ec8b_ec8b(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ec8f_ec8f(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ec92_next_server(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_ec9a_ec9a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eca1_previous_server(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_eca5_eca5(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_STX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ecaa_end_inputs(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ecb5_end(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ecb8_next_state(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_ecc3_ecc3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ecd0_server_set(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ecdb_ecdb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ecee_ecee(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ecf9_ecf9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ed04_ed04(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ed0e_connect_cmd(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ORA_ZEX();
}
void seg_ed10_server_north_america_settings(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
}
void seg_ed26_server_europe_settings(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ZEX();
}
void seg_ed3c_server_cfg_msb(mos6502& emu) {
	++emu.pc; emu.Op_SBC_ABS();
	++emu.pc; emu.Op_ROL_ZER();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_ed3e_server_cfg_lsb(mos6502& emu) {
	++emu.pc; emu.Op_BPL_REL();
}
void seg_ed40_server_name_hidden(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_ed4d_the_purge(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ed54_ed54(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ed63_step_title(mos6502& emu) {
	++emu.pc; emu.Op_INC_ABS();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_SBC_INY();
}
void seg_ed77_client_id_request_rnd(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_ed84_client_id_set_generic(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_ed89_ed89(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_eda2_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_eda3_client_id_set_low(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eda8_client_id_set_hi(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_edad_estimate_latency_1(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_edb4_edb4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_edbf_edbf(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_edc4_estimate_latency_msg(mos6502& emu) {
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_SED_IMP();
	++emu.pc; emu.Op_SBC_ABY();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_NOP_IMP();
}
void seg_eddb_estimate_latency_2(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_ede0_ede0(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_edeb_edeb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_edfd_edfd(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ee06_ee06(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ee0b_error_no_contact(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ee12_error_bad_ping(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ee16_end(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ee19_connection_title(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ee20_ee20(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ee25_step_title(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
}
void seg_ee39_connection_send_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ee8d_connection_wait_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ee98_ee98(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_ee9c_ee9c(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_eea0_eea0(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eea5_handle_message(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_eeac_eeac(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_eeb3_eeb3(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_eeb7_eeb7(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_eebb_disconnected_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eec2_start_game_msg(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eec5_connected_msg(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eeca_error_crazy_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eece_end(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eed1_wait_game(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_eed8_eed8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_eef5_got_start_game_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ef1b_no_contact(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ef22_ef22(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ef25_step_title(mos6502& emu) {
	++emu.pc; emu.Op_NOP_IMP();
}
void seg_ef39_bad_ping(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ef40_ef40(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ef43_step_title(mos6502& emu) {
	++emu.pc; emu.Op_NOP_IMP();
}
void seg_ef57_crazy_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ef5e_ef5e(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_ef61_step_title(mos6502& emu) {
	++emu.pc; emu.Op_NOP_IMP();
}
void seg_ef75_disconnected(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_efab_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_efb2_efb2(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_efb8_space(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_efba_char_ok(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_efc3_efc3(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_efcb_back_on_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_efcf_efcf(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_efd5_efd5(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_efda_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_efdb_show_step_name(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STY_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_efea_efea(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_efeb_buffer_header(mos6502& emu) {
	++emu.pc; emu.Op_AND_INX();
}
void seg_efee_init_stage_selection_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_effe_effe(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f009_f009(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f00b_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f014_f014(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f01b_f01b(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f020_wait_vbi(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f025_f025(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f028_f028(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f02b_f02b(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f12c_stage_selection_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f134_f134(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f136_check_one_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f13a_f13a(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f13c_btn_search_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CMP_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f143_f143(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f148_next_controller(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f14d_f14d(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f150_jump_from_table(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABI();
}
void seg_f160_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f161_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_f167_f167(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f16a_f16a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f16f_previous_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f174_go_right(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f17a_f17a(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f17e_f17e(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f185_f185(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f18e_f18e(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f191_go_left(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f197_f197(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f19b_f19b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1a2_f1a2(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1ab_f1ab(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f1ae_go_up(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f1b4_f1b4(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f1b8_f1b8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1bf_f1bf(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1ca_f1ca(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f1cd_go_down(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f1d3_f1d3(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f1d7_f1d7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1de_f1de(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1e9_f1e9(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f1ec_fade_out(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1ee_fade_step(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f1f1_f1f1(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f209_copy_bg_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f215_f215(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f219_f219(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f21d_f21d(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f220_end_copy(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f229_sleep(mos6502& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f22d_f22d(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f230_f230(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f233_f233(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f239_f239(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f23f_f23f(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f240_palette_steps(mos6502& emu) {
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INY();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_ORA_INX();
}
void seg_f2a0_buttons_numbering(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_f2b2_stage_selection_screen_modify_selected(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_EOR_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f2bf_change_one(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_EOR_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f2ce_f2ce(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f2d1_f2d1(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f2da_set_line_attributes(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f2e2_f2e2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_f2e8_f2e8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f2ee_no_change_first_line(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f2f2_f2f2(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f2f8_no_change(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f32c_f32c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f332_frame_adresses_lsb(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f336_init_title_screen(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f33e_f33e(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f349_f349(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f354_f354(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f36d_f36d(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f381_emu_50hz_done(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f388_f388(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f38f_f38f(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f393_f393(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f39b_f39b(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f39e_f39e(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f3a1_f3a1(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f3a4_soft_init(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f3ab_end_menu_init(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f3ac_set_title_chr(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f3ce_f3ce(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f3cf_init_title_animation(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f3d6_f3d6(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f3e7_f3e7(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f3e8_palette_title_initial(mos6502& emu) {
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_AND_INX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f408_title_screen_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f410_f410(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f413_f413(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f416_f416(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f41e_f41e(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f423_f423(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f426_update_cheatcode(mos6502& emu) {
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f42a_f42a(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f431_cheat_succeed(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f436_press_any_key(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f43a_f43a(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f43e_check_controller_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f442_f442(mos6502& emu) {
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f446_f446(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f449_next_screen(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f44c_f44c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f451_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f452_cheatcode(mos6502& emu) {
	++emu.pc; emu.Op_PHP_IMP();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f466_tick_title_animation(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f477_f477(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f484_change_anim_state(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f48b_wait_logo(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f491_f491(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f494_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f495_show_logo(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f498_f498(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f49a_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f4a6_f4a6(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f4a9_f4a9(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f4b8_f4b8(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f4b9_logo_palette_nt_buffer(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_ORA_ABS();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f4c1_shake(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f4c4_f4c4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f4c8_f4c8(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f4cb_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f4cc_wait_text(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f4d2_f4d2(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f4d5_f4d5(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f4d8_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f4d9_show_text(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f4e1_f4e1(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f4e4_f4e4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f517_finish(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f51a_f51a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f522_f522(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f525_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f526_text_colors(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_ORA_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f529_title_screen_restore_music_state(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f52d_f52d(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f530_f530(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f533_mute(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f536_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f542_state_transition_pretransition_lsb(mos6502& emu) {
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f54c_state_transition_pretransition_msb(mos6502& emu) {
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f556_state_transition_posttransition_lsb(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f560_state_transition_posttransition_msb(mos6502& emu) {
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_SBC_ZEX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f56a_state_transition_pre_scroll_down(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f57d_f57d(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f57e_camera_steps(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
}
void seg_f588_state_transition_pre_scroll_up(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f59b_f59b(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f59c_camera_steps(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDY_ZEX();
}
void seg_f5a6_state_transition_post_scroll_down(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f5bb_f5bb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f5c4_camera_steps(mos6502& emu) {
	++emu.pc; emu.Op_PLP_IMP();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_f5d2_state_transition_post_scroll_up(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f5e7_f5e7(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f5e8_camera_steps(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_SEI_IMP();
	++emu.pc; emu.Op_ROR_ACC_ACC();
	++emu.pc; emu.Op_EOR_ABX();
	++emu.pc; emu.Op_ROL_ZEX();
}
void seg_f5f6_scroll_transition(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f5fa_f5fa(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f614_set_up_values(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f62d_end_set_values(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f631_f631(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_f637_do_not_touch_offsets(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_f63b_save_one_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_f642_f642(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f652_hidden_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f657_two_byte_position_stored(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f663_f663(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f665_scroll_frame(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f66b_f66b(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f66f_f66f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f671_set_camera_scroll(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f67e_f67e(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f682_f682(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f68a_f68a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f692_simple_sleep(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f695_end_sleep(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f6a1_clean(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f6a4_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f6a5_move_sprites(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f6a8_f6a8(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6ac_f6ac(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6b0_f6b0(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6b4_f6b4(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6b8_f6b8(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6bc_f6bc(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6c0_f6c0(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6c4_f6c4(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f6c8_f6c8(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f6cf_update_clouds(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_f6d2_vertical_one_cloud(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_f6e8_f6e8(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f6eb_f6eb(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f6ee_f6ee(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDY_ABX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f6f2_update_screen_sprites(mos6502& emu) {
	++emu.pc; emu.Op_TSX_IMP();
	++emu.pc; emu.Op_LDY_ABX();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_SBC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f706_move_one_screen_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f715_f715(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f71a_hide_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f71c_update_oam(mos6502& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f72a_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f72b_sleep_frame(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f72e_f72e(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f731_f731(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f732_init_menu(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f756_re_init_menu(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f758_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f763_f763(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f766_f766(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f767_cloud_sprites(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f7a3_set_menu_chr(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f7c5_f7c5(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f7c6_tick_moving_clouds(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f7ce_f7ce(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_LSR_ACC_ACC();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_CPX_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f7d7_move_one_cloud(mos6502& emu) {
	++emu.pc; emu.Op_CPX_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f7db_f7db(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZEX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f7e0_f7e0(mos6502& emu) {
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f7e4_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f7e5_menu_position_clouds(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f7e7_position_one_cloud(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f7ea_f7ea(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_f7ed_f7ed(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f7ee_menu_position_cloud(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f7fa_f7fa(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f7fe_do_not_hide(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f80b_place_one_sprite(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f811_f811(mos6502& emu) {
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f815_skip_y_offset(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f82a_f82a(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f82d_sprite_offset_x(mos6502& emu) {
	++emu.pc; emu.Op_BPL_REL();
}
void seg_f82f_f82f(mos6502& emu) {
	++emu.pc; emu.Op_BPL_REL();
}
void seg_f832_sprite_offset_y(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f837_stage_elements_size(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f83b_stage_generic_init(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f845_wait_vbi(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f84a_f84a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f865_copy_palette(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f86f_f86f(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f87e_f87e(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f88e_copy_header_loop(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f899_copy_elements_loop(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f8a2_f8a2(mos6502& emu) {
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f8af_copy_one_element(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f8ba_f8ba(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f8bd_copy_data_end(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f8bf_stage_iterate_all_elements(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f8c4_f8c4(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f8c8_f8c8(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f8cd_f8cd(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f8d1_f8d1(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f8d6_f8d6(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f8d8_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f8d9_check_current_element(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f8de_f8de(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f8e1_f8e1(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f8e5_f8e5(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ABX();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f8f7_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f8f8_ai_action_double_jump(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f901_ai_action_jump(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f90b_ai_action_right_tilt(mos6502& emu) {
	++emu.pc; emu.Op_STA_INX();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f910_ai_action_down_tilt(mos6502& emu) {
	++emu.pc; emu.Op_STY_ZER();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f915_ai_action_special_up(mos6502& emu) {
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f920_ai_action_idle(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_f923_ai_level_to_delay(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ABX();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f926_ai_init(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f935_ai_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f947_find_action(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f95a_run_current_selector(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f979_f979(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f981_f981(mos6502& emu) {
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f983_do_action(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_f986_f986(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f98c_f98c(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f98d_ai_continue_action(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_f996_f996(mos6502& emu) {
	++emu.pc; emu.Op_DEY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f99a_next_step(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_STY_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f9a7_f9a7(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f9ac_set_controller(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f9b4_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_f9b5_ai_attack_selector(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_f9e9_f9e9(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_f9ee_right_facing(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f9f0_end_direction_flag(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f9f6_check_one_attack(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_BIT_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_f9fd_f9fd(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fa04_condition_ok(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fa5f_fa5f(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fa61_fa61(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fa74_fa74(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fa77_next_attack(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fa7b_fa7b(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fa7e_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fa7f_ai_chase_selector(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_BVC_REL();
}
void seg_fa89_fa89(mos6502& emu) {
	++emu.pc; emu.Op_EOR_IMM();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_fa8b_end_signed_cmp(mos6502& emu) {
	++emu.pc; emu.Op_BPL_REL();
}
void seg_fa8d_fa8d(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fa92_fa92(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fa94_fa94(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ABX();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fa9d_fa9d(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_faa1_no_tap_down(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_faab_faab(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_faaf_direction_set(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fab5_fab5(mos6502& emu) {
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fab9_jump_if_higher(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_fabf_fabf(mos6502& emu) {
	++emu.pc; emu.Op_SEC_IMP();
	++emu.pc; emu.Op_SBC_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCS_REL();
}
void seg_fac6_end_jump_if_higher(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fad4_fad4(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fadf_negative_offset(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fae7_end_set_offset(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_faff_faff(mos6502& emu) {
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fb03_dont_jump(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fb0e_jump(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fb19_tap_down(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fb25_action_set(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fb2c_ai_delay_action(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fb30_fb30(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fb43_no_delay(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fb47_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fb48_esp_send_cmd(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fb51_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_INY();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fb5a_fb5a(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fb5b_esp_get_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BMI_REL();
}
void seg_fb62_fb62(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fb69_store_msg(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_TAX_IMP();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fb74_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fb77_fb77(mos6502& emu) {
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fb80_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fb81_network_init_stage(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fb8c_clear_one_input(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fb97_fb97(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fba7_network_tick_ingame(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fbab_fbab(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fbae_do_tick(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fbc1_fbc1(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_fbff_controller_sent(mos6502& emu) {
	++emu.pc; emu.Op_BIT_ABS();
	++emu.pc; emu.Op_BPL_REL();
}
void seg_fc04_fc04(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc0f_fc0f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc1a_fc1a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fc20_fc20(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fc23_skip_message(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fc2d_state_updated(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fc3c_fc3c(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fc3f_fc3f(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc43_fc43(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc47_fc47(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc4b_fc4b(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fc4d_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fc4e_update_state(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fc62_ancient(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fc65_fc65(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fc68_end(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fc69_rollback_state(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STY_ABS();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc73_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_STY_ABS();
	++emu.pc; emu.Op_INY_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_DEX_IMP();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc84_fc84(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc86_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc90_fc90(mos6502& emu) {
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc92_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fc9c_fc9c(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fca3_fca3(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fcab_screen_shake_updated(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fcc3_player_a(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_NOP_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fcce_player_b(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_PHA_IMP();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fcd5_ok(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_PLA_IMP();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDX_IMM();
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fce0_copy_one_byte(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_STA_ABX();
	++emu.pc; emu.Op_INX_IMP();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fceb_fceb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fcef_roll_forward_one_step(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fcf5_fcf5(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fcf7_fcf7(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fcfd_fcfd(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fcff_fcff(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fd05_fd05(mos6502& emu) {
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fd07_fd07(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_CMP_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fd0d_fd0d(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fd10_do_it(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fd27_fd27(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fd2a_fd2a(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fd2d_fd2d(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fd31_fd31(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fd35_fd35(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_BNE_REL();
}
void seg_fd39_fd39(mos6502& emu) {
	++emu.pc; emu.Op_INC_ZER();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fd3b_end_inc(mos6502& emu) {
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fd3e_dont_do_it(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fd53_set_opponent_buttons_from_history(mos6502& emu) {
	++emu.pc; emu.Op_CPY_ABS();
	++emu.pc; emu.Op_BEQ_REL();
}
void seg_fd58_fd58(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_CMP_IMM();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fd5f_unknown(mos6502& emu) {
	++emu.pc; emu.Op_AND_IMM();
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_JMP_ABS();
}
void seg_fd65_mark_nexts_unknown(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ORA_ABS();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fd6d_known(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABY();
	++emu.pc; emu.Op_STA_ZEX();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fd73_mapper_init(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_LDA_IMM();
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
}
void seg_fd99_stages_tick_routine(mos6502& emu) {
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_CPY_IMM();
	++emu.pc; emu.Op_STA_ZER();
}
void seg_fdb1_stages_data(mos6502& emu) {
	++emu.pc; emu.Op_ADC_INX();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_fdb9_stages_bank(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
}
void seg_fdbd_stages_tileset_lsb(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdc0_fdc0(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_fdc1_stages_tileset_msb(mos6502& emu) {
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_LDY_ZER();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_fdc5_stages_tileset_bank(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_fdc9_characters_bank_number(mos6502& emu) {
	++emu.pc; emu.Op_ORA_ZER();
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_fdcb_characters_tiles_data_lsb(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
void seg_fdcf_characters_tiles_number(mos6502& emu) {
	++emu.pc; emu.Op_LSR_ABX();
	++emu.pc; emu.Op_CPX_IMM();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fdd1_characters_properties_lsb(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ABS();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fdd3_characters_properties_msb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fdd5_characters_palettes_names_lsb(mos6502& emu) {
	++emu.pc; emu.Op_PLP_IMP();
}
void seg_fdd7_characters_palettes_names_msb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fdda_fdda(mos6502& emu) {
	++emu.pc; emu.Op_AND_INY();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fdd9_characters_palettes_lsb(mos6502& emu) {
	++emu.pc; emu.Op_INC_ABX();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fdde_fdde(mos6502& emu) {
	++emu.pc; emu.Op_LSR_ZER();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fddf_characters_alternate_palettes_msb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fde2_fde2(mos6502& emu) {
	++emu.pc; emu.Op_TAY_IMP();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fde1_characters_weapon_names_lsb(mos6502& emu) {
	++emu.pc; emu.Op_ADC_ZEX();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fde3_characters_weapon_names_msb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fde5_characters_weapon_palettes_lsb(mos6502& emu) {
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fde7_characters_weapon_palettes_msb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_BCC_REL();
}
void seg_fdea_fdea(mos6502& emu) {
	++emu.pc; emu.Op_ORA_INX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_AND_ABX();
	++emu.pc; emu.Op_ROL_ABX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fde9_characters_start_routines_table_lsb(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ABS();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_AND_ABX();
	++emu.pc; emu.Op_ROL_ABX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdeb_characters_start_routines_table_msb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_ORA_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_AND_ABX();
	++emu.pc; emu.Op_ROL_ABX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fded_characters_update_routines_table_lsb(mos6502& emu) {
	++emu.pc; emu.Op_DEC_ZEX();
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_AND_ABX();
	++emu.pc; emu.Op_ROL_ABX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdef_characters_update_routines_table_msb(mos6502& emu) {
	++emu.pc; emu.Op_TYA_IMP();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_AND_ABX();
	++emu.pc; emu.Op_ROL_ABX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdf1_characters_offground_routines_table_lsb(mos6502& emu) {
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_AND_ABX();
	++emu.pc; emu.Op_ROL_ABX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdf3_characters_offground_routines_table_msb(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_ADC_INY();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdf5_characters_onground_routines_table_lsb(mos6502& emu) {
	++emu.pc; emu.Op_ROL_ABX();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdf7_characters_onground_routines_table_msb(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdfb_characters_input_routines_table_msb(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_CMP_ABY();
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdfd_characters_onhurt_routines_table_lsb(mos6502& emu) {
	++emu.pc; emu.Op_LDX_ZER();
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fdff_characters_onhurt_routines_table_msb(mos6502& emu) {
	++emu.pc; emu.Op_STA_ABY();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe01_set_player_animation(mos6502& emu) {
	++emu.pc; emu.Op_TXA_IMP();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_ASL_ACC_ACC();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_ZER();
	++emu.pc; emu.Op_CLC_IMP();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_ADC_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe18_fe18(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZEX();
	++emu.pc; emu.Op_LDY_IMM();
	++emu.pc; emu.Op_STA_INY();
	++emu.pc; emu.Op_RTS_IMP();
}
void seg_fe27_server_bytecode_error(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe2c_server_bytecode_init(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe2f_fe2f(mos6502& emu) {
	++emu.pc; emu.Op_LDA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ZER();
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe46_fe46(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe4b_server_bytecode_tick(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe4e_fe4e(mos6502& emu) {
	++emu.pc; emu.Op_LDA_IMM();
	++emu.pc; emu.Op_STA_ABS();
	if (emu.stopped) { return; }
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe53_credits_begin(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe56_fe56(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe6a_fe6a(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fe8e_fe8e(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_feb0_feb0(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fed7_fed7(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_fee7_fee7(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_feff_feff(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ff28_ff28(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ff37_ff37(mos6502& emu) {
	++emu.pc; emu.Op_JSR_ABS();
}
void seg_ffbc_credits_end(mos6502& emu) {
	++emu.pc; emu.Op_BRK_IMP();
}
}

std::array<void(*)(mos6502&), 0x4000> GameState::emulator_compiled_segments = {
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
	&emulator_compiled_segments_funcs::seg_c2fb_handle_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c300_c300,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_c31c_c31c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c328_end_buffers,
	&emulator_compiled_segments_funcs::seg_c329_number_to_tile_indexes,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c32d_find_one_digit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c335_try_digit_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c33b_c33b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c358_c358,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c35f_test_coeff_10,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c363_c363,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c36a_coefficent_changed,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c36e_c36e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c370_destination_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c373_next_digit_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c37f_end,
	&emulator_compiled_segments_funcs::seg_c380_keep_input_dirty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c385_dummy_routine,
	&emulator_compiled_segments_funcs::seg_c386_get_transition_id,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c390_change_global_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c39c_c39c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3a9_c3a9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3b2_c3b2,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3b4_clr_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3bc_c3bc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3cd_c3cd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d0_c3d0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d6_find_transition_index,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3d9_c3d9,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3dd_check_one_entry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e2_c3e2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3e6_c3e6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ea_not_found,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3ec_found,
	&emulator_compiled_segments_funcs::seg_c3ed_pre_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3f0_c3f0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c3f4_c3f4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c401_end,
	&emulator_compiled_segments_funcs::seg_c402_post_transition,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c405_c405,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c409_c409,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c416_c416,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c419_no_transition,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c423_c423,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c428_end,
	&emulator_compiled_segments_funcs::seg_c429_draw_zipped_nametable,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c438_load_background,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c43c_c43c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c442_c442,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c445_opcode,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c448_c448,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c44c_c44c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c44f_write_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c455_c455,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c458_c458,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c45b_end,
	&emulator_compiled_segments_funcs::seg_c45c_next_byte,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c460_c460,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c462_end_inc_vector,
	&emulator_compiled_segments_funcs::seg_c463_call_pointed_subroutine,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c466_copy_palette_to_ppu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c47a_copy_one_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c483_c483,
	&emulator_compiled_segments_funcs::seg_c484_shake_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4a0_c4a0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4a5_set_screen_two,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4ac_set_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4b2_c4b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4bc_end,
	&emulator_compiled_segments_funcs::seg_c4bd_animation_init_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c4f4_animation_state_change_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c50f_animation_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c564_end,
	&emulator_compiled_segments_funcs::seg_c565_animation_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c57f_c57f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c582_inc_current_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c587_skip_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c58b_c58b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c590_c590,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c593_end_skip_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c598_c598,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c59c_c59c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5a7_store_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5b8_end,
	&emulator_compiled_segments_funcs::seg_c5b9_add_to_frame_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5c5_draw_anim_frame,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5c7_handle_one_entry,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5cb_c5cb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5cf_c5cf,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5d3_c5d3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5d7_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5ec_c5ec,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5ef_clear_unused_sprites,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5f3_c5f3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c5f9_c5f9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c611_end,
	&emulator_compiled_segments_funcs::seg_c612_call_pointed_subroutine13,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c615_anim_frame_move_sprite,
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
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c623_c623,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c628_use_last_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62a_set_sprite_used,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c62f_default_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c635_end_init_direction_data,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c639_c639,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c63e_use_first_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c640_sprite_index_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c648_c648,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c64d_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c64f_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c65e_c65e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c663_c663,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c668_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c66e_c66e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c671_end_anim_hook,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c685_c685,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c68a_flip_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c691_got_relative_pos,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c694_c694,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c699_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c69b_set_relative_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6aa_c6aa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b0_continue,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6b5_c6b5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ba_inc_sprite_index,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6bc_end_next_sprite,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6bf_skip,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6c8_end,
	&emulator_compiled_segments_funcs::seg_c6c9_check_collision,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6cf_c6cf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d5_c6d5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6d8_vertical_edges,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6e8_c6e8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ea_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6ec_c6ec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6fc_c6fc,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c6fe_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c700_left_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c710_c710,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c712_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c714_c714,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c71e_c71e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c720_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c722_c722,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c733_right_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c743_c743,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c745_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c747_c747,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c751_c751,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c753_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c755_c755,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c766_horizontal_edges,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c776_c776,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c778_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c77a_c77a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_c78e_top_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c79e_c79e,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7a0_end_signed_cmp,
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
	&emulator_compiled_segments_funcs::seg_c7ac_c7ac,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7ae_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7b0_c7b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7c1_bot_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d1_c7d1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d3_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7d5_c7d5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7df_c7df,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7e1_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7e3_c7e3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c7f4_end,
	&emulator_compiled_segments_funcs::seg_c7f5_check_top_collision,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_c807_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c809_c809,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c819_c819,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c81b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c81d_c81d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c82d_c82d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c82f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c831_c831,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c83b_c83b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c83d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c83f_c83f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c850_end,
	&emulator_compiled_segments_funcs::seg_c851_boxes_overlap,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c85b_c85b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c85d_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c85f_c85f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c869_c869,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c86b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c86d_c86d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c877_c877,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c879_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c87b_c87b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c885_c885,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c887_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c889_c889,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c88e_no_overlap,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c890_end,
	&emulator_compiled_segments_funcs::seg_c891_audio_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c894_c894,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c89a_audio_play_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a3_c8a3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8a8_c8a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_c8d5_init_channel,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8e5_c8e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8f5_c8f5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8fb_pulse_2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c8fe_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c90a_end_pulse_specifics,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c927_audio_mute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c942_audio_unmute_music,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c94a_square_reinit_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c963_c963,
	&emulator_compiled_segments_funcs::seg_c964_audio_music_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c96d_c96d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c972_c972,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c977_c977,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97c_c97c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c97f_end,
	&emulator_compiled_segments_funcs::seg_c980_noise_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c984_c984,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c987_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c994_c994,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a3_overflow,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9a8_c9a8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b0_negative,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b5_store_result,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9b8_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9bd_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9df_c9df,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_c9f3_end_opcodes_execution,
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
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca03_regular_write,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca14_end_write_apu,
	&emulator_compiled_segments_funcs::seg_ca15_pulse_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca1a_ca1a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca21_do_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca33_positive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca39_negative,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca3c_end_byte_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca44_end_effects,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca4c_execute_current_opcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca6f_ca6f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca75_ca75,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca84_skip_opcode_update,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca89_end_opcodes_execution,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ca96_ca96,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_caaa_caaa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cab3_triangle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cab8_cab8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cabd_cabd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cac2_unmute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cad0_write_linear_cnt,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cad3_end_write_apu,
	&emulator_compiled_segments_funcs::seg_cad4_opcode_noise_sample_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cad6_opcode_sample_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cafb_cafb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb0b_no_track_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb16_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb19_opcode_chan_params,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb36_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb48_opcode_chan_volume_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb50_opcode_chan_volume_high,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb5a_opcode_noise_set_volume,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb62_opcode_set_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb78_opcode_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb90_note_table_lookup,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cb9e_opcode_play_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbae_left_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb0_one_left_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb3_cbb3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb7_right_shift,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbb9_one_right_shift,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbbc_cbbc,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbc0_end_wait_compute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbcb_cbcb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbdf_opcode_play_timed_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cbe7_cbe7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc05_opcode_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc12_opcode_noise_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc1d_opcode_noise_long_wait,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc1f_opcode_long_wait,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc28_opcode_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc3d_opcode_noise_halt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc52_opcode_pitch_slide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc58_cc58,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc5a_set_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc66_opcode_pulse_meta_uslide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc6d_opcode_pulse_meta_dslide,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc71_opcode_pulse_meta_common,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc7b_cc7b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc7f_cc7f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc85_cc85,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc91_end_note,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cc9d_cc9d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cca4_cca4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cca9_keep_volume,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccab_set_volume_mask,
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
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccb9_replace_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc3_end_volume_duty,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccc9_ccc9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccd4_end_pitch_slide,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccd7_opcode_noise_set_periodic,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccdb_ccdb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cce3_unset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cce8_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ccee_opcode_noise_play_timed_freq,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd05_opcode_noise_pitch_slide_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd12_opcode_noise_pitch_slide_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd1a_pulse1_opcode_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd2a_pulse1_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd43_noise_opcode_routines_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd4c_particle_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd52_process_one_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd57_cd57,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd5a_cd5a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd5d_skip_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd62_next_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd6d_cd6d,
	&emulator_compiled_segments_funcs::seg_cd6e_process_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd7e_next_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd88_cd88,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd8f_cd8f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cd94_cd94,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdad_hide_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdb2_particle_drawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdb9_end,
	&emulator_compiled_segments_funcs::seg_cdba_particle_handlers_reinit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdc5_cdc5,
	&emulator_compiled_segments_funcs::seg_cdc6_loop_on_particle_boxes,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdc8_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdcd_cdcd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdd6_cdd6,
	&emulator_compiled_segments_funcs::seg_cdd7_loop_on_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cddb_next_particle,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_cdea_cdea,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cded_end,
	&emulator_compiled_segments_funcs::seg_cdee_deactivate_particle_block,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdf6_cdf6,
	&emulator_compiled_segments_funcs::seg_cdf7_hide_particles,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cdfb_cdfb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce00_second_block,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce02_set_sprite_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce0f_ce0f,
	&emulator_compiled_segments_funcs::seg_ce10_hide_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce1e_construct_palettes_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce21_ce21,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce37_copy_one_byte,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce48_construct_nt_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce4b_ce4b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce53_copy_header_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce5e_ce5e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce62_copy_payload_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce73_clear_bg_bot_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce86_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce8f_ce8f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce91_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce97_ce97,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ce9d_ce9d,
	&emulator_compiled_segments_funcs::seg_ce9e_switch_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cea2_copy_one_tile,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cea4_copy_one_byte,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cebf_cebf,
	&emulator_compiled_segments_funcs::seg_cec0_switch_selected_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cec4_cec4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cec8_select_player_b,
	&emulator_compiled_segments_funcs::seg_cec9_end,
	&emulator_compiled_segments_funcs::seg_ceca_merge_to_player_velocity,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cecc_add_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cedb_cedb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ceec_check_diff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cef0_cef0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cef6_cef6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf03_add_step_size,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf18_cf18,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf1a_cf1a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf2a_decrement,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf37_next_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf3e_cf3e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf43_apply_player_gravity,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf5a_cf5a,
	&emulator_compiled_segments_funcs::seg_cf5b_check_on_ground,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf66_cf66,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf69_check_current_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf78_cf78,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf7b_cf7b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf7e_oos_platform,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf81_end_platform_handler,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf83_grounded,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf8b_not_grounded,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf8d_end_current_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cf94_check_simple_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfa6_check_oos_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfc7_check_on_platform,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfcb_cfcb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfcf_cfcf,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd2_offscreen,
	&emulator_compiled_segments_funcs::seg_cfd3_check_on_platform_screen_unsafe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfd9_cfd9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfdf_cfdf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfe7_cfe7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cfeb_end,
	&emulator_compiled_segments_funcs::seg_cfec_check_on_platform_multi_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cff6_cff6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cff8_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_cffa_cffa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d004_d004,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d006_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d008_d008,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d00c_d00c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d00e_dec_16_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d014_d014,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d01a_d01a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d020_d020,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d023_offground,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d026_check_in_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d02d_d02d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d031_d031,
	&emulator_compiled_segments_funcs::seg_d032_simple_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d036_d036,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d03a_d03a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d041_d041,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d043_end_left_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d04a_d04a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d04c_end_right_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d053_d053,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d055_end_top_edge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d05c_d05c,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d05e_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d060_not_in_platform,
	&emulator_compiled_segments_funcs::seg_d061_oos_platform_handler,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d06d_d06d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d06f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d071_d071,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d07d_d07d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d07f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d081_d081,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d08d_d08d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d08f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d091_d091,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d09d_d09d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d09f_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a1_in_platform,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0a3_not_in_platform,
	&emulator_compiled_segments_funcs::seg_d0a4_place_character_ppu_tiles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0b3_d0b3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0bd_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0c4_end_set_ppu_addr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0d9_d0d9,
	&emulator_compiled_segments_funcs::seg_d0da_controller_callbacks,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0de_check_controller_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0e2_d0e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d0f9_next_controller_state,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d110_particle_directional_indicator_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d149_d149,
	&emulator_compiled_segments_funcs::seg_d14a_set_particle_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d170_particle_directional_indicator_tick,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d174_d174,
	&emulator_compiled_segments_funcs::seg_d175_do_something,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d182_d182,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d185_d185,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d188_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d18d_d18d,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d18f_end,
	&emulator_compiled_segments_funcs::seg_d190_move_particles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d19b_d19b,
	&emulator_compiled_segments_funcs::seg_d19c_move_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1c7_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1c9_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1d9_d1d9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1de_separate,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1e3_set_y_direction,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1fd_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d1ff_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d219_particle_death_start,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d25b_d25b,
	&emulator_compiled_segments_funcs::seg_d25c_place_one_particle,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d26a_d26a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d26c_no_reposition_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d27f_no_reposition_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2a7_particles_start_position_offset_x,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ae_particles_start_position_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2b5_particle_death_tick,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d2c9_d2c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2d0_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2d2_do_nothing,
	&emulator_compiled_segments_funcs::seg_d2d3_go_disable_box,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2d8_d2d8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2dd_audio_music_power,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2ee_audio_music_weak,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d2f9_audio_music_gameover,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d304_audio_play_crash,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d314_audio_play_death,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d324_audio_play_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d334_audio_play_parry,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d344_audio_play_shield_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d354_audio_play_shield_break,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d364_audio_play_title_screen_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d374_global_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d379_d379,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d38c_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d394_d394,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d39c_d39c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3be_d3be,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3c3_d3c3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3c6_d3c6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3fb_character_selection_animation_states_addresses_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3fd_character_selection_animation_states_addresses_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d3ff_init_character_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d415_d415,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d425_d425,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d42a_d42a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d454_d454,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d492_d492,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4af_d4af,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b4_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4b9_d4b9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4bc_d4bc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4bf_d4bf,
	&emulator_compiled_segments_funcs::seg_d4c0_character_selection_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c3_d4c3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c6_d4c6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4c9_d4c9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4cb_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4cf_d4cf,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4d1_btn_search_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4d8_d4d8,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d4e5_jump_from_table,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4f5_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4fa_previous_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d4ff_next_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d517_previous_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d52f_next_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d537_d537,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d53e_previous_option,
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
	&emulator_compiled_segments_funcs::seg_d549_refresh_player_highlighting,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d552_d552,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d55c_d55c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d565_d565,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d568_next_character_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d570_d570,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d577_previous_character_color,
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
	&emulator_compiled_segments_funcs::seg_d582_refresh_player_character_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d589_d589,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d58c_next_weapon_color,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d594_d594,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d59b_previous_weapon_color,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d59f_d59f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5a6_refresh_player_weapon,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ad_d5ad,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b0_next_character,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5b8_d5b8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5bf_previous_character,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5c3_d5c3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5ca_refresh_player_character,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5e7_d5e7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d5f7_d5f7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d600_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d606_end_set_ppu_addr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d613_end,
	&emulator_compiled_segments_funcs::seg_d614_buttons_numbering,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d629_next_value_handlers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d635_async_jobs,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d63b_d63b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d63e_do_player_a_job,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d642_d642,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d647_do_player_b_job,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d64b_d64b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d650_end,
	&emulator_compiled_segments_funcs::seg_d651_tick_async_job,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d659_d659,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d65d_d65d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d660_update_char_palette,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d672_update_weapon_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d67d_d67d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d686_d686,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d68d_copy_tiles,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6ac_d6ac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6c6_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d6d1_d6d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d6f9_finalize_switch,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d721_end,
	&emulator_compiled_segments_funcs::seg_d722_character_selection_tick_animations,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d743_d743,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d746_d746,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d767_d767,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d76a_d76a,
	&emulator_compiled_segments_funcs::seg_d76b_character_selection_update_screen,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d76f_highlight_one_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d774_d774,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d779_d779,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d77e_d77e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d783_d783,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d78b_d78b,
	&emulator_compiled_segments_funcs::seg_d78c_character_selection_highligh_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d792_d792,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d797_status_inactive,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d799_write_status_component,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7be_d7be,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7c0_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7cb_d7cb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7d1_options_buffer_length,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7e9_options_buffer_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d7f5_buffer_player_a_character_palette_active,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d803_buffer_player_a_character_palette_inactive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d811_buffer_player_b_character_palette_active,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d81f_buffer_player_b_character_palette_inactive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d82d_buffer_player_a_weapon_active,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d834_buffer_player_a_weapon_inactive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d83b_buffer_player_b_weapon_active,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d842_buffer_player_b_weapon_inactive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d849_buffer_player_a_character_inactive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d850_buffer_player_a_character_active,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d857_buffer_player_b_character_inactive,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d85e_buffer_player_b_character_active,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d865_character_selection_draw_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d877_end,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d87b_compute_option_indexes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8a8_draw_character_palette,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8ab_d8ab,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d8cc_d8cc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d8f0_draw_weapon,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d914_d914,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_d938_draw_character,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d93b_d93b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d964_d964,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d981_d981,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d984_values_handlers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d990_buffer_header_player_a_character_palette_name,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d993_buffer_header_player_b_character_palette_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9ae_default_config,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9c9_init_config_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9d9_d9d9,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9db_sprite_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9e6_d9e6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_d9f1_d9f1,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_da02_da02,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da05_da05,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da36_config_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da3e_da3e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da41_da41,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da43_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da47_da47,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da49_btn_search_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da50_da50,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da55_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da5a_da5a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da5d_jump_from_table,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da6d_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da72_previous_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da77_next_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da8b_previous_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_da9f_next_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daa7_daa7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daae_previous_option,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab2_dab2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dab9_music_next_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac1_dac1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac4_dac4,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dac7_mute,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daca_daca,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dacd_stocks_next_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dad5_dad5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dadc_ai_next_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dae4_dae4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daeb_music_previous_value,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daee_stocks_previous_value,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daf2_daf2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_daf9_ai_previous_value,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dafd_dafd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db04_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db07_db07,
	&emulator_compiled_segments_funcs::seg_db08_buttons_numbering,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db1d_next_value_handlers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db29_config_update_screen,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db2d_values,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db30_db30,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db33_db33,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db3b_db3b,
	&emulator_compiled_segments_funcs::seg_db3c_config_highligh_option,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db3f_db3f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db44_loop_header,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db6b_enabled,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db6d_got_attribute,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db7f_options_buffer_headers,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db8b_config_draw_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_db9c_draw_music,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dba0_dba0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbab_music_disabled,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbb3_send_buffer,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbb6_dbb6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbb8_loop_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbc3_dbc3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbc6_draw_stocks,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbdb_loop_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbe7_dbe7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbea_draw_ai,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dbff_loop_value,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc0b_dc0b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc0e_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc15_buffer_on,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc1d_buffer_off,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc25_buffer_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc30_buffer_two,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc3b_buffer_three,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc46_buffer_four,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc51_buffer_five,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc5c_buffer_human,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc67_buffer_easy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc72_buffer_fair,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc7d_buffer_hard,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc88_init_credits_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc8b_dc8b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dc9b_dc9b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcae_load_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcb7_dcb7,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcb9_end_inc_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcbf_dcbf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcc5_dcc5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcd7_dcd7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcdc_dcdc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce1_dce1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dce6_dce6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dceb_dceb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dcf0_dcf0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd0b_write_one_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd1a_dd1a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd34_write_one_char,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd3a_dd3a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd3c_end_inc_cursor,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd40_dd40,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd44_dd44,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd48_dd48,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd4c_dd4c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd55_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd5d_filled_space,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd65_new_line,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd6a_end_write_credits,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd6d_dd6d,
	&emulator_compiled_segments_funcs::seg_dd6e_fill_attributes_line,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd70_write_attribute_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd78_dd78,
	&emulator_compiled_segments_funcs::seg_dd79_credits_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd81_dd81,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd85_dd85,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd89_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd8d_dd8d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd91_dd91,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd94_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dd99_end,
	&emulator_compiled_segments_funcs::seg_dd9a_init_donation_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddaa_ddaa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddb5_ddb5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddb8_ddb8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddbd_donation_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc0_ddc0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddc8_ddc8,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddca_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddce_ddce,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddd2_ddd2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddd6_ddd6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddda_ddda,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddde_ddde,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde2_dde2,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dde6_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddeb_ddeb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddee_go_back,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddf3_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddfb_go_right,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ddff_ddff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de03_no_press,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de1a_end,
	&emulator_compiled_segments_funcs::seg_de1b_option_to_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de20_nt_payload_btc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de26_nt_payload_paypal,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de2c_nt_payload_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de2e_nt_payload_addr_msb,
	&emulator_compiled_segments_funcs::seg_de2f_de2f,
	&emulator_compiled_segments_funcs::seg_de30_init_donation_btc_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de3b_init_donation_paypal_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de43_init_donation_qr_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de4b_de4b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de56_de56,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de59_de59,
	&emulator_compiled_segments_funcs::seg_de5a_donation_qr_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de62_de62,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de66_de66,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de6a_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de6e_de6e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de72_de72,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de75_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de7a_end,
	&emulator_compiled_segments_funcs::seg_de7b_game_modes_init_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de7f_game_modes_pre_update_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de83_init_game_state,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de86_de86,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de8b_de8b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de90_de90,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de95_de95,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de9a_de9a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_de9e_zero_game_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dea5_dea5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec1_dec1,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dec3_update_addr_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deeb_deeb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_deff_position_player_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df1e_df1e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df35_df35,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df4a_df4a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df67_df67,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df7a_df7a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_df8e_initialize_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfa7_dfa7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfac_dfac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfb9_dfb9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfbe_dfbe,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc1_dfc1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfc6_dfc6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd1_dfd1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd6_dfd6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfd9_dfd9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfde_dfde,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfe3_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_dfe8_dfe8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e003_e003,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e01e_e01e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e021_e021,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e024_e024,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e033_e033,
	&emulator_compiled_segments_funcs::seg_e034_place_player_a_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e036_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e042_e042,
	&emulator_compiled_segments_funcs::seg_e043_place_player_b_header,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e045_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e051_e051,
	&emulator_compiled_segments_funcs::seg_e052_place_character_normal_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e065_place_character_alternate_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e078_place_character_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e09c_place_character_ppu_illustrations,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0cf_e0cf,
	&emulator_compiled_segments_funcs::seg_e0d0_illustrations_addr_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0d2_illustrations_addr_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0d4_header_player_a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0d8_header_player_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0dc_game_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0df_e0df,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0ee_e0ee,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0f2_e0f2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0f5_e0f5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0f9_e0f9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e0fe_e0fe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e103_e103,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e106_end_effects,
	&emulator_compiled_segments_funcs::seg_e107_no_screen_shake,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e10b_e10b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e10e_e10e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e112_no_slowdown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e12a_e12a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e12d_e12d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e130_end,
	&emulator_compiled_segments_funcs::seg_e131_slowdown,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e135_e135,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e13b_e13b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e142_keep_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e149_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e152_end,
	&emulator_compiled_segments_funcs::seg_e153_update_players,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e155_hitstun_one_player,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e159_e159,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e15b_hitstun_next_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e160_e160,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e162_hitbox_one_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e165_e165,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e16a_e16a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e16c_update_one_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e181_e181,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e187_e187,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e196_end_input_event,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e199_e199,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e19c_e19c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a0_e1a0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a3_e1a3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1a6_end_visuals,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1ab_e1ab,
	&emulator_compiled_segments_funcs::seg_e1ac_player_state_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1b8_check_player_hit,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1be_e1be,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1c1_process_checks,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e4_e1e4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e1e8_e1e8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e20b_e20b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e20d_e20d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e210_e210,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e237_e237,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e244_check_hitbox_hurtbox,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e267_e267,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e269_e269,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e26e_e26e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e273_e273,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e288_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e28b_hurt_player,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e28e_e28e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e291_e291,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e29e_e29e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2a1_cap_damages,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2a3_apply_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2be_e2be,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e2cb_apply_force_vector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e300_e300,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e31c_e31c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e32f_e32f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e343_passthrough_kb_h,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e349_end_abs_kb_h,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e34d_e34d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e361_passthrough_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e367_end_abs_kb_v,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e389_e389,
	&emulator_compiled_segments_funcs::seg_e38a_move_player,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ad_e3ad,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3b2_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3b4_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3c9_e3c9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ce_set_relative_msb_neg,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d0_end_sign_extend,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3d6_check_platform_collision,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3e1_e3e1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e3ec_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e407_handle_one_platform,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e418_solid_platform_collision,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e452_smooth_platform_collision,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e471_e471,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e485_oos_solid_platform_collision,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4c9_oos_smooth_platform_collision,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e4ef_e4ef,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e503_platform_actions_low,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e507_platform_actions_high,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e50b_check_player_position,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e515_e515,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e517_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e519_e519,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e523_e523,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e525_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e527_e527,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e531_e531,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e533_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e535_e535,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e53f_e53f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e541_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e543_e543,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e546_e546,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e548_e548,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e55f_e55f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e562_offground,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e571_e571,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e574_set_death_state,
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
	nullptr,
	&emulator_compiled_segments_funcs::seg_e585_e585,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e587_e587,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e58c_pass_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e591_left_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e593_cap_vertical_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e595_end_cap_vertical_blast,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e599_e599,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e59b_e59b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a0_pass_cap_horizontal_blast,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a5_top_edge,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a7_cap_horizontal_blast,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5a9_end_cap_horizontal_blast,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ac_e5ac,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5b0_e5b0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5c3_e5c3,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5c6_gameover,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ca_e5ca,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5cd_e5cd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5d3_no_set_winner,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ea_e5ea,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5ee_end,
	&emulator_compiled_segments_funcs::seg_e5ef_write_player_damages,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e5f5_e5f5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e600_prepare_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e608_end_player_variables,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e618_e618,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e642_e642,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e647_stocks_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e667_e667,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e66c_empty_stock,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e66e_set_stock_tile,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e677_e677,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e67f_stocks_positions,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e683_character_icons,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e685_player_effects,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e688_e688,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e68b_e68b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e68e_e68e,
	&emulator_compiled_segments_funcs::seg_e68f_blinking,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e69d_e69d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6aa_no_hitstun,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6ae_e6ae,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6bb_player_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6c0_e6c0,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6c2_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6cd_e6cd,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6d0_update_sprites,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e6d4_update_one_player_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e717_e717,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e71a_e71a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e722_e722,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e724_e724,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e728_e728,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72a_e72a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e72d_oos_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e73f_oos_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e751_oss_top,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e763_oos_bot,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e772_oos_indicator_placed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e795_e795,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e798_e798,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e79c_oos_indicator_drawn,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a6_e7a6,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7a9_all_player_sprites_updated,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ac_e7ac,
	&emulator_compiled_segments_funcs::seg_e7ad_game_mode_local_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b0_game_mode_local_pre_update,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b4_e7b4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7b8_e7b8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7bc_e7bc,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c0_e7c0,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c3_end_ai,
	&emulator_compiled_segments_funcs::seg_e7c4_game_mode_online_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7c7_game_mode_online_pre_update,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ca_init_gameover_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7ec_e7ec,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e7fc_e7fc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e801_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e806_e806,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e815_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e820_e820,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e83b_e83b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e856_e856,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e867_winner_name_writing,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_e8b9_e8b9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8e3_e8e3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e8f9_initialize_a_balloon,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e914_e914,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e916_position_a_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e919_e919,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e91f_e91f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e92a_e92a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e92d_e92d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e934_gameover_screen_tick,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e936_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e944_e944,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e948_e948,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e94b_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e950_e950,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e953_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e958_update_animations,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e95b_e95b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e95e_e95e,
	&emulator_compiled_segments_funcs::seg_e95f_gamover_update_players,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e980_e980,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e983_e983,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e99a_e99a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9a7_e9a7,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9aa_e9aa,
	&emulator_compiled_segments_funcs::seg_e9ab_update_balloons,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9af_update_one_balloon,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9b2_e9b2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9c6_e9c6,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9ca_end_y,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9cd_e9cd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9df_e9df,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9e4_positive,
	nullptr,
	&emulator_compiled_segments_funcs::seg_e9e6_high_byte_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea0e_background,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea16_end_sprite_layer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea20_ea20,
	&emulator_compiled_segments_funcs::seg_ea21_gameover_random_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea2e_init_mode_selection_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea31_ea31,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea41_ea41,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea4c_ea4c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea4f_ea4f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea54_mode_selection_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea57_ea57,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea5a_ea5a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea5c_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea60_ea60,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea64_ea64,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea68_ea68,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea6c_ea6c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea70_ea70,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea74_ea74,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea78_ea78,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea7c_ea7c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea80_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea85_no_press,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea88_go_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea8e_ea8e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea91_from_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea98_go_left,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ea9c_ea9c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaa3_go_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaab_eaab,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eab2_go_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eab7_go_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac1_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac4_eac4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eac8_show_selected_option,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eadf_eadf,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eae3_nt_highlight_payload_local,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eaf8_nt_highlight_payload_online,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb0d_nt_highlight_payload_donation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb25_nt_highlight_payload_addr_msb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb28_init_netplay_launch_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_eb48_eb48,
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
	&emulator_compiled_segments_funcs::seg_eb5a_eb5a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb5e_netplay_launch_screen_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb61_eb61,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb64_eb64,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb73_eb73,
	&emulator_compiled_segments_funcs::seg_eb74_state_routines_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb98_select_server_query_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eb9f_eb9f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebaa_ebaa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebaf_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebc3_cmd_get_server_settings,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebc5_select_server_draw,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebcc_ebcc,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ebf2_ebf2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec14_ec14,
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
	&emulator_compiled_segments_funcs::seg_ec1f_ec1f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec32_ec32,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3a_end_custom_server,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3c_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec3f_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec60_server2_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec66_server3_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec6c_server1_buffer_header,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec6f_server2_buffer_header,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec75_select_server,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec79_ec79,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec7f_ec7f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec83_ec83,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec87_ec87,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec8b_ec8b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec8f_ec8f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec92_next_server,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ec9a_ec9a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca1_previous_server,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eca5_eca5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecaa_end_inputs,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecb5_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecb8_next_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecc3_ecc3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecd0_server_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecdb_ecdb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecee_ecee,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ecf9_ecf9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed04_ed04,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed0e_connect_cmd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed10_server_north_america_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed26_server_europe_settings,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed3c_server_cfg_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed3e_server_cfg_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed40_server_name_hidden,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed4d_the_purge,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed54_ed54,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed63_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed77_client_id_request_rnd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed84_client_id_set_generic,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ed89_ed89,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eda2_end,
	&emulator_compiled_segments_funcs::seg_eda3_client_id_set_low,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eda8_client_id_set_hi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edad_estimate_latency_1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edb4_edb4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edbf_edbf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edc4_estimate_latency_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eddb_estimate_latency_2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ede0_ede0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edeb_edeb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_edfd_edfd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee06_ee06,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee0b_error_no_contact,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee12_error_bad_ping,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee16_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee19_connection_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee20_ee20,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee25_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee39_connection_send_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee8d_connection_wait_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee98_ee98,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ee9c_ee9c,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eea0_eea0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eea5_handle_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeac_eeac,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeb3_eeb3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeb7_eeb7,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eebb_disconnected_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eec2_start_game_msg,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eec5_connected_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eeca_error_crazy_msg,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eece_end,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eed1_wait_game,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eed8_eed8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_eef5_got_start_game_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef1b_no_contact,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef22_ef22,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef25_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef39_bad_ping,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef40_ef40,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef43_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef57_crazy_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef5e_ef5e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef61_step_title,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ef75_disconnected,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efab_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efb2_efb2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efb8_space,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efba_char_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efc3_efc3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efcb_back_on_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efcf_efcf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efd5_efd5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efda_end,
	&emulator_compiled_segments_funcs::seg_efdb_show_step_name,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efea_efea,
	&emulator_compiled_segments_funcs::seg_efeb_buffer_header,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_efee_init_stage_selection_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_effe_effe,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f009_f009,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f00b_copy_one_byte,
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
	&emulator_compiled_segments_funcs::seg_f01b_f01b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f020_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f025_f025,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f028_f028,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f02b_f02b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f12c_stage_selection_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f134_f134,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f136_check_one_controller,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f13a_f13a,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f13c_btn_search_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f143_f143,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f148_next_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f14d_f14d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f150_jump_from_table,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f160_end,
	&emulator_compiled_segments_funcs::seg_f161_next_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f167_f167,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f16a_f16a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f16f_previous_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f174_go_right,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f17a_f17a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f17e_f17e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f185_f185,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f18e_f18e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f191_go_left,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f197_f197,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f19b_f19b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1a2_f1a2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ab_f1ab,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ae_go_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b4_f1b4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1b8_f1b8,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_f1ca_f1ca,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1cd_go_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1d3_f1d3,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1d7_f1d7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1de_f1de,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1e9_f1e9,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ec_fade_out,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1ee_fade_step,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f1f1_f1f1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f209_copy_bg_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f215_f215,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f219_f219,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f21d_f21d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f220_end_copy,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f229_sleep,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f22d_f22d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f230_f230,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f233_f233,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f239_f239,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f23f_f23f,
	&emulator_compiled_segments_funcs::seg_f240_palette_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2a0_buttons_numbering,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2b2_stage_selection_screen_modify_selected,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2bf_change_one,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2ce_f2ce,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2d1_f2d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2da_set_line_attributes,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e2_f2e2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2e8_f2e8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2ee_no_change_first_line,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2f2_f2f2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f2f8_no_change,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f32c_f32c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f332_frame_adresses_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f336_init_title_screen,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f33e_f33e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f349_f349,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f354_f354,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f36d_f36d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f381_emu_50hz_done,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f388_f388,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f38f_f38f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f393_f393,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f39b_f39b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f39e_f39e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a1_f3a1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3a4_soft_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ab_end_menu_init,
	&emulator_compiled_segments_funcs::seg_f3ac_set_title_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3ce_f3ce,
	&emulator_compiled_segments_funcs::seg_f3cf_init_title_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3d6_f3d6,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f3e7_f3e7,
	&emulator_compiled_segments_funcs::seg_f3e8_palette_title_initial,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f408_title_screen_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f410_f410,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f413_f413,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f416_f416,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f41e_f41e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f423_f423,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f426_update_cheatcode,
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
	&emulator_compiled_segments_funcs::seg_f431_cheat_succeed,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f436_press_any_key,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f43a_f43a,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f43e_check_controller_b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f442_f442,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f446_f446,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f449_next_screen,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f44c_f44c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f451_end,
	&emulator_compiled_segments_funcs::seg_f452_cheatcode,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f466_tick_title_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f477_f477,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f484_change_anim_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f48b_wait_logo,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f491_f491,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f494_end,
	&emulator_compiled_segments_funcs::seg_f495_show_logo,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f498_f498,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f49a_copy_one_byte,
	nullptr,
	nullptr,
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
	&emulator_compiled_segments_funcs::seg_f4a9_f4a9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4b8_f4b8,
	&emulator_compiled_segments_funcs::seg_f4b9_logo_palette_nt_buffer,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c1_shake,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c4_f4c4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4c8_f4c8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4cb_end,
	&emulator_compiled_segments_funcs::seg_f4cc_wait_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d2_f4d2,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d5_f4d5,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4d8_end,
	&emulator_compiled_segments_funcs::seg_f4d9_show_text,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e1_f4e1,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f4e4_f4e4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f517_finish,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f51a_f51a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f522_f522,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f525_end,
	&emulator_compiled_segments_funcs::seg_f526_text_colors,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f529_title_screen_restore_music_state,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f52d_f52d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f530_f530,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f533_mute,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f536_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f542_state_transition_pretransition_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f54c_state_transition_pretransition_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f556_state_transition_posttransition_lsb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f560_state_transition_posttransition_msb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f56a_state_transition_pre_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f57d_f57d,
	&emulator_compiled_segments_funcs::seg_f57e_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f588_state_transition_pre_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f59b_f59b,
	&emulator_compiled_segments_funcs::seg_f59c_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5a6_state_transition_post_scroll_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5bb_f5bb,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5c4_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5d2_state_transition_post_scroll_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5e7_f5e7,
	&emulator_compiled_segments_funcs::seg_f5e8_camera_steps,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5f6_scroll_transition,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f5fa_f5fa,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f614_set_up_values,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f62d_end_set_values,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f631_f631,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f637_do_not_touch_offsets,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f63b_save_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f642_f642,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f652_hidden_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f657_two_byte_position_stored,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f663_f663,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f665_scroll_frame,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f66b_f66b,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f66f_f66f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f671_set_camera_scroll,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f67e_f67e,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f682_f682,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f68a_f68a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f692_simple_sleep,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f695_end_sleep,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a1_clean,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a4_end,
	&emulator_compiled_segments_funcs::seg_f6a5_move_sprites,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6a8_f6a8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6ac_f6ac,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6b0_f6b0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6b4_f6b4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6b8_f6b8,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6bc_f6bc,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c0_f6c0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c4_f6c4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6c8_f6c8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6cf_update_clouds,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6d2_vertical_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6e8_f6e8,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6eb_f6eb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6ee_f6ee,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f6f2_update_screen_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f706_move_one_screen_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f715_f715,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f71a_hide_sprite,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f71c_update_oam,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f72a_end,
	&emulator_compiled_segments_funcs::seg_f72b_sleep_frame,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f72e_f72e,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f731_f731,
	&emulator_compiled_segments_funcs::seg_f732_init_menu,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f756_re_init_menu,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f758_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f763_f763,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f766_f766,
	&emulator_compiled_segments_funcs::seg_f767_cloud_sprites,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7a3_set_menu_chr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7c5_f7c5,
	&emulator_compiled_segments_funcs::seg_f7c6_tick_moving_clouds,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ce_f7ce,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7d7_move_one_cloud,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7db_f7db,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e0_f7e0,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e4_end,
	&emulator_compiled_segments_funcs::seg_f7e5_menu_position_clouds,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7e7_position_one_cloud,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ea_f7ea,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7ed_f7ed,
	&emulator_compiled_segments_funcs::seg_f7ee_menu_position_cloud,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7fa_f7fa,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f7fe_do_not_hide,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f80b_place_one_sprite,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f811_f811,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f815_skip_y_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f82a_f82a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f82d_sprite_offset_x,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f82f_f82f,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f832_sprite_offset_y,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f837_stage_elements_size,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f83b_stage_generic_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f845_wait_vbi,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f84a_f84a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f865_copy_palette,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f86f_f86f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f87e_f87e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f88e_copy_header_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f899_copy_elements_loop,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8a2_f8a2,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8af_copy_one_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8ba_f8ba,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8bd_copy_data_end,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8bf_stage_iterate_all_elements,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8c4_f8c4,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8c8_f8c8,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8cd_f8cd,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8d1_f8d1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8d6_f8d6,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8d8_end,
	&emulator_compiled_segments_funcs::seg_f8d9_check_current_element,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8de_f8de,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8e1_f8e1,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8e5_f8e5,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f8f7_end,
	&emulator_compiled_segments_funcs::seg_f8f8_ai_action_double_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f901_ai_action_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f90b_ai_action_right_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f910_ai_action_down_tilt,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f915_ai_action_special_up,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f920_ai_action_idle,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f923_ai_level_to_delay,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f926_ai_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f935_ai_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f947_find_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f95a_run_current_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f979_f979,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f981_f981,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f983_do_action,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f986_f986,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f98c_f98c,
	&emulator_compiled_segments_funcs::seg_f98d_ai_continue_action,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f996_f996,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f99a_next_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9a7_f9a7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9ac_set_controller,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9b4_end,
	&emulator_compiled_segments_funcs::seg_f9b5_ai_attack_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9e9_f9e9,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9ee_right_facing,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9f0_end_direction_flag,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9f6_check_one_attack,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_f9fd_f9fd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa04_condition_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa5f_fa5f,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa61_fa61,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa74_fa74,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa77_next_attack,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa7b_fa7b,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa7e_end,
	&emulator_compiled_segments_funcs::seg_fa7f_ai_chase_selector,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa89_fa89,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa8b_end_signed_cmp,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa8d_fa8d,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fa92_fa92,
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
	&emulator_compiled_segments_funcs::seg_fa9d_fa9d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_faa1_no_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_faab_faab,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_faaf_direction_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fab5_fab5,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fab9_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fabf_fabf,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fac6_end_jump_if_higher,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fad4_fad4,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fadf_negative_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fae7_end_set_offset,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_faff_faff,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb03_dont_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb0e_jump,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb19_tap_down,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb25_action_set,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb2c_ai_delay_action,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb30_fb30,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb43_no_delay,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb47_end,
	&emulator_compiled_segments_funcs::seg_fb48_esp_send_cmd,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb51_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb5a_fb5a,
	&emulator_compiled_segments_funcs::seg_fb5b_esp_get_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb62_fb62,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb69_store_msg,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb74_copy_one_byte,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb77_fb77,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb80_end,
	&emulator_compiled_segments_funcs::seg_fb81_network_init_stage,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb8c_clear_one_input,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fb97_fb97,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fba7_network_tick_ingame,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fbab_fbab,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fbae_do_tick,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fbc1_fbc1,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fbff_controller_sent,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc04_fc04,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc0f_fc0f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc1a_fc1a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc20_fc20,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc23_skip_message,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc2d_state_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc3c_fc3c,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc3f_fc3f,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc43_fc43,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc47_fc47,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc4b_fc4b,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc4d_end,
	&emulator_compiled_segments_funcs::seg_fc4e_update_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc62_ancient,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc65_fc65,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc68_end,
	&emulator_compiled_segments_funcs::seg_fc69_rollback_state,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc73_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc84_fc84,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc86_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc90_fc90,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc92_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fc9c_fc9c,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fca3_fca3,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcab_screen_shake_updated,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcc3_player_a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcce_player_b,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcd5_ok,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fce0_copy_one_byte,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fceb_fceb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcef_roll_forward_one_step,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcf5_fcf5,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcf7_fcf7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcfd_fcfd,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fcff_fcff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd05_fd05,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd07_fd07,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd0d_fd0d,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd10_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd27_fd27,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd2a_fd2a,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd2d_fd2d,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd31_fd31,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd35_fd35,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd39_fd39,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd3b_end_inc,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd3e_dont_do_it,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd53_set_opponent_buttons_from_history,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd58_fd58,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd5f_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd65_mark_nexts_unknown,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd6d_known,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd73_mapper_init,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fd99_stages_tick_routine,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdb1_stages_data,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdb9_stages_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdbd_stages_tileset_lsb,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdc0_fdc0,
	&emulator_compiled_segments_funcs::seg_fdc1_stages_tileset_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdc5_stages_tileset_bank,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdc9_characters_bank_number,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdcb_characters_tiles_data_lsb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdcf_characters_tiles_number,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdd1_characters_properties_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdd3_characters_properties_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdd5_characters_palettes_names_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdd7_characters_palettes_names_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdd9_characters_palettes_lsb,
	&emulator_compiled_segments_funcs::seg_fdda_fdda,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdde_fdde,
	&emulator_compiled_segments_funcs::seg_fddf_characters_alternate_palettes_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fde1_characters_weapon_names_lsb,
	&emulator_compiled_segments_funcs::seg_fde2_fde2,
	&emulator_compiled_segments_funcs::seg_fde3_characters_weapon_names_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fde5_characters_weapon_palettes_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fde7_characters_weapon_palettes_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fde9_characters_start_routines_table_lsb,
	&emulator_compiled_segments_funcs::seg_fdea_fdea,
	&emulator_compiled_segments_funcs::seg_fdeb_characters_start_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fded_characters_update_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdef_characters_update_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdf1_characters_offground_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdf3_characters_offground_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdf5_characters_onground_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdf7_characters_onground_routines_table_msb,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdfb_characters_input_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdfd_characters_onhurt_routines_table_lsb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fdff_characters_onhurt_routines_table_msb,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe01_set_player_animation,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe18_fe18,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe27_server_bytecode_error,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe2c_server_bytecode_init,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe2f_fe2f,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe46_fe46,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe4b_server_bytecode_tick,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe4e_fe4e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe53_credits_begin,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe56_fe56,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe6a_fe6a,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fe8e_fe8e,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_feb0_feb0,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fed7_fed7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_fee7_fee7,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_feff_feff,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ff28_ff28,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ff37_ff37,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	&emulator_compiled_segments_funcs::seg_ffbc_credits_end,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
	nullptr,
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

#include "mos6502.hpp"
#include "src/GameState.bytecodeinfo.hpp"

namespace {
uint16_t const bytecodeVectorInitHigh = mos6502::rstVectorH;
uint16_t const bytecodeVectorInitLow = mos6502::rstVectorL;
uint16_t const bytecodeVectorTickHigh = mos6502::nmiVectorH;
uint16_t const bytecodeVectorTickLow = mos6502::nmiVectorL;

uint16_t const rainbow_prg_banking_1 = 0x5002;
uint16_t const stop_trigger_addr = 0xffff;
uint16_t const nes_register_ppustatus = 0x2002;

uint8_t ExternalRead(uint16_t addr, mos6502::RunContext* context) {
	// RAM
	if (addr < 0x2000) {
		addr = addr % 0x0800;
		return context->ram[addr];
	}

	// ROM
	if (addr >= 0x8000) {
		if (addr >= 0xc000) {
			uint16_t const addr_in_bank = addr - 0xc000;
			size_t const bank_offset_in_rom = 0x1f * 0x4000;
			return context->rom[bank_offset_in_rom + addr_in_bank];
		}else {
			uint16_t const addr_in_bank = addr - 0x8000;
			return context->rom[context->bank_offset + addr_in_bank];
		}
	}

	// PPUSTATUS register
	if (addr == nes_register_ppustatus) {
		return 0x80; // Always set VBI flag, so waits for VBI are immediate
	}

	// Other
	//  Warning, the default value must not trigger the netcode. If complexe,
	//  special registers should be handled before default value is returned.
	return 0;
}

bool ExternalWrite(uint16_t addr, uint8_t value, mos6502::RunContext* context) {
	// RAM
	if (addr < 0x2000) {
		addr = addr % 0x0800;
		context->ram[addr] = value;

		// Stop emulation on gameover (and note that the game is over)
		if (addr == global_game_state) {
			context->gameover = true;
			return true;
		}

		return false;
	}

	// Banking register
	if (addr == rainbow_prg_banking_1) {
		context->bank_offset = value * 0x4000;
		return false;
	}

	// Stop the emulation if emulated code notified its end
	return addr == stop_trigger_addr;
}
}

mos6502::mos6502()
{
	Instr instr;

	// fill jump table with ILLEGALs
	instr.code = &mos6502::Op_ILLEGAL_IMP;
	for(int i = 0; i < 256; i++)
	{
		InstrTable[i] = instr;
	}

	// insert opcodes

	instr.code = &mos6502::Op_ADC_IMM;
	instr.cycles = 2;
	InstrTable[0x69] = instr;
	instr.code = &mos6502::Op_ADC_ABS;
	instr.cycles = 4;
	InstrTable[0x6D] = instr;
	instr.code = &mos6502::Op_ADC_ZER;
	instr.cycles = 3;
	InstrTable[0x65] = instr;
	instr.code = &mos6502::Op_ADC_INX;
	instr.cycles = 6;
	InstrTable[0x61] = instr;
	instr.code = &mos6502::Op_ADC_INY;
	instr.cycles = 6;
	InstrTable[0x71] = instr;
	instr.code = &mos6502::Op_ADC_ZEX;
	instr.cycles = 4;
	InstrTable[0x75] = instr;
	instr.code = &mos6502::Op_ADC_ABX;
	instr.cycles = 4;
	InstrTable[0x7D] = instr;
	instr.code = &mos6502::Op_ADC_ABY;
	instr.cycles = 4;
	InstrTable[0x79] = instr;

	instr.code = &mos6502::Op_AND_IMM;
	instr.cycles = 2;
	InstrTable[0x29] = instr;
	instr.code = &mos6502::Op_AND_ABS;
	instr.cycles = 4;
	InstrTable[0x2D] = instr;
	instr.code = &mos6502::Op_AND_ZER;
	instr.cycles = 3;
	InstrTable[0x25] = instr;
	instr.code = &mos6502::Op_AND_INX;
	instr.cycles = 6;
	InstrTable[0x21] = instr;
	instr.code = &mos6502::Op_AND_INY;
	instr.cycles = 5;
	InstrTable[0x31] = instr;
	instr.code = &mos6502::Op_AND_ZEX;
	instr.cycles = 4;
	InstrTable[0x35] = instr;
	instr.code = &mos6502::Op_AND_ABX;
	instr.cycles = 4;
	InstrTable[0x3D] = instr;
	instr.code = &mos6502::Op_AND_ABY;
	instr.cycles = 4;
	InstrTable[0x39] = instr;

	instr.code = &mos6502::Op_ASL_ABS;
	instr.cycles = 6;
	InstrTable[0x0E] = instr;
	instr.code = &mos6502::Op_ASL_ZER;
	instr.cycles = 5;
	InstrTable[0x06] = instr;
	instr.code = &mos6502::Op_ASL_ACC_ACC;
	instr.cycles = 2;
	InstrTable[0x0A] = instr;
	instr.code = &mos6502::Op_ASL_ZEX;
	instr.cycles = 6;
	InstrTable[0x16] = instr;
	instr.code = &mos6502::Op_ASL_ABX;
	instr.cycles = 7;
	InstrTable[0x1E] = instr;

	instr.code = &mos6502::Op_BCC_REL;
	instr.cycles = 2;
	InstrTable[0x90] = instr;

	instr.code = &mos6502::Op_BCS_REL;
	instr.cycles = 2;
	InstrTable[0xB0] = instr;

	instr.code = &mos6502::Op_BEQ_REL;
	instr.cycles = 2;
	InstrTable[0xF0] = instr;

	instr.code = &mos6502::Op_BIT_ABS;
	instr.cycles = 4;
	InstrTable[0x2C] = instr;
	instr.code = &mos6502::Op_BIT_ZER;
	instr.cycles = 3;
	InstrTable[0x24] = instr;

	instr.code = &mos6502::Op_BMI_REL;
	instr.cycles = 2;
	InstrTable[0x30] = instr;

	instr.code = &mos6502::Op_BNE_REL;
	instr.cycles = 2;
	InstrTable[0xD0] = instr;

	instr.code = &mos6502::Op_BPL_REL;
	instr.cycles = 2;
	InstrTable[0x10] = instr;

	instr.code = &mos6502::Op_BRK_IMP;
	instr.cycles = 7;
	InstrTable[0x00] = instr;

	instr.code = &mos6502::Op_BVC_REL;
	instr.cycles = 2;
	InstrTable[0x50] = instr;

	instr.code = &mos6502::Op_BVS_REL;
	instr.cycles = 2;
	InstrTable[0x70] = instr;

	instr.code = &mos6502::Op_CLC_IMP;
	instr.cycles = 2;
	InstrTable[0x18] = instr;

	instr.code = &mos6502::Op_CLD_IMP;
	instr.cycles = 2;
	InstrTable[0xD8] = instr;

	instr.code = &mos6502::Op_CLI_IMP;
	instr.cycles = 2;
	InstrTable[0x58] = instr;

	instr.code = &mos6502::Op_CLV_IMP;
	instr.cycles = 2;
	InstrTable[0xB8] = instr;

	instr.code = &mos6502::Op_CMP_IMM;
	instr.cycles = 2;
	InstrTable[0xC9] = instr;
	instr.code = &mos6502::Op_CMP_ABS;
	instr.cycles = 4;
	InstrTable[0xCD] = instr;
	instr.code = &mos6502::Op_CMP_ZER;
	instr.cycles = 3;
	InstrTable[0xC5] = instr;
	instr.code = &mos6502::Op_CMP_INX;
	instr.cycles = 6;
	InstrTable[0xC1] = instr;
	instr.code = &mos6502::Op_CMP_INY;
	instr.cycles = 3;
	InstrTable[0xD1] = instr;
	instr.code = &mos6502::Op_CMP_ZEX;
	instr.cycles = 4;
	InstrTable[0xD5] = instr;
	instr.code = &mos6502::Op_CMP_ABX;
	instr.cycles = 4;
	InstrTable[0xDD] = instr;
	instr.code = &mos6502::Op_CMP_ABY;
	instr.cycles = 4;
	InstrTable[0xD9] = instr;

	instr.code = &mos6502::Op_CPX_IMM;
	instr.cycles = 2;
	InstrTable[0xE0] = instr;
	instr.code = &mos6502::Op_CPX_ABS;
	instr.cycles = 4;
	InstrTable[0xEC] = instr;
	instr.code = &mos6502::Op_CPX_ZER;
	instr.cycles = 3;
	InstrTable[0xE4] = instr;

	instr.code = &mos6502::Op_CPY_IMM;
	instr.cycles = 2;
	InstrTable[0xC0] = instr;
	instr.code = &mos6502::Op_CPY_ABS;
	instr.cycles = 4;
	InstrTable[0xCC] = instr;
	instr.code = &mos6502::Op_CPY_ZER;
	instr.cycles = 3;
	InstrTable[0xC4] = instr;

	instr.code = &mos6502::Op_DEC_ABS;
	instr.cycles = 6;
	InstrTable[0xCE] = instr;
	instr.code = &mos6502::Op_DEC_ZER;
	instr.cycles = 5;
	InstrTable[0xC6] = instr;
	instr.code = &mos6502::Op_DEC_ZEX;
	instr.cycles = 6;
	InstrTable[0xD6] = instr;
	instr.code = &mos6502::Op_DEC_ABX;
	instr.cycles = 7;
	InstrTable[0xDE] = instr;

	instr.code = &mos6502::Op_DEX_IMP;
	instr.cycles = 2;
	InstrTable[0xCA] = instr;

	instr.code = &mos6502::Op_DEY_IMP;
	instr.cycles = 2;
	InstrTable[0x88] = instr;

	instr.code = &mos6502::Op_EOR_IMM;
	instr.cycles = 2;
	InstrTable[0x49] = instr;
	instr.code = &mos6502::Op_EOR_ABS;
	instr.cycles = 4;
	InstrTable[0x4D] = instr;
	instr.code = &mos6502::Op_EOR_ZER;
	instr.cycles = 3;
	InstrTable[0x45] = instr;
	instr.code = &mos6502::Op_EOR_INX;
	instr.cycles = 6;
	InstrTable[0x41] = instr;
	instr.code = &mos6502::Op_EOR_INY;
	instr.cycles = 5;
	InstrTable[0x51] = instr;
	instr.code = &mos6502::Op_EOR_ZEX;
	instr.cycles = 4;
	InstrTable[0x55] = instr;
	instr.code = &mos6502::Op_EOR_ABX;
	instr.cycles = 4;
	InstrTable[0x5D] = instr;
	instr.code = &mos6502::Op_EOR_ABY;
	instr.cycles = 4;
	InstrTable[0x59] = instr;

	instr.code = &mos6502::Op_INC_ABS;
	instr.cycles = 6;
	InstrTable[0xEE] = instr;
	instr.code = &mos6502::Op_INC_ZER;
	instr.cycles = 5;
	InstrTable[0xE6] = instr;
	instr.code = &mos6502::Op_INC_ZEX;
	instr.cycles = 6;
	InstrTable[0xF6] = instr;
	instr.code = &mos6502::Op_INC_ABX;
	instr.cycles = 7;
	InstrTable[0xFE] = instr;

	instr.code = &mos6502::Op_INX_IMP;
	instr.cycles = 2;
	InstrTable[0xE8] = instr;

	instr.code = &mos6502::Op_INY_IMP;
	instr.cycles = 2;
	InstrTable[0xC8] = instr;

	instr.code = &mos6502::Op_JMP_ABS;
	instr.cycles = 3;
	InstrTable[0x4C] = instr;
	instr.code = &mos6502::Op_JMP_ABI;
	instr.cycles = 5;
	InstrTable[0x6C] = instr;

	instr.code = &mos6502::Op_JSR_ABS;
	instr.cycles = 6;
	InstrTable[0x20] = instr;

	instr.code = &mos6502::Op_LDA_IMM;
	instr.cycles = 2;
	InstrTable[0xA9] = instr;
	instr.code = &mos6502::Op_LDA_ABS;
	instr.cycles = 4;
	InstrTable[0xAD] = instr;
	instr.code = &mos6502::Op_LDA_ZER;
	instr.cycles = 3;
	InstrTable[0xA5] = instr;
	instr.code = &mos6502::Op_LDA_INX;
	instr.cycles = 6;
	InstrTable[0xA1] = instr;
	instr.code = &mos6502::Op_LDA_INY;
	instr.cycles = 5;
	InstrTable[0xB1] = instr;
	instr.code = &mos6502::Op_LDA_ZEX;
	instr.cycles = 4;
	InstrTable[0xB5] = instr;
	instr.code = &mos6502::Op_LDA_ABX;
	instr.cycles = 4;
	InstrTable[0xBD] = instr;
	instr.code = &mos6502::Op_LDA_ABY;
	instr.cycles = 4;
	InstrTable[0xB9] = instr;

	instr.code = &mos6502::Op_LDX_IMM;
	instr.cycles = 2;
	InstrTable[0xA2] = instr;
	instr.code = &mos6502::Op_LDX_ABS;
	instr.cycles = 4;
	InstrTable[0xAE] = instr;
	instr.code = &mos6502::Op_LDX_ZER;
	instr.cycles = 3;
	InstrTable[0xA6] = instr;
	instr.code = &mos6502::Op_LDX_ABY;
	instr.cycles = 4;
	InstrTable[0xBE] = instr;
	instr.code = &mos6502::Op_LDX_ZEY;
	instr.cycles = 4;
	InstrTable[0xB6] = instr;

	instr.code = &mos6502::Op_LDY_IMM;
	instr.cycles = 2;
	InstrTable[0xA0] = instr;
	instr.code = &mos6502::Op_LDY_ABS;
	instr.cycles = 4;
	InstrTable[0xAC] = instr;
	instr.code = &mos6502::Op_LDY_ZER;
	instr.cycles = 3;
	InstrTable[0xA4] = instr;
	instr.code = &mos6502::Op_LDY_ZEX;
	instr.cycles = 4;
	InstrTable[0xB4] = instr;
	instr.code = &mos6502::Op_LDY_ABX;
	instr.cycles = 4;
	InstrTable[0xBC] = instr;

	instr.code = &mos6502::Op_LSR_ABS;
	instr.cycles = 6;
	InstrTable[0x4E] = instr;
	instr.code = &mos6502::Op_LSR_ZER;
	instr.cycles = 5;
	InstrTable[0x46] = instr;
	instr.code = &mos6502::Op_LSR_ACC_ACC;
	instr.cycles = 2;
	InstrTable[0x4A] = instr;
	instr.code = &mos6502::Op_LSR_ZEX;
	instr.cycles = 6;
	InstrTable[0x56] = instr;
	instr.code = &mos6502::Op_LSR_ABX;
	instr.cycles = 7;
	InstrTable[0x5E] = instr;

	instr.code = &mos6502::Op_NOP_IMP;
	instr.cycles = 2;
	InstrTable[0xEA] = instr;

	instr.code = &mos6502::Op_ORA_IMM;
	instr.cycles = 2;
	InstrTable[0x09] = instr;
	instr.code = &mos6502::Op_ORA_ABS;
	instr.cycles = 4;
	InstrTable[0x0D] = instr;
	instr.code = &mos6502::Op_ORA_ZER;
	instr.cycles = 3;
	InstrTable[0x05] = instr;
	instr.code = &mos6502::Op_ORA_INX;
	instr.cycles = 6;
	InstrTable[0x01] = instr;
	instr.code = &mos6502::Op_ORA_INY;
	instr.cycles = 5;
	InstrTable[0x11] = instr;
	instr.code = &mos6502::Op_ORA_ZEX;
	instr.cycles = 4;
	InstrTable[0x15] = instr;
	instr.code = &mos6502::Op_ORA_ABX;
	instr.cycles = 4;
	InstrTable[0x1D] = instr;
	instr.code = &mos6502::Op_ORA_ABY;
	instr.cycles = 4;
	InstrTable[0x19] = instr;

	instr.code = &mos6502::Op_PHA_IMP;
	instr.cycles = 3;
	InstrTable[0x48] = instr;

	instr.code = &mos6502::Op_PHP_IMP;
	instr.cycles = 3;
	InstrTable[0x08] = instr;

	instr.code = &mos6502::Op_PLA_IMP;
	instr.cycles = 4;
	InstrTable[0x68] = instr;

	instr.code = &mos6502::Op_PLP_IMP;
	instr.cycles = 4;
	InstrTable[0x28] = instr;

	instr.code = &mos6502::Op_ROL_ABS;
	instr.cycles = 6;
	InstrTable[0x2E] = instr;
	instr.code = &mos6502::Op_ROL_ZER;
	instr.cycles = 5;
	InstrTable[0x26] = instr;
	instr.code = &mos6502::Op_ROL_ACC_ACC;
	instr.cycles = 2;
	InstrTable[0x2A] = instr;
	instr.code = &mos6502::Op_ROL_ZEX;
	instr.cycles = 6;
	InstrTable[0x36] = instr;
	instr.code = &mos6502::Op_ROL_ABX;
	instr.cycles = 7;
	InstrTable[0x3E] = instr;

	instr.code = &mos6502::Op_ROR_ABS;
	instr.cycles = 6;
	InstrTable[0x6E] = instr;
	instr.code = &mos6502::Op_ROR_ZER;
	instr.cycles = 5;
	InstrTable[0x66] = instr;
	instr.code = &mos6502::Op_ROR_ACC_ACC;
	instr.cycles = 2;
	InstrTable[0x6A] = instr;
	instr.code = &mos6502::Op_ROR_ZEX;
	instr.cycles = 6;
	InstrTable[0x76] = instr;
	instr.code = &mos6502::Op_ROR_ABX;
	instr.cycles = 7;
	InstrTable[0x7E] = instr;

	instr.code = &mos6502::Op_RTI_IMP;
	instr.cycles = 6;
	InstrTable[0x40] = instr;

	instr.code = &mos6502::Op_RTS_IMP;
	instr.cycles = 6;
	InstrTable[0x60] = instr;

	instr.code = &mos6502::Op_SBC_IMM;
	instr.cycles = 2;
	InstrTable[0xE9] = instr;
	instr.code = &mos6502::Op_SBC_ABS;
	instr.cycles = 4;
	InstrTable[0xED] = instr;
	instr.code = &mos6502::Op_SBC_ZER;
	instr.cycles = 3;
	InstrTable[0xE5] = instr;
	instr.code = &mos6502::Op_SBC_INX;
	instr.cycles = 6;
	InstrTable[0xE1] = instr;
	instr.code = &mos6502::Op_SBC_INY;
	instr.cycles = 5;
	InstrTable[0xF1] = instr;
	instr.code = &mos6502::Op_SBC_ZEX;
	instr.cycles = 4;
	InstrTable[0xF5] = instr;
	instr.code = &mos6502::Op_SBC_ABX;
	instr.cycles = 4;
	InstrTable[0xFD] = instr;
	instr.code = &mos6502::Op_SBC_ABY;
	instr.cycles = 4;
	InstrTable[0xF9] = instr;

	instr.code = &mos6502::Op_SEC_IMP;
	instr.cycles = 2;
	InstrTable[0x38] = instr;

	instr.code = &mos6502::Op_SED_IMP;
	instr.cycles = 2;
	InstrTable[0xF8] = instr;

	instr.code = &mos6502::Op_SEI_IMP;
	instr.cycles = 2;
	InstrTable[0x78] = instr;

	instr.code = &mos6502::Op_STA_ABS;
	instr.cycles = 4;
	InstrTable[0x8D] = instr;
	instr.code = &mos6502::Op_STA_ZER;
	instr.cycles = 3;
	InstrTable[0x85] = instr;
	instr.code = &mos6502::Op_STA_INX;
	instr.cycles = 6;
	InstrTable[0x81] = instr;
	instr.code = &mos6502::Op_STA_INY;
	instr.cycles = 6;
	InstrTable[0x91] = instr;
	instr.code = &mos6502::Op_STA_ZEX;
	instr.cycles = 4;
	InstrTable[0x95] = instr;
	instr.code = &mos6502::Op_STA_ABX;
	instr.cycles = 5;
	InstrTable[0x9D] = instr;
	instr.code = &mos6502::Op_STA_ABY;
	instr.cycles = 5;
	InstrTable[0x99] = instr;

	instr.code = &mos6502::Op_STX_ABS;
	instr.cycles = 4;
	InstrTable[0x8E] = instr;
	instr.code = &mos6502::Op_STX_ZER;
	instr.cycles = 3;
	InstrTable[0x86] = instr;
	instr.code = &mos6502::Op_STX_ZEY;
	instr.cycles = 4;
	InstrTable[0x96] = instr;

	instr.code = &mos6502::Op_STY_ABS;
	instr.cycles = 4;
	InstrTable[0x8C] = instr;
	instr.code = &mos6502::Op_STY_ZER;
	instr.cycles = 3;
	InstrTable[0x84] = instr;
	instr.code = &mos6502::Op_STY_ZEX;
	instr.cycles = 4;
	InstrTable[0x94] = instr;

	instr.code = &mos6502::Op_TAX_IMP;
	instr.cycles = 2;
	InstrTable[0xAA] = instr;

	instr.code = &mos6502::Op_TAY_IMP;
	instr.cycles = 2;
	InstrTable[0xA8] = instr;

	instr.code = &mos6502::Op_TSX_IMP;
	instr.cycles = 2;
	InstrTable[0xBA] = instr;

	instr.code = &mos6502::Op_TXA_IMP;
	instr.cycles = 2;
	InstrTable[0x8A] = instr;

	instr.code = &mos6502::Op_TXS_IMP;
	instr.cycles = 2;
	InstrTable[0x9A] = instr;

	instr.code = &mos6502::Op_TYA_IMP;
	instr.cycles = 2;
	InstrTable[0x98] = instr;

	return;
}

uint16_t mos6502::Addr_ACC()
{
	return 0; // not used
}

uint16_t mos6502::Addr_IMM()
{
	return pc++;
}

uint16_t mos6502::Addr_ABS()
{
	uint16_t addrL;
	uint16_t addrH;
	uint16_t addr;

	addrL = Read(pc++);
	addrH = Read(pc++);

	addr = addrL + (addrH << 8);

	return addr;
}

uint16_t mos6502::Addr_ZER()
{
	return Read(pc++);
}

uint16_t mos6502::Addr_IMP()
{
	return 0; // not used
}

uint16_t mos6502::Addr_REL()
{
	uint16_t offset;
	uint16_t addr;

	offset = (uint16_t)Read(pc++);
	if (offset & 0x80) offset |= 0xFF00;
	addr = pc + (int16_t)offset;
	return addr;
}

void mos6502::Op_ILLEGAL_IMP() {
	Op_ILLEGAL(Addr_IMP());
}

void mos6502::Op_ADC_IMM() {
	Op_ADC(Addr_IMM());
}

void mos6502::Op_ADC_ABS() {
	Op_ADC(Addr_ABS());
}

void mos6502::Op_ADC_ZER() {
	Op_ADC(Addr_ZER());
}

void mos6502::Op_ADC_INX() {
	Op_ADC(Addr_INX());
}

void mos6502::Op_ADC_INY() {
	Op_ADC(Addr_INY());
}

void mos6502::Op_ADC_ZEX() {
	Op_ADC(Addr_ZEX());
}

void mos6502::Op_ADC_ABX() {
	Op_ADC(Addr_ABX());
}

void mos6502::Op_ADC_ABY() {
	Op_ADC(Addr_ABY());
}

void mos6502::Op_AND_IMM() {
	Op_AND(Addr_IMM());
}

void mos6502::Op_AND_ABS() {
	Op_AND(Addr_ABS());
}

void mos6502::Op_AND_ZER() {
	Op_AND(Addr_ZER());
}

void mos6502::Op_AND_INX() {
	Op_AND(Addr_INX());
}

void mos6502::Op_AND_INY() {
	Op_AND(Addr_INY());
}

void mos6502::Op_AND_ZEX() {
	Op_AND(Addr_ZEX());
}

void mos6502::Op_AND_ABX() {
	Op_AND(Addr_ABX());
}

void mos6502::Op_AND_ABY() {
	Op_AND(Addr_ABY());
}

void mos6502::Op_ASL_ABS() {
	Op_ASL(Addr_ABS());
}

void mos6502::Op_ASL_ZER() {
	Op_ASL(Addr_ZER());
}

void mos6502::Op_ASL_ACC_ACC() {
	Op_ASL_ACC(Addr_ACC());
}

void mos6502::Op_ASL_ZEX() {
	Op_ASL(Addr_ZEX());
}

void mos6502::Op_ASL_ABX() {
	Op_ASL(Addr_ABX());
}

void mos6502::Op_BCC_REL() {
	Op_BCC(Addr_REL());
}

void mos6502::Op_BCS_REL() {
	Op_BCS(Addr_REL());
}

void mos6502::Op_BEQ_REL() {
	Op_BEQ(Addr_REL());
}

void mos6502::Op_BIT_ABS() {
	Op_BIT(Addr_ABS());
}

void mos6502::Op_BIT_ZER() {
	Op_BIT(Addr_ZER());
}

void mos6502::Op_BMI_REL() {
	Op_BMI(Addr_REL());
}

void mos6502::Op_BNE_REL() {
	Op_BNE(Addr_REL());
}

void mos6502::Op_BPL_REL() {
	Op_BPL(Addr_REL());
}

void mos6502::Op_BRK_IMP() {
	Op_BRK(Addr_IMP());
}

void mos6502::Op_BVC_REL() {
	Op_BVC(Addr_REL());
}

void mos6502::Op_BVS_REL() {
	Op_BVS(Addr_REL());
}

void mos6502::Op_CLC_IMP() {
	Op_CLC(Addr_IMP());
}

void mos6502::Op_CLD_IMP() {
	Op_CLD(Addr_IMP());
}

void mos6502::Op_CLI_IMP() {
	Op_CLI(Addr_IMP());
}

void mos6502::Op_CLV_IMP() {
	Op_CLV(Addr_IMP());
}

void mos6502::Op_CMP_IMM() {
	Op_CMP(Addr_IMM());
}

void mos6502::Op_CMP_ABS() {
	Op_CMP(Addr_ABS());
}

void mos6502::Op_CMP_ZER() {
	Op_CMP(Addr_ZER());
}

void mos6502::Op_CMP_INX() {
	Op_CMP(Addr_INX());
}

void mos6502::Op_CMP_INY() {
	Op_CMP(Addr_INY());
}

void mos6502::Op_CMP_ZEX() {
	Op_CMP(Addr_ZEX());
}

void mos6502::Op_CMP_ABX() {
	Op_CMP(Addr_ABX());
}

void mos6502::Op_CMP_ABY() {
	Op_CMP(Addr_ABY());
}

void mos6502::Op_CPX_IMM() {
	Op_CPX(Addr_IMM());
}

void mos6502::Op_CPX_ABS() {
	Op_CPX(Addr_ABS());
}

void mos6502::Op_CPX_ZER() {
	Op_CPX(Addr_ZER());
}

void mos6502::Op_CPY_IMM() {
	Op_CPY(Addr_IMM());
}

void mos6502::Op_CPY_ABS() {
	Op_CPY(Addr_ABS());
}

void mos6502::Op_CPY_ZER() {
	Op_CPY(Addr_ZER());
}

void mos6502::Op_DEC_ABS() {
	Op_DEC(Addr_ABS());
}

void mos6502::Op_DEC_ZER() {
	Op_DEC(Addr_ZER());
}

void mos6502::Op_DEC_ZEX() {
	Op_DEC(Addr_ZEX());
}

void mos6502::Op_DEC_ABX() {
	Op_DEC(Addr_ABX());
}

void mos6502::Op_DEX_IMP() {
	Op_DEX(Addr_IMP());
}

void mos6502::Op_DEY_IMP() {
	Op_DEY(Addr_IMP());
}

void mos6502::Op_EOR_IMM() {
	Op_EOR(Addr_IMM());
}

void mos6502::Op_EOR_ABS() {
	Op_EOR(Addr_ABS());
}

void mos6502::Op_EOR_ZER() {
	Op_EOR(Addr_ZER());
}

void mos6502::Op_EOR_INX() {
	Op_EOR(Addr_INX());
}

void mos6502::Op_EOR_INY() {
	Op_EOR(Addr_INY());
}

void mos6502::Op_EOR_ZEX() {
	Op_EOR(Addr_ZEX());
}

void mos6502::Op_EOR_ABX() {
	Op_EOR(Addr_ABX());
}

void mos6502::Op_EOR_ABY() {
	Op_EOR(Addr_ABY());
}

void mos6502::Op_INC_ABS() {
	Op_INC(Addr_ABS());
}

void mos6502::Op_INC_ZER() {
	Op_INC(Addr_ZER());
}

void mos6502::Op_INC_ZEX() {
	Op_INC(Addr_ZEX());
}

void mos6502::Op_INC_ABX() {
	Op_INC(Addr_ABX());
}

void mos6502::Op_INX_IMP() {
	Op_INX(Addr_IMP());
}

void mos6502::Op_INY_IMP() {
	Op_INY(Addr_IMP());
}

void mos6502::Op_JMP_ABS() {
	Op_JMP(Addr_ABS());
}

void mos6502::Op_JMP_ABI() {
	Op_JMP(Addr_ABI());
}

void mos6502::Op_JSR_ABS() {
	Op_JSR(Addr_ABS());
}

void mos6502::Op_LDA_IMM() {
	Op_LDA(Addr_IMM());
}

void mos6502::Op_LDA_ABS() {
	Op_LDA(Addr_ABS());
}

void mos6502::Op_LDA_ZER() {
	Op_LDA(Addr_ZER());
}

void mos6502::Op_LDA_INX() {
	Op_LDA(Addr_INX());
}

void mos6502::Op_LDA_INY() {
	Op_LDA(Addr_INY());
}

void mos6502::Op_LDA_ZEX() {
	Op_LDA(Addr_ZEX());
}

void mos6502::Op_LDA_ABX() {
	Op_LDA(Addr_ABX());
}

void mos6502::Op_LDA_ABY() {
	Op_LDA(Addr_ABY());
}

void mos6502::Op_LDX_IMM() {
	Op_LDX(Addr_IMM());
}

void mos6502::Op_LDX_ABS() {
	Op_LDX(Addr_ABS());
}

void mos6502::Op_LDX_ZER() {
	Op_LDX(Addr_ZER());
}

void mos6502::Op_LDX_ABY() {
	Op_LDX(Addr_ABY());
}

void mos6502::Op_LDX_ZEY() {
	Op_LDX(Addr_ZEY());
}

void mos6502::Op_LDY_IMM() {
	Op_LDY(Addr_IMM());
}

void mos6502::Op_LDY_ABS() {
	Op_LDY(Addr_ABS());
}

void mos6502::Op_LDY_ZER() {
	Op_LDY(Addr_ZER());
}

void mos6502::Op_LDY_ZEX() {
	Op_LDY(Addr_ZEX());
}

void mos6502::Op_LDY_ABX() {
	Op_LDY(Addr_ABX());
}

void mos6502::Op_LSR_ABS() {
	Op_LSR(Addr_ABS());
}

void mos6502::Op_LSR_ZER() {
	Op_LSR(Addr_ZER());
}

void mos6502::Op_LSR_ACC_ACC() {
	Op_LSR_ACC(Addr_ACC());
}

void mos6502::Op_LSR_ZEX() {
	Op_LSR(Addr_ZEX());
}

void mos6502::Op_LSR_ABX() {
	Op_LSR(Addr_ABX());
}

void mos6502::Op_NOP_IMP() {
	Op_NOP(Addr_IMP());
}

void mos6502::Op_ORA_IMM() {
	Op_ORA(Addr_IMM());
}

void mos6502::Op_ORA_ABS() {
	Op_ORA(Addr_ABS());
}

void mos6502::Op_ORA_ZER() {
	Op_ORA(Addr_ZER());
}

void mos6502::Op_ORA_INX() {
	Op_ORA(Addr_INX());
}

void mos6502::Op_ORA_INY() {
	Op_ORA(Addr_INY());
}

void mos6502::Op_ORA_ZEX() {
	Op_ORA(Addr_ZEX());
}

void mos6502::Op_ORA_ABX() {
	Op_ORA(Addr_ABX());
}

void mos6502::Op_ORA_ABY() {
	Op_ORA(Addr_ABY());
}

void mos6502::Op_PHA_IMP() {
	Op_PHA(Addr_IMP());
}

void mos6502::Op_PHP_IMP() {
	Op_PHP(Addr_IMP());
}

void mos6502::Op_PLA_IMP() {
	Op_PLA(Addr_IMP());
}

void mos6502::Op_PLP_IMP() {
	Op_PLP(Addr_IMP());
}

void mos6502::Op_ROL_ABS() {
	Op_ROL(Addr_ABS());
}

void mos6502::Op_ROL_ZER() {
	Op_ROL(Addr_ZER());
}

void mos6502::Op_ROL_ACC_ACC() {
	Op_ROL_ACC(Addr_ACC());
}

void mos6502::Op_ROL_ZEX() {
	Op_ROL(Addr_ZEX());
}

void mos6502::Op_ROL_ABX() {
	Op_ROL(Addr_ABX());
}

void mos6502::Op_ROR_ABS() {
	Op_ROR(Addr_ABS());
}

void mos6502::Op_ROR_ZER() {
	Op_ROR(Addr_ZER());
}

void mos6502::Op_ROR_ACC_ACC() {
	Op_ROR_ACC(Addr_ACC());
}

void mos6502::Op_ROR_ZEX() {
	Op_ROR(Addr_ZEX());
}

void mos6502::Op_ROR_ABX() {
	Op_ROR(Addr_ABX());
}

void mos6502::Op_RTI_IMP() {
	Op_RTI(Addr_IMP());
}

void mos6502::Op_RTS_IMP() {
	Op_RTS(Addr_IMP());
}

void mos6502::Op_SBC_IMM() {
	Op_SBC(Addr_IMM());
}

void mos6502::Op_SBC_ABS() {
	Op_SBC(Addr_ABS());
}

void mos6502::Op_SBC_ZER() {
	Op_SBC(Addr_ZER());
}

void mos6502::Op_SBC_INX() {
	Op_SBC(Addr_INX());
}

void mos6502::Op_SBC_INY() {
	Op_SBC(Addr_INY());
}

void mos6502::Op_SBC_ZEX() {
	Op_SBC(Addr_ZEX());
}

void mos6502::Op_SBC_ABX() {
	Op_SBC(Addr_ABX());
}

void mos6502::Op_SBC_ABY() {
	Op_SBC(Addr_ABY());
}

void mos6502::Op_SEC_IMP() {
	Op_SEC(Addr_IMP());
}

void mos6502::Op_SED_IMP() {
	Op_SED(Addr_IMP());
}

void mos6502::Op_SEI_IMP() {
	Op_SEI(Addr_IMP());
}

void mos6502::Op_STA_ABS() {
	Op_STA(Addr_ABS());
}

void mos6502::Op_STA_ZER() {
	Op_STA(Addr_ZER());
}

void mos6502::Op_STA_INX() {
	Op_STA(Addr_INX());
}

void mos6502::Op_STA_INY() {
	Op_STA(Addr_INY());
}

void mos6502::Op_STA_ZEX() {
	Op_STA(Addr_ZEX());
}

void mos6502::Op_STA_ABX() {
	Op_STA(Addr_ABX());
}

void mos6502::Op_STA_ABY() {
	Op_STA(Addr_ABY());
}

void mos6502::Op_STX_ABS() {
	Op_STX(Addr_ABS());
}

void mos6502::Op_STX_ZER() {
	Op_STX(Addr_ZER());
}

void mos6502::Op_STX_ZEY() {
	Op_STX(Addr_ZEY());
}

void mos6502::Op_STY_ABS() {
	Op_STY(Addr_ABS());
}

void mos6502::Op_STY_ZER() {
	Op_STY(Addr_ZER());
}

void mos6502::Op_STY_ZEX() {
	Op_STY(Addr_ZEX());
}

void mos6502::Op_TAX_IMP() {
	Op_TAX(Addr_IMP());
}

void mos6502::Op_TAY_IMP() {
	Op_TAY(Addr_IMP());
}

void mos6502::Op_TSX_IMP() {
	Op_TSX(Addr_IMP());
}

void mos6502::Op_TXA_IMP() {
	Op_TXA(Addr_IMP());
}

void mos6502::Op_TXS_IMP() {
	Op_TXS(Addr_IMP());
}

void mos6502::Op_TYA_IMP() {
	Op_TYA(Addr_IMP());
}

uint16_t mos6502::Addr_ABI()
{
	uint16_t addrL;
	uint16_t addrH;
	uint16_t effL;
	uint16_t effH;
	uint16_t abs;
	uint16_t addr;

	addrL = Read(pc++);
	addrH = Read(pc++);

	abs = (addrH << 8) | addrL;

	effL = Read(abs);

#ifndef CMOS_INDIRECT_JMP_FIX
	effH = Read((abs & 0xFF00) + ((abs + 1) & 0x00FF) );
#else
	effH = Read(abs + 1);
#endif

	addr = effL + 0x100 * effH;

	return addr;
}

uint16_t mos6502::Addr_ZEX()
{
	uint16_t addr = (Read(pc++) + X) % 256;
	return addr;
}

uint16_t mos6502::Addr_ZEY()
{
	uint16_t addr = (Read(pc++) + Y) % 256;
	return addr;
}

uint16_t mos6502::Addr_ABX()
{
	uint16_t addr;
	uint16_t addrL;
	uint16_t addrH;

	addrL = Read(pc++);
	addrH = Read(pc++);

	addr = addrL + (addrH << 8) + X;
	return addr;
}

uint16_t mos6502::Addr_ABY()
{
	uint16_t addr;
	uint16_t addrL;
	uint16_t addrH;

	addrL = Read(pc++);
	addrH = Read(pc++);

	addr = addrL + (addrH << 8) + Y;
	return addr;
}

uint16_t mos6502::Addr_INX()
{
	uint16_t zeroL;
	uint16_t zeroH;
	uint16_t addr;

	zeroL = (Read(pc++) + X) % 256;
	zeroH = (zeroL + 1) % 256;
	addr = Read(zeroL) + (Read(zeroH) << 8);

	return addr;
}

uint16_t mos6502::Addr_INY()
{
	uint16_t zeroL;
	uint16_t zeroH;
	uint16_t addr;

	zeroL = Read(pc++);
	zeroH = (zeroL + 1) % 256;
	addr = Read(zeroL) + (Read(zeroH) << 8) + Y;

	return addr;
}

void mos6502::Reset(RunContext* context)
{
	this->run_context = context;
	A = 0x00;
	Y = 0x00;
	X = 0x00;

	pc = (Read(rstVectorH) << 8) + Read(rstVectorL); // load PC from reset vector

	sp = 0xFF;

	status = CONSTANT;

	illegalOpcode = false;

	return;
}

uint8_t mos6502::Read(uint16_t addr)
{
	return ExternalRead(addr, this->run_context);
}

void mos6502::Write(uint16_t addr, uint8_t byte)
{
	stopped = ExternalWrite(addr, byte, this->run_context);
}

void mos6502::StackPush(uint8_t byte)
{
	Write(0x0100 + sp, byte);
	if(sp == 0x00) sp = 0xFF;
	else sp--;
}

uint8_t mos6502::StackPop()
{
	if(sp == 0xFF) sp = 0x00;
	else sp++;
	return Read(0x0100 + sp);
}

void mos6502::IRQ()
{
	if(!IF_INTERRUPT())
	{
		SET_BREAK(0);
		StackPush((pc >> 8) & 0xFF);
		StackPush(pc & 0xFF);
		StackPush(status);
		SET_INTERRUPT(1);
		pc = (Read(irqVectorH) << 8) + Read(irqVectorL);
	}
	return;
}

void mos6502::NMI()
{
	SET_BREAK(0);
	StackPush((pc >> 8) & 0xFF);
	StackPush(pc & 0xFF);
	StackPush(status);
	SET_INTERRUPT(1);
	pc = (Read(nmiVectorH) << 8) + Read(nmiVectorL);
	return;
}

void mos6502::Run(
	int32_t cyclesRemaining,
	uint64_t& cycleCount,
	RunContext* context,
	CycleMethod cycleMethod
) {
	uint8_t opcode;
	Instr instr;

	this->run_context = context;

	stopped = false;
	illegalOpcode = false;
	while(!stopped && cyclesRemaining > 0 && !illegalOpcode)
	{
		// fetch
		opcode = Read(pc++);

		// decode
		instr = InstrTable[opcode];

		// execute
		Exec(instr);
		cycleCount += instr.cycles;
		cyclesRemaining -=
			cycleMethod == CYCLE_COUNT        ? instr.cycles
			/* cycleMethod == INST_COUNT */   : 1;
	}
}

void mos6502::Exec(Instr i)
{
	(this->*i.code)();
}

void mos6502::Op_ILLEGAL(uint16_t src)
{
	illegalOpcode = true;
}

void mos6502::Op_ADC(uint16_t src)
{
	uint8_t m = Read(src);
	unsigned int tmp = m + A + (IF_CARRY() ? 1 : 0);
	SET_ZERO(!(tmp & 0xFF));
	if (IF_DECIMAL())
	{
		if (((A & 0xF) + (m & 0xF) + (IF_CARRY() ? 1 : 0)) > 9) tmp += 6;
		SET_NEGATIVE(tmp & 0x80);
		SET_OVERFLOW(!((A ^ m) & 0x80) && ((A ^ tmp) & 0x80));
		if (tmp > 0x99)
		{
			tmp += 96;
		}
		SET_CARRY(tmp > 0x99);
	}
	else
	{
		SET_NEGATIVE(tmp & 0x80);
		SET_OVERFLOW(!((A ^ m) & 0x80) && ((A ^ tmp) & 0x80));
		SET_CARRY(tmp > 0xFF);
	}

	A = tmp & 0xFF;
	return;
}

void mos6502::Op_AND(uint16_t src)
{
	uint8_t m = Read(src);
	uint8_t res = m & A;
	SET_NEGATIVE(res & 0x80);
	SET_ZERO(!res);
	A = res;
	return;
}

void mos6502::Op_ASL(uint16_t src)
{
	uint8_t m = Read(src);
	SET_CARRY(m & 0x80);
	m <<= 1;
	m &= 0xFF;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Write(src, m);
	return;
}

void mos6502::Op_ASL_ACC(uint16_t src)
{
	uint8_t m = A;
	SET_CARRY(m & 0x80);
	m <<= 1;
	m &= 0xFF;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
	return;
}

void mos6502::Op_BCC(uint16_t src)
{
	if (!IF_CARRY())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_BCS(uint16_t src)
{
	if (IF_CARRY())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_BEQ(uint16_t src)
{
	if (IF_ZERO())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_BIT(uint16_t src)
{
	uint8_t m = Read(src);
	uint8_t res = m & A;
	SET_NEGATIVE(res & 0x80);
	status = (status & 0x3F) | (uint8_t)(m & 0xC0);
	SET_ZERO(!res);
	return;
}

void mos6502::Op_BMI(uint16_t src)
{
	if (IF_NEGATIVE())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_BNE(uint16_t src)
{
	if (!IF_ZERO())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_BPL(uint16_t src)
{
	if (!IF_NEGATIVE())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_BRK(uint16_t src)
{
	pc++;
	StackPush((pc >> 8) & 0xFF);
	StackPush(pc & 0xFF);
	StackPush(status | BREAK);
	SET_INTERRUPT(1);
	pc = (Read(irqVectorH) << 8) + Read(irqVectorL);
	return;
}

void mos6502::Op_BVC(uint16_t src)
{
	if (!IF_OVERFLOW())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_BVS(uint16_t src)
{
	if (IF_OVERFLOW())
	{
		pc = src;
	}
	return;
}

void mos6502::Op_CLC(uint16_t src)
{
	SET_CARRY(0);
	return;
}

void mos6502::Op_CLD(uint16_t src)
{
	SET_DECIMAL(0);
	return;
}

void mos6502::Op_CLI(uint16_t src)
{
	SET_INTERRUPT(0);
	return;
}

void mos6502::Op_CLV(uint16_t src)
{
	SET_OVERFLOW(0);
	return;
}

void mos6502::Op_CMP(uint16_t src)
{
	unsigned int tmp = A - Read(src);
	SET_CARRY(tmp < 0x100);
	SET_NEGATIVE(tmp & 0x80);
	SET_ZERO(!(tmp & 0xFF));
	return;
}

void mos6502::Op_CPX(uint16_t src)
{
	unsigned int tmp = X - Read(src);
	SET_CARRY(tmp < 0x100);
	SET_NEGATIVE(tmp & 0x80);
	SET_ZERO(!(tmp & 0xFF));
	return;
}

void mos6502::Op_CPY(uint16_t src)
{
	unsigned int tmp = Y - Read(src);
	SET_CARRY(tmp < 0x100);
	SET_NEGATIVE(tmp & 0x80);
	SET_ZERO(!(tmp & 0xFF));
	return;
}

void mos6502::Op_DEC(uint16_t src)
{
	uint8_t m = Read(src);
	m = (m - 1) % 256;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Write(src, m);
	return;
}

void mos6502::Op_DEX(uint16_t src)
{
	uint8_t m = X;
	m = (m - 1) % 256;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	X = m;
	return;
}

void mos6502::Op_DEY(uint16_t src)
{
	uint8_t m = Y;
	m = (m - 1) % 256;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Y = m;
	return;
}

void mos6502::Op_EOR(uint16_t src)
{
	uint8_t m = Read(src);
	m = A ^ m;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
}

void mos6502::Op_INC(uint16_t src)
{
	uint8_t m = Read(src);
	m = (m + 1) % 256;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Write(src, m);
}

void mos6502::Op_INX(uint16_t src)
{
	uint8_t m = X;
	m = (m + 1) % 256;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	X = m;
}

void mos6502::Op_INY(uint16_t src)
{
	uint8_t m = Y;
	m = (m + 1) % 256;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Y = m;
}

void mos6502::Op_JMP(uint16_t src)
{
	pc = src;
}

void mos6502::Op_JSR(uint16_t src)
{
	pc--;
	StackPush((pc >> 8) & 0xFF);
	StackPush(pc & 0xFF);
	pc = src;
}

void mos6502::Op_LDA(uint16_t src)
{
	uint8_t m = Read(src);
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
}

void mos6502::Op_LDX(uint16_t src)
{
	uint8_t m = Read(src);
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	X = m;
}

void mos6502::Op_LDY(uint16_t src)
{
	uint8_t m = Read(src);
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Y = m;
}

void mos6502::Op_LSR(uint16_t src)
{
	uint8_t m = Read(src);
	SET_CARRY(m & 0x01);
	m >>= 1;
	SET_NEGATIVE(0);
	SET_ZERO(!m);
	Write(src, m);
}

void mos6502::Op_LSR_ACC(uint16_t src)
{
	uint8_t m = A;
	SET_CARRY(m & 0x01);
	m >>= 1;
	SET_NEGATIVE(0);
	SET_ZERO(!m);
	A = m;
}

void mos6502::Op_NOP(uint16_t src)
{
	return;
}

void mos6502::Op_ORA(uint16_t src)
{
	uint8_t m = Read(src);
	m = A | m;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
}

void mos6502::Op_PHA(uint16_t src)
{
	StackPush(A);
	return;
}

void mos6502::Op_PHP(uint16_t src)
{
	StackPush(status | BREAK);
	return;
}

void mos6502::Op_PLA(uint16_t src)
{
	A = StackPop();
	SET_NEGATIVE(A & 0x80);
	SET_ZERO(!A);
	return;
}

void mos6502::Op_PLP(uint16_t src)
{
	status = StackPop();
	SET_CONSTANT(1);
	return;
}

void mos6502::Op_ROL(uint16_t src)
{
	uint16_t m = Read(src);
	m <<= 1;
	if (IF_CARRY()) m |= 0x01;
	SET_CARRY(m > 0xFF);
	m &= 0xFF;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Write(src, m);
	return;
}

void mos6502::Op_ROL_ACC(uint16_t src)
{
	uint16_t m = A;
	m <<= 1;
	if (IF_CARRY()) m |= 0x01;
	SET_CARRY(m > 0xFF);
	m &= 0xFF;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
	return;
}

void mos6502::Op_ROR(uint16_t src)
{
	uint16_t m = Read(src);
	if (IF_CARRY()) m |= 0x100;
	SET_CARRY(m & 0x01);
	m >>= 1;
	m &= 0xFF;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Write(src, m);
	return;
}

void mos6502::Op_ROR_ACC(uint16_t src)
{
	uint16_t m = A;
	if (IF_CARRY()) m |= 0x100;
	SET_CARRY(m & 0x01);
	m >>= 1;
	m &= 0xFF;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
	return;
}

void mos6502::Op_RTI(uint16_t src)
{
	uint8_t lo, hi;

	status = StackPop();

	lo = StackPop();
	hi = StackPop();

	pc = (hi << 8) | lo;
	return;
}

void mos6502::Op_RTS(uint16_t src)
{
	uint8_t lo, hi;

	lo = StackPop();
	hi = StackPop();

	pc = ((hi << 8) | lo) + 1;
	return;
}

void mos6502::Op_SBC(uint16_t src)
{
	uint8_t m = Read(src);
	unsigned int tmp = A - m - (IF_CARRY() ? 0 : 1);
	SET_NEGATIVE(tmp & 0x80);
	SET_ZERO(!(tmp & 0xFF));
	SET_OVERFLOW(((A ^ tmp) & 0x80) && ((A ^ m) & 0x80));

	if (IF_DECIMAL())
	{
		if ( ((A & 0x0F) - (IF_CARRY() ? 0 : 1)) < (m & 0x0F)) tmp -= 6;
		if (tmp > 0x99)
		{
			tmp -= 0x60;
		}
	}
	SET_CARRY(tmp < 0x100);
	A = (tmp & 0xFF);
	return;
}

void mos6502::Op_SEC(uint16_t src)
{
	SET_CARRY(1);
	return;
}

void mos6502::Op_SED(uint16_t src)
{
	SET_DECIMAL(1);
	return;
}

void mos6502::Op_SEI(uint16_t src)
{
	SET_INTERRUPT(1);
	return;
}

void mos6502::Op_STA(uint16_t src)
{
	Write(src, A);
	return;
}

void mos6502::Op_STX(uint16_t src)
{
	Write(src, X);
	return;
}

void mos6502::Op_STY(uint16_t src)
{
	Write(src, Y);
	return;
}

void mos6502::Op_TAX(uint16_t src)
{
	uint8_t m = A;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	X = m;
	return;
}

void mos6502::Op_TAY(uint16_t src)
{
	uint8_t m = A;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	Y = m;
	return;
}

void mos6502::Op_TSX(uint16_t src)
{
	uint8_t m = sp;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	X = m;
	return;
}

void mos6502::Op_TXA(uint16_t src)
{
	uint8_t m = X;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
	return;
}

void mos6502::Op_TXS(uint16_t src)
{
	sp = X;
	return;
}

void mos6502::Op_TYA(uint16_t src)
{
	uint8_t m = Y;
	SET_NEGATIVE(m & 0x80);
	SET_ZERO(!m);
	A = m;
	return;
}

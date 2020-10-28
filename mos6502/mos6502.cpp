#include "mos6502.hpp"
#include "src/GameState.bytecodeinfo.hpp"

namespace {
uint16_t const rainbow_prg_banking_1 = 0x5002;
uint16_t const stop_trigger_addr = 0xffff;
uint16_t const nes_register_ppustatus = 0x2002;
}

uint8_t mos6502::RunContext::ExternalRead(uint16_t addr) {
#ifndef NDEBUG
	if (addr >= 0x800 && addr < 2000) {
		throw std::runtime_error("access to RAM mirrors");
	}
#endif
	uint16_t const memory_segment = addr / 0x2000;
	uint16_t const segment_addr = addr % 0x2000;
	return memory_segments[memory_segment][segment_addr];
}

bool mos6502::RunContext::ExternalWrite(uint16_t addr, uint8_t value) {
	// RAM
	if (addr < 0x2000) {
		addr = addr % 0x0800;
		memory_segments[0][addr] = value;

		// Stop emulation on gameover (and note that the game is over)
		if (addr == global_game_state) {
			gameover = true;
			return true;
		}

		return false;
	}

	// Banking register
	if (addr == rainbow_prg_banking_1) {
		uint8_t* const rom_begin = memory_segments[6] - (0x1f * 0x4000); // segment 6 is fixed bank begining, which is bank 0x1f
		uint8_t* const bank_begin = rom_begin + value * 0x4000;
		memory_segments[4] = bank_begin;
		memory_segments[5] = bank_begin + 0x2000;
		return false;
	}

	// Stop the emulation if emulated code notified its end
	return addr == stop_trigger_addr;
}

mos6502::Instr const mos6502::InstrTable[256] = {
	// 00
	/*00*/ {&mos6502::Op_BRK_IMP, 7},
	/*01*/ {&mos6502::Op_ORA_INX, 6},
	/*02*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*03*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*04*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*05*/ {&mos6502::Op_ORA_ZER, 3},
	/*06*/ {&mos6502::Op_ASL_ZER, 5},
	/*07*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*08*/ {&mos6502::Op_PHP_IMP, 3},
	/*09*/ {&mos6502::Op_ORA_IMM, 2},
	/*0a*/ {&mos6502::Op_ASL_ACC_ACC, 2},
	/*0b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*0c*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*0d*/ {&mos6502::Op_ORA_ABS, 4},
	/*0e*/ {&mos6502::Op_ASL_ABS, 6},
	/*0f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 10
	/*10*/ {&mos6502::Op_BPL_REL, 2},
	/*11*/ {&mos6502::Op_ORA_INY, 5},
	/*12*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*13*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*14*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*15*/ {&mos6502::Op_ORA_ZEX, 4},
	/*16*/ {&mos6502::Op_ASL_ZEX, 6},
	/*17*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*18*/ {&mos6502::Op_CLC_IMP, 2},
	/*19*/ {&mos6502::Op_ORA_ABY, 4},
	/*1a*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*1b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*1c*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*1d*/ {&mos6502::Op_ORA_ABX, 4},
	/*1e*/ {&mos6502::Op_ASL_ABX, 7},
	/*1f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 20
	/*20*/ {&mos6502::Op_JSR_ABS, 6},
	/*21*/ {&mos6502::Op_AND_INX, 6},
	/*22*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*23*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*24*/ {&mos6502::Op_BIT_ZER, 3},
	/*25*/ {&mos6502::Op_AND_ZER, 3},
	/*26*/ {&mos6502::Op_ROL_ZER, 5},
	/*27*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*28*/ {&mos6502::Op_PLP_IMP, 4},
	/*29*/ {&mos6502::Op_AND_IMM, 2},
	/*2a*/ {&mos6502::Op_ROL_ACC_ACC, 2},
	/*2b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*2c*/ {&mos6502::Op_BIT_ABS, 4},
	/*2d*/ {&mos6502::Op_AND_ABS, 4},
	/*2e*/ {&mos6502::Op_ROL_ABS, 6},
	/*2f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 30
	/*30*/ {&mos6502::Op_BMI_REL, 2},
	/*31*/ {&mos6502::Op_AND_INY, 5},
	/*32*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*33*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*34*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*35*/ {&mos6502::Op_AND_ZEX, 4},
	/*36*/ {&mos6502::Op_ROL_ZEX, 6},
	/*37*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*38*/ {&mos6502::Op_SEC_IMP, 2},
	/*39*/ {&mos6502::Op_AND_ABY, 4},
	/*3a*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*3b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*3c*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*3d*/ {&mos6502::Op_AND_ABX, 4},
	/*3e*/ {&mos6502::Op_ROL_ABX, 7},
	/*3f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 40
	/*40*/ {&mos6502::Op_RTI_IMP, 6},
	/*41*/ {&mos6502::Op_EOR_INX, 6},
	/*42*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*43*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*44*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*45*/ {&mos6502::Op_EOR_ZER, 3},
	/*46*/ {&mos6502::Op_LSR_ZER, 5},
	/*47*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*48*/ {&mos6502::Op_PHA_IMP, 3},
	/*49*/ {&mos6502::Op_EOR_IMM, 2},
	/*4a*/ {&mos6502::Op_LSR_ACC_ACC, 2},
	/*4b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*4c*/ {&mos6502::Op_JMP_ABS, 3},
	/*4d*/ {&mos6502::Op_EOR_ABS, 4},
	/*4e*/ {&mos6502::Op_LSR_ABS, 6},
	/*4f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 50
	/*50*/ {&mos6502::Op_BVC_REL, 2},
	/*51*/ {&mos6502::Op_EOR_INY, 5},
	/*52*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*53*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*54*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*55*/ {&mos6502::Op_EOR_ZEX, 4},
	/*56*/ {&mos6502::Op_LSR_ZEX, 6},
	/*57*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*58*/ {&mos6502::Op_CLI_IMP, 2},
	/*59*/ {&mos6502::Op_EOR_ABY, 4},
	/*5a*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*5b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*5c*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*5d*/ {&mos6502::Op_EOR_ABX, 4},
	/*5e*/ {&mos6502::Op_LSR_ABX, 7},
	/*5f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 60
	/*60*/ {&mos6502::Op_RTS_IMP, 6},
	/*61*/ {&mos6502::Op_ADC_INX, 6},
	/*62*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*63*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*64*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*65*/ {&mos6502::Op_ADC_ZER, 3},
	/*66*/ {&mos6502::Op_ROR_ZER, 5},
	/*67*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*68*/ {&mos6502::Op_PLA_IMP, 4},
	/*69*/ {&mos6502::Op_ADC_IMM, 2},
	/*6a*/ {&mos6502::Op_ROR_ACC_ACC, 2},
	/*6b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*6c*/ {&mos6502::Op_JMP_ABI, 5},
	/*6d*/ {&mos6502::Op_ADC_ABS, 4},
	/*6e*/ {&mos6502::Op_ROR_ABS, 6},
	/*6f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 70
	/*70*/ {&mos6502::Op_BVS_REL, 2},
	/*71*/ {&mos6502::Op_ADC_INY, 6},
	/*72*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*73*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*74*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*75*/ {&mos6502::Op_ADC_ZEX, 4},
	/*76*/ {&mos6502::Op_ROR_ZEX, 6},
	/*77*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*78*/ {&mos6502::Op_SEI_IMP, 2},
	/*79*/ {&mos6502::Op_ADC_ABY, 4},
	/*7a*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*7b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*7c*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*7d*/ {&mos6502::Op_ADC_ABX, 4},
	/*7e*/ {&mos6502::Op_ROR_ABX, 7},
	/*7f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 80
	/*80*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*81*/ {&mos6502::Op_STA_INX, 6},
	/*82*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*83*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*84*/ {&mos6502::Op_STY_ZER, 3},
	/*85*/ {&mos6502::Op_STA_ZER, 3},
	/*86*/ {&mos6502::Op_STX_ZER, 3},
	/*87*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*88*/ {&mos6502::Op_DEY_IMP, 2},
	/*89*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*8a*/ {&mos6502::Op_TXA_IMP, 2},
	/*8b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*8c*/ {&mos6502::Op_STY_ABS, 4},
	/*8d*/ {&mos6502::Op_STA_ABS, 4},
	/*8e*/ {&mos6502::Op_STX_ABS, 4},
	/*8f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// 90
	/*90*/ {&mos6502::Op_BCC_REL, 2},
	/*91*/ {&mos6502::Op_STA_INY, 6},
	/*92*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*93*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*94*/ {&mos6502::Op_STY_ZEX, 4},
	/*95*/ {&mos6502::Op_STA_ZEX, 4},
	/*96*/ {&mos6502::Op_STX_ZEY, 4},
	/*97*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*98*/ {&mos6502::Op_TYA_IMP, 2},
	/*99*/ {&mos6502::Op_STA_ABY, 5},
	/*9a*/ {&mos6502::Op_TXS_IMP, 2},
	/*9b*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*9c*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*9d*/ {&mos6502::Op_STA_ABX, 5},
	/*9e*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*9f*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// a0
	/*a0*/ {&mos6502::Op_LDY_IMM, 2},
	/*a1*/ {&mos6502::Op_LDA_INX, 6},
	/*a2*/ {&mos6502::Op_LDX_IMM, 2},
	/*a3*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*a4*/ {&mos6502::Op_LDY_ZER, 3},
	/*a5*/ {&mos6502::Op_LDA_ZER, 3},
	/*a6*/ {&mos6502::Op_LDX_ZER, 3},
	/*a7*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*a8*/ {&mos6502::Op_TAY_IMP, 2},
	/*a9*/ {&mos6502::Op_LDA_IMM, 2},
	/*aa*/ {&mos6502::Op_TAX_IMP, 2},
	/*ab*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*ac*/ {&mos6502::Op_LDY_ABS, 4},
	/*ad*/ {&mos6502::Op_LDA_ABS, 4},
	/*ae*/ {&mos6502::Op_LDX_ABS, 4},
	/*af*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// b0
	/*b0*/ {&mos6502::Op_BCS_REL, 2},
	/*b1*/ {&mos6502::Op_LDA_INY, 5},
	/*b2*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*b3*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*b4*/ {&mos6502::Op_LDY_ZEX, 4},
	/*b5*/ {&mos6502::Op_LDA_ZEX, 4},
	/*b6*/ {&mos6502::Op_LDX_ZEY, 4},
	/*b7*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*b8*/ {&mos6502::Op_CLV_IMP, 2},
	/*b9*/ {&mos6502::Op_LDA_ABY, 4},
	/*ba*/ {&mos6502::Op_TSX_IMP, 2},
	/*bb*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*bc*/ {&mos6502::Op_LDY_ABX, 4},
	/*bd*/ {&mos6502::Op_LDA_ABX, 4},
	/*be*/ {&mos6502::Op_LDX_ABY, 4},
	/*bf*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// c0
	/*c0*/ {&mos6502::Op_CPY_IMM, 2},
	/*c1*/ {&mos6502::Op_CMP_INX, 6},
	/*c2*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*c3*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*c4*/ {&mos6502::Op_CPY_ZER, 3},
	/*c5*/ {&mos6502::Op_CMP_ZER, 3},
	/*c6*/ {&mos6502::Op_DEC_ZER, 5},
	/*c7*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*c8*/ {&mos6502::Op_INY_IMP, 2},
	/*c9*/ {&mos6502::Op_CMP_IMM, 2},
	/*ca*/ {&mos6502::Op_DEX_IMP, 2},
	/*cb*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*cc*/ {&mos6502::Op_CPY_ABS, 4},
	/*cd*/ {&mos6502::Op_CMP_ABS, 4},
	/*ce*/ {&mos6502::Op_DEC_ABS, 6},
	/*cf*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// d0
	/*d0*/ {&mos6502::Op_BNE_REL, 2},
	/*d1*/ {&mos6502::Op_CMP_INY, 3},
	/*d2*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*d3*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*d4*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*d5*/ {&mos6502::Op_CMP_ZEX, 4},
	/*d6*/ {&mos6502::Op_DEC_ZEX, 6},
	/*d7*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*d8*/ {&mos6502::Op_CLD_IMP, 2},
	/*d9*/ {&mos6502::Op_CMP_ABY, 4},
	/*da*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*db*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*dc*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*dd*/ {&mos6502::Op_CMP_ABX, 4},
	/*de*/ {&mos6502::Op_DEC_ABX, 7},
	/*df*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// e0
	/*e0*/ {&mos6502::Op_CPX_IMM, 2},
	/*e1*/ {&mos6502::Op_SBC_INX, 6},
	/*e2*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*e3*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*e4*/ {&mos6502::Op_CPX_ZER, 3},
	/*e5*/ {&mos6502::Op_SBC_ZER, 3},
	/*e6*/ {&mos6502::Op_INC_ZER, 5},
	/*e7*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*e8*/ {&mos6502::Op_INX_IMP, 2},
	/*e9*/ {&mos6502::Op_SBC_IMM, 2},
	/*ea*/ {&mos6502::Op_NOP_IMP, 2},
	/*eb*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*ec*/ {&mos6502::Op_CPX_ABS, 4},
	/*ed*/ {&mos6502::Op_SBC_ABS, 4},
	/*ee*/ {&mos6502::Op_INC_ABS, 6},
	/*ef*/ {&mos6502::Op_ILLEGAL_IMP, 0},

	// f0
	/*f0*/ {&mos6502::Op_BEQ_REL, 2},
	/*f1*/ {&mos6502::Op_SBC_INY, 5},
	/*f2*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*f3*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*f4*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*f5*/ {&mos6502::Op_SBC_ZEX, 4},
	/*f6*/ {&mos6502::Op_INC_ZEX, 6},
	/*f7*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*f8*/ {&mos6502::Op_SED_IMP, 2},
	/*f9*/ {&mos6502::Op_SBC_ABY, 4},
	/*fa*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*fb*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*fc*/ {&mos6502::Op_ILLEGAL_IMP, 0},
	/*fd*/ {&mos6502::Op_SBC_ABX, 4},
	/*fe*/ {&mos6502::Op_INC_ABX, 7},
	/*ff*/ {&mos6502::Op_ILLEGAL_IMP, 0},
};

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

void mos6502::Reset()
{
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
	return run_context.ExternalRead(addr);
}

void mos6502::Write(uint16_t addr, uint8_t byte)
{
	stopped = run_context.ExternalWrite(addr, byte);
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
	CycleMethod cycleMethod
) {
	uint8_t opcode;
	Instr instr;

	stopped = false;
	illegalOpcode = false;
	while(!stopped && cyclesRemaining >= 0)
	{
		auto const compiled_segment = (pc < 0xc000 ? nullptr : (*run_context.compiled_segments)[pc - 0xc000]);
		if (compiled_segment != nullptr) {
			compiled_segment(*this);
		}else {
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
}

void mos6502::Exec(Instr i)
{
	(this->*i.code)();
}

void mos6502::Op_ILLEGAL(uint16_t src)
{
	illegalOpcode = true;
	stopped = true;
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

//============================================================================
// Name        : mos6502
// Author      : Gianluca Ghettini
// Version     : 1.0
// Copyright   :
// Description : A MOS 6502 CPU emulator written in C++
//============================================================================

#pragma once

#include <array>
#include <iostream>
#include <stdint.h>
using namespace std;

#define M6502_NEGATIVE  0x80
#define M6502_OVERFLOW  0x40
#define M6502_CONSTANT  0x20
#define M6502_BREAK     0x10
#define M6502_DECIMAL   0x08
#define M6502_INTERRUPT 0x04
#define M6502_ZERO      0x02
#define M6502_CARRY     0x01

#define SET_NEGATIVE(x) (x ? (status |= M6502_NEGATIVE) : (status &= (~M6502_NEGATIVE)) )
#define SET_OVERFLOW(x) (x ? (status |= M6502_OVERFLOW) : (status &= (~M6502_OVERFLOW)) )
#define SET_CONSTANT(x) (x ? (status |= M6502_CONSTANT) : (status &= (~M6502_CONSTANT)) )
#define SET_BREAK(x) (x ? (status |= M6502_BREAK) : (status &= (~M6502_BREAK)) )
#define SET_DECIMAL(x) (x ? (status |= M6502_DECIMAL) : (status &= (~M6502_DECIMAL)) )
#define SET_INTERRUPT(x) (x ? (status |= M6502_INTERRUPT) : (status &= (~M6502_INTERRUPT)) )
#define SET_ZERO(x) (x ? (status |= M6502_ZERO) : (status &= (~M6502_ZERO)) )
#define SET_CARRY(x) (x ? (status |= M6502_CARRY) : (status &= (~M6502_CARRY)) )

#define IF_NEGATIVE() ((status & M6502_NEGATIVE) ? true : false)
#define IF_OVERFLOW() ((status & M6502_OVERFLOW) ? true : false)
#define IF_CONSTANT() ((status & M6502_CONSTANT) ? true : false)
#define IF_BREAK() ((status & M6502_BREAK) ? true : false)
#define IF_DECIMAL() ((status & M6502_DECIMAL) ? true : false)
#define IF_INTERRUPT() ((status & M6502_INTERRUPT) ? true : false)
#define IF_ZERO() ((status & M6502_ZERO) ? true : false)
#define IF_CARRY() ((status & M6502_CARRY) ? true : false)



template <class RunContext>
class mos6502
{
public:
	// registers
	uint8_t A; // accumulator
	uint8_t X; // X-index
	uint8_t Y; // Y-index

	// stack pointer
	uint8_t sp;

	// program counter
	uint16_t pc;

	// status register
	uint8_t status;

	// execution events
	bool illegalOpcode; // true: Run() stopped because of an illegal opcode was encountered
	bool stopped; // true: Run() stopped because user callback stopped it

	RunContext run_context;

	// IRQ, reset, NMI vectors
	static const uint16_t irqVectorH = 0xFFFF;
	static const uint16_t irqVectorL = 0xFFFE;
	static const uint16_t rstVectorH = 0xFFFD;
	static const uint16_t rstVectorL = 0xFFFC;
	static const uint16_t nmiVectorH = 0xFFFB;
	static const uint16_t nmiVectorL = 0xFFFA;

public:
	typedef void (mos6502::*CodeExec)();

	struct Instr
	{
		CodeExec code;
		uint8_t cycles;
	};

	static Instr const InstrTable[256];

	void Exec(Instr i);

	// addressing modes
	uint16_t Addr_ACC(); // ACCUMULATOR
	uint16_t Addr_IMM(); // IMMEDIATE
	uint16_t Addr_ABS(); // ABSOLUTE
	uint16_t Addr_ZER(); // ZERO PAGE
	uint16_t Addr_ZEX(); // INDEXED-X ZERO PAGE
	uint16_t Addr_ZEY(); // INDEXED-Y ZERO PAGE
	uint16_t Addr_ABX(); // INDEXED-X ABSOLUTE
	uint16_t Addr_ABY(); // INDEXED-Y ABSOLUTE
	uint16_t Addr_IMP(); // IMPLIED
	uint16_t Addr_REL(); // RELATIVE
	uint16_t Addr_INX(); // INDEXED-X INDIRECT
	uint16_t Addr_INY(); // INDEXED-Y INDIRECT
	uint16_t Addr_ABI(); // ABSOLUTE INDIRECT

	// opcodes (grouped as per datasheet)
	void Op_ADC(uint16_t src);
	void Op_AND(uint16_t src);
	void Op_ASL(uint16_t src); 	void Op_ASL_ACC(uint16_t src);
	void Op_BCC(uint16_t src);
	void Op_BCS(uint16_t src);

	void Op_BEQ(uint16_t src);
	void Op_BIT(uint16_t src);
	void Op_BMI(uint16_t src);
	void Op_BNE(uint16_t src);
	void Op_BPL(uint16_t src);

	void Op_BRK(uint16_t src);
	void Op_BVC(uint16_t src);
	void Op_BVS(uint16_t src);
	void Op_CLC(uint16_t src);
	void Op_CLD(uint16_t src);

	void Op_CLI(uint16_t src);
	void Op_CLV(uint16_t src);
	void Op_CMP(uint16_t src);
	void Op_CPX(uint16_t src);
	void Op_CPY(uint16_t src);

	void Op_DEC(uint16_t src);
	void Op_DEX(uint16_t src);
	void Op_DEY(uint16_t src);
	void Op_EOR(uint16_t src);
	void Op_INC(uint16_t src);

	void Op_INX(uint16_t src);
	void Op_INY(uint16_t src);
	void Op_JMP(uint16_t src);
	void Op_JSR(uint16_t src);
	void Op_LDA(uint16_t src);

	void Op_LDX(uint16_t src);
	void Op_LDY(uint16_t src);
	void Op_LSR(uint16_t src); 	void Op_LSR_ACC(uint16_t src);
	void Op_NOP(uint16_t src);
	void Op_ORA(uint16_t src);

	void Op_PHA(uint16_t src);
	void Op_PHP(uint16_t src);
	void Op_PLA(uint16_t src);
	void Op_PLP(uint16_t src);
	void Op_ROL(uint16_t src); 	void Op_ROL_ACC(uint16_t src);

	void Op_ROR(uint16_t src);	void Op_ROR_ACC(uint16_t src);
	void Op_RTI(uint16_t src);
	void Op_RTS(uint16_t src);
	void Op_SBC(uint16_t src);
	void Op_SEC(uint16_t src);
	void Op_SED(uint16_t src);

	void Op_SEI(uint16_t src);
	void Op_STA(uint16_t src);
	void Op_STX(uint16_t src);
	void Op_STY(uint16_t src);
	void Op_TAX(uint16_t src);

	void Op_TAY(uint16_t src);
	void Op_TSX(uint16_t src);
	void Op_TXA(uint16_t src);
	void Op_TXS(uint16_t src);
	void Op_TYA(uint16_t src);

	void Op_ILLEGAL(uint16_t src);

	// opcodes with addressing
	void Op_ILLEGAL_IMP();
	void Op_ADC_IMM();
	void Op_ADC_ABS();
	void Op_ADC_ZER();
	void Op_ADC_INX();
	void Op_ADC_INY();
	void Op_ADC_ZEX();
	void Op_ADC_ABX();
	void Op_ADC_ABY();
	void Op_AND_IMM();
	void Op_AND_ABS();
	void Op_AND_ZER();
	void Op_AND_INX();
	void Op_AND_INY();
	void Op_AND_ZEX();
	void Op_AND_ABX();
	void Op_AND_ABY();
	void Op_ASL_ABS();
	void Op_ASL_ZER();
	void Op_ASL_ACC_ACC();
	void Op_ASL_ZEX();
	void Op_ASL_ABX();
	void Op_BCC_REL();
	void Op_BCS_REL();
	void Op_BEQ_REL();
	void Op_BIT_ABS();
	void Op_BIT_ZER();
	void Op_BMI_REL();
	void Op_BNE_REL();
	void Op_BPL_REL();
	void Op_BRK_IMP();
	void Op_BVC_REL();
	void Op_BVS_REL();
	void Op_CLC_IMP();
	void Op_CLD_IMP();
	void Op_CLI_IMP();
	void Op_CLV_IMP();
	void Op_CMP_IMM();
	void Op_CMP_ABS();
	void Op_CMP_ZER();
	void Op_CMP_INX();
	void Op_CMP_INY();
	void Op_CMP_ZEX();
	void Op_CMP_ABX();
	void Op_CMP_ABY();
	void Op_CPX_IMM();
	void Op_CPX_ABS();
	void Op_CPX_ZER();
	void Op_CPY_IMM();
	void Op_CPY_ABS();
	void Op_CPY_ZER();
	void Op_DEC_ABS();
	void Op_DEC_ZER();
	void Op_DEC_ZEX();
	void Op_DEC_ABX();
	void Op_DEX_IMP();
	void Op_DEY_IMP();
	void Op_EOR_IMM();
	void Op_EOR_ABS();
	void Op_EOR_ZER();
	void Op_EOR_INX();
	void Op_EOR_INY();
	void Op_EOR_ZEX();
	void Op_EOR_ABX();
	void Op_EOR_ABY();
	void Op_INC_ABS();
	void Op_INC_ZER();
	void Op_INC_ZEX();
	void Op_INC_ABX();
	void Op_INX_IMP();
	void Op_INY_IMP();
	void Op_JMP_ABS();
	void Op_JMP_ABI();
	void Op_JSR_ABS();
	void Op_LDA_IMM();
	void Op_LDA_ABS();
	void Op_LDA_ZER();
	void Op_LDA_INX();
	void Op_LDA_INY();
	void Op_LDA_ZEX();
	void Op_LDA_ABX();
	void Op_LDA_ABY();
	void Op_LDX_IMM();
	void Op_LDX_ABS();
	void Op_LDX_ZER();
	void Op_LDX_ABY();
	void Op_LDX_ZEY();
	void Op_LDY_IMM();
	void Op_LDY_ABS();
	void Op_LDY_ZER();
	void Op_LDY_ZEX();
	void Op_LDY_ABX();
	void Op_LSR_ABS();
	void Op_LSR_ZER();
	void Op_LSR_ACC_ACC();
	void Op_LSR_ZEX();
	void Op_LSR_ABX();
	void Op_NOP_IMP();
	void Op_ORA_IMM();
	void Op_ORA_ABS();
	void Op_ORA_ZER();
	void Op_ORA_INX();
	void Op_ORA_INY();
	void Op_ORA_ZEX();
	void Op_ORA_ABX();
	void Op_ORA_ABY();
	void Op_PHA_IMP();
	void Op_PHP_IMP();
	void Op_PLA_IMP();
	void Op_PLP_IMP();
	void Op_ROL_ABS();
	void Op_ROL_ZER();
	void Op_ROL_ACC_ACC();
	void Op_ROL_ZEX();
	void Op_ROL_ABX();
	void Op_ROR_ABS();
	void Op_ROR_ZER();
	void Op_ROR_ACC_ACC();
	void Op_ROR_ZEX();
	void Op_ROR_ABX();
	void Op_RTI_IMP();
	void Op_RTS_IMP();
	void Op_SBC_IMM();
	void Op_SBC_ABS();
	void Op_SBC_ZER();
	void Op_SBC_INX();
	void Op_SBC_INY();
	void Op_SBC_ZEX();
	void Op_SBC_ABX();
	void Op_SBC_ABY();
	void Op_SEC_IMP();
	void Op_SED_IMP();
	void Op_SEI_IMP();
	void Op_STA_ABS();
	void Op_STA_ZER();
	void Op_STA_INX();
	void Op_STA_INY();
	void Op_STA_ZEX();
	void Op_STA_ABX();
	void Op_STA_ABY();
	void Op_STX_ABS();
	void Op_STX_ZER();
	void Op_STX_ZEY();
	void Op_STY_ABS();
	void Op_STY_ZER();
	void Op_STY_ZEX();
	void Op_TAX_IMP();
	void Op_TAY_IMP();
	void Op_TSX_IMP();
	void Op_TXA_IMP();
	void Op_TXS_IMP();
	void Op_TYA_IMP();

	// read/write callbacks
	uint8_t Read(uint16_t);
	void Write(uint16_t, uint8_t);

	// stack operations
	inline void StackPush(uint8_t byte);
	inline uint8_t StackPop();

public:
	enum CycleMethod {
		INST_COUNT,
		CYCLE_COUNT,
	};
	void NMI();
	void IRQ();
	void Reset();
	void Run(
		int32_t cycles,
		uint64_t& cycleCount,
		CycleMethod cycleMethod = CYCLE_COUNT);
};

#include "mos6502.cpp"

#include "GameState.hpp"

#include <algorithm>
#include <iostream>
#include <iomanip>

#include "GameState.bytecodedata.inc.cpp"

using std::placeholders::_1;
using std::placeholders::_2;

uint16_t const bytecodeVectorInitHigh = mos6502::rstVectorH;
uint16_t const bytecodeVectorInitLow = mos6502::rstVectorL;
uint16_t const bytecodeVectorTickHigh = mos6502::nmiVectorH;
uint16_t const bytecodeVectorTickLow = mos6502::nmiVectorL;

uint16_t const rainbow_prg_banking_1 = 0x5002;
uint16_t const stop_trigger_addr = 0xffff;
uint16_t const nes_register_ppustatus = 0x2002;

#ifdef DEBUG_LOG

class DbgGuard {
public:
    DbgGuard(std::string message)
    : mMessage(message)
    {
        std::cerr << mMessage << " {" << std::endl;
    }

    ~DbgGuard() {
        std::cerr << "}" << std::endl;
    }

    std::string mMessage;
};

#define dbgs(m) \
    std::ostringstream dbg_oss;\
    dbg_oss << m;\
    DbgGuard dbg_g(dbg_oss.str())

#define dbg(m) do {\
	std::ostringstream dbgline_oss;\
	dbgline_oss << "\t" << m << '\n';\
	std::cerr << dbgline_oss.str();\
}while(0)

#else

#define dbgs(m)
#define dbg(m)

#endif

#define warn(m) do {\
	if (this->logger) {\
		std::ostringstream oss;\
		oss << m;\
		this->logger(oss.str());\
	}\
}while(0)

namespace {
std::string hex(uint16_t v, int width = 4) {
	std::ostringstream oss;
	oss << std::setfill('0') << std::setw(width) << std::setbase(16) << uint16_t(v);
	return oss.str();
}
std::string hex(uint8_t v) {
	return hex(uint16_t(v), 2);
}
}

GameState::GameState(uint8_t stage, GameState::LoggerCallback logger)
: emulator(std::bind(&GameState::emulatorRead, this, _1), std::bind(&GameState::emulatorWrite, this, _1, _2))
, logger(logger)
{
	// Init RAM at zero (we do not want random bugs)
	this->emulator_ram.fill(0);

	// Call bytecode initialization routine
	this->emulator_ram[0] = stage;
	this->emulator.Reset();
	this->emulator.pc = (uint16_t(this->emulatorRead(bytecodeVectorInitHigh)) << 8) + this->emulatorRead(bytecodeVectorInitLow);
	uint64_t cycles_count = 0;
	this->emulator.Run(1'000'000, cycles_count, mos6502::INST_COUNT);

	// Handle emulation errors
	if (!this->emulator.stopped) {
		throw std::runtime_error("init routine failed");
	}
}

bool GameState::tick() {
	dbgs("===== tick =====");

	// Avoid ticking a terminated game
	if (this->gameover) {
		dbg("dead tick");
		return false;
	}

	// Set controllers state (fetch_controllers from main loop)
	this->emulator_ram[controller_a_last_frame_btns] = this->emulator_ram[controller_a_btns];
	this->emulator_ram[controller_b_last_frame_btns] = this->emulator_ram[controller_b_btns];
	this->emulator_ram[controller_a_btns] = mControllerA.getRaw();
	this->emulator_ram[controller_b_btns] = mControllerB.getRaw();

	// Emulate tick routine
	this->emulator.Reset();
	this->emulator.pc = (uint16_t(this->emulatorRead(bytecodeVectorTickHigh)) << 8) + this->emulatorRead(bytecodeVectorTickLow);
	uint64_t cycles_count = 0;
	this->emulator.Run(1'000'000, cycles_count, mos6502::INST_COUNT);

	// Handle emulation errors
	if (!this->emulator.stopped) {
		if (this->emulator.illegalOpcode) {
			warn("emulation encountered illegal opcode");
		}else {
			warn("emulation hit its time limit");
		}
		this->emulatorDump();
		return false;
	}

	// Return true until global game state changes
	return !this->gameover;
}

uint8_t GameState::winner() {
	return this->emulator_ram[gameover_winner];
}

void GameState::setControllerAState(ControllerState state) {
	dbg("setControllerAState("<< state.getStr() <<")");
	mControllerA = state;
}

void GameState::setControllerBState(ControllerState state) {
	dbg("setControllerBState("<< state.getStr() <<")");
	mControllerB = state;
}

uint8_t GameState::emulatorRead(uint16_t addr) {
	// RAM
	if (addr < 0x2000) {
		addr = addr % 0x0800;
		return this->emulator_ram[addr];
	}

	// ROM
	if (addr >= 0x8000) {
		uint8_t const bank = (addr >= 0xc000 ? 0x1f : this->emulator_bank);
		size_t const bank_offset_in_rom = bank * 0x4000;
		uint16_t const addr_in_bank = (addr - 0x8000) % 0x4000;
		return this->emulator_rom[bank_offset_in_rom + addr_in_bank];
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

bool GameState::emulatorWrite(uint16_t addr, uint8_t value) {
	// RAM
	if (addr < 0x2000) {
		addr = addr % 0x0800;
		this->emulator_ram[addr] = value;

		// Stop emulation on gameover (and note that the game is over)
		if (addr == global_game_state) {
			this->gameover = true;
			return true;
		}

		return false;
	}

	// Banking register
	if (addr == rainbow_prg_banking_1) {
		this->emulator_bank = value;
		return false;
	}

	// Stop the emulation if emulated code notified its end
	return addr == stop_trigger_addr;
}

void GameState::emulatorDump() const {
	warn(
		"cpu status: A=" << uint16_t(this->emulator.A) <<
		" X=" << uint16_t(this->emulator.X) <<
		" Y=" << uint16_t(this->emulator.Y) <<
		" SP=$" << hex(this->emulator.sp) <<
		" PC=$" << hex(this->emulator.pc) <<
		" STATUS=$" << hex(this->emulator.status) <<
		" bank=$" << hex(this->emulator_bank)
	);
	for (size_t i = 0; i < this->emulator_ram.size(); i += 16) {
		warn(
			((i % 256 == 0) ? "\n" : "") <<
			hex(uint16_t(i)) << "  " <<
				hex(this->emulator_ram[i+0]) << " " <<
				hex(this->emulator_ram[i+1]) << " " <<
				hex(this->emulator_ram[i+2]) << " " <<
				hex(this->emulator_ram[i+3]) << " " <<
				hex(this->emulator_ram[i+4]) << " " <<
				hex(this->emulator_ram[i+5]) << " " <<
				hex(this->emulator_ram[i+6]) << " " <<
				hex(this->emulator_ram[i+7]) << " " <<
				hex(this->emulator_ram[i+8]) << " " <<
				hex(this->emulator_ram[i+9]) << " " <<
				hex(this->emulator_ram[i+10]) << " " <<
				hex(this->emulator_ram[i+11]) << " " <<
				hex(this->emulator_ram[i+12]) << " " <<
				hex(this->emulator_ram[i+13]) << " " <<
				hex(this->emulator_ram[i+14]) << " " <<
				hex(this->emulator_ram[i+15])
		);
	}
}

#include "GameState.hpp"

#include <algorithm>
#include <iostream>
#include <iomanip>

#include "GameState.bytecodedata.inc.cpp"
#include "GameState.bytecodecompiled.inc.cpp"

static uint16_t const bytecodeVectorInitHigh = mos6502::rstVectorH;
static uint16_t const bytecodeVectorInitLow = mos6502::rstVectorL;
static uint16_t const bytecodeVectorTickHigh = mos6502::nmiVectorH;
static uint16_t const bytecodeVectorTickLow = mos6502::nmiVectorL;

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

std::array<uint8_t, 0x2000> /*const*/ GameState::emulator_registers = {0x00, 0x00, 0x80, 0x00};

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
: logger(logger)
{
	// Init registers
	//FIXME shall be done only once, not once per instance
	emulator_registers.fill(0);
	emulator_registers[2] = 0x80;

	// Init RAM at zero (we do not want random bugs)
	this->emulator_ram.fill(0);

	// Init emulation context
	this->emulator.run_context = {
		.memory_segments = {
			// RAM
			this->emulator_ram.data(),

			// Various registers
			GameState::emulator_registers.data(),
			GameState::emulator_registers.data(),
			GameState::emulator_registers.data(),

			// Swappable bank
			GameState::emulator_rom.data(),
			GameState::emulator_rom.data() + 0x2000,

			// Fixed bank
			GameState::emulator_rom.data() + 0x1f * 0x4000,
			GameState::emulator_rom.data() + 0x1f * 0x4000 + 0x2000,
		},
		.compiled_segments = &GameState::emulator_compiled_segments,
		.gameover = false
	};

	// Call bytecode initialization routine
	this->emulator_ram[0] = stage;
	this->emulator.Reset();
	this->emulator.pc = (uint16_t(emulator_rom[0x1f * 0x4000 + (bytecodeVectorInitHigh % 0x4000)] << 8) + emulator_rom[0x1f * 0x4000 + (bytecodeVectorInitLow % 0x4000)]); //TODO use actual read implementation
	uint64_t cycles_count = 0;
	this->emulator.Run(
		1'000'000, cycles_count,
		mos6502::INST_COUNT
	);

	// Handle emulation errors
	if (!this->emulator.stopped || this->emulator.illegalOpcode) {
		throw std::runtime_error("init routine failed");
	}
}

bool GameState::tick() {
	dbgs("===== tick =====");

	// Avoid ticking a terminated game
	if (this->emulator.run_context.gameover) {
		dbg("dead tick");
		return false;
	}

	// Set controllers state (fetch_controllers from main loop)
	this->emulator_ram[controller_a_last_frame_btns] = this->emulator_ram[controller_a_btns];
	this->emulator_ram[controller_b_last_frame_btns] = this->emulator_ram[controller_b_btns];
	this->emulator_ram[controller_a_btns] = mControllerA.getRaw();
	this->emulator_ram[controller_b_btns] = mControllerB.getRaw();

	// Emulate tick routine
	this->emulator.run_context.memory_segments[0] = this->emulator_ram.data(); // Reset this pointer, it may be wrong if current GameState instance is a copy of another one
	this->emulator.Reset();
	this->emulator.pc = (uint16_t(emulator_rom[0x1f * 0x4000 + (bytecodeVectorTickHigh % 0x4000)] << 8) + this->emulator_rom[0x1f * 0x4000 + (bytecodeVectorTickLow % 0x4000)]); //TODO use actual read implementation
	uint64_t cycles_count = 0;
	this->emulator.Run(
		1'000'000, cycles_count,
		mos6502::INST_COUNT
	);

	// Handle emulation errors
	if (this->emulator.illegalOpcode) {
		warn("emulation encountered illegal opcode");
		this->emulatorDump();
		return false;
	}else if (!this->emulator.stopped) {
		warn("emulation hit its time limit");
		this->emulatorDump();
		return false;
	}

	// Return true until global game state changes
	return !this->emulator.run_context.gameover;
}

uint8_t GameState::winner() const {
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

void GameState::emulatorDump() const {
	warn(
		"cpu status: A=" << uint16_t(this->emulator.A) <<
		" X=" << uint16_t(this->emulator.X) <<
		" Y=" << uint16_t(this->emulator.Y) <<
		" SP=$" << hex(this->emulator.sp) <<
		" PC=$" << hex(this->emulator.pc) <<
		" STATUS=$" << hex(this->emulator.status) <<
		" bank=$" << hex(uint16_t((this->emulator.run_context.memory_segments[4] - emulator_rom.data()) / 0x4000))
	);
	warn(
		"memories: ram=" << this->emulator_ram.data() <<
		" rom=" << emulator_rom.data() <<
		" reg=" << emulator_registers.data()
	);
	warn(
		"context: segments={ " <<
		this->emulator.run_context.memory_segments[0] << " ; " <<
		this->emulator.run_context.memory_segments[1] << " ; " <<
		this->emulator.run_context.memory_segments[2] << " ; " <<
		this->emulator.run_context.memory_segments[3] << " ; " <<
		this->emulator.run_context.memory_segments[4] << " ; " <<
		this->emulator.run_context.memory_segments[5] << " ; " <<
		this->emulator.run_context.memory_segments[6] << " ; " <<
		this->emulator.run_context.memory_segments[7] <<
		" }" <<
		" gameover=" << (this->emulator.run_context.gameover ? "true" : "false")
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

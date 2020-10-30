MOS6502 Emulator on steroid
===========================

This is a derivative of the excellent MOS6502 emulator by Gianluca Ghettini, adapted to Super Tilt Bro.'s needs.

If you are searching for an easy to use, easy to read, and very adaptable emulator: stand by the orginal https://github.com/gianlucag/mos6502

Divergences from original
-------------------------

Simply put: speed, at the cost of complexity.

 * Templated context to avoid the use of function pointers for read/write operation
 * Support for precompiled parts of the bytecode
 * One function per opcode+addressing mode, to have only one function pointer used per instruction
 * InstrTable is static, avoiding to copy it when copying a mos6502 instance

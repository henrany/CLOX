/*
* Debugging utilities for the Clox interpreter.
* This file contains functions and definitions to assist in debugging the interpreter.
* It includes functions for disassembling bytecode, printing stack traces, and logging ETC
*/
#ifndef CLOX_DEBUG_H
#define CLOX_DEBUG_H

#include "chunk.h"

/*
* Disassembles all chunk of instructions and prints it in a human-readable format.
* @param chunk The chunk of bytecode to disassemble.
* @param name The name of the chunk, used for labeling the output.
* @return void
*/
void disassembleChunk(Chunk* chunk, const char* name);

/*
* Disassembles a single instruction at the given offset in the chunk.
* @param chunk The chunk of bytecode containing the instruction.
* @param offset The offset of the instruction to disassemble.
* @return The offset of the next instruction after the disassembled one.
*/
int disassembleInstruction(Chunk* chunk, int offset);

#endif
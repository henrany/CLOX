/*
* Module to define our code representation
* Chunk refers to a sequence of bytecode
*/

#ifndef CLOX_CHUNK_H
#define CLOX_CHUNK_H

#include "common.h"
#include "memory.h"

/*
* Each instruction has a one-byte operation code
* This controls what kind of instruction we are dealing with
* This can be add, subtract, lookup a variable, divide etc
*/
typedef enum {
    OP_RETURN, // return operation: return from current function
} OpCode;

/*
* Bytecode is basically a series of instructions 
* Store some data along with the instruction
* This is a wrapper around array of bytes
* Dynamic array
*/
typedef struct chunk{
    int count; // the number of items added to the array 
    int capacity; // the full amount of element the array can have
    uint8_t* code; // the instruction code 
} Chunk;

/*
*  @brief A constructor for initializing a chunk of array
* @param Chunk* chunk
* @return void
*/
void initChunk(Chunk* chunk);
/*
* @brief add a byte to the end of the chunk
* @param chunk
* @param byte
* @return void
*/
void writeChunk(Chunk* chunk, uint8_t byte);
/*
* @brief free the memory allocated for the chunk
* @param chunk
* @return void
*/
void freeChunk(Chunk* chunk);

#endif // CLOX_CHUNK_H
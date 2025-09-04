#ifndef CLOX_VALUE_H
#define CLOX_VALUE_H

#include "common.h"

typedef double Value;

/*
* A dynamic array to hold Values
* Similar to Chunk but it holds Values instead of bytes
* This is used to hold constants that are used in the bytecode
* Each ValueArray has a count of how many Values are in the array
* Each ValueArray has a capacity of how many Values can be stored in the array
* Each ValueArray has a pointer to the array of Values
*/
typedef struct {
    int count;
    int capacity;
    Value* values;
} ValueArray;

/*
* @brief Initialize a ValueArray
* @param array
* @return void
*/
void initValueArray(ValueArray* array);
/*
* @brief Add a Value to the end of the ValueArray
* @param array to which the value is added
* @param value to be added
* @return void
*/
void writeValueArray(ValueArray* array, Value value);
/*
* @brief Free the memory allocated for the ValueArray
* @param array
* @return void
*/
void freeValueArray(ValueArray* array);
/*
* @brief Print a Value to the standard output
* @param value to be printed
* @return void
*/
void printValue(Value value);

#endif // CLOX_VALUE_H
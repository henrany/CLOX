/*
* Module for implementing low level memory specific stuffs
*/
#ifndef CLOX_MEMORY_H
#define CLOX_MEMORY_H

#include "common.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)

/*
* @brief a macro for growing an array
* @param type the type of the array
* @param pointer the pointer to the array
* @param oldCount the old count of the array
* @param newCount the new count of the array
* @return a pointer to the reallocated array
*/
#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), \
        sizeof(type) * (newCount))

#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

/*
* @brief a function for handling all the dynamic memory allocation 
* @param pointer the pointer to the memory block to be reallocated
* @param oldSize the old size of the memory block
* @param newSize the new size of the memory block
* @return a pointer to the reallocated memory block
*/
void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif
//include gard


#ifndef CLEAR_H
#define CLEAR_H
#include <stdint.h>
#define _NOP() do { asm volatile ("nop"); } while (0)
	
/**
 * @brief clear array
 *
 * @param[out] p1 array to clear 
 * @param[in] len size of array
 */	
	
void clear_array(uint8_t*p1,uint8_t len);
#endif
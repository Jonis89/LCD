//include gard


#ifndef CLEAR_H
#define CLEAR_H

#define _NOP() do { asm volatile ("nop"); } while (0)
void clear_array(uint8_t*p1,uint8_t len);
#endif
/*
 * LCD_2022_01_25.c
 *
 * Created: 2022-01-25 20:07:09
 * Author : jonan
 */ 

#include <avr/io.h>
#include <stdint.h>
#include "General_func.h"
#include "LED_func.h"
//uuint8_t8_t

#define _NOP() do { asm volatile ("nop"); } while (0)
#define F_CPU 1000000UL



#define LENGTH 5													 // kör denna!
uint8_t dummy [LENGTH];
	



uint8_t main(void)
{
	//clear_array(dummy,5);
	const i=sizeof(dummy);
	uint8_t array1[LENGTH];
	uint8_t blue = 7;
	uint8_t green = 1;
	uint8_t yellow= 3;
	int cnt=0;
	
	
	
		while(1){
			
			sink_led(blue);
			cnt=cnt++;
			source_led(green);
			source_led(yellow);
	
		
		}
	 return 0;
}





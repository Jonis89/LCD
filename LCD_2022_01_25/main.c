/*
 * LCD_2022_01_25.c
 *
 * Created: 2022-01-25 20:07:09
 * Author : jonan
 */ 

#include <avr/io.h>
#include <stdint.h>
#include "clear_.h"
//uuint8_t8_t

#define _NOP() do { asm volatile ("nop"); } while (0)
#define F_CPU 1000000UL
#define data		0x0003
#define adress_high 0x0002
#define adress_low	0x0003
#define mask_lowbit 0x41

#define LENGTH 5 // kör denna!
uint8_t dummy [LENGTH];
	


void init();
void _delay_ms(double __ms);
void _delay_us(double __us);



uint8_t main(void)
{
	init();
	clear_array(dummy,5);
	const i=sizeof(dummy);
	uint8_t array1[LENGTH];
	uint8_t erik =10;
	
	
		while(1){
			erik++;
			erik=PINB;
			_NOP();
			PORTB=++erik;
			_NOP();
			
	
		
		}
	 return 0;
}



void init(){
	
	PORTB=(1<<PB7)|(1<<PB6)|(1<<PB1)|(1<<PB0);
	DDRB=0xC3;
	uint8_t i=0;
	while(i<5){

	}
	return 0;
	
}


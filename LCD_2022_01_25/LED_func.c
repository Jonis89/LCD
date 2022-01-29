/*
 * LED_func.c
 *
 * Created: 2022-01-29 17:19:06
 *  Author: jonan
 */ 

#include "LED_func.h"
#include <avr/io.h>



void sink_led(uint8_t port_nr){
	
	uint8_t dummy =1;
	dummy <<= (port_nr-1);
	PORTA|=dummy;
	dummy = 0;
	DDRA &= dummy;
	
	_NOP();
	_NOP();
	
	return;
}
/*
 * LED_func.c
 *
 * Created: 2022-01-29 17:19:06
 *  Author: jonan
 */ 

#include "LED_func.h"




void sink_led(uint8_t port_nr){
	
	uint8_t dummy = 1;
	uint8_t PINA_tmp=PINA;
	dummy <<= (port_nr-1);
	PORTA|=dummy;
	_NOP();
	_NOP();
	DDRA &= PINA_tmp; // to ensure low
	_NOP();
	_NOP();
	
	return;
}


void source_led(uint8_t LED_S){
	
	uint8_t tmp = 1;
	tmp <<= (LED_S-1);
	PORTA |= tmp;
	DDRA |= tmp;
	_NOP();
	_NOP();
	
	return;
	
}
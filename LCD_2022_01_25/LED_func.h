/*
 * LED_func.h
 *
 * Created: 2022-01-29 17:19:37
 *  Author: jonan
 */ 


#ifndef LED_FUNC_H_
#define LED_FUNC_H_
#include <stdint.h>
#include <avr/io.h>
#define _NOP() do { asm volatile ("nop"); } while (0)

/**
 *@brief select which port the sinking LED is connected to,only applicate to PINA 
 *DDxn direction of the pin, always sets to 1 
 *PORTAx output sink-mode, needs to be 0
 *@param[in] selects the port <0-7>

 */


void sink_led(uint8_t port_nr);

/**
 *@brief Source current to LED, only applicate to PORTA.
 *DDxn data direction =1. 
 *PORTA source-mode =1.
 *@param[in] selects which port the LED is connected to.
 */

void source_led(uint8_t LED_S);

/**
 *@brief set all pins at PORTA to high impedance mode HI-Z. 
 */


void set_all_pin_HI_Z();

/*union BitField {
	struct{
		uint8_t green:2;
		uint8_t red:2;
		uint8_t blue;
		uint8_t crap;
	};
	uint8_t 8_reg;
};*/





#endif /* LED_FUNC_H_ */
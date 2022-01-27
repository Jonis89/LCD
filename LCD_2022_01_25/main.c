/*
 * LCD_2022_01_25.c
 *
 * Created: 2022-01-25 20:07:09
 * Author : jonan
 */ 


#define data		0x0003
#define adress_high 0x0002
#define adress_low	0x0003

#include <avr/io.h>



struct person {
	char name[30];
	char gender;
	int age;
	int weight;
	}me;
	
	


int main(void)
{
     /*Replace with your application code */
    while (1) 
    {
		
		PORTB=(1<<PB7);
		
		
		
	me.gender='M';
	me.name[0]="Jonis";
	
	
    }
}




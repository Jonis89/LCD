
#include "General_func.h" //Filnamnet


void clear_array(uint8_t*p1,uint8_t len){
	
	for(uint8_t i=0;i<len;i++){
		
		p1[i]=0x01;
	}
return;
}

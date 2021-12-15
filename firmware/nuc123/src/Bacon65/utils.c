#include "utils.h"
#include "NUC123.h"

void delay_us(uint16_t us){
	for(int i = 0; i < us * CyclesPerUs; i++){
		__NOP(); // do nothing but wait
	}
}

void delay_ms(uint16_t ms){
	delay_us(ms * 1000);
}

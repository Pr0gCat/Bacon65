#include <stdio.h>
#include "NUC123.h"


void SYS_Init(void)
{
    SystemCoreClockUpdate();
    // clock UART1
    CLK_EnableModuleClock(UART1_MODULE);
}


int main()
{
	// Initialize the system
    SYS_UnlockReg();
    SYS_Init();
    SYS_LockReg();
	// if the delete key pressed, the L4 layer will be high
    GPIO_SetMode(PD, BIT11, GPIO_PMD_OUTPUT); // scan L1
	GPIO_SetMode(PB, BIT6, GPIO_PMD_OUTPUT); // L4 scan line
	GPIO_SetMode(PF, BIT0, GPIO_PMD_INPUT);

	PD11 = 1;
	while(1){
		if(PF0){
				PB6 = 1;
		}else{
				PB6 = 0;
		}
	}
}

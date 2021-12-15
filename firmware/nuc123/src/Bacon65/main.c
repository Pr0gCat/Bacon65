#include <stdio.h>
#include "NUC123.h"


void SYS_Init(void)
{
    SystemCoreClockUpdate();
}


int main()
{
	// Initialize the system
    SYS_UnlockReg();
    SYS_Init();
    SYS_LockReg();

}

#ifndef __KEYBOARD_H_
#define __KEYBOARD_H_

#include "NUC123.h"

#define SCAN_LINES_N
const GPIO_t *ScanLines[SCAN_LINES_N] = {
		PD11,
		PB4,
		PB5,
		PB6,
		PB7
};

#endif

#ifndef wiegand_h
#define wiegand_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <memory.h>
#include "wiringPi.h"

int wiegandInit(int d0pin, int d1pin);
int wiegandGetPendingBitCount();
int wiegandReadData(void* data, int dataMaxLen);
void makeBeep(int millisecs, int times);

#endif /* wiegand_h */

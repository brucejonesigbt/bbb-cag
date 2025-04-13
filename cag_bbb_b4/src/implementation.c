/*
 * implementation.c
 *
 *  Created on: Apr 9, 2025
 *      Author: infin
 */

#include <unistd.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

FILE *LEDhandle1 = NULL;
char *LEDBrightness1 = "/sys/class/leds/beaglebone:green:usr1/brightness";






void writeaone()
{
	if((LEDhandle1 = fopen(LEDBrightness1,"r++")) != NULL)
	{
		fwrite("1",sizeof(char),1,LEDhandle1);
		fclose(LEDhandle1);
	}
}
void writea0()
{
	if((LEDhandle1 = fopen(LEDBrightness1,"r++")) != NULL)
	{
		fwrite("0",sizeof(char),1,LEDhandle1);
		fclose(LEDhandle1);
	}
}





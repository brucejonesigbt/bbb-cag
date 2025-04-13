/*
 ============================================================================
 Name        : cag_bbb_a.c
 Author      : cag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#define LOOP 10

int m = 0;
int f = 0;
FILE *LEDhandle = NULL;
char *LEDBrightness = "/sys/class/leds/beaglebone:green:usr1/brightness";



int main(void) {


	for(m = 0; m < LOOP; m++)
	{
		printf("blink start\n");
		//echo 1 > /sys/class/leds/beaglebone:green:usr1/brightness
		if((LEDhandle = fopen(LEDBrightness,"r++")) != NULL)
		{
			fwrite("1",sizeof(char),1,LEDhandle);
			fclose(LEDhandle);
		}
		sleep(1);

		if((LEDhandle = fopen(LEDBrightness,"r++")) != NULL)
		{
			fwrite("0",sizeof(char),1,LEDhandle);
			fclose(LEDhandle);
		}
		sleep(1);

		printf("blink: %d\n",m);
	}


	printf("blink program is over!\n");
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : cag_bbb_b.c
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

FILE *LEDhandle1 = NULL;

char *LEDBrightness1 = "/sys/class/leds/beaglebone:green:usr1/brightness";




int main(void) {


	//for(m = 0; m < LOOP; m++)
	while(1)
	{
		m++;
		printf("blink start\n");
		//echo 1 > /sys/class/leds/beaglebone:green:usr1/brightness


		if((LEDhandle1 = fopen(LEDBrightness1,"r++")) != NULL)
		{
			fwrite("1",sizeof(char),1,LEDhandle1);
			fclose(LEDhandle1);
		}

		sleep(1);


		if((LEDhandle1 = fopen(LEDBrightness1,"r++")) != NULL)
		{
			fwrite("0",sizeof(char),1,LEDhandle1);
			fclose(LEDhandle1);
		}

		sleep(1);

		printf("blink: %d\n",m);
	}


	printf("blink program is over!\n");
	return EXIT_SUCCESS;
}

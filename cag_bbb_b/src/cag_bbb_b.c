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
FILE *LEDhandle0 = NULL;
FILE *LEDhandle1 = NULL;
FILE *LEDhandle2 = NULL;
FILE *LEDhandle3 = NULL;
char *LEDBrightness0 = "/sys/class/leds/beaglebone:green:usr0/brightness";
char *LEDBrightness1 = "/sys/class/leds/beaglebone:green:usr1/brightness";
char *LEDBrightness2 = "/sys/class/leds/beaglebone:green:usr2/brightness";
char *LEDBrightness3 = "/sys/class/leds/beaglebone:green:usr3/brightness";



int main(void) {


	//for(m = 0; m < LOOP; m++)
	while(1)
	{
		m++;
		printf("blink start\n");
		//echo 1 > /sys/class/leds/beaglebone:green:usr1/brightness

		if((LEDhandle0 = fopen(LEDBrightness0,"r++")) != NULL)
		{
			fwrite("1",sizeof(char),1,LEDhandle0);
			fclose(LEDhandle0);
		}
		if((LEDhandle1 = fopen(LEDBrightness1,"r++")) != NULL)
		{
			fwrite("1",sizeof(char),1,LEDhandle1);
			fclose(LEDhandle1);
		}
		if((LEDhandle2 = fopen(LEDBrightness2,"r++")) != NULL)
		{
			fwrite("1",sizeof(char),1,LEDhandle2);
			fclose(LEDhandle2);
		}
		if((LEDhandle3 = fopen(LEDBrightness3,"r++")) != NULL)
		{
			fwrite("1",sizeof(char),1,LEDhandle3);
			fclose(LEDhandle3);
		}
		sleep(1);

		if((LEDhandle0 = fopen(LEDBrightness0,"r++")) != NULL)
		{
			fwrite("0",sizeof(char),1,LEDhandle0);
			fclose(LEDhandle0);
		}
		if((LEDhandle1 = fopen(LEDBrightness1,"r++")) != NULL)
		{
			fwrite("0",sizeof(char),1,LEDhandle1);
			fclose(LEDhandle1);
		}
		if((LEDhandle2 = fopen(LEDBrightness2,"r++")) != NULL)
		{
			fwrite("0",sizeof(char),1,LEDhandle2);
			fclose(LEDhandle2);
		}
		if((LEDhandle3 = fopen(LEDBrightness3,"r++")) != NULL)
		{
			fwrite("0",sizeof(char),1,LEDhandle3);
			fclose(LEDhandle3);
		}

		sleep(1);

		printf("blink: %d\n",m);
	}


	printf("blink program is over!\n");
	return EXIT_SUCCESS;
}

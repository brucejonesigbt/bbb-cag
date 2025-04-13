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
#include "interface.h"
#define LOOP 10

int m = 0;
//int f = 0;

int out =  0;



int main(void) {


	//for(m = 0; m < LOOP; m++)
	while(1)
	{
		m++;
		printf("blink start\n");
		//echo 1 > /sys/class/leds/beaglebone:green:usr1/brightness

		out = 1;
		writeaoneorzero(&out);
		sleep(1);

		out = 0;
		writeaoneorzero(&out);
		sleep(1);

		printf("blink: %d\n",m);
	}


	printf("blink program is over!\n");
	return EXIT_SUCCESS;
}

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

int m = 0;

FILE *ANALOG_handle0 = NULL;
char *in_voltage0_raw = "/sys/bus/iio/devices/iio:device0/in_voltage0_raw";

int in_voltage0_raw_int = 1;
char *endptr;
int numitems = 0;
char buffer[5];


int main(void) {


	while(1)
	{
		m++;
		printf("analog 0 read start\n");

		if((ANALOG_handle0 = fopen(in_voltage0_raw,"r++")) != NULL)
		{
			numitems = fread(buffer, sizeof(buffer), 1,ANALOG_handle0 );
			// size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
			// fwrite(c,sizeof(char),1,LEDhandle1);
			// fwrite("1",sizeof(char),1,LEDhandle1);
			printf("buffer: %s\n",buffer);
			printf("numitems: %d\n",numitems);
			fclose(ANALOG_handle0);
		}
		else
		{
			printf("could not open file\n");
		}



		in_voltage0_raw_int = strtol(buffer,&endptr,10);
		printf("in_voltage0_raw_int: %d\n",in_voltage0_raw_int);
		sleep(1);

		printf("analog 0 read: %d\n",m);
	}


	printf("program is over!\n");
	return EXIT_SUCCESS;
}

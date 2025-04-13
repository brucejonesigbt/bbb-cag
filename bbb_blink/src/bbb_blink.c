/*
 ============================================================================
 Name        : bbb_blink.c
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


int main(void) {

	f = open("/sys/class/gpio/gpio54/direction",O_RDWR);
	write(f,"out",3);
	close(f);

	f = open("/sys/class/gpio/gpio54/value",O_WRONLY);

	/*for (m = 1;m <= LOOP;m++)	*/
	for(m = 0; m < LOOP; m++)
	{

		write(f,"1",1);
		sleep(1);

		write(f,"0",1);
		sleep(1);
	}

	close(f);

	printf("blink program is over!\n");
	return EXIT_SUCCESS;
}

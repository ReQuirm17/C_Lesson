/*
 ============================================================================
 Name        : Nested_loop.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 0;
	while(i < 10)
	{
		for(int x = 0; x < 5; x++)
		{
			printf("x = %d\n",x);
		}
		printf("i = %d\n",i);
		i++;
	}
	return EXIT_SUCCESS;
}

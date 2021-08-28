/*
 ============================================================================
 Name        : switch.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 2;
	switch(i)
	{
		case 1:
			printf("Hello 1");
			break;
		case 2:
			for(int x = 0; x < 10; x++)
			{
				printf("Hello %d",x);
			}
			break;
		default:
			printf("wrong");
	}
}

/*
 ============================================================================
 Name        : pointer.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a =88;
	int *point_a = &a;

	printf("%p\n",point_a); //position of data in ram
	printf("%d",*point_a); //value of data
}

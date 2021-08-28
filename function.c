/*
 ============================================================================
 Name        : function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void say_hello(){ //not return value
	printf("Hello World\n");
}

int main(void) {
	int i = rand();
	say_hello();
	printf("Random : %d",&i);
	return EXIT_SUCCESS;
}

/*
 ============================================================================
 Name        : struct.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct test{
	int a;
	int b;
	float c;
};

int main(void) {
	struct test testvar;
	testvar.a = 17;
	testvar.b = 27;
	testvar.c = 37.77;

	printf("%d\n",testvar.a);
	printf("%d\n",testvar.b);


	return EXIT_SUCCESS;
}

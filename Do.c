/*
 ============================================================================
 Name        : Do.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int inputid;
	int inputpassword;
	do
	{
		printf("ID");
		scanf("%d",&inputid);
		printf("Password");
		scanf("%d",&inputpassword);
	}while(inputid !=1234 || inputpassword != 4321);
		printf("Done");
		return EXIT_SUCCESS;
	}

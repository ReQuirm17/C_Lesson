/*
 ============================================================================
 Name        : appliedstring.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char name[12];
	char lastname[20];

	printf("Enter your name :");
	scanf("%s",&name);
	printf("Enter your last name :");
	scanf("%s",&lastname);
	printf("Message : Hello! Mr %s %s",name,lastname);
}

/*
 ============================================================================
 Name        : condition01.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int Money;
	scanf("%d",&Money);

	if(Money >= 1000000)
	{
		printf("Rich level99");
		int age;
		scanf("%d",&age);
		if(age >= 18)
		{
			printf("very fast");
		}
	}
	else if(Money >= 500000)
	{
		printf("Rich level 50");
	}
	else if(Money >= 250000)
	{
		printf("Rich level 25");
	}
	else
	{
		printf("New bie");
	}
	printf("Success");
	return EXIT_SUCCESS;
}

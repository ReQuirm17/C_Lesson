/*
 ============================================================================
 Name        : Break.c
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
		printf("i = %d\n",i);
		i++;
		int x;
		scanf("%d",&x);
		if(x == 0)
		{
			break;
		}
	}
	printf("Done!!");
	return EXIT_SUCCESS;
}

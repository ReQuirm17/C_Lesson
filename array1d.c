/*
 ============================================================================
 Name        : array1d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int studentscore[100];
	int studentage[100];
	studentscore[0] = 100;
	studentscore[1] = 12;
	studentscore[2] = 13;
	printf("SCORE 1 : %d",studentscore[0]);

	for(int i =0; i<100;i++)
	{
		studentscore[i] = i;
		printf("SCORE %d : %d\n",i,studentscore[i]);
	}
}

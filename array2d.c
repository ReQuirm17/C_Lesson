/*
 ============================================================================
 Name        : array2d.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int student[100][2];
	student[3][0] = 1200;
	student[3][1] = 70;

	printf("STUDENT : %d : SALARY : %d : AGE : %d",3,student[3][0],student[3][1]);
}

/*
 ============================================================================
 Name        : struct2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct employee {
	int id;
	int age;
	float salary;
};

int main(void) {
	struct employee emp[10];
	emp[0].age = 20;
	emp[0].id = 02;
	emp[0].salary = 222;

	for(int i = 0; i <10 ; i++)
	{
		emp[i].id = i+1;
		emp[i].age = 20;
	}
	for(int i = 0;i<10;i++)
	{
		printf("HELLO ! ID : %d AGE : %d",emp[i].id,emp[i].age);
	}



}

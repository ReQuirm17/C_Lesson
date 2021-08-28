/*
 ============================================================================
 Name        : return_function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int salary_calculate(){
	int money = 15000;
	return money;
}
float bonus_calculate(int salary){
	float ans = salary+(salary*10/100);
	return ans;
}

int main(void){
	printf("Your Salary : %d\n",salary_calculate());
	printf("Your Bonus : %f\n",bonus_calculate(1000));
	printf("Summary : %f",bonus_calculate(salary_calculate()));
	return EXIT_SUCCESS;
}


/*
 ============================================================================
 Name        : string.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char fruit[] = "water melon";
	char str2[12] = "Orange";
	char str3[12];
	printf("Fruit : %s\n",fruit);

	strcpy(str3,fruit); //copy from one string to another
	printf("strcpy(str3,greeting) : %s\n",str3);

	strcat(fruit,str2);
	printf("strcat(str3,greeting) : %s\n",fruit);

	int len = strlen(fruit);
	printf("int len = strlen(fruit) : %d\n",len);
}

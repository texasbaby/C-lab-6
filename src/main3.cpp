#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

#define M 256

int main()
{
	char buf[M] = { 0 };
	unsigned int number = 0;
	printf("Enter the namber: ");
	scanf("%d", &number);
	printf("Your number is: %s",int2str(buf, number));
	return 0;
}
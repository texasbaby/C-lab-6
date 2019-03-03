#include "task3.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int number = 0;
	char buf[SIZE] = { 0 };
	printf("Enter an integer number\n");
	scanf("%d", &number);
	char *str = int2str(buf, number);
	puts(buf);
	return 0;
}
#include <stdio.h>
#include "task3.h"

int main()
{
	unsigned int value = 0;
	char string[STR_SIZE] = { 0 };
	printf("Converting positive numbers to string\nEnter your positive number: ");
	scanf("%d", &value);
	printf("Result string: %s\n",int2str(string, value));
}
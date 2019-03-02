#include <stdio.h>
#include "task3.h"
#define N 50

int main()
{
	unsigned int value;
	char buf[N] = { 0 };

	printf("Enter the number: ");
	scanf("%d", &value);

	printf("%s", int2str(buf,value));
	return 0;
}
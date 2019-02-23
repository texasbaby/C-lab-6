#include <stdio.h>
#include "task3.h"
#define N 20


int main()
{
	unsigned int value = 0;
	char buf[N] = { 0 };

	printf("Enter a number: ");
	scanf("%d", &value);

	int2str(buf, value);
	printf("String: %s\n", buf);

	return 0;
}


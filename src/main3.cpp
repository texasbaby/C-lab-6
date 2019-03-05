#include <stdio.h>
#include "task3.h"
#define M 256

int main()
{
	char buf[M] = { NULL };
	unsigned int num = 0;
	printf("Enter your number: ");
	scanf("%d", &num);
	printf("Your number is: %s", int2str(buf, num));
	return 0;
}
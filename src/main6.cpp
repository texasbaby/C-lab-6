#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task6.h"

int N = 0;

int main(void)
{
	scanf("%d", &N);
	printf("%llu", fib2(N));
	getchar();
	getchar();
	return 0;
}
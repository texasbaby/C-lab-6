#include "task6.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N = 0;
	while ((N < 1) || (N > 92))
	{
		printf("Enter number from 1 to 92\n");
		scanf("%d", &N);
	}
	printf("%d\t%lld\n", N, fib2(N));

	return 0;
}
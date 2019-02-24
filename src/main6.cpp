#include "task6.h"
#include <stdio.h>

int main()
{
	int N = 0;
	printf("Enter number of element in the fibonacci sequence, which you want to count: ");
	scanf("%d", &N);
	printf("Element #%d is: %llu\n", N, fib2(N));
	return 0;
}
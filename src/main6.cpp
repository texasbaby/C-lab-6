#include <stdio.h>
#include "task6.h"

int main()
{
	int N;

	printf("Enter a number: ");
	scanf("%d", &N);

	printf("Number of the Fibonacci Sequence = %lld\n", fib2(N));
	return 0;
}
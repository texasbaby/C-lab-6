#include <stdio.h>
#include "task6.h"

int main()
{
	int N;
	printf("Enter Fibonacci number element: ");
	scanf("%d", &N);
	printf("%llu\n", fib2(N));
	return 0;
}
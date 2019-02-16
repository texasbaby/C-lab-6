#include "task6.h"

static unsigned long long fib(int N, unsigned long long *a, unsigned long long *b)
{
	unsigned long long c;
	if (N == 1 || N == 2)
		*a = 1, *b = 1;
	else
	{
		c = fib(N - 1, a, b);
		*a = *b;
		*b = c;
	}
		
	return *a + *b;
}

unsigned long long fib2(int N)
{
	unsigned long long a, b;
	return fib(N, &a, &b);
}
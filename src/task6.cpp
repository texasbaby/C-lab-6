#include "task6.h"

static unsigned long long fib3(int N, unsigned long long * num1, unsigned long long * num2) // looking for N-th number of the Fibonachchi series using recursion
{
	if (N == 1 || N == 2)
		return *num2;
	else
	{
		unsigned long long num3 = *num1 + *num2;
		return fib3(N - 1, num2, &num3);
	}
}

unsigned long long fib2(int N) // looking for N-th number of the Fibonachchi 
{
	unsigned long long num1 = 1, num2 = 1;
	return fib3(N, &num1, &num2);
}
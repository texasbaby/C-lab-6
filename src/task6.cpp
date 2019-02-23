#include "task6.h"

static ULL fib3(int N, ULL * num1, ULL * num2) // looking for N-th number of the Fibonachchi series using recursion
{
	if (N == 1 || N == 2)
		return *num2;
	else
	{
		ULL num3 = *num1 + *num2;
		return fib3(N - 1, num2, &num3);
	}
}

ULL fib2(int N) // looking for N-th number of the Fibonachchi 
{
	ULL num1 = 1, num2 = 1;
	return fib3(N, &num1, &num2);
}
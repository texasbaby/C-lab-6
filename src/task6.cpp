#include "task6.h"

unsigned long long fibDinam(int N, unsigned long long *calculated)
{
	if (calculated[N] == 0) //if we didn't calculate fib. for this number previously
	{
		if ((1 == N) || (2 == N))
			calculated[N] = 1;
		else
			calculated[N] = fibDinam(N - 1, calculated) + fibDinam(N - 2, calculated);//call recurssion for calculating fib.
	}
	return calculated[N];
}


unsigned long long fib2(int N)
{
	unsigned long long calculated[SIZE] = { 0 };//creating array for storing calculated meanings
	return (fibDinam(N, calculated));
}

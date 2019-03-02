#include "task6.h"

ULL fib_iter(ULL a, ULL b, int c)
{
	if (c == 1)
		return b;
	else
		return fib_iter(b, a + b, c - 1);
}

ULL fib2(int N)
{
	return fib_iter(0, 1, N);
}

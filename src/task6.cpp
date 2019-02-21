#include "task6.h"

ULL fibSupport(int N, ULL *pa, ULL *pb)
{
	if (N <= 2)
	{
		*pa = 0;
		*pb = 1;
	}
	else
	{
		ULL t = fibSupport(N - 1, pa, pb);
		*pa = *pb;
		*pb = t;
	}
	return *pb + *pa;
}

ULL fib2(int N)
{
	ULL a, b;
	return fibSupport(N, &a, &b);
}

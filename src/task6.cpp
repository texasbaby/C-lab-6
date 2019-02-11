#include "task6.h"

unsigned long long fib2(int N)
{
	unsigned long long buf[256] = { 1,1 };
	unsigned long long *p;
	p = &buf [2];
		
	p = rec(p, N) - 1;
	return *p;
	
}

unsigned long long* rec(unsigned long long *p, int N)
{
	if (N < 3)
	{
		return p;
	}
	else
	{
		p = rec(p, N-1);
		*p = *(p - 1) + *(p - 2);
		return p + 1;
	}
}
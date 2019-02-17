unsigned long long fib(unsigned long long *N1, unsigned long long *N2, int N)
{
	if (N < 2 )
		return *N2;
	else
	{
		unsigned long long N3 = *N1 + *N2;
		fib(N2, &N3, N - 1);
	}
}

unsigned long long fib2(int N)
{
	unsigned long long N1 = 0, N2 = 1;
	return fib(&N1, &N2, N);
}
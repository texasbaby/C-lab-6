unsigned long long fib(unsigned long long *n1, unsigned long long *n2, int N)
{
	if (N == 1 || N == 2)
		return *n2;
	else
	{
		unsigned long long n3 = *n1 + *n2;
		fib(n2,&n3, N-1);
	}
}

unsigned long long fib2(int N)
{
	unsigned long long n1=1, n2=1;
	return fib(&n1, &n2, N);
}
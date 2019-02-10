int fib(int *n1, int *n2, int N)
{
	if (N == 1 || N == 2)
		return *n2;
	else
	{
		int n3 = *n1 + *n2;
		return fib(n2,&n3, N-1);
	}
}

int fib2(int N)
{
	int n1=1, n2=1;
	return fib(&n1, &n2, N);
}
unsigned long long fib1(int N)
{
	if (N < 3)
		return 1;
	return fib1(N - 1)+ fib1(N - 2);
}
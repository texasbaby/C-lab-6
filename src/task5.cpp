unsigned long long fib1(int N)
{
	if (N >= 2)
		return fib1(N - 1) + fib1(N - 2);
	if (N == 1 || N == 0)
		return 1;
}
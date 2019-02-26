unsigned long long fib1(int N) // looking for N-th number of the Fibonachchi series using recursion
{
	if (N == 1 || N == 2)
		return 1;
	else
		return fib1(N - 1) + fib1(N - 2);
}
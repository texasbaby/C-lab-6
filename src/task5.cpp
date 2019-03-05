unsigned long long fib1(int n)
{
	if (n > 2)
		return fib1(n - 1) + fib1(n - 2);
	else
		return 1;
}
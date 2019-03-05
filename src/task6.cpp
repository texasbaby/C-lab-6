static unsigned long long fib_rec(int N, unsigned long long *a, unsigned long long *b)
	{
		unsigned long long c;
		if (N<=2)
			*a = 0, *b = 1;
		else
		{
			c = fib_rec(N - 1, a, b);
			*a = *b;
			*b = c;
		}

		return *a + *b;
	}

unsigned long long fib2(int N)
	{
		unsigned long long a, b;
		return fib_rec(N, &a, &b);
	}
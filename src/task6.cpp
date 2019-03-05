typedef unsigned long long ULL;

ULL fib1(int N, ULL *N1, ULL *N2)
{
	ULL N3 = *N1 + *N2;
	if (N < 2)
		return *N2;
	else
		return fib1(N - 1, N2, &N3);
}

ULL fib2(int N)
{
	ULL N1 = 0, N2 = 1;
	return fib1(N, &N1, &N2);
}
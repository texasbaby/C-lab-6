unsigned int collatz(unsigned long long num)
{
	unsigned int n = 1;
	while (num != 1)
	{
		if (num % 2 == 0)
			num = num / 2;
		else num = 3 * num + 1;
		n++;
	}
	return n;
}

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned long long num = 2;
	unsigned int n = 0;
	unsigned long long nummax = 0;

	while (num <= 1000000)
	{
		n = collatz(num);
		if (n > *maxlen)
			nummax = num, *maxlen = n;
		num++;
	}
	return nummax;
}
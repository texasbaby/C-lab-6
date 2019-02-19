unsigned int collatz(unsigned long long num)
{
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return collatz(num / 2) + 1;
	else
		return collatz(3 * num + 1) + 1;
}

unsigned int seqCollatz(unsigned int *maxlen)
{
	int i;
	*maxlen = 1;
	unsigned long long int number = 1,current;
	for (i = 2; i <= 1000000; i++)
	{
		current = collatz(i);
		if (current > *maxlen)
		{
			*maxlen = current;
			number = i;
		}
	}
	
	return number;
}
unsigned int collatz(unsigned long long num)
{
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return collatz(num / 2)+1;
	if (num % 2 == 1)
		return collatz(3 * num + 1)+1;
}

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned long long number, num, current;
	
	for (num = 2; num <= 1000000; num++)
	{
		current = collatz(num);
		if (current > *maxlen)
		{
			*maxlen = current;
			number = num;
		}
	}
	return number;
}
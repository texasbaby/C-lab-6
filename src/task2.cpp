#include <stdio.h>

unsigned int collatz(unsigned long long num)
{
	if (num > 1)
	{
		if (num % 2 != 0)
			return (1 + collatz(3 * num + 1));
		else
			return (1 + collatz(num / 2));
	}
	else
		return 1;
}

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned int value = 0, maxN;
	unsigned long long i;

	for (i = 2; i <= 1000000; i++)
	{
		value = collatz(i);
		if (*maxlen < value)
		{
			*maxlen = value;
			maxN = i;
		}
	}
	return maxN;
}
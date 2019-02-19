#include <stdio.h>

unsigned int count = 0;

unsigned int collatz(unsigned long long num)
{
	if (num != 1)
	{
		count++;
		if (num % 2 != 0)
			num = num * 3 + 1;
		else
			num = num / 2;
		collatz(num);
	}
	else
		count++;
		
	return count;
}

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned long long num = 0;
	unsigned int maxnumber = 0;
	for (num = 2; num <=1000000; num++)
	{
		collatz(num);
		if (*maxlen < count)
		{
			*maxlen = count;
			maxnumber = (unsigned int)num;
		}
		count = 0;
	}
	return maxnumber;
}


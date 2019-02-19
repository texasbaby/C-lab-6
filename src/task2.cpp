#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task2.h"

unsigned int seqCollatz(unsigned int *maxlen)
{
	*maxlen = 0;
	unsigned int currLen = 0;
	unsigned int maxNum = 0;
	unsigned long long i = 0;
	for (i = 2; i <= 1000000; i++)
	{
		currLen = collatz(i);
		//putchar('\n');
		if (*maxlen < currLen)
		{
			*maxlen = currLen;
			maxNum = i;
		}
	}
	return maxNum;
}

unsigned int collatz(unsigned long long num)
{
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return collatz(num / 2) + 1;
	else
		return collatz(3 * num + 1) + 1;
}

#include "task2.h"

unsigned int collatz(ULL num)
{
	if (num == 1)//basic task
		return 1;

	if (num % 2 != 0)
		return collatz(num * 3 + 1) + 1;

	else
		return collatz(num / 2) + 1;
}

unsigned int seqCollatz(unsigned int *maxlen)
//func, returning number and entering maximum length to maxlen
{
	unsigned int currentLen = 0;
	unsigned int num = 0, res = 0;
	for (unsigned int num = 2; num <= 1000000; num++)
	{
		currentLen = collatz(num);
		if (currentLen > *maxlen)
		{
			*maxlen = currentLen;
			res = num;
		}
	}
	return res;
}


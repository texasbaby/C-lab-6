#include "task2.h"

unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned int seqLength = 0;
	unsigned int maxSeqNum = 0;
	*maxlen = 0;
	for (int i = 2; i <= 1000000; i++)
	{
		seqLength = collatz(i);
		if (seqLength > *maxlen)
		{
			*maxlen = seqLength;
			maxSeqNum = i;
		}
	}
	return maxSeqNum;
}

unsigned int collatz(unsigned long long num)
{
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return 1 + collatz(num / 2);
	else
		return 1 + collatz(3 * num + 1);
}
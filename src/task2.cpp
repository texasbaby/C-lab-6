#define MAXNUM 1000000
#include<stdio.h>
unsigned int collatz(unsigned long long num)
{
	if (num == 1) return 1;
	return (1 + collatz((num % 2 == 1) ? 3 * num + 1 : num / 2));
}

unsigned int seqCollatz(unsigned int *maxlen)
{	
	*maxlen = 0;
	unsigned int length = 0;
	unsigned int maxNum = 0;
	for (int i = 1; i <= MAXNUM ; i++)
	{
		length = collatz(i);
		length > *maxlen ? *maxlen = length, maxNum = i:0;
	}
	return maxNum;
}
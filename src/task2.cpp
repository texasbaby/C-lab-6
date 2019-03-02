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
	ULL num = 0, res = 0;
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

//func, returning the lenght of Collatz seq. for a number


/*unsigned int collatz(unsigned long long num) //the same without recursion
{
	unsigned int count = 1;
	do
	{
		if (1 == num % 2)
			num = 3 * num + 1;
		else
			num = num / 2;
		count++;
	} while (1 != num);

	return count;
}*/
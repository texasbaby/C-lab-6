#include "task2.h"
#include <stdio.h>

int main()
{
	unsigned int maxlen = 0;
	unsigned int number = seqCollatz(&maxlen);
	printf("The number with maximum length of Collatz sequence is %d\n", number);
	printf("The length is %d\n", maxlen);
	return 0;
}
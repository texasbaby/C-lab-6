#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int maxlen = 0;
	unsigned int number = seqCollatz(&maxlen);
	printf("The number with maximum length of Collatz sequence is %u\n", number);
	printf("The length is %u\n", maxlen);
	return 0;
}
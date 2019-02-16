#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int number = 0;
	unsigned int maxlen = 0;
	number = seqCollatz(&maxlen);
	printf("number = %u  maxlen = %u", number, maxlen);
	return 0;
}
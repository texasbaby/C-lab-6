#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int maxlen = 0, num = seqCollatz(&maxlen);
	printf("Number = %u Max length = %u\n", num, maxlen);
	return 0;
}
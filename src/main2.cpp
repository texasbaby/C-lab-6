#include <stdio.h>
#include "task2.h"

int main()
{
	unsigned int maxSeqLength = 0, maxSeqNum = seqCollatz(&maxSeqLength);
	printf("Number, which forming the longest sequence of Collatz: %d\nLength of that sequence: %d\n", maxSeqNum, maxSeqLength);
	return 0;
}
#include <stdio.h>
#include "task2.h"


int main()
{
	UI maxLen = 0;
	UI maxNumber = seqCollatz(&maxLen);
	
	printf("Collatz maximum sequence %u is formed from number %u: ", maxLen, maxNumber);
	
	return 0;
}
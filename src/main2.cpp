#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include "task2.h"

int main()
{
	unsigned int  maxLength=0;
	printf("collatz(%u)=", seqCollatz(&maxLength));
	printf("%u\n",maxLength);
	return 0;
}

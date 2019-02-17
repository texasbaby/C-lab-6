#include <stdio.h>
#include "task2.h"


int main()
{
	unsigned int maxlen=0;
	printf("%u\n", seqCollatz(&maxlen));
	printf("%u\n", maxlen);
	return 0;
}

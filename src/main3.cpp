#include <stdio.h>
#include <stdlib.h>
#include "task3.h"

int  main()
{
	unsigned int value;
	char buf[20];
	scanf("%u", &value);
	printf("%s\n", int2str(buf, value));
	return 0;
}
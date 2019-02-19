#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main()
{
	int value;
	char buf[256];
	scanf("%d", &value);
	printf("%s\n", int2str(buf,value));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"

int main(void)
{
	char buf[256] = { 0 };
	unsigned int value;

	scanf("%d", &value);
	int2str(buf, value);
	puts(buf);

	getchar();
	getchar();
	return 0;
}
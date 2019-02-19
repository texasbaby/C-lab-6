#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
#include <stdio.h>
#define MLS 11 //max length  unsigned int +'\0'

int main()
{
	unsigned int value;
	while(1)
	{
		char buf[MLS];
		printf("   Enter number: ");
		scanf("%d", &value);
		printf("	String: \"%s\"\n", int2str(buf, value));
	}
	return 0;
}
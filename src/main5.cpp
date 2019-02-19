#define _CRT_SECURE_NO_WARNINGS
#include <ctime>
#include <stdio.h>
#include "task5.h"

int main()
{
	unsigned int startTime, endTime;
	unsigned long long result;
	FILE *fp;
	char filename[] = "fib.txt";
	fp = fopen(filename, "wt");
	for (int i = 1; i <= 42; i++)
	{
		startTime = clock();
		result=fib1(i);
		endTime = clock();
		printf("%d %I64d %u\n", i, result, endTime - startTime);
		fprintf(fp, "%d %I64d %u\n", i, result, endTime - startTime);
	}
	return 0;
}
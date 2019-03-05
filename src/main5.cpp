#include <stdio.h>
#include <time.h>
#include "task5.h"
#define N 40

int main()
{
	int i;
	unsigned long long fib;
	clock_t start, finish;

	FILE *fp;
	fp = fopen("out.txt", "w");
	if (fp == NULL)
	{
		printf("File not found!\n");
		return 1;
	}

	for (i = 1; i <= N; i++)
	{
		start = clock();
		fib = fib1(i);
		finish = clock();
		printf("%2d %10lld %10f\n", i, fib, (double)(finish - start) / CLOCKS_PER_SEC);
		fprintf(fp, "%2d %10lld %10f\n", i, fib, (double)(finish - start) / CLOCKS_PER_SEC);
	}

	fclose(fp);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"


int main()
{
	clock_t t1, t2;
	unsigned long result = 0;

	FILE *fp;
	fp = fopen("fib.txt", "w");

	if (fp == NULL)
	{
		puts("File not found!");
		return 1;
	}

	for (int n = 1;n < 40;n++)
	{
		t1 = clock();
		result = fib1(n);
		t2 = clock();
		printf("%d\t%u\t%.3lf\n", n, result, (double)(t2 - t1) / CLOCKS_PER_SEC);
		fprintf(fp, "%d\t%u\t%.3lf\n", n, result, (double)(t2 - t1) / CLOCKS_PER_SEC);
	}

	return 0;
}
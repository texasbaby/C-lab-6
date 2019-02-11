#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "task5.h"

int N = 42;

int main(void)
{
	int n = 1;

	FILE *fp;
	fp = fopen("111.txt", "w");
	if (fp == NULL)
		puts("not found");

	while (n <= N)
	{
		clock_t t1 = clock();
		int fib = fib1(n);
		clock_t t2 = clock();
		printf("%u %d %llu\n", t2 - t1, n, fib);
		fprintf(fp, "%u %d %llu\n", t2 - t1, n, fib);
		n++;
	}

	fclose(fp);
	
	getchar();
	getchar();
	return 0;
}

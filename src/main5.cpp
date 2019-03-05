#include <stdio.h>
#include <time.h>
#include "task5.h"
#define MAX 40

int main()
{
	clock_t start, finish;
	FILE *fp;
	fp = fopen("1.txt", "w");
	if (fp == NULL)
	{
		puts("File '1.txt' not found!");
		return 1;
	}

	for (int i = 1; i <= MAX; i++)
	{
		start = clock();
		fib1(i);
		finish = clock()-start;
		printf("%d\t%f\n", i, (float)finish / CLOCKS_PER_SEC);
		fprintf(fp, "%d\t%f\n", i, (float)finish / CLOCKS_PER_SEC);
	}
	fclose(fp);
	return 0;
}
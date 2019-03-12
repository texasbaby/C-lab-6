#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "task5.h"

#define N 40

int main()
{
	clock_t start = 0, end = 0;
	FILE *fw = fopen("task5.txt", "w");
	long long result = 0;
	if (!fw)
	{
		printf("error open task5.txt\n");
		return 1;
	}
	for (int i = 1; i <= N; i++)
	{
		start = clock();
		result = fib1(i);
		end = clock();
		end -= start;
		fprintf(fw, "#%2d: Time: %f, Result: %lld\n", i, (float)end / CLOCKS_PER_SEC, result);
		printf("#%2d: Time: %f, Result: %lld\n", i, (float)end / CLOCKS_PER_SEC, result);
	}
	fclose(fw);
	return 0;
}
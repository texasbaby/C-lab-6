#include "task5.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
 
int main() 
{
	FILE *fw = NULL;
	fw = fopen("1.txt", "w");
	if (!fw)//cheking of the file for writing
	{
		printf("Cannot write file!\n");
		return -1;
	}
	int N = 0;
	while ((N < 1) || (N > 45))
	{
		printf("Enter number from 1 to 45\n");
		scanf("%d", &N);
	}
	clock_t start, finish;
	printf("Number\tFibbonachi\tTime\n");
	for (int i = 1; i <= N; i++)
	{
		start = clock();
		unsigned long long res = fib1(i);
		finish = clock();
		printf("%d\t%lld\t\t%.3f\n", i, res, ((double)(finish - start) / CLOCKS_PER_SEC));
		fprintf(fw, "%d\t%lld\t\t%.3f\n", i, res, ((double)(finish - start) / CLOCKS_PER_SEC));
	}
	
	fclose(fw);
	return 0;
}
#pragma warning(disable:4996)
#include <time.h>
#include <stdio.h>
#include "task5.h"
#define MAXNUM 41

int main()
{
	FILE *mf;
	clock_t begin = 0;
	clock_t end = 0;
	unsigned long long fibNumber = 0;

	mf = fopen("task5.txt", "w");
	if (mf == NULL)
	{
		printf("file open error\n");
		return -1;
	}

	for (int i = 1; i < MAXNUM; i++)
	{
		begin = clock();
		fibNumber = fib1(i);
		end = clock();
		end -= begin;
		fprintf(mf,"%d\t%llu\t%f\n",i, fibNumber,(float)end/CLOCKS_PER_SEC );
		printf("%d, %llu, %f \n", i, fibNumber, (float)end/CLOCKS_PER_SEC);
	}
	fclose(mf);
	return 0;
}
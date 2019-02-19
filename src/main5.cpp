#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task5.h"

int main()
{
	int n = 0;
	clock_t t1, t2;
	FILE *fp;
	if ((fp = fopen("fib.txt", "w")) == NULL)
	{
		puts("File not found!");
		exit(EXIT_FAILURE);
	}

	for (n = 1; n <= 40; n++)
	{
		t1 = clock();
		fib1(n);
		t2 = clock();
		printf("%d\t%f\n", n, (double)(t2 - t1)/CLOCKS_PER_SEC);
		fprintf(fp, "%d\t%d\n", n, (int)(t2 - t1));
	}
	fclose(fp);
	return 0;
}
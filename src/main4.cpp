#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include "task4.h"

int main()
{
	char *pbuf;
	int n = 0, m = 0;
	srand((unsigned int)time(0));
	printf("Enter value m: ");
	scanf("%d", &m);
	n = (int)pow(2, m);
	pbuf = (char*)malloc(n * sizeof(char));
	if (pbuf == NULL)
	{
		puts("Memory error!");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < n; i++)
		pbuf[i] = rand() % 10;

	clock_t t1, t2;
	t1 = clock();
	printf("sumC = %lld\n", sumC(pbuf, n));
	t2 = clock();
	printf("Summation of array elements in the traditional way took: %f\n", (double)(t2 - t1)/CLOCKS_PER_SEC);
	t1 = clock();
	printf("sumR = %lld\n", sumR(pbuf, n));
	t2 = clock();
	printf("Summation of array elements in the recursive way took: %f\n", (double)(t2 - t1)/CLOCKS_PER_SEC);
	free(pbuf);
	pbuf = 0;
	return 0;
}
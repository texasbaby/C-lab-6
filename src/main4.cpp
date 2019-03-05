#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task4.h"

int main(void)
{
	int M = 0, N = 1, i = 0;
	scanf("%d", &M);
	while (i < M)
		N = N * 2, i++;

	char *arr;
	arr = (char*) malloc(N * sizeof(char));
	Matrix(arr, N);//запонение массива рандомными числами от 1 до 10

	clock_t t1 = clock();
	long long Csum = sumC(arr, N);
	clock_t t2 = clock();
	printf("%u %lld\n", t2 - t1, Csum);
	
	t1 = clock();
	long long Rsum = sumR(arr, N);
	t2 = clock();
	printf("%u %lld\n", t2 - t1, Rsum);

	free(arr);
	
	getchar();
	getchar();
	return 0;
}


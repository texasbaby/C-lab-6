#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "task4.h"

int main()
{
	int N, M, i;
	char *arr;
	clock_t start, finish;
	long long sumCycle, sumRecursion;

	srand(time(NULL));
	
	printf("Enter a degree of number 2: ");
	scanf("%d", &M);

	N = pow(2, M);

	arr = (char*)malloc(N * sizeof(int));
	if (arr == 0)
		printf("Error!\n");

	for (i = 0; i < N; i++)
		arr[i] = rand() % 10;

	start = clock();
	sumCycle = sumC(arr, N);
	finish = clock();
	printf("Cycle: result = %lld, time = %u\n", sumCycle, finish - start);

	start = clock();
	sumRecursion = sumR(arr, N);
	finish = clock();
	printf("Recursion: result = %lld, time = %u\n", sumRecursion, finish - start);

	free(arr);

	return 0;

}
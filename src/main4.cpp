#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "task4.h"

	int main()
	{
		int M, N, len;
		printf("enter M:");
		scanf("%d", &M);
		N = pow(2, M);
		char * arr = (char*)malloc(N * sizeof(int));
		if (arr == 0)
			puts("Memory eror!");
		srand(time(0));
		for (int i = 0; i < N; i++)
		{
			arr[i] = rand() % 10;
		}
		len = N;
		clock_t start = clock();
		long long sumCycle = sumC(arr, len);
		clock_t end = clock();
		printf("sumC=%lld, time=%u \n", sumCycle, end- start);
		
		start = clock();
		long long sumRecur = sumR(arr, len);
		end = clock();
		printf("sumR=%lld, time=%u", sumRecur, end- start);
		free(arr);
		return 0;


	}

	
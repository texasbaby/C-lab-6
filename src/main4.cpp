#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "task4.h"
#include <locale>

int main(int argc, char * argv[])
{
	if (argc < 2)
	{
		setlocale(LC_ALL, "Rus");
		printf("Неверный формат\n");
		return 1;
	}
	int N = pow(2.0, atoi(argv[1]));
	char *arr = (char*)malloc(N * sizeof(char));
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		arr[i] = rand();

	clock_t start = clock();
	long long cycleSum = sumC(arr, N);
	clock_t tC = clock();
	tC -= start;

	start = clock();
	long long recursionSum = sumR(arr, N);
	clock_t tR = clock();
	tR -= start;

	printf("Size of array = %d\nCircleSum = %lld\nRecursiveSum = %lld\n", N, cycleSum, recursionSum);
	printf("Cycle calculation time = %f sec\nRecursion calculation time = %f sec\n", (float)tC / CLOCKS_PER_SEC, (float)tR / CLOCKS_PER_SEC);
	free(arr);

	return 0;
}
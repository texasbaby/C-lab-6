#include "task4.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
	int M = (atoi) (argv[1]);//for checking

	char * arr = NULL;	
	srand(time(0));
	int N = (int) (pow(2, M));
	arr = (char*)malloc(N * sizeof(char));

	printf("Array\n");
	for (int i = 0; i < N; i++)
	{
		arr[i] = (char)((rand() % 51) - 25);
		printf("%d\t", arr[i]);
	}
	clock_t start, finish;
	start = clock();
	printf("\nSum of elements in function without recursion = %lld\n", sumC(arr, N));
	finish = clock();
	printf("Time without recurssion %.5lf\n", ((double)(finish - start) / CLOCKS_PER_SEC));
	start = clock();
	printf("\nSum of elements in function with recursion = %lld\n", sumR(arr, N));
	finish = clock();
	printf("Time with recurssion %.5lf\n", ((double)(finish - start) / CLOCKS_PER_SEC));
	return 0;
}
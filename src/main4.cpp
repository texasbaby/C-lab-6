#pragma warning(disable:4996)
#include "task4.h"
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include <time.h>
#define MAXNUM 50

int main()
{
	int m = 0;
	printf("Enter M to calc size of arrey N = 2^M , M=");
	scanf("%d", &m);
	int N = pow(2, m);

	char *arr;
	arr = (char*)malloc(N * sizeof(char));
			
	srand(time(0));
	for (int i = 0; i < N; i++)
		arr[i] = (char)(rand()% MAXNUM);
	
	clock_t tC = clock();
	long long sum1= sumC(arr, N);
	clock_t end = clock();
	tC -= end;

	clock_t tR = clock();
	long long sum2 = sumR(arr, N);
	end = clock();
	tR -= end;
	
	printf("N= %d sumC= %lld   sumR= %lld\n",N, sum1, sum2);
	printf("tC =%f s tR =%f s\n",(float)tC/CLOCKS_PER_SEC, (float)
		tR/CLOCKS_PER_SEC);
	free(arr);
	return 0;
}

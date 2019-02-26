#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
#include <time.h>
#include "task4.h"



int main()
{
	int N = 0, M = 0;
	clock_t t1, t2, t3;

	srand(time(0));

	printf("Enter size: ");
	scanf("%d", &M);
	
	N = pow(2, M);
	
	char *pbuf = (char*)malloc(N * sizeof(char));
	if (pbuf == 0)
	{
		puts("Memory error!");
		return 1;
	}
	
	gen(pbuf, N);
	//print(pbuf, N);

	t1 = clock();
	printf("sumC = %lld\n", sumC(pbuf, N));
	t2 = clock();
	printf("sumR = %lld\n", sumR(pbuf, N));
	t3 = clock();

	printf("Summation time of traditional way with cycle %.3lf\nSummation time of way with recursion %.3lf\n",
		(double)(t2 - t1) / CLOCKS_PER_SEC,
		(double)(t3 - t2) / CLOCKS_PER_SEC);

	free(pbuf);
	putchar('\n');

	return 0;
}
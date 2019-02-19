#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

int main()
{
	int n = 0;
	clock_t t1, t2;

	for (n = 1; n <= 40; n++)
	{
		t1 = clock();
		fib2(n);
		t2 = clock();
		printf("%d\t%f\n", n, (double)(t2 - t1) / CLOCKS_PER_SEC);
	}

	return 0;
}
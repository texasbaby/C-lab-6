#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "task6.h"

#define SIZE 1000

unsigned long long fibIter(int X, unsigned long long *arr)
{
	if (arr[X] == 0)
	{
		if (X == 1 || X == 2)
			arr[X] = 1;
		else
			arr[X] = fibIter(X - 1, arr) + fibIter(X - 2, arr);
	}

	return arr[X];
}

unsigned long long fib2(int X)
{
	unsigned long long arr[SIZE] = { 0 };
	return fibIter(X, arr);
}
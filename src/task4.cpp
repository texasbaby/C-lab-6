#include "task4.h"

long long sumC(char *arr, int len)
{
	long long sum = 0;
	for (int i = 0; i < len; i++)
		sum += *(arr + i);
	return sum;
}

long long sumR(char *arr, int len)
{
	if (len == 1)
		return *arr;
	return arr[len - 1] + sumR(arr, len - 1);
}
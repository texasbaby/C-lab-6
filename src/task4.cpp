#include <stdio.h>
#include <stdlib.h>

long long sumC(char *arr, int len) // sum with cycle 
{
	int sumC = 0;
	for (int i = 0;i < len; i++)
		sumC += arr[i];
	return sumC;
}

long long sumR(char *arr, int len) // sum with recursion
{
	if (len == 1)
		return *arr;
	else
		return sumR(arr, len / 2) + sumR(arr + len / 2, len - len / 2);
}

void gen(char *arr, int size)
{
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 100;
}

void print(char *arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%02d ", arr[i]);
	putchar('\n');
}
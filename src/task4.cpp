#include <time.h>
#include <stdlib.h>

void Matrix(char *arr, int N)
{
	int i = 0;
	int random;
	srand(time(NULL));
	while (i < N)
		*arr = rand() % 10+1, arr++, i++;
}

long long sumC(char *arr, int len)
{
	int i = 0;
	long long sum = 0;
	while (i < len)
		sum = sum + *arr, arr++, i++;
	return sum;
}

long long sumR(char *arr, int len)
{
	int i = 0;
	long long sum = 0;
	if (0 < len)
		sum = *arr + sumR( arr + 1, len - 1), i++;
	return sum;
}
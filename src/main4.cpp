#include <stdlib.h>
#include <algorithm>
#include <ctime>
#include "task4.h"

int main(int argc, char **argv)
{
	int m = atoi(argv[0]);
	int size = pow(2, m);
	//size = 400000;
	char *arr=(char*)malloc(size*sizeof(char));
	srand(time(0));
	for (int i = 0; i < size; i++)
		arr[i] = rand() % 10;
	unsigned int start_time = clock();
	long long sumClassic = sumC(arr, size);
	unsigned int end_time = clock();
	printf("Sum=%I64d, time for classic calculation - %u\n", sumClassic, end_time-start_time);
	start_time = clock();
	long long sumRecur = sumR(arr, size);
	end_time = clock();
	printf("Sum=%I64d, time for classic calculation - %u\n", sumRecur, end_time - start_time);
	
	return 0;
}
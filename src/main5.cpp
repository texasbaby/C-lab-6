#include <time.h>
#include <stdio.h>
#include "task5.h"

int main()
{
	unsigned int startTime, endTime;
	unsigned long long result;
	//FILE *fp;
	//char filename[] = "Lab6.4.txt";
	//fp = fopen(filename, "wt");
	printf(" N     Result    Time \n");
	for (int N = 1; N <= 40; N++)
	{
		startTime = clock();
		result = fib1(N);
		endTime = clock();
		printf("%2d= %8llu       %u\n", N, result, endTime - startTime);
		//fprintf(fp, "%d %llu %u\n", N, result, endTime - startTime);
	}
	return 0;
}
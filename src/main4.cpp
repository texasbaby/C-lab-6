#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "task4.h"


int main()
{
	srand(time(NULL));
	int M = 0;
	printf("Enter M: ");
	scanf("%d", &M);
	int N = (int)pow(2, M);
	char *arr = (char*)malloc(M * sizeof(char)); // �������� ������ ��� ������ ������� N

	if (arr == NULL)
	{
		puts("Memory error!");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < N; i++)
		arr[i] = rand()%128; // ��������� ������ ���������� ���������

	clock_t start, runtime1, runtime2;
	start = clock(); 
	int long long sum_c = sumC(arr, N); // ��������� ������ ������������ ��������
	runtime1 = clock();
	runtime1 -= start; // ����� ������ ������� sumC

	start = clock();
	int long long sum_r = sumR(arr, N); // ��������� ������ � ������� ��������
	runtime2 = clock();
	runtime2 -= start; // ����� ������ ������� sumR
	
	printf("Runtime by tradicional way = %f; sum = %lld\n", (float)runtime1 / CLOCKS_PER_SEC, sum_c);
	printf("Runtime by recursion way = %f sum = %lld\n", (float)runtime2 / CLOCKS_PER_SEC, sum_r);
	free(arr);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>
int main()
{
	int size = 0;
	printf("Enter size, <6: ");
	scanf("%d", &size);
	char arr[M][M];
	int N = (int)pow(3, size);
	while (N >= M)
	{
		printf("\n size too much, enter again! size: ");
		scanf("%d", &size);
		N = (int)pow(3, size);
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			*(*(arr + j) + i) = ' ';
	}
	
	drawFractal(arr, center(size), center(size), size);

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
			printf(" %c",*(*(arr + j) + i));
		putchar('\n');
	}
	return 0;
}
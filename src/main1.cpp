#include "task1.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int size = 0;
	char arr[M][M] = { 0 };
	while ((size <= 0) || (size > 4))
	{
		printf("Enter size from 1 to 3\n");
		scanf("%d", &size);
	}
	for (int i = 0; i < M; i++) //initially filling array with ' '
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = ' ';
		}
	}

	drawFractal(arr, M/2, M/2, size);//calling the function for drawing

	for (int i = 0; i < M; i++) //printing array
	{
		for (int j = 0; j < M; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
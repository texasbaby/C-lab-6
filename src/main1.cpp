#include <stdio.h>
#include "task1.h"
#define M 128
#define X (M/2)

int main()
{
	char arr[M][M] = {NULL};
	int size = 0;
	for (int i = 0; i < M; i++)
		for(int j = 0; j<M;j++)
			arr[i][j] = ' '; // заполняем матрицу пробелами
	printf("Enter size : ");
	scanf("%d", &size);
	drawFractal(arr, X, X, size);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%c", arr[i][j]);
		putchar('\n');
	}

	return 0;
}
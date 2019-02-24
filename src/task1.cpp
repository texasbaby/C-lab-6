#include "task1.h"
#include <stdio.h>
#include <math.h>

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
		arr[x][y] = '*';
	else
	{
		int count = pow(3.0, size - 1);
		if ((count + x) >= M || (count + y) >= M)
			return;
		drawFractal(arr, x + count, y, size - 1);
		drawFractal(arr, x - count, y, size - 1);
		drawFractal(arr, x, y + count, size - 1);
		drawFractal(arr, x, y - count, size - 1);
		drawFractal(arr, x, y, size - 1);
	}
}
void printFractal(char(*arr)[M])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			printf("%c", arr[i][j]);
		printf("\n");
	}
}
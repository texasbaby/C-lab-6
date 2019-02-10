#include <stdio.h>
#include <string.h>
#include "task1.h"

int myPow(int x, int y)
{
	if (y < 0)
		return 0;
	else if (y == 0)
		return 1;
	else
	{
		int curr = 1;
		for (int i = 1; i <= y; i++)
			curr *= x;
		return curr;
	}
}

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
	{
		arr[y][x] = '*';
	}
	else
	{
		int shift = myPow(3, size - 1);
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x, y + shift, size - 1);
		drawFractal(arr, x, y - shift, size - 1);
		drawFractal(arr, x + shift, y, size - 1);
		drawFractal(arr, x - shift, y, size - 1);
	}
}

void printMatrix(char(*arr)[M])
{
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			putchar(arr[i][j]);
		if (i != (M - 1))
			putchar('\n');
	}
}
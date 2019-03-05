#include <stdio.h>
#include <math.h>
#define M 30
void drawFractal(char(*arr)[M], int x,int y, int size)
{
	int i = 0, j = 0, stage = 0;

	if (size <= 0)
	{
		arr[x][y] = '*';
		return;
	}
	stage = pow(3, size - 1);
	drawFractal(arr, x, y, size-1);
	drawFractal(arr, x+stage, y, size-1);
	drawFractal(arr, x-stage, y, size-1);
	drawFractal(arr, x, y+stage, size-1);
	drawFractal(arr, x, y-stage, size-1);

	for (i = 0; i < M; i++)
	{
		for (j = 0; j < M; j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
}
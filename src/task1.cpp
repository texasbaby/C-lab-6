#include "task1.h"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (0 == size)
	{
		arr[y][x] = '*';//ставим звездочку посередине
		return;
	}

	drawFractal(arr, x, y, size - 1);//recurssion

	int N = ((((int)(pow(3, size))) - 1) / 2);
	int prevN = ((((int)(pow(3, size - 1)) - 1)) / 2);

	for (int i = y - N, k = y - prevN; i < y - prevN, k <= y + prevN; i++, k++)
	{
		for (int j = x - prevN, m = x - prevN; j <= x + prevN, m <= x + prevN; j++, m++)
		{
			arr[i][j] = arr[k][m];
		}
	}

	for (int i = y + N, k = y - prevN; i > y + prevN, k <= y + prevN; i--, k++)
	{
		for (int j = x - prevN, m = x - prevN; j <= x + prevN, m <= x + prevN; j++, m++)
		{
			arr[i][j] = arr[k][m];
		}
	}

	for (int i = y - prevN, k = y - prevN; i <= y + prevN, k <= y + prevN; i++, k++)
	{
		for (int j = x - N, m = x - prevN; j < x - prevN, m <= x + prevN; j++, m++)
		{
			arr[i][j] = arr[k][m];
		}
	}

	for (int i = y - prevN, k = y - prevN; i <= y + prevN, k <= y + prevN; i++, k++)
	{
		for (int j = x + N, m = x - prevN; j > x + prevN, m <= x + prevN; j--, m++)
		{
			arr[i][j] = arr[k][m];
		}
	}
	return;
}
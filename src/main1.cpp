#include <stdio.h>
#include "task1.h"
#define M 30
#define DEPTH 3

int main()
{
	char arr[M][M] = { 0 };
	int x = 0, y = 0;

	for (x = 0; x < M; x++)
		for (y = 0; y < M; y++)
			arr[x][y] = ' ';

	drawFractal(arr, M / 2, M / 2, DEPTH);
	return 0;
}
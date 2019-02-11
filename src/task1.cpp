#include "task1.h"

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	arr[x][y] = '*';
	while (size > 0)
	{
		drawFractal(arr, (x - size), y, size / 3);
		drawFractal(arr, (x + size), y, size / 3);
		drawFractal(arr, (x), (y-size), size / 3);
		drawFractal(arr, (x), (y+size), size / 3);
		size = size / 3;
	}
}
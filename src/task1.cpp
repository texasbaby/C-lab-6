#include <math.h>
#define M 128

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
		arr[x][y] = '*';
	else
	{
		int delta = (int) pow(3, size-1);
		drawFractal(arr, x, y, size-1);
		drawFractal(arr, x+ delta, y, size-1);
		drawFractal(arr, x - delta, y, size-1);
		drawFractal(arr, x, y - delta, size-1);
		drawFractal(arr, x, y + delta, size-1);
	}
}
#include <math.h>
#include "task1.h"

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	int delta;
	delta = (int)pow(3, size - 1);
	if (size == 0)
		arr[x][y] = '*';
	else
		{
			drawFractal(arr, x , y, size - 1);
			drawFractal(arr, x - delta, y, size - 1);
			drawFractal(arr, x + delta, y, size - 1);
			drawFractal(arr, x, y - delta, size - 1);
			drawFractal(arr, x, y + delta, size - 1);
		}

		
}
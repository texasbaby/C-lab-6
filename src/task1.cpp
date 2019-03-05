#include <math.h>
#include "task1.h"

void *drawFractal(char (* arr)[M], int x, int y, int size)
{

	if (size == 0)
		arr[x][y] = '*';
	else
	{
		drawFractal(arr, x, y, size - 1);

		drawFractal(arr, x + pow(3, size), y, size-1);
		
		drawFractal(arr, x - pow(3, size), y, size-1);
		
		drawFractal(arr, x, y + pow(3, size), size-1);
		
		drawFractal(arr, x, y - pow(3, size), size-1);

	}
	return arr;
}
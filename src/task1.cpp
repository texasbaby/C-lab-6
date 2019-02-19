#include "task1.h"

void drawFractal(char(*arr)[M], int x, int y, int size)
{
	if (size == 0)
		*(*(arr + y) + x) = '*';
	else
	{
		int delta =(int) pow(3, size-- - 1);
		drawFractal(arr, x, y, size);
		drawFractal(arr, x, y+delta, size);
		drawFractal(arr, x, y-delta, size);
		drawFractal(arr, x+delta, y, size);
		drawFractal(arr, x-delta, y, size);
	}

}

int center(int size)
{
	if (size == 0)
		return 0;
	else
		return 3*center(--size)+1;
}
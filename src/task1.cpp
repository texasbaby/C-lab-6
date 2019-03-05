#include <math.h>
#define M 36

void drawFractal(char (*arr)[M], int x,int y, int size)
{
    int i = pow(3, size - 1);
    if(size == 0)
        arr[x][y] = '*';
    else
    {
        drawFractal(arr, x, y, size - 1);
        drawFractal(arr, x - i, y, size - 1);
        drawFractal(arr, x + i, y, size - 1);
        drawFractal(arr, x, y - i, size - 1);
        drawFractal(arr, x, y + i, size - 1);
    }
}

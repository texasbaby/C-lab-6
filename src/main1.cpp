#include <stdio.h>
#include "task1.h"
#define M 36
#define N 36

int main()
{
    char arr[N][M];
    int size = 3, x = N/2, y = M/2;      // координаты центра фрактала и размер

    for(int i = 0; i < M; i++)           // добавляем пробелы, иначе фрактал будет выровнет по левому краю
        for(int j = 0; j < N; j++)
            arr[i][j] = ' ';

    drawFractal(arr, x, y, size);

    for(int i = 0; i < M; i++)          // вертикаль
    {
        for(int j = 0; j < N; j++)      // горизонталь
            putchar(arr[i][j]);
            putchar('\n');
    }
    return 0;
}

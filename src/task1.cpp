#include <stdio.h>
#include <math.h>
#define M 80

void drawFractal(char(*arr)[M], int x, int y, int size) //draw a picture in matrix arr with center (x, y) and scale size
{
	int coord = pow(3, size - 1);

	if (size == 0)
		arr[x][y] = '*';
	else
	{
		drawFractal(arr, x, y, size - 1);
		drawFractal(arr, x, y + coord, size - 1);
		drawFractal(arr, x, y - coord, size - 1);
		drawFractal(arr, x + coord, y, size - 1);
		drawFractal(arr, x - coord, y, size - 1);
	}

}

void printLines(char(*arr)[M])
{
	for (int i = 0;i < M; i++) //column
		for (int j = 0; j < M;j++)//string
			printf("%c", arr[i][j]);
		//printf("\n");
}
	
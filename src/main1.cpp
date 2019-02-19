#include <stdio.h>
#include "task1.h"

int main()
{
	char arr[M][M];
	arr[0][0] = '#';
	drawFractal(arr, 0, 0, 0);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
			putchar(arr[i][j]);
		printf("\n");
	}

}
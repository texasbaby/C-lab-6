#include <stdio.h>
#include <stdlib.h>
#include "task1.h"
#include <math.h>


int main()
{
	char arr[M][M] = {' '};
	int x=M/2, y=M/2, size = 3;
	drawFractal(arr, x, y, size);
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}



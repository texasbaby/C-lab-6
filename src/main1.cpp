#include <stdio.h>
#include "task1.h"

int main()
{
	char arr[N][M] = { 0 };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			arr[i][j] = ' ';
	}
	drawFractal(arr, N/2, M/2, 3);
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
			putchar(arr[i][j]);
		putchar('\n');
	}
	return 0;
}
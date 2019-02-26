#include "task7.h"
#include <stdio.h>

extern char buf[N][M];

void printMaze(int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			putchar(buf[i][j]);
		if (i != (rows - 1))
			putchar('\n');
	}
	puts("\n");
}


void place(int rows, int cols, int x, int y) // moving to array cell with coordinates x and y
{
	
	if (x == 0 || x == rows - 1 || y == 0 || y == cols - 1 )
	{
		buf[x][y] = 'x';
		return;
	}

	if (buf[x - 1][y] == ' ')
	{
		buf[x][y] = '-';
		buf[x - 1][y] = 'x';
		place(rows, cols, x - 1, y);
		buf[x][y] = ' ';
	}

	if (buf[x][y - 1] == ' ')
	{
		buf[x][y] = '-';
		buf[x][y - 1] = 'x';
		place(rows, cols, x, y - 1);
		buf[x][y] = ' ';
	}

	if (buf[x + 1][y] == ' ')
	{
		buf[x][y] = '-';
		buf[x + 1][y] = 'x';
		place(rows, cols, x + 1, y);
		buf[x][y] = ' ';
	}

	if (buf[x][y + 1] == ' ')
	{
		buf[x][y] = '-';
		buf[x][y + 1] = 'x';
		place(rows, cols, x, y + 1);
		buf[x][y] = ' ';
	}
	else
		buf[x][y] = ' ';
}
#include <string.h>
#include "task7.h"

void place(char (*buf)[M],int x, int y)
{
	int str = 0;
	str = strlen(buf[0]) - 1;
	if (x == 0 || x == N - 1 || y == 0 || y == str - 1)
	{
		buf[x][y] = 'x';
		return;
	}

	if (buf[x - 1][y] == ' ')
	{
		buf[x][y] = '.';
		buf[x - 1][y] = 'x';
		place(buf, x - 1, y);
		buf[x][y] = ' ';

	}

	if (buf[x][y-1] == ' ')
	{
		buf[x][y] = '.';
		buf[x][y-1] = 'x';
		place(buf, x, y-1);
		buf[x][y] = ' ';
	}

	if (buf[x][y+1] == ' ')
	{
		buf[x][y] = '.';
		buf[x][y+1] = 'x';
		place(buf, x, y+1); 
		buf[x][y] = ' ';
	}

	if (buf[x+1][y] == ' ')
	{
		buf[x][y] = '.';
		buf[x+1][y] = 'x';
		place(buf, x+1, y);
		buf[x][y] = ' ';
	}

	else
		buf[x][y] = ' ';
}
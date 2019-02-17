#include "task7.h"
void place(char lab[M][N], int x, int y)
{
	if (x <= 0 || x >= 5 || y <= 0 || y >= 7)
	{
		return;
	}
	if (lab[(x - 1)][y] == ' ')
	{
		lab[x][y] = '-';
		place(lab, x - 1, y);
	}
	if (lab[x][y - 1] == ' ')
	{
		lab[x][y] = '-';
		place(lab, x, y - 1);
	}
	if (lab[x + 1][y] == ' ')
	{
		lab[x][y] = '-';
		place(lab, x + 1, y);
	}
	if (lab[x][y + 1] == ' ')
	{
		lab[x][y] = '-';
		place(lab, x, y + 1);
	}
}
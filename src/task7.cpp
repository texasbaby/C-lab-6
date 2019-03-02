#include <stdio.h>
#include "task7.h"

void printLab(char lab[][M])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%c", lab[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

int place(char lab[N][M], int x, int y)
{
	if (x <= 0 || x >= 28 || y <= 0 || y >= 9)
		return 1;

	if (lab[x - 1][y] == ' ')
		place(lab, x - 1, y);

	if (lab[x + 1][y] == ' ')
		place(lab, x + 1, y);

	if (lab[x][y - 1] == ' ')
		place(lab, x, y - 1);

	if (lab[x][y + 1] == ' ')
		place(lab, x, y + 1);

}
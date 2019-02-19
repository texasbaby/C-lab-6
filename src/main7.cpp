#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <time.h>

char mazy[100][100];
bool visited[100][100];
char way[100];
char shortestWay[100];
int shortestTurn;
int turn;
bool success;
int n, m;
clock_t start, stop;

void place(int x, int y)
{
	if (turn >= shortestTurn)
		return;
	if (visited[x][y])
		return;
	if (mazy[x][y] == '#')
		return;
	if (x == 0 || y == 0 || x == n-1 || y == m-2)
	{
		success = true;
		if (turn < shortestTurn)
		{
			shortestTurn = turn;
			stop = clock();
			//printf("%d %f\n", turn, (float) (stop - start)/CLOCKS_PER_SEC);
			strcpy(shortestWay, way);
		}
		return;
	}
	visited[x][y] = true;

	way[turn] = 'd';
	turn++;
	place(x + 1, y);
	turn--;
	
	way[turn] = 'u';
	turn++;
	place(x - 1, y);
	turn--;
	
	way[turn] = 'r';
	turn++;
	place(x, y + 1);
	turn--;
	
	way[turn] = 'l';
	turn++;
	place(x, y - 1);
	turn--;
	
	visited[x][y] = false;
	return;
}


int main()
{
	start = clock();
	FILE *fp;
	char filename[] = "mazy.txt";
	int j;

	fp = fopen(filename, "r");
	int i = 0;
	while ((fgets(mazy[i], 256, fp)) != NULL)
	{
		i++;
	}
	n = i;
	m = strlen(mazy[0]);
	turn = 0;
	shortestTurn = m * n*10000;
	success = false;
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			visited[i][j] = false;
	int x0 = 4, y0 = 23;
	place(x0, y0);
	way[turn] = '\0';
	mazy[x0][y0] = 'x';
	if (success)
	{
		printf("%s", way);
		for (i = 0; i < shortestTurn; i++)
		{
			switch (shortestWay[i]) {
			case 'l':
				y0--;
				break;
			case 'r':
				y0++;
				break;
			case 'u':
				x0--;
				break;
			case 'd':
				x0++;
				break;
			}
			mazy[x0][y0] = 'x';
		}
	}
	else
		printf("no success\n");
	for (i = 0; i < n; i++)
		printf("%s\n", mazy[i]);

	return 0;
}
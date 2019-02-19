#include "task7.h"
#define MAXSIZE_X 256

int getMazeSize(const char*fileName, int *sizeY, int *sizeX)
{
	char buf[MAXSIZE_X] = { 0 };
	FILE *mf;
	mf = fopen(fileName, "r");
	if (mf == NULL) 
	{
		printf("file open error\n");
		return -1;
	}
	
	*sizeY = 0; 
	while (fgets(buf, MAXSIZE_X, mf) != NULL)
		(*sizeY)++;
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	*sizeX = strlen(buf);
	fclose(mf);
return 0;
}

int getMaze(const char*fileName, char** maze,int *sizeY, int *sizeX)
{
	char buf[MAXSIZE_X] = { 0 };
	FILE *mf;
	mf = fopen(fileName, "r");
	if (mf == NULL)
	{
		printf("file open error\n");
		return -1;
	}
	for (int i = 0; i < *sizeY; i++)
		strcpy(*(maze + i),fgets(buf, MAXSIZE_X, mf));
	fclose(mf);
	return 0;
}

void setStartYX(char** maze, int *sizeY, int *sizeX, int* Y, int *X)
{
	for (int i = 0; i < *sizeY; i++)
		for (int j = 0; j < *sizeX; j++)
			maze[i][j] == 'X' ? *Y = i, *X = j : 0;
}

void printMaze(char** maze, int sizeY, int sizeX) 
{
	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
			printf("%c",maze[i][j]);
		printf("\n");
	}
}

void place(char**maze,int sizeY,int sizeX,int y, int x)
{
	if (x == 0 || x == sizeX-1 || y == 0 || y == sizeY-1)
	{
		*(*(maze + y) + x) = 'X';
		return;
	}

	if (*(*(maze + y) + x + 1) == ' ')
	{
		*(*(maze + y) + x) = '>';
		*(*(maze + y) + x + 1) = 'X';
		place(maze, sizeY, sizeX, y, x + 1);
		*(*(maze + y) + x) = ' ';
	}

	if (*(*(maze + y + 1) + x) == ' ')
	{
		*(*(maze + y) + x) = '.';
		*(*(maze + y+1) + x) = 'X';
		place(maze, sizeY, sizeX, y + 1, x);
		*(*(maze + y) + x) = ' ';
	}

	if (*(*(maze + y) + x - 1) == ' ')
	{
		*(*(maze + y) + x) = '<';
		*(*(maze + y) + x - 1) = 'X';
		place(maze, sizeY, sizeX, y, x - 1);
		*(*(maze + y) + x) = ' ';
	}

	if (*(*(maze + y - 1) + x) == ' ')
	{
		*(*(maze + y) + x) = '^';
		*(*(maze + y-1) + x) = 'X';
		place(maze, sizeY, sizeX, y - 1, x);
		*(*(maze + y) + x) = ' ';
	}
		else 
		*(*(maze + y) + x) = ' ';
}
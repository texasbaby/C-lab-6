#include <stdio.h>
#include <string.h>
#include "task7.h"

char buf[N][M] = { 0 };

int main()
{
	
	char tempStr[M + 2] = { 0 };
	int rows = 0;
	int cols = 0;

	FILE *fp;
	fp = fopen("maze.txt", "r");

	if (fp == NULL)
	{
		puts("File not found!");
		return 1;
	}

	while (rows < N && fgets(tempStr, M + 2, fp) != NULL)
	{
		if (tempStr[strlen(tempStr) - 1] == '\n')
			tempStr[strlen(tempStr) - 1] = '\0';
		for (int i = 0; i < M; i++)
			buf[rows][i] = tempStr[i];
		rows++;
	}
	
	cols = strlen(tempStr);

	//printMaze(rows, cols);
	puts("Start!");
	
	place(rows, cols, rows/2, cols/2);

	printMaze(rows, cols);
	puts("Exit!");
	
	fclose(fp);
	
	return 0;
}
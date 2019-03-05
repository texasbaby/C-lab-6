#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task7.h"

int main()
{
	int count = 0, x = 0, y = 0;
	char buf[N][M] = { 0 };
	FILE *fp;
	fp = fopen("maze.txt", "r");

	if (fp == NULL)
	{
		printf("File 'maze.txt' not found!");
		return 1;
	}

	for (count; count < N && *fgets(buf[count], M, fp) != '\n'; count++)
		fputs(buf[count], stdout);

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (buf[i][j] == 'x')
			{
				x = i;
				y = j;
			}
		}
	}
	place(buf, x, y);

	for (int i=0; i < N; i++)
		fputs(buf[i], stdout);

	fclose(fp);
	return 0;
}
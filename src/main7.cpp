#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task7.h"



int main()
{
	int count = 0, x = 0, y = 0;
	char buf[N][M] = { 0 };
	FILE *fp;
	if ((fp = fopen("maze.txt", "r")) == NULL)
	{
		puts("File not found!");
		exit(EXIT_FAILURE);
	}
	puts("Start!");
	while (count < N && *fgets(buf[count], M, fp) != '\n')
	{
		fputs(buf[count], stdout);
		count++;
	}

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
	count = 0;
	puts("Exit!");
	while (count < N)
	{
		fputs(buf[count], stdout);
		count++;
	}
	fclose(fp);
	return 0;
}
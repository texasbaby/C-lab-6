#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "task7.h"

char **labyrinth;
int strings, columns;

int main()
{
	srand(time(NULL));
	FILE *labFile = fopen("labFile.txt", "r");
	if (!labFile)
	{
		printf("cannot open file labFile.txt\n");
		return 1;
	}
	char bufStr[MAX_SIZE] = { 0 };
	getLabyrinthSize(labFile);

	labyrinth = (char**)malloc(strings * sizeof(char*));
	for (int i = 0; i < strings; i++)
		labyrinth[i] = (char*)malloc(columns * sizeof(char));
	getLabyrinth(labFile);
	fclose(labFile);
	int X = 0, Y = 0;
	GetRandomCoordinatesToStart(&X, &Y);
	printLabyrinth();
	place(X, Y);
	free(labyrinth);
	return 0;
}
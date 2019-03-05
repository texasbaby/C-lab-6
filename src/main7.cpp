#include "task7.h"
#include <locale>
int sizeX = 0;
int sizeY = 0;
int main()
{
	getMazeSize("1.txt", &sizeY, &sizeX);

	char **maze;
	maze = (char**)malloc(sizeY * sizeof(char*));
	for (int i = 0; i < sizeY; i++)
		*(maze + i) = (char*)malloc(sizeX * sizeof(char));

	getMaze("1.txt", maze, &sizeY, &sizeX);

	int X = 0, Y = 0;
	setStartYX(maze, &sizeY, &sizeX, &Y, &X);
	#include <locale>
	setlocale(LC_ALL, "Rus");
	printMaze(maze, sizeY, sizeX);
	printf("\"Старт\"\n\n");
	printf("Нажмите Enter чтобы выйти из лабиринта\n\n");
	getchar();
	place(maze, sizeY, sizeX, Y, X);
	printMaze(maze, sizeY, sizeX);
	printf("\"EXIT\"\n");

	free(maze);
	return 0;
}
#include "task7.h"
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
	printMaze(maze,sizeY,sizeX);
	printf("\"START\"\n\n");
	printf("press enter to escape from maze\n\n");
	getchar();
	place(maze, sizeY, sizeX, Y, X);
	printMaze(maze, sizeY, sizeX);
	printf("\"EXIT\"\n");

free(maze);
return 0;
}
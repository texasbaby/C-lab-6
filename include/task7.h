#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getMazeSize(const char*fileName, int* sizeY, int*sizeX);
int getMaze(const char*fileName, char** maze, int *sizeY, int *sizeX);
void setStartYX(char** maze, int *sizeY, int *sizeX, int* Y, int *X);
void printMaze(char** maze, int sizeY, int sizeX);
void place(char**maze, int sizeY, int sizeX, int y, int x);
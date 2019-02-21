#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "task7.h"

extern char **labyrinth;
extern int strings, columns;

void delay(int time)											//внутренняя вспомогательная функция-таймер
{
	clock_t now = clock();
	while (clock() < (now + time));
}

void getLabyrinthSize(FILE *fileName)							//вычисление требуемых размеров массива под лабиринт
{
	char buf[MAX_SIZE] = { 0 };
	fseek(fileName, 0L, SEEK_SET);
	for (int i = 0; !feof(fileName); i++)
	{
		fgets(buf, MAX_SIZE, fileName);
		strings++;
		if (columns < strlen(buf))
			columns = strlen(buf);
	}
}

void getLabyrinth(FILE *fileName)								//получение лабиринта из файла
{
	char buf[MAX_SIZE] = { 0 };
	fseek(fileName, 0L, SEEK_SET);
	for (int i = 0; i < strings; i++)
	{
		fgets(buf, MAX_SIZE, fileName);
		strcpy(*(labyrinth + i), buf);
	}
	fclose(fileName);
}

void GetRandomCoordinatesToStart(int *X, int *Y)				//генерация начальной позиции ближе к середине лабиринта
{
	while (1)
	{
		*Y = rand() % (columns / 2) + columns / 4;
		*X = rand() % (strings / 2) + strings / 4;
		if (labyrinth[*X][*Y] == ' ')
		{
			labyrinth[*X][*Y] = 'X';
			break;
		}
	}
}

void printLabyrinth()
{
	for (int i = 0; i < strings; i++)
		printf("%s",labyrinth[i]);
	putchar('\n');
}

void place(int x, int y)
{
	static int finish = 0, deadEnd = 0;
	if (x == strings - 1 || y == columns - 1 || x == 0 || y == 0)
	{
		finish = 1;
		labyrinth[x][y] = 'X';
		delay(DELAY_SIZE);
		system("cls");
		printLabyrinth();
		return;
	}
	delay(DELAY_SIZE);
	system("cls");
	printLabyrinth();

	if (labyrinth[x + 1][y] == ' ' && !finish)
	{
		labyrinth[x + 1][y] = 'x';
		place(x + 1, y);
	}
	if (labyrinth[x][y - 1] == ' ' && !finish)
	{
		labyrinth[x][y - 1] = 'x';
		place(x, y - 1);
	}
	if (labyrinth[x - 1][y] == ' ' && !finish)
	{
		labyrinth[x - 1][y] = 'x';
		place(x - 1, y);
	}
	if (labyrinth[x][y + 1] == ' ' && !finish)
	{
		labyrinth[x][y + 1] = 'x';
		place(x, y + 1);
	}
	if (finish)
		labyrinth[x][y] = ' ';
	else
		labyrinth[x][y] = '.';
	return;
}
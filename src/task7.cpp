#include "task7.h"
#include <stdio.h>
#include <time.h>

#include <stdlib.h>

void fillingArray(char arr[][COL])
{
	for (int y = 0; y < ROW; y++)
	{
		for (int x = 0; x < COL; x++)
		{
			arr[y][x] = ' ';
		}
	}
	for (int x = 0; x < COL; x++)
	{
		arr[0][x] = '#';
		arr[8][x] = '#';
	}
	for (int y = 1; y < ROW - 2; y++)
		arr[y][0] = '#';

	for (int y = 1; y < ROW - 1; y++)
		arr[y][COL - 1] = '#';
	
	for (int y = 4; y < 8; y++)
		arr[y][7] = '#';

	for (int y = 1; y < 7; y++)
		arr[y][12] = '#';

	for (int y = 1; y < 4; y++)
		arr[y][16] = '#';

	for (int y = 5; y < 8; y++)
		arr[y][16] = '#';

	for (int y = 5; y < 8; y++)
		arr[y][26] = '#';
	//printing gorizontal lines
	for (int x = 1; x < 10; x++)
		arr[2][x] = '#';

	for (int x = 2; x < 7; x++)
		arr[4][x] = '#';

	for (int x = 1; x < 5; x++)
		arr[6][x] = '#';

	for (int x = 17; x < 21; x++)
		arr[3][x] = '#';

	for (int x = 25; x < 27; x++)
		arr[3][x] = '#';

	for (int x = 17; x < 21; x++)
		arr[5][x] = '#';

	for (int x = 22; x < 26; x++)
		arr[7][x] = '#';
}

void printArray(char arr[][COL])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}


int place(char arr[][COL], int x, int y)
{
	arr[y][x] = '*';
	clock_t begin = clock();
	int delay = 500;
	while (clock() < begin + delay);
	system("cls");
	printArray(arr);

	if ((0 == x) || (0 == y) || (ROW - 1 == y) || (COL - 1 == x))
	{
		printf("We found the exit!\n");
		printf("The exit coordinates are: y = %d, x = %d\n", y, x);
		return 1;
	}

	if (' ' == arr[y + 1][x]) 
	{
		if (place(arr, x, y + 1) == 1)
			return 1;
	}
	if (' ' == arr[y][x - 1])
	{
		if (place(arr, x - 1, y) == 1)
			return 1;
	}
	if (' ' == arr[y - 1][x])
	{
		if (place(arr, x, y - 1) == 1)
			return 1;
	}
	if (' ' == arr[y][x + 1])
	{
		if (place(arr, x + 1, y) == 1)
			return 1;
	}
	else 
		return 0;
}
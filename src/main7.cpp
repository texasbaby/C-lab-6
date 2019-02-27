#include "task7.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{
	char arr[ROW][COL];
	int x = 14;
	int y = 4;
	int count = 0;
	fillingArray(arr);
	arr[y][x] = 'X';
	printArray(arr);
	place(arr, x, y);
	//printArray(arr);
	return 0;
}
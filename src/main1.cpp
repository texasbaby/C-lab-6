#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"

int main(void)
{
	int x = 0, y = 0;
	
	char arr[M][M];
	for (x = 0; x < 27; x++)//���������� ���������
	{
		y = 0;
		while (y < 27)
			arr [x][y] = ' ', y++;
	}

	int i = 0, size = 1;
	while (i < N)//����������� size
		size = size * 3, i++;

	x = 13, y = 13;//��������� ����������
	drawFractal(arr, x, y, size/3);
	
	for (x = 0; x < 27; x++)
	{
		y = 0;
		while (y < 27)
			printf("%c ", arr[x][y]), y++;
		printf("\n");
	}
	
	getchar();
	getchar();
	return 0;
}
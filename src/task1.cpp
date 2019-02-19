#include <algorithm>
#define M 27

void drawFractal(char arr[M][M], int x, int y, int size)
{
	int countArr = pow(3, size);
	if (countArr>= M)
		return;
	int i, j;
	char newarr[M][M];
	for (i = 0; i < M; i++)
		for (j = 0; j < M; j++)
			newarr[i][j] = ' ';
	for (i=0;i<countArr;i++)
		for (j = 0; j < countArr; j++)
		{
			newarr[i + countArr][j + countArr] = arr[i][j];
			newarr[i + countArr][j] = arr[i][j];
			newarr[i][j + countArr] = arr[i][j];
			newarr[i + countArr * 2][j+countArr] = arr[i][j];
			newarr[i + countArr][j + countArr * 2] = arr[i][j];
		}
	for (i = 0; i < M; i++)
		for (j = 0; j < M; j++)
			arr[i][j] = newarr[i][j];
	drawFractal(arr, x + countArr, y + countArr, size + 1);
	return;
}
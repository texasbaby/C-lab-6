#include "task1.h"
#include <stdio.h>

int main()
{
	char arr[M][M] = { 0 };
	drawFractal(arr, M/2,M/2, 3);
	printFractal(arr);
	return 0;
}
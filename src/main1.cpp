#include <stdio.h>
#include "task1.h"



int main()
{
	char buf[M][M] = { 0 };
	int size = 3;
	int x = M / 2, y = M / 2;
	
	drawFractal(buf, x, y, size);
	printLines(buf);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "task7.h"

int main()
{
	char lab[M][N];
	lab[0][0] = lab[0][1] = lab[0][2] = lab[0][3] = lab[0][4] = lab[0][5] = lab[0][6] = lab[0][7] = '#';
	lab[1][0] = lab[1][7] = '#';  lab[1][1] = lab[1][2] = lab[1][3] = lab[1][4] = lab[1][5] = lab[1][6] = ' ';
	lab[2][0] = lab[2][1] = lab[2][3] = lab[2][5] = lab[2][7] = '#'; lab[2][2] = lab[2][6] = ' '; lab[2][4] = 'x';
	lab[3][0] = lab[3][3] = lab[3][4] = lab[3][5] = lab[3][7] = '#'; lab[3][1] = lab[3][2] = lab[3][6] = ' ';
	lab[4][0] = lab[4][1] = lab[4][2] = '#';  lab[4][3] = lab[4][4] = lab[4][5] = lab[4][6] = lab[4][7] = ' ';
	lab[5][0] = lab[5][1] = lab[5][2] = lab[5][3] = lab[5][4] = lab[5][5] = lab[5][6] = lab[5][7] = '#';
	lab[0][8] = lab[1][8] = lab[2][8] = lab[3][8] = lab[4][8] = lab[5][8] = '\0';
	int x = 2, y = 4;
	place(lab, x, y);
	printf("You find exit");
	return 0;
}
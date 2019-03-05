#include <stdio.h>
#include "task7.h"

int main()
{
	char lab[N][M] =
	{
		"############################",
		"#           #   #          #",
		"##########  #   #          #",
		"#           #   #######  ###",
		"#  ######   #              #",
		"#       #   #   #######   ##",
		"#####   #   #   #         ##",
		"        #             ######",
		"############################"
	};

	int x = 4;
	int y = 14;

	lab[x][y] = 'X';

	printLab(lab);

	if (place(lab, x, y) == 1)
		printf("You find exit!\n");

	return 0;
}
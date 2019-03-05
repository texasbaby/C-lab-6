#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("ERROR!", argv[0]);
		exit(EXIT_FAILURE);
	}
	else
		printf("%s = %d", argv[1], eval(argv[1]));
	return 0;
}
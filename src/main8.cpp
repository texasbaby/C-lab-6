#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("Not enough arguments!\n");
		return 1;
	}
	else
		printf("Result = %d\n", eval(argv[1]));

	return 0;
}
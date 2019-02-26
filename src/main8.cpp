#include <stdio.h>
#include <string.h>
#include "task8.h"


int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("No expression\n");
		return -1;
	}
	else
		printf("Expression value: %s = %d\n", argv[1], eval(argv[1]));

	return 0;
}
#include "task8.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		puts("Error!!! You did not enter data");
		return -1;
	}
	printf("%s = %d\n", argv[1], eval(argv[1]));

	return 0;
}
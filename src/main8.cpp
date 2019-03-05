#include <stdio.h>
#include <stdlib.h>
#include "task8.h"

 int main(int argc, char* argv[])
{
	if (argc < 2)
	{
		printf("wrong format");
		return 1;
	}
	printf("expression: %s\n", argv[1]);
	char e1[SIZE] = { 0 }, e2[SIZE] = { 0 };
	int res = eval(argv[1]);
	printf("%d\n", res);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	char *buf = argv[1];
	//char buf [] = "(((7-1)/(4+2))-9)";
	printf("%d", eval(buf+1));

	getchar();
	return 0;
}


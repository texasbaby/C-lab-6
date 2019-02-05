#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	if (argc < 2)
		puts("too few arguments");
	else
	{
		char *buf = argv[1];
		//char buf[] = "(((7-1)/(4+2))-9)";
		printf("%d\n", eval(buf));
	}
	return 0;
}
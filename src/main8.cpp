#include <stdio.h>
#include "task8.h"

int main(int argc, char* argv[])
{
	char *buf = argv[0];
	//char buf[] = "(((7-1)/(4+2))-9)";
	printf("%d\n", eval(buf));

	return 0;
}
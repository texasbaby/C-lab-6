#include"task8.h"

int main(int argc, char* argv[])
{
	if (argc != 2)
	{
		printf("Use %s \"expessesion\"", argv[0]);
		return -1;
	}
	else
	{
		printf("expression: %s\n", argv[1]);
		if (checkExpression != 0)
		{
			printf("checkExpression is fail\n");
			printf("Use %s correct \"expessesion\"", argv[0]);
			return -1;
		}
		printf("value: %d", eval(argv[1]));
		getchar();
	}
	return 0;
}
 
#include "task6.h"

int main()
{
	int num = 0;
	while (1)
	{
		printf("Enter number,  integer bigger than 0: ");
		scanf("%d", &num);
		printf("the value of the %d term of the sequence %llu\n", num, fib2(num));
	}
return 0;
}
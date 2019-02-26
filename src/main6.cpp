#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"


int main()
{
	int number = 0;

	printf("Enter number: ");
	scanf("%d", &number);


	printf("%d\t%llu\n", number, fib2(number));
		
	return 0;
}
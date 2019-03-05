#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>
#include <locale>

int main()
{
	int N = 0;
	setlocale(LC_ALL, "Rus");
	printf("Введите номер элемента в последовательности Фибоначчи, который Вы хотите посчитать: ");
	scanf("%d", &N);
	printf("Элемент #%d is: %llu\n", N, fib2(N));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task3.h"
#include <locale>

int main()
{
	unsigned int value = 0;
	char string[STR_SIZE] = { 0 };
	setlocale(LC_ALL, "Rus");
	printf("Введите положительное число: ");
	scanf("%d", &value);
	printf("Результат: %s\n", int2str(string, value));
}
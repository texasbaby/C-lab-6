#define _CRT_SECURE_NO_WARNINGS
#include "task6.h"
#include <stdio.h>
#include <locale>

int main()
{
	int N = 0;
	setlocale(LC_ALL, "Rus");
	printf("������� ����� �������� � ������������������ ���������, ������� �� ������ ���������: ");
	scanf("%d", &N);
	printf("������� #%d is: %llu\n", N, fib2(N));
	return 0;
}
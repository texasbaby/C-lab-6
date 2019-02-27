#include <stdio.h>
#include "task3.h"
#define N 64
int main()
{
    unsigned int value = 0;
    char buf[N] = {0};
    printf("Введите любое положительное число: \n");
    scanf("%d", &value);
    printf("Строка: %s \n", int2str(buf, value));
    return 0;
}

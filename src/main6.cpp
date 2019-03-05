#include <stdio.h>
#include "task6.h"

int main()
{
    int N;
    printf("Введите цифру: \n");
    scanf("%d", &N);
    printf("%d - %llu \n", N, fib2(N));
    return 0;
}

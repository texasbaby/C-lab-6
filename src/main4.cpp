#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "task4.h"

int main()
{
    int M = 0;
    clock_t t1, t2, t3;

    printf("Введите целое положительное число: \n");
    scanf("%d", &M);
    int N = pow(2, M);
    char *arr;
    arr = (char*)malloc(N * sizeof(char));

    srand(time(0));                                 // рандомное заполнение массива
    for (int i = 0; i < N; i++)
        arr[i] = (char)(rand()%100);

    t1 = clock();
    printf("Сумма в цикле: %lld \n", sumC(arr, N));
    t2 = clock();
    printf("Сумма через рекурсию: %lld \n", sumR(arr, N));
    t3 = clock();
    printf("Цикл %3lf против рекурсии %3lf \n",
           (float)(t2-t1) / CLOCKS_PER_SEC,
           (float)(t3-t2) / CLOCKS_PER_SEC);

    free(arr);
    return 0;
}

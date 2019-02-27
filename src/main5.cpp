#include <stdio.h>
#include <time.h>
#include "task5.h"

int main()
{
    FILE *fp;
    fp = fopen("lab6_5.xls", "w");
    if (fp == NULL)
        {
            puts("File not found!");
            return 1;
        }
    for(int N = 1; N <= 40; N++)
    {
        clock_t t1 = clock();
        unsigned long fib = fib1(N);
        clock_t t2 = clock();
        printf("%d %lu %lf \n", N, fib, (double)(t2 - t1) / CLOCKS_PER_SEC);
        fprintf(fp, "%d %lu %lf \n", N, fib, (double)(t2 - t1) / CLOCKS_PER_SEC);
    }
    fclose(fp);
    return 0;
}

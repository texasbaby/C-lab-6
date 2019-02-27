#include <stdio.h>
#include "task2.h"

int main()
{
    unsigned int maxlen = 0;
    unsigned long long numX = seqCollatz(&maxlen);

    printf("Максимальную последовательнось Коллатца(%u) даёт число: %u \n", maxlen, numX);
    return 0;
}

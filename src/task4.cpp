#include <stdlib.h>
#include <time.h>

long long sumC(char *arr,int len) // - суммирование массива циклом
{
    int sumC = 0;
    for(int i = 0; i < len; i++)
        sumC += arr[i];
    return sumC;
}

long long sumR(char *arr,int len) // - суммирование массива рекурсией
{
    if(len == 1)
        return *arr;
    else return arr[len - 1] + sumR(arr, len - 1);
}

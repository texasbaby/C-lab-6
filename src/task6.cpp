#include "task6.h"

ULL recursion(int N, ULL * a, ULL * b)
{                                       // a и b первые два члена ряда Фибоначчи
    if(N <= 2)
        return *b;
    else
    {
        ULL c = *a + *b;                // c - третий член
        return recursion(N - 1, b, &c);
    }
}

ULL fib2(int N) // нахождение N-ого члена ряда Фибоначчи
{
    ULL a = 0, b = 1;
    return recursion(N, &a, &b);
}

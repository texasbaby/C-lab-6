#include <stdio.h>
#include "task6.h"
#define SIZE 100


//функция создает массив и возвращает вызов функции
unsigned long long fib2(int N){
    unsigned long long arrFib[SIZE] = { 0 };
    return saveFib(arrFib, N);
}
/*записываем в массив значения членов последовательности Фибоначчи.
Если функция встречает значение 0 (значит ячека пустая) в массиве, то запускается рекурсия,
 которая использует значения из предыдущих ячеек массива
*/
unsigned long long saveFib(unsigned long long * arrFib, int n){
    if(arrFib[n] == 0)
    {
        if (n == 1 || n == 2)
            arrFib[n] = 1;
        else
            arrFib[n] = saveFib(arrFib, n - 1) + saveFib(arrFib, n - 2);
    }
    return arrFib[n];
}


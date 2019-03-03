#include <stdio.h>
#include "task2.h"
//функция возвращает длину последовательности Коллаца
unsigned int collatz(unsigned long long num){
    if (num == 1)
        return 1;
    if (num % 2 == 0)
        return collatz(num/2) + 1;
    else
        return collatz(3*num + 1) + 1;
    
}

//функция определяет максимальную длину послеовательности
unsigned int seqCollatz(unsigned int *maxlen){
    *maxlen = 0; // максимальная длина последовательности
    int len = 1; // текущая длина последовательности
    int maxNumber = 2; // число, котоорое выдает наибольшую последовательность Коллаца
    
    //i - проверяемое число
    for(int i = 2; i <= 1000000; i++){
        len = collatz(i);
        if(len > *maxlen){
            *maxlen = len;
            maxNumber = i;
        }
    }
    return maxNumber;
}

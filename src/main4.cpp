/*
 Задача №4
 
 Написать программу, которая суммирует массив традиционным (циклическим) и рекурсивным способами
 Пояснение
 
 Программа выполняет следующую последовательность действий:
 
 принимает из командной строки значение степени двойки M;
 находит размер динамического массива N = 2^M ;
 выделяет память под динамический массив;
 случайным образом заполняет массив данными;
 находит сумму традиционным и рекурсивыным способом;
 сравнивает время выполнения суммирования традиционным (циклическим) и рекурсивным способами;
 освобождает динамическую память
 Состав
 
 Программа должна включать в себя функции (и, возможно, другие):
 
 - long long sumC(char *arr,int len) - суммирование массива циклом
 - long long sumR(char *arr,int len) - суммирование массива рекурсией
 - main()
 Создаются три файла: task4.h,task4.cpp,main4.cpp.
 */


#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include "task4.h"

int main (int argc, char * argv[]){
    int M, N; // M - число пользователя, N - размер динамического массива
    char * arr; // массив для чисел
    clock_t timeC, timeR;
    M = atoi(argv[1]);
    if(argc < 2 || M < 1 || M > 17){
        printf("ERROR! Incorrect number. Please, enter unsigh integer from 1 to 17!\n");
    } else {
        N = pow(2, M); // возведение 2 в степень M
        //выделяем память под массив arr
        arr = (char*) malloc(N * sizeof(char) + 1);
        //заполняем массив псевдослучайными числами
        for(int i = 0; i<N; i++){
            arr[i] = rand();
            printf("%d\n", arr[i]);
        }
        printf("\n\n");
        
        clock_t time_start = clock();
        printf("Summ (cicle) of array is %lld\n", sumR(arr, N));
        clock_t time_end = clock() - time_start;
        double timeC = (double)time_end/CLOCKS_PER_SEC;
        printf("Time of cicle is %f sec\n", timeC);
        
        time_start = clock();
        printf("Summ (recursion) of array is %lld\n", sumR(arr, N));
        time_end = clock() - time_start;
        double timeR = (double)time_end/CLOCKS_PER_SEC;
        printf("Time of recursion is %f sec\n", timeR);
        
        free(arr);
        
        return 0;
     }
    
}



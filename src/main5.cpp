/*Задача №5

Написать программу, которая измеряет время вычисления N-ого члена ряда Фибоначчи с использованием рекурсии
Предусмотреть вывод таблицы значений для N в диапазоне от 1 до 40
(или в другом диапазоне по желанию) на экран и в файл
Пояснение

Текстовый файл со значениями можно открыть в электронной таблице и построить график зависимости времени от члена ряда N
 
 - unsigned long long fib1(int N) - нахождение N-ого члена ряда Фибоначчи с помощью рекурсии
 - main()
*/

#include <time.h>
#include <stdio.h>
#include "task5.h"
#define N 40
int main(){
    long double time;
    int arr[N] = {'\0'}; // массив зависимоси времени от значения: первая строчка - N-член Фиббоначи; вторая - время
    long double timeArr[N] = {'\0'};
    FILE * fp = fopen("fib.xls", "a+"); // создаем файл и сразу же записываем
    for(int i = 0; i < N; i++){
        arr[i] = i+1;
        clock_t time_start = clock();
        fib1(i+1);
        clock_t time_end = clock() - time_start;
        time = (long double) time_end / CLOCKS_PER_SEC;
        timeArr[i] = time;
    }
    for(int i = 0; i < N; i++){
        fprintf(fp, "%d\t", arr[i]);
        printf("%d\t", arr[i]);
    }
    fprintf(fp, "\n");
    for(int i = 0; i < N; i++){
        fprintf(fp, "%Lf\t", timeArr[i]);
        printf("%Lf\t", timeArr[i]);
    }
    
    fclose(fp);
    return 0;
}



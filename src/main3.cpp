/*
 Задача №3
 
 Написать программу, которая переводит введённое пользователем
 целое число в строку с использованием рекурсии и без каких-либо
 библиотечных функций преобразования
 Пояснение
 
 Преобразование целого числа в строку можно выполнить разными способами. Одним из самых популярных является способ, при котором мы находим остаток от деления 10 и тем самым выделяем один (младший разряд). Проблема в том, что в таком случае формирование строки должно происходить с конца и нам неизвестно количество разрядов числа. С помощью рекурсии можно сначала разложить число на разряды (прямой ход рекурсии), а потом скопировать эти разряды в правильном порядке в строку (обратный ход рекурсии).
 
 Состав
 
 Программа должна включать в себя функции (и, возможно, другие):
 
 - char* int2str(char *buf, unsigned int value) - функция, переводящая число в строку
 - main() - организация ввода целого числа (через scanf)
 Создаются три файла: task3.h,task3.cpp,main3.cpp.
 */

#include <stdio.h>
#include <string.h>
#include "task3.h"
int main(){
    const int N = 10; // определяем размер массива (10 - т.к. unsigned int - это 32 биты или 10-и значное число)
    char string[N] = {'\0'}; // строка под число
    int value = 0; // число вводимое пользователем
    printf("Enter your number:\t");
    scanf("%d", &value);
    int2str(string, value);
    printf("Your number in string: %s\n", string);
    
    return 0;
}

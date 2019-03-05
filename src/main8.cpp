/*
 Написать программу, которая вычисляет целочисленный результат арифметического выражения,
 заданного в виде параметра командной строки. Предусмотреть поддержку 4-х основных операций.
 Порядок вычисления определяется круглыми скобками.
 Пояснение
 
 В строке выражения могут встречаться символы: 0-9 , + , - , * , / , ( , ) Выражения могут быть простыми, то есть целиком состоять из одного числа 3, 8, а могут быть сложными, например, ((6+8)*3) или (((7-1)/(4+2))-9). Предполагается, что скобки в выражении заданы правильно, то есть количество открытых равно количеству закрытых и они на допустимых позициях.

 - int main(int argc, char* argv[]) - главная функция, в которой осуществляется вызов рекурсивной функции eval для вычисления выражения
 - int eval(char *buf) - функция, вычисляющая строку, содержащуюся в buf
 - char partition(char *buf, char *expr1, char *expr2) - функция, которая разбивает строку, содержащуюся в buf на три части: строку с первым операндом, знак операции и строку со вторым операндом
 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task8.h"


int main(int argc, char * argv[]){
    
    char * mathExpression;
    if (argc < 1){
        printf("Error! Restart programm and enter your mathematical expression!\n");
        return 1;
    } else {
        mathExpression = argv[1];
    }
    
    printf("%s = ", mathExpression);
    if(eval(mathExpression) == -1)
        printf("\nERROR!\nEnter yout mathExpression with brackets!\n");
    else printf("%d\n", eval(mathExpression));
    return 0;
   
}

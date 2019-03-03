#include <stdlib.h>
#include <string.h>
#include "task8.h"

int eval(char *buf)
{
    char expr1[10]; // массив для первого операнда
    char expr2[10]; // массив для второго операнда
    char mathSign; // математический знак
    int value = 0; // возвращаемое значение
    
    //разделяем возвращаемые символы: если цифра - функция возвращает цифру или
    //математический знак, после чего выполняет арифметическое действие и возвращает результат
    if (buf[0] >= '0' && buf[0] <= '9')
        return atoi(buf);
    else
    {
        mathSign = partition(buf, expr1, expr2);
        switch (mathSign)
        {
            case '+': value = eval(expr1) + eval(expr2);
                break;
            case '-': value = eval(expr1) - eval(expr2);
                break;
            case '*': value = eval(expr1) * eval(expr2);
                break;
            case '/': value = eval(expr1) / eval(expr2);
                break;
        }
        
        return value;
    }
    
}

char partition(char *buf, char *expr1, char *expr2){
    
    int firstBracket = 0; // позиция первой скобки
    int lastBracket = 0; // позиция закрывающей скобки
    int position = 0; // текущеезначение в строке
    int j = 0, k = 0; // для движения по массивам
    
    while (buf[position] != '\0')
    {
        if (buf[position] == '(')
            firstBracket++;
        if (buf[position] == ')')
            lastBracket++;
        if (firstBracket == lastBracket + 1 && (buf[position] == '-' || buf[position] == '+' || buf[position] == '*' || buf[position] == '/'))
            break;
        position++;
    }
    
    for (j = 0, k = 1; k < position; j++, k++)
    {
        expr1[j] = buf[k];
    }
    expr1[j] = '\0';
    
    for (j = 0, k = position + 1; buf[k + 1] != '\0'; j++, k++)
        expr2[j] = buf[k];
    expr2[j] = '\0';
    
    return buf[position];
} 

#include <stdlib.h>
#include <ctype.h>
#define N 64

char partition(char *buf, char *expr1, char *expr2) // ф-я, к-я делит строку на операнды и математические операции
{
    int left = 0, right = 0;        // левая скобка '(' и правая скобка ')'
    int i = 0, j = 0, k = 0;

    while (buf[i])
    {
        if (buf[i] == '(')
            left++;
        if (buf[i] == ')')
            right++;
        if (left == right + 1 && (buf[i] == '+' || buf[i] == '-' || buf[i] == '*' || buf[i] == '/'))
            break;
        i++;
    }

    for (j = 0, k = 1; k < i; j++, k++)
        expr1[j] = buf[k];
    expr1[j] = '\0';

    for (j = 0, k = i + 1; buf[k + 1] != '\0'; j++, k++)
        expr2[j] = buf[k];
    expr2[j] = '\0';

    return buf[i];
}

int eval(char *buf) // функция, вычисляющая строку, содержащуюся в buf
{
    char expr1[N] = { 0 };
    char expr2[N] = { 0 };
    char operand = 0;
    int result = 0;

    if (isdigit(buf[0]))
        return atoi(buf);
    else
    {
        operand = partition(buf, expr1, expr2);
        switch (operand)
        {
        case '+':
            result = eval(expr1) + eval(expr2);
        case '-':
            result = eval(expr1) - eval(expr2);
        case '*':
            result = eval(expr1) * eval(expr2);
        case '/':
            result = eval(expr1) / eval(expr2);
        }
        return result;
    }
}

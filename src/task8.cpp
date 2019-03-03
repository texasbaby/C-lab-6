#include <stdlib.h>

#define M 64

char partition(char *buf, char *expr1, char *expr2) // ф-я, к-я делит строку на операнды и математические операции
{
    int left = 0, pos = 0;        // левая скобка '(' и позиция
    int i = 0, j = 0;

    for(i = 0; buf[i]; i++)
    {
        if (buf[i] == '(')
            left++;
        if (buf[i] == ')')
            left--;
        if ((buf[i] == '+' || buf[i] == '-' || buf[i] == '*' || buf[i] == '/') && left == 1)
        {
            pos = i;
            break;
        }
    }

    for (i = 1; i < pos; i++)
        expr1[j++] = buf[i];
    expr1[j] = '\0';
    j = 0;
    for (i = pos + 1; buf[i + 1]; i++)
        expr2[j++] = buf[i];
    expr2[j] = '\0';

    return buf[pos];
}

int eval(char *buf) // функция, вычисляющая строку, содержащуюся в buf
{
    char expr1[M] = { 0 };
    char expr2[M] = { 0 };
    char operand = 0;
    int result = 0;

    if (*buf != '(')
        return atoi(buf);
    else
    {
        operand = partition(buf, expr1, expr2);
        switch (operand)
        {
        case '+':
            result = eval(expr1) + eval(expr2);
            break;
        case '-':
            result = eval(expr1) - eval(expr2);
            break;
        case '*':
            result = eval(expr1) * eval(expr2);
            break;
        case '/':
            result = eval(expr1) / eval(expr2);
            break;
        }
        return result;
    }
}

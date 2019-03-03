#include <string.h>
#include <stdlib.h>
#define M 256

char partition(char *buf, char *expr1, char *expr2)
{
    int brace = 0, i = 0, j = 0, place = 0;

    for ( i = 0; buf[i]; i++)
    {
        if (buf[i] == '(')
            brace++;
        if (buf[i] == ')')
            brace--;
        if ((buf[i] == '-' || buf[i] == '+' || buf[i] == '*' || buf[i] == '/') && brace == 1)
        {
            place = i;
            break;
        }
    }

    for (i = 1; i <= place; i++)
        expr1[j++] = buf[i];

    expr1[j] = '\0';

    j = 0;

    for (i = place + 1; buf[i+1]; i++)
        expr2[j++] = buf[i];

    expr2[j] = '\0';

    return buf[place];
}

int eval(char *buf)
{
    char expr1[M], expr2[M], ch;

    if (*buf != '(')
        return atoi(buf);

    ch = partition(buf, expr1, expr2);

    switch (ch)
    {
    case '+':
        return eval(expr1) + eval(expr2);
    case '-':
        return eval(expr1) - eval(expr2);
    case '*':
        return eval(expr1) * eval(expr2);
    case '/':
        return eval(expr1) / eval(expr2);
    }
}

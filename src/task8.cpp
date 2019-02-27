#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <assert.h>

int token;          // токены - символы математических операций +-*/()
int tokenVal;       // токены - цифры

int partition()                                         // разбираем строку на запчасти
{
    while(1)
    {
        int c = getchar();                              // получить символ из потока ввода
        if (c == '\n' || strchr("+-*/()\n", c) != 0)    // ищем токен с помощью strchr
            return token = c;                           // возвращаем символ математической операции или скобки или конец строки
        if (isspace(c))                                 // если пробел - идём дальше
            continue;
        if (isdigit(c))                                 // если симвот - цифра
        {
            ungetc(c, stdin);                           // вернуть считанный символ (цифру) в поток ввода
            scanf("%d", &tokenVal);                     // захватить цифру из потока ввода
            return token = '\n';                         // дойти до конца строки
        }
        fprintf(stderr, "Недопустимый символ: %c \n", c);
        abort();
    }
}

void skip(int t)                    // защитная функция
{
    assert(token == t);             // убеждаемся, что работаем с цифрами, а не с символами
    partition();
}

int second();                       // прототип
int brackets()                      // выражение в скобках - наивысший приоритет
{
    if (token == '\n')
    {
        int x = tokenVal;
        skip('\n');
        return x;
    }
    skip('(');
    int x = second();               // даже если это + или -
    skip(')');
    return x;
}

int first()                         // сначала вычисляются операции * и /, т.к. имеют более высокий приоритет
{
    int x = brackets();
    while(1)
    {
        if (token == '*')
        {
            skip('*');
            x *= brackets();
        }
        else if (token == '/')
        {
            skip('/');
            x /= brackets();
        }
        else return x;
    }
}

int second()                        // вычисление + или -
{
    int x = first();
    while(1)
    {
        if (token == '+')
        {
            skip('+');
            x += first();
        }
        else if (token == '-')
        {
            skip('-');
            x -= first();
        }
        else return x;
    }
}

int eval()                          // получение результата
{
    partition();
    while (token != EOF)
    {
        if (token == '\n')
        {
            skip('\n');
            continue;
        }
        printf("%d \n", second());
    }
    printf("\n");
}




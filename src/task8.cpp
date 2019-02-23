#include <stdlib.h>
#include "task8.h"

int eval(char *buf) // function which calculate the string in buf
{
	char expr1[N] = { 0 };
	char expr2[N] = { 0 };
	
	char op = 0;
	
	if (*buf!='(')
		return atoi(buf);
	else
	{
		op = partition(buf, expr1, expr2);
		switch (op)
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
}

char partition(char *buf, char *expr1, char *expr2) // function which breaks the expression into 3 parts
{
	int open = 0, close = 0;
	int i = 0, j = 0, k = 0;

	while (buf[i])
	{
		if (buf[i] == '(')
			open++;
		if (buf[i] == ')')
			close++;
		if (open == close + 1 && (buf[i] == '+' || buf[i] == '-' || buf[i] == '*' || buf[i] == '/'))
			break;
		i++;
	}

	for (j = 0, k = 1;k < i;j++, k++)
		expr1[j] = buf[k];
	expr1[j] = '\0';

	for (j = 0, k = i + 1;buf[k + 1] != '\0';j++, k++)
		expr2[j] = buf[k];
	expr2[j] = '\0';

	return buf[i];
}
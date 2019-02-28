#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task8.h"

 char partition(char *buf, char *expr1, char *expr2)
{
	int openBracket = 0, operationPos = 0;
	for (int i = 0; buf[i]; i++)
	{
		if (buf[i] == '(')
			openBracket++;
		if (buf[i] == ')')
			openBracket--;
		if ((buf[i] == '-' || buf[i] == '+' || buf[i] == '*' || buf[i] == '/') && openBracket == 1)
		{
			operationPos = i;
			break;
		}
	}
	int counter = 0;
	for (int i = 1; i < operationPos; i++)
		expr1[counter++] = buf[i];
	expr1[counter] = '\0';
	counter = 0;
	for (int i = operationPos+1; buf[i+1]; i++)
		expr2[counter++] = buf[i];
	expr2[counter] = '\0';
	return buf[operationPos];
}

 int eval(char *buf)
{
	if (*buf != '(')
		return atoi(buf);
	else
	{
		int result = 0;
		char expr1[SIZE] = { 0 };
		char expr2[SIZE] = { 0 };
		char operSym = partition(buf, expr1, expr2);
		switch (operSym)
		{
		case '-': result = eval(expr1) - eval(expr2);
			break;
		case '+': result = eval(expr1) + eval(expr2);
			break;
		case '*': result = eval(expr1) * eval(expr2);
			break;
		case '/': result = eval(expr1) / eval(expr2);
			break;
		}
		return result;
	}
}

#include"task8.h"
#define MAXLEN 256

int checkExpression(char *buf) //only numbers and (+-/*) are availible
{	// quantity of '(' == quantity of ')'
	int open = 0, close = 0;
	for (int i = 0; *(buf + i) != '\0'; i++)
	{
		if (*(buf + i) == '(') open++;
		if (*(buf + i) == ')') close++;

		if (
			(*(buf + i) != '+' && *(buf + i) != '-' &&
				*(buf + i) != '*' && *(buf + i) != '/')
			&& (*(buf + i) < '0' && *(buf + i) > '0' + 9)
			)
			return -1;
	}
	if (open != close)
		return -1;
	return 0;
}

char partition(char *buf, char *expr1, char *expr2)
{
	int open = 0, close = 0;
	int i = 0;
	while (*(buf + i) != '\0')
	{
		if (*(buf + i) == '(')
			open++;
		if (*(buf + i) == ')')
			close++;
		// if buf[i]=={+,-,*,/,} and num'(' == num')'+1
		if ((open == close + 1) &&
			(*(buf + i) == '*' || *(buf + i) == '/' ||
				*(buf + i) == '+' || *(buf + i) == '-'))
			break;
		i++;
	}
	//break move us here, i == position of operator
	for (int j = 0; j < i - 1; j++)
	{
		*(expr1 + j) = *(buf + j + 1);
		*(expr1 + j + 1) = '\0';
	}
	for (int j = 0; *(buf + j + i + 2) != '\0'; j++)
	{
		*(expr2 + j) = *(buf + j + i + 1);
		*(expr2 + j + 1) = '\0';
	}
	return *(buf + i);
}

int eval(char *buf)
{
	if (*buf != '(')
		return atoi(buf);
	else
	{
		int result = 0;
		char expr1[MAXLEN] = { 0 };
		char expr2[MAXLEN] = { 0 };
		char q = partition(buf, expr1, expr2);
		switch (q)
		{
		case '*': result = eval(expr1)*eval(expr2);
			break;
		case '/': result = eval(expr1) / eval(expr2);
			break;
		case '+': result = eval(expr1) + eval(expr2);
			break;
		case '-': result = eval(expr1) - eval(expr2);
			break;
		}
		return result;
	}
}
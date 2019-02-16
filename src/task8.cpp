#include <stdlib.h>
#include "task8.h"

int eval(char *buf)
{
	char expr1[M];
	char expr2[M];
	char operation;
	//int result = 0;

	if (buf[0] >= '0' && buf[0] <='9')
		return atoi(buf);
	else
	{
		operation = partition(buf, expr1, expr2);
		switch (operation)
		{
		case '+': return eval(expr1) + eval(expr2);
			//break;
		case '-': return eval(expr1) - eval(expr2);
			//break;
		case '*': return eval(expr1) * eval(expr2);
			//break;
		case '/': return eval(expr1) / eval(expr2);
			//break;
		}

		//return result;
	}

}

char partition(char *buf, char *expr1, char *expr2)
{
	int str = 0, opn =0, cls=0, i = 0, j = 0, q = 0;

	while (buf[i] != '\0')
	{
		if (buf[i] == '(')
			opn++;
		if (buf[i] == ')')
			cls++;
		if (opn == cls + 1 && (buf[i] == '-' || buf[i] == '+' || buf[i] == '*' || buf[i] == '/'))
			break;
		i++;
	}

	for (j = 0, q=1; q < i; j++, q++)
	{
		expr1[j] = buf[q];
	}
	expr1[j] = '\0';

	for (j = 0, q = i + 1; buf[q] != '\0'; j++, q++)
		expr2[j] = buf[q];
	expr2[j] = '\0';

	return buf[i];
}
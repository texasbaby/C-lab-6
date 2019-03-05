#include <stdlib.h>
#include "task8.h"

int eval(char *buf)
{
	char expr1[M];
	char expr2[M];
	char operation;
	int result = 0;

	if (buf[0] >= '0' && buf[0] <= '9')
		return atoi(buf);
	else
	{
		operation = partition(buf, expr1, expr2);
		switch (operation)
		{
		case '+': result = eval(expr1) + eval(expr2);
			break;
		case '-': result = eval(expr1) - eval(expr2);
			break;
		case '*': result = eval(expr1) * eval(expr2);
			break;
		case '/': result = eval(expr1) / eval(expr2);
			break;
		}

		return result;
	}

}

char partition(char *buf, char *expr1, char *expr2)
{
	int str = 0, first = 0, last = 0, i = 0, j = 0, k = 0;

	while (buf[i] != '\0')
	{
		if (buf[i] == '(')
			first++;
		if (buf[i] == ')')
			last++;
		if (first == last + 1 && (buf[i] == '-' || buf[i] == '+' || buf[i] == '*' || buf[i] == '/'))
			break;
		i++;
	}

	for (j = 0, k = 1; k < i; j++, k++)
	{
		expr1[j] = buf[k];
	}
	expr1[j] = '\0';

	for (j = 0, k = i + 1; buf[k + 1] != '\0'; j++, k++)
		expr2[j] = buf[k];
	expr2[j] = '\0';

	return buf[i];
}
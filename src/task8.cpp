#include <string.h>
#include <stdlib.h>
#define SIZE 50
#include "task8.h"

int isSign(char letter) // auxiliary function for partition
{
	if ((letter == '/') || (letter == '*') || (letter == '+') || (letter == '-'))
		return 1;
	else
		return 0;
}

char partition(char *buf, char *expr1, char *expr2)
{
	char res = 0;
	int countOpen = 0, countClosed = 0;
	int finishExpr1 = 0, startExpr2 = 0;
	int len = strlen(buf);
	for (int i = 0; i < len; i++)
	{
		if ('(' == buf[i])
			countOpen++;
		else if (')' == buf[i])
			countClosed++;
		else if (isSign(buf[i]) && (countOpen - countClosed == 1))
		{
			res = buf[i];
			finishExpr1 = i - 1;
			startExpr2 = i + 1;
		}
		else
			continue;
	}

	for (int i = 1, j = 0; i <= finishExpr1; i++, j++)
	{
		expr1[j] = buf[i];
	}
	for (int i = startExpr2, j = 0; i < len - 1; i++, j++)
	{
		expr2[j] = buf[i];
	}
	return res;
}


int eval(char *buf)
{
	if (*buf != '(')
		return atoi(buf);//if there is only one number in buf
//if we met brace
	char expr1[SIZE] = { 0 };
	char expr2[SIZE] = { 0 };
	char sign = partition(buf, expr1, expr2);
	int res = 0;
	switch (sign)
	{
	case '-': res = eval(expr1) - eval(expr2);
		break;
	case '+': res = eval(expr1) + eval(expr2);
		break;
	case '*': res = eval(expr1) * eval(expr2);
		break;
	case '/': res = eval(expr1) / eval(expr2);
		break;
	}
	return res;	
}

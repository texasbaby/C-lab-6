#include <string.h>
#include <stdlib.h>

bool isNum(char *c)
{
	if (atoi(c) != 0 || c == "0")
		return true;
	else
		return false;
}

char partition(char *buf, char *expr1, char *expr2)
{
	char sign;
	int countBracket = 0;
	int i, j;

	i = 1;
	do {
		expr1[i - 1] = buf[i];
		if (buf[i] == '(')
			countBracket++;
		if (buf[i] == ')')
			countBracket--;
		i++;
	} while (countBracket != 0 || (buf[i] >= '0'&&buf[i] <= '9'));
	expr1[i - 1] = '\0';

	sign = buf[i];
	i++;

	j = i;
	do {
		expr2[i - j] = buf[i];
		if (buf[i] == '(')
			countBracket++;
		if (buf[i] == ')')
			countBracket--;
		i++;
	} while (countBracket != 0 || (buf[i] >= '0'&&buf[i] <= '9'));
	expr2[i - j] = '\0';

	return sign;
}

int eval(char *buf)
{
	char expr1[100], expr2[100];
	char sign = partition(buf, expr1, expr2);
	if (isNum(expr1) && isNum(expr2))
	{
		if (sign == '+')
			return atoi(expr1) + atoi(expr2);
		else if (sign == '-')
			return atoi(expr1) - atoi(expr2);
		else if (sign == '*')
			return atoi(expr1) * atoi(expr2);
		else if (sign == '/')
			return atoi(expr1) / atoi(expr2);
	}
	if (isNum(expr1) && !isNum(expr2))
	{
		if (sign == '+')
			return atoi(expr1) + eval(expr2);
		else if (sign == '-')
			return atoi(expr1) - eval(expr2);
		else if (sign == '*')
			return atoi(expr1)*eval(expr2);
		else if (sign == '/')
			return atoi(expr1) / eval(expr2);
	}
	if (!isNum(expr1) && isNum(expr2))
	{
		if (sign == '+')
			return eval(expr1) + atoi(expr2);
		else if (sign == '-')
			return eval(expr1) - atoi(expr2);
		else if (sign == '*')
			return eval(expr1)*atoi(expr2);
		else if (sign == '/')
			return eval(expr1) / atoi(expr2);
	}
	if (!isNum(expr1) && !isNum(expr2))
	{
		if (sign == '+')
			return eval(expr1) + eval(expr2);
		else if (sign == '-')
			return eval(expr1) - eval(expr2);
		else if (sign == '*')
			return eval(expr1)*eval(expr2);
		else if (sign == '/')
			return eval(expr1) / eval(expr2);
	}
}
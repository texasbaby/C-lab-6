#include <stdlib.h>
#include <cstring>
int res;

char partition(char *buf, char *expr1, char *expr2)
{
	char sign;
	int count = strlen(buf);
	int i = 1, j = 1;
	if (buf[i] != '(')
	{
		int k = 0;
		while ( buf[i]>='0' & buf[i] <= '9')
		{
			expr1[k] = buf[i];
			k++;
			i++;
		}
	}
	else
	{
		int flag1 = 1;
		*expr1 = '(';
		i = 2;
		while (flag1 != 0)
		{
			if (buf[i] == '(')
			{
				flag1++;
			}
			if (buf[i] == ')')
			{
				flag1--;
			}
			expr1[j] = buf[i];
			j++;
			i++;
		}
	}
	sign = buf[i];
	j = 0;
	i++;
	for (i; i < count - 1; i++)
	{
		expr2[j] = buf[i];
		j++;
	}
	return sign;
}

int eval(char *buf)
{
	char expr1[50] = { NULL }, expr2[50] = { NULL };
	if (*buf != '(')
	//if (strlen(buf) == 1)
		return res = atoi(buf);
	char operation = partition(buf, expr1, expr2);

	switch (operation)
	{
	case '+':
		res = eval(expr1) + eval(expr2);
		break;
	case '-':
		res = eval(expr1) - eval(expr2);
		break;
	case '*':
		res = eval(expr1) * eval(expr2);
		break;
	case '/':
		res = eval(expr1) / eval(expr2);
		break;
	}
	return res;
}
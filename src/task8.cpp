#include <string.h>
#include <stdlib.h>
#define N 256

char partition(char *buf, char *expr1, char *expr2)
{
	int left = 0, right = 0, i = 1, j = 0, k=0, m = 0;
	char ch;
	int len = strlen(buf);

	buf[len - 1] = '\0';

	while (buf)
	{
		if (buf[i] == '(')
			left++;
		if (buf[i] == ')')
			right++;
		if (left == right)
			break;
		i++;
	}

	for (j = 1; j <= i; j++)
		expr1[j-1] = buf[j];

	expr1[j-1] = '\0';

	ch = buf[i + 1];

	for (k = i + 2, m = 0; buf[k] != '\0'; k++)
		expr2[m++] = buf[k];

	expr2[m] = '\0';

	return ch;
}

int eval(char *buf)
{
	char expr1[N], expr2[N], ch;

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
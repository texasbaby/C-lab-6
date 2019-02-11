int eval(char *buf)
{
	char *p = buf;
	int n1 = 0, n2 = 0, state = 0, sum = 0;
	while (*buf != '\0')
	{
		if (*buf == '(' && state == 0)
			*buf = ' ', n1 = eval(buf + 1);
		if ((*buf >= '0' && *buf <= '9') && state == 0)
			n1 = n1 * 10 + (*buf - 48), *buf = ' ';
		if (*buf == '*' || *buf == '/' || *buf == '+' || *buf == '-')
			p = buf, state = 1;
		if (*buf == '(' && state == 1)
			*buf = ' ', n2 = eval(buf + 1);
		if ((*buf >= '0' && *buf <= '9') && state == 1)
			n2 = n2 * 10 + (*buf - 48), *buf = ' ';
		if (state == 0 && *buf == ')')
		{
			*buf = ' ';
			return n1;
		}
		if (*buf == ')' && *p == '*')
		{
			*buf = ' ', *p = ' ';
			return n1 * n2;
		}
		if (*buf == ')' && *p == '/')
		{
			*buf = ' ', *p = ' ';
			return n1 / n2;
		}
		if (*buf == ')' && *p == '+')
		{
			*buf = ' ', *p = ' ';
			return n1 + n2;
		}
		if (*buf == ')' && *p == '-')
		{
			*buf = ' ', *p = ' ';
			return n1 - n2;
		}
		buf++;
	}
}

char partition(char *buf, char *expr1, char *expr2)
{
	;
	return 0;
}
int i = 1;
char* int2str(char *buf, unsigned int value)
{
	if (value < 10)
	{
		*(buf) = (48 + value);
		return buf;
	}
	else
	{

		int2str(buf, value / 10);
		*(buf+i) = 48 + value % 10;
		i++;
	}
	buf[i] = '\0';
	return buf;
}
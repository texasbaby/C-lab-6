int i = 0;

char* int2str(char *buf, unsigned int value)
{
	if (value < 10)
		buf[i++] = value + '0';
	else
	{
		int2str(buf, value / 10);
		buf[i++] = value % 10 + '0';
	}
	buf[i] = '\0';
	return buf;
}
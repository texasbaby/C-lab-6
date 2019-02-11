char* int2str(char *buf, unsigned int value)
{
	int i=0;
	if ((value = (value - (i = value % 10)) / 10) > 0)
		buf = int2str(buf, value);
	*buf = i + 48;
	buf++;
	return buf;
}


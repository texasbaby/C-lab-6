int n = 0;

char* int2str(char *buf, unsigned int value)
{
	int i=0;
	if ((value = (value - (i = value % 10)) / 10) > 0)
	int2str(buf, value);
	buf [n] = i + 48;
	n++;
	return buf;
}

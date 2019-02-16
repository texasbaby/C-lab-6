
int count = 0;
char* int2str(char *buf, unsigned int value)
{
	int count1 = count;
	int symbol = 0;
	unsigned int val = 0;
	val = value / 10;
	if (val != 0)
	{
		count++;
		symbol = value % 10;
		int2str(buf, val);
	}
	else
		symbol = value % 10;
	buf[count - count1] = symbol + '0';
	return buf;
}
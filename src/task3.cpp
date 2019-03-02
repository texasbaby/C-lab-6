int count = 0;

char* int2str(char *buf, unsigned int value)
{
	int count_curr = count, num = 0;
	unsigned int val = 0;
	val = value / 10;
	if (val != 0)
	{
		count++;
		num = value % 10;
		int2str(buf, val);
	}
	else
		num = value % 10;
	buf[count - count_curr] = num + '0';
	return buf;
}
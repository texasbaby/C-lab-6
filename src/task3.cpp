
static int count = 0;

char* int2str(char *buf, unsigned int value) // conversion from number to string 
{
	int character = 0;
	int count1 = count;
	if (value / 10 != 0)
	{
		character = value % 10;
		count++;
		int2str(buf, value / 10);
	}
	else
		character = value % 10;
	
	buf[count - count1] = '0' + character;
	buf[count + 1] = '\0';
	
	return buf;
}
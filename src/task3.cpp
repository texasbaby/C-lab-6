#include <string.h>

char* int2str(char *buf, unsigned int value) 
{
	char tempBuf[2] = { 0 };

	if (value < 10)
	{
		*buf = value + 48;
		buf[1] = '\0';
		return buf;
	}	
	tempBuf[0] = (char)(value % 10 + 48);
	tempBuf[1] = '\0';

	return strcat(int2str(buf, (value / 10)), tempBuf);
}
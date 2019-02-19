#define _CRT_SECURE_NO_WARNINGS
#include <string.h>

char* int2str(char *buf, unsigned int value)

{
	if (value <= 9)
	{
		*buf = value + 48;
		buf[1] = '\0';
		return buf;
	}
	else
	{
		char curDigit[2];
		curDigit[0]= value % 10 + 48;
		curDigit[1] = '\0';
		strcat(int2str(buf, value / 10), curDigit);
		return buf;
	}
}
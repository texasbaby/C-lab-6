#include "task3.h"
#include <string.h>

char* int2str(char *buf, unsigned int value)
{
	if (value / 10 >= 1)
	{
		int2str(buf, value / 10);
		*(buf + strlen(buf) + 1) = '\0';
		*(buf + strlen(buf)) = '0' + value % 10;
	}
	else
	{
		*buf = '0' + value % 10;
		*(buf + 1) = '\0';
	}
	return buf;
}
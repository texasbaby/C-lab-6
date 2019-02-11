#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"




int main(void)//как же я задолбался воевать с Тревисом. Я не понимаю, чего он от меня хочет.
{
	unsigned int maxlen = 0, number = 0;
	number = seqCollatz(&maxlen);
		
	printf("%u %u", number, maxlen);

	getchar();
	return 0;
}
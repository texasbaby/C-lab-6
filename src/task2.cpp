#define N 1000000

int curr_len = 0; // длинна последовательности для текущего числа

unsigned int collatz(unsigned long long num)
{
	if (num != 1)
	{
		curr_len++;
		if (num % 2 != 0)
			num = num * 3 + 1;
		else
			num = num / 2;
		collatz(num);
	}
	else
		curr_len++;

	return curr_len;
}
unsigned int seqCollatz(unsigned int *maxlen)
{
	unsigned long long num = 0; // текущее число
	unsigned int max_num = 0; // число с максимальной длинной последовательности Коллатца

	for (num = 2; num <= N; num++)
	{
		collatz(num);
		if (*maxlen < curr_len)
		{
			*maxlen = curr_len;
			max_num = (unsigned int)num;
		}
		curr_len = 0;
	}
	return max_num;
}
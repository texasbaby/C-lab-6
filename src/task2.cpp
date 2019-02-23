typedef unsigned long long ULL;
typedef unsigned int UI;


unsigned int collatz(unsigned long long num) // Collatz sequence length for a number 
{
	if (num == 1)
		return 1;
	if (num % 2 == 0)
		return collatz(num / 2) + 1;
	else
		return collatz(3 * num + 1) + 1;
}

unsigned int seqCollatz(unsigned int *maxlen) // search max length of sequence and it's number 
{
	ULL maxNum = 0, num = 0;
	UI len = 0;
	
	for (num = 2;num <= 1000000;num++)
	{
		len = collatz(num);
		
		if (len > *maxlen)
		{
			*maxlen = len;
			maxNum = num;
		}
	}
	return maxNum;
}




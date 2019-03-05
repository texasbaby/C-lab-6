long long sumC(char *arr, int len)
{
	int i;
	long long sum = 0;

	for (i = 0; i < len; i++)
		sum += arr[i];

	return sum;
}

long long sumR(char *arr, int len)
{
	long long sum = 0;

	if (len == 1)
		return *arr;
	else
		return sum = sumR(arr, len / 2) + sumR(arr + len / 2, len - len / 2);
}
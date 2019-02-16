long long sumr = 0;

long long sumC(char *arr, int len)
{
	long long sum = 0;
	for (int i = 0; i < len; i++)
		sum += arr[i];
	return sum;
}

long long sumR(char *arr, int len)
{
	if (len == 1)
		return *arr;
	else
		return sumR(arr, len/2)+sumR(arr+ len/2, len - len/2);

}
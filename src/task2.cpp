unsigned int collatz(unsigned long long num) //функция, возвращающая длину последовательности Коллатца для числа num
{
    if(num %2 == 0)
        return collatz(num/2) + 1;
    else if(num == 1)
        return 1;
    else return collatz(3*num+1) + 1;
}

unsigned int seqCollatz(unsigned int *maxlen) // функция, возвращающая число и записывающую по адресу maxlen длину его последовательности
{
    unsigned long long numX = 0;              // искомое число Х, дающее самю длинную последовательность

    for(unsigned long long num = 2; num <= 1000000; num++)
    {
        unsigned int len = collatz(num);
        if( len > *maxlen)
        {
            *maxlen = len;
            numX = num;
        }
    }
    return numX;
}



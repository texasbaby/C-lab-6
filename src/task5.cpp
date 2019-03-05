unsigned long long fib1(int N) // нахождение N-ого члена ряда Фибоначчи с помощью рекурсии
{
    if(N > 2)
        return fib1(N - 1) + fib1(N - 2);
    else return 1;
}

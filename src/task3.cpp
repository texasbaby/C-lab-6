int count = 0;

char* int2str(char *buf, unsigned int value) // функция, переводящая число в строку
{

    int temp = 0;
    int ccount = count;
    if(value > 10)              // значит ещё есть разряды
    {                           // разбиваем число на цифры по разрядам
        temp = value %10;
        count++;
        int2str(buf, value/10);
    }
    else temp = value %10;

    buf[count - ccount] = temp + '0';  // поскольку строка - добавляем \0
    buf[count + 1] = '\0';
    return buf;
}

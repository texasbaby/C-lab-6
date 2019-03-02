#ifndef TASK2_H
#define TASK2_H

typedef unsigned long long ULL;
unsigned int collatz(ULL num); 
//функция, возвращающая длину последовательности Коллатца для числа num
unsigned int seqCollatz(unsigned int *maxlen);
//функция, возвращающая число и записывающую по адресу maxlen длину

#endif
/*
 Задача №1
 
 Написать программу, которая формирует в двумерном символьном
 массиве фрактальное изображение и выводит его на консоль (см.рисунок)
 Фрактал
 
 Пояснение
 
 Фракталом обычно называют изображение, любая часть которого подобна целому. Поэтому, при рисовании фрактала используют рекурсию и некоторый масштабный коэффициент, определяющий размер изображения.
 
 В задаче надо реализовать рекурсивную функцию drawFractal, которая формирует изображение в массиве, расположив его центр в точке с заданными координатами. Переменная size задает масштаб изображения: 0 соответствует одному символу, а >0 означает увеличение масштаба изображенеия.
 
 Состав
 
 Программа должна состоять из функций:
 
 - void drawFractal(char (*arr)[M], int x,int y, int size) - функция, формирующая изображение
 в массиве arr, центр задается координатами (x,y) и масштаб изображения задается size
 - main() - организация ввода строки
 Создаются три файла: task1.h,task1.cpp,main1.cpp.
 */

#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main(){
    char arr[M][M] = {'\0'}; // массив для фрактала
    int size = 3; // масштаб полученного изображения
    int x = M/2; // центральная точка по оси  x
    int y = M/2; // центральная точка по оси y
    // массив нужно очистить пробелами, иначе изображение съезжает в некоторых компиляторах
    cleanArray(arr);
    drawFractal(arr, x, y, size);
    printFractal(arr);
    
}

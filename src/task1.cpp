#include <stdio.h>
#include "task1.h"
// функция проходит по массиву и заполняет его пробелами, иначе ничего не получится
void cleanArray(char (*arr)[M]){
    for(int i = 0; i < M; i++)
        for(int j = 0; j < M; j++)
            arr[i][j] = ' ';
}

/*Функция определяющая сдвиг по осям для каждого цикла рекурсии.
 Принимает значения масштаба рекурсии (size -1 в n) и 3 в m.
 Передаваемое число 3 ипользуется потому, что при каждом выполнении функции draeFractal
 отрисовывается изображение сотоящее из трех подряд идущих звезд как по вертикале, так и по горизонтале.
 Соответственно, для отрисовки следуюего шага нам необходимо отступить на три символа от X0 и Y0,
 чтобы нарисовать новые X0 и Y0.
 При этом, для отрисовки третьего ихображения, нам необходмо отступить на 6 символов (т.е. на 3*2)*/
int shiftStep(int m, int n){
    int shift = 1;
    for(int i = 0; i < n; i++)
        shift = shift*m;
    return shift;
}

void drawFractal(char (*arr)[M], int x,int y, int size){
    int shift = shiftStep(3, size - 1);
    if (size == 0){
        arr[x][y] = '*';
    } else {
        drawFractal(arr,x, y, size - 1);
        drawFractal(arr, x + shift, y, size - 1);
        drawFractal(arr, x - shift, y, size - 1);
        drawFractal(arr, x, y + shift, size - 1);
        drawFractal(arr, x, y - shift, size - 1);
    }

}

void printFractal(char (*arr)[M]){
    for(int i = 0; i<M; i++){
        for(int j = 0; j < M; j++)
            printf("%c", arr[i][j]);
        printf("\n");
    }
}

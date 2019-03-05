/*
Написать программу, которая находит выход из лабиринта
 
 Пояснение
 
 лабиринт задаётся в виде двумерного символьного массива;
 начальная позиция - в центре;
 программа определяет (по символу),что находится вокруг текущей ячейки;
 если ячейка свободна, программа перемещается в данную точку и всё повторяется;
 программа узнаёт о выходе из лабиринта при пересечении его внешней границы.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "task7.h"

extern char arr[10][30] = {'\0'};
extern char vizited[10][30] = {'\0'};

int main(){
    //координаты старта
    int startX = 0;
    int startY = 0;
    
    FILE * fp = fopen("labirint.txt", "r");
    if (fp==NULL)
        puts("FILE ERROR!");
    for (int i=0; arr[i][0]=='\0'; i++){
        fgets(arr[i], 30, fp);
    }
    
    for(int i=0; arr[i][0]!='\0'; i++){
        for(int j=0; arr[i][j]!='\0';j++){
            if(arr[i][j]=='\n')
                arr[i][j] = '\0';
            if(arr[i][j] == 'X'){
                startX = j;
                startY = i;
            }
                }
    }
    
    for (int i=0; arr[i][0]!='\0'; i++){
        printf("%s\n", arr[i]);
    }
    
    place(startX, startY);
    
    for (int i=0; arr[i][0]!='\0'; i++){
        printf("%s\n", arr[i]);
    }
    
    return 0;
    
    
    
    
}

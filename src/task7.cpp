//
//  task7.cpp
//  C-lab-6
//
//  Created by Антон Петров on 02/03/2019.
//  Copyright © 2019 Антон Петров. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "task7.h"

void printMatrix(char arr[][30]){
    for (int i=0; arr[i][0]!='\0'; i++){
        printf("%s\n", arr[i]);
    }
}

void clrscr(void)
{
    printf("\033[2J"); /* Clear the entire screen. */
    printf("\033[0;0f\n"); /* Move cursor to the top left hand corner*/
}


void place(int x, int y){
    extern char arr[10][30];
    clrscr();
    arr[y][x] = '.';
    if((x == 0) || (y==0) || (x==27) || (y==8)){
        
        printMatrix(arr);
        printf("Exit is founded!!!\n");
        exit(0);
    }
    
    printMatrix(arr);
    
    //unsigned int retTime = time(0) + 1;
    //while (time(0) < retTime);
    
    if(arr[y+1][x] == ' '){
        place(x, y+1);
    }
    if(arr[y-1][x] == ' '){
        place(x, y-1);
    }
    if(arr[y][x+1] == ' '){
        place(x+1, y);
    }
    if(arr[y][x-1] == ' '){
        place(x-1, y);
    }
    
    
    
}

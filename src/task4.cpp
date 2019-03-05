//
//  task4.cpp
//  C-lab-6
//
//  Created by Антон Петров on 15/02/2019.
//  Copyright © 2019 Антон Петров. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
long long sumC(char *arr,int len){
    long long sum = 0;
    for (int i = 0; i<len; i++){
        sum += arr[i];
    }
    return sum;
}

long long sumR(char *arr,int len){
   if (len == 1)
       return arr[0];
    else
        return (long long) (arr[len-1] + sumR(arr, len - 1));
}

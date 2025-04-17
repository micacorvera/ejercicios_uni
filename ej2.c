//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, suma=0;

    for(i=100;i>=50;i=i-5) {
        suma=suma+i;
        printf("%d + ",i);
    }
    printf("\n %d",suma);
    return 0;
}
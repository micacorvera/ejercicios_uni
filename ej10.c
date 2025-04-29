//
// Created by WIN10 on 29/4/2025.
//
#include <stdio.h>

int main() {
    int i, cantPrimos;

    for (i=0; i<100; i++) {
        if (i%5!=0 && i%3!=0 && i%2!=0) {
            printf("%d \n", i);
            cantPrimos++;
        }
    }
        printf("cantidad de numeros primos: %d", cantPrimos);
    return 0;
}
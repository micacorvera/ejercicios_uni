//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, num, suma, prom, cant;
    printf("Ingrese 50 numeros enteros \n");

    for(i=0;i<5;i++) {
        scanf("%d", &num);
        if(num%2==0) {
            cant++;
            suma=suma+num;
            prom=suma/cant;
        }
    }
    printf("%d", cant);
    printf("%d", prom);
    return 0;
}
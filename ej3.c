//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, num, suma, prom, cant=0;
    printf("Ingrese 50 numeros enteros \n");
    for(i=0;i<5;i++) {
        scanf("%d", &num);
        if(num%2==0) {
            cant++;
            suma=suma+num;
            prom=suma/cant;
        }
    }
    printf("%d \n", cant);
    printf("el promedio de los numeros pares es: %d \n", prom);
    return 0;
}
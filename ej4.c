//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, num, suma;
    printf("Ingrese hasta que numero natural quiere sumar: \n");
    scanf("%d", &num);
    for(i=0;i<=num;i++) {
        suma=suma+i;
        printf("%d + ", i);
    }
    printf("\n =%d ", suma);
    return 0;
}
//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, N, num, suma3, cant=0, pares=0;
    printf("Ingrese un numero natural: \n");
    scanf("%d", &N);
    printf("Ingrese %d numeros naturales \n", N);
    if (N>0){
        printf("Ingrese %d numeros naturales \n", N);
        for(i=0;i<N;i++) {
            scanf("%d", &num);
            if(num%3==0) {
                suma3+=num;
            }
            if(num%5==0) {
                cant++;
            }
            if(i%2==0) {
                pares+=num;
            }
        }
        }
        else{
             printf("El valor ingresado no es un numero natural");
        }
        
    printf("sumatoria de los numeros multiplos de 3: %d \n", suma3);
    printf("cantidad de multiplos de 5: %d \n", cant);
    printf("Numeros ingresados en orden par: %d \n", pares);
    return 0;
}

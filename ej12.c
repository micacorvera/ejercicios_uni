//
// Created by WIN10 on 29/4/2025.
//
#include <stdio.h>

int main() {
    int i, N, num, mayor, menor, media, suma=0, neg=0, porcentajePos, cantNeg=0, cantPos=0;

    printf("Cuantos numeros desea introducir? \n");
    scanf("%d", &N);
    printf("Ingrese los %d numeros \n", N);
    for (i=1; i<=N; i++) {
        scanf("%d", &num);
        suma+=num;
        if (i==1) {
            mayor = num;
            menor = num;
        } else if (num>mayor) {
            mayor=num;
        } else if (num<menor) {
            menor = num;
        }
        if(num>=0) {
            cantPos++;
            porcentajePos=(cantPos*100)/N;
        } else {
            neg+=num;
            cantNeg++;
        }
    }
    printf("El numero mayor es %d \n", mayor);
    printf("El numero menor es %d \n", menor);
    printf("La media aritmetica es: %d \n", suma/N);
    printf("Porcentaje de los positivos: %d % \n", porcentajePos);
    printf("promedio de los negativos: %d \n", neg/cantNeg);

    return 0;
}
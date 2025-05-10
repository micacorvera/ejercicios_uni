//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, sumaEdad=0, sumaEst=0;
    float edad, estatura, promEdad, promEst, cantEdad=0, cantEst=0;
    printf("Ingrese las edades y estaturas de los alumnos del curso: \n");
    for(i=1;i<=6;i++) {
       printf("Edad alumno %d:", i);
        scanf("%f", &edad);
        cantEdad++;
        sumaEdad=sumaEdad+edad;
        promEdad=sumaEdad/cantEdad;
        printf("Estatura alumno (en cm) %d:", i);
        scanf("%f", &estatura);
        cantEst++;
        sumaEst=sumaEst+estatura;
        promEst=sumaEst/cantEst;
    }
    printf("Suma de las estaturas: %d", sumaEst);
    printf("Estatura promedio: %f", promEst);
    return 0;
}
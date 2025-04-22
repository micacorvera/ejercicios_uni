//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, sumaEdad, sumaEst;
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
        /*if(nota<4) {
            aplazados++;
        } else if(nota>7 && ordenLeg==ordenNota) {
            printf("El alumno con legajo %d ha promocionado \n", legajo);
        } else if (nota>=4 && nota<=7) {
            cantFinal++;
            sumaFinal=sumaFinal+nota;
            promFinal=sumaFinal/cantFinal;
        }*/
    }
    //printf("Suma de las edades: %d", sumaEdad);
    printf("Suma de las estaturas: %d", sumaEst);
    //printf("Edad promedio: %f \n", promEdad);
    printf("Estatura promedio: %f", promEst);
    return 0;
}
//
// Created by WIN10 on 17/4/2025.
//
#include <stdio.h>

int main() {
    int i, nota, legajo, aplazados=0, ordenLeg, ordenNota, sumaFinal=0, cantFinal=0;
    float promFinal;
    printf("Ingrese los legajos y las notas de los alumnos: \n");
    for(i=1;i<=6;i++) {
        printf("Legajo alumno %d:", i);
        scanf("%d", &legajo);
        ordenLeg=i;
        printf("Nota alumno %d:", i);
        scanf("%d", &nota);
        ordenNota=i;
        if(nota<4) {
            aplazados++;
        } else if(nota>7 && ordenLeg==ordenNota) {
            printf("El alumno con legajo %d ha promocionado \n", legajo);
        } else if (nota>=4 && nota<=7) {
            cantFinal++;
            sumaFinal=sumaFinal+nota;
            promFinal=sumaFinal/cantFinal;
        }
    }
    printf("cantidad de aplazados: %d \n", aplazados);
    printf("promedio de los cursados: %5.2f", promFinal);
    return 0;
}
#include<stdio.h>

int main(){

    int cantHora, cod, i, codMax, cantMin20;
    float impoHora, sueldo, sueldoMax, sueldoTotal;

    printf("Ingrese el valor de la hora: $");
    scanf("%f", &impoHora);

    for(i=0; i>10; i++){
        printf("Codigo del empleado %d", i);
        scanf("%d", cod);
        printf("\nCantidad de horas trabajadas por el empleado %d:", i);
        scanf("%d", cantHora);

        sueldo=cantHora*impoHora;
        sueldoTotal=

        printf("Cod: %d, sueldo: %f", cod, sueldo);

        if(i==1){
            sueldoMax=sueldo;
            codMax=cod;
        } else {
            if(sueldo>sueldoMax){
                sueldoMax=sueldo;
                codMax=cod;
            }
        }

        if(cantHora<20){
            cantMin20++;
        }
    }

}

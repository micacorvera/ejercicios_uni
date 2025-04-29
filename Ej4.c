#include <stdio.h>

int main(){
    int pos=0, cont=0, ensyMax, ensyMin, ensy;
    float temp, tempMax, tempMin;

    printf("Ingrese valores de temperatura. Ingrese '-50' para finalizar \n");
    scanf("%f", &temp);
    printf("Numero de ensayo: ");
    scanf("%d", &ensy);

    while (temp!=(-50)){
        pos++;
        if (pos==1){
            tempMax = temp;
            tempMin = temp;
            ensyMax = ensy;
            ensyMin = ensy;
        } else if (temp>tempMax){
            tempMax=temp;
            ensyMax = ensy;
        } else if (temp<tempMin){
            tempMin = temp;
            ensyMin = ensy;
        }
        printf("Ingrese valores de temperatura. Ingrese '-50' para finalizar \n");
        scanf("%f", &temp);
        printf("Numero de ensayo: \n");
        scanf("%d", &ensy);
    }


    if(pos==0){
        printf("No se ingreso ninguna temperatura \n");
    } else {
        printf("La temperatura minima es: %f y su numero de ensayo es %d \n", tempMin, ensyMin);
        printf("La temperatura maxima es: %f y su numero de ensayo es %d\n", tempMax, ensyMax);
    }

    return 0;
}

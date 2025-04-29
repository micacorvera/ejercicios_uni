/* confeccionar un programa para ingresar diversos valores de temperatura hasta que aparezca uno igual a cero
calcular e informar el promedio de los valores positivos ingresados, sin considerar el cero.*/

#include <stdio.h>

int main(){
    int cantTemp=0;
    float temp, sumaTemp=0;

    printf("Ingrese un valor de temperatura \n");
    scanf("%f", &temp);

    while (temp!=0){
            if (temp > 0){
            cantTemp++;
            sumaTemp+=temp;
        }
        printf("Ingrese un valor de temperatura \n");
        scanf("%f", &temp);
    }
    if (cantTemp==0){
        printf("No se ingreso ningun valor \n");
    } else {
        printf("El promedio de temperaturas positivas es: %8.2f", sumaTemp/cantTemp);
    }

    return 0;
}

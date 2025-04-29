#include <stdio.h>

int main(){
    int nro, sum=0, cant=0;

    printf("Ingrese un numero positivo, cualquier negativo para finalizar \n");
    scanf("%d", &nro);

    while(nro>=0){
        sum+=nro;
        cant++;
        printf("Ingrese un numero positivo, cualquier negativo para finalizar\n");
        scanf("%d", &nro);
    }
    if (cant==0){
        printf("No se ingresaron datos");
    } else
    printf("La suma de los positivos es: %d", sum);

    return 0;
}

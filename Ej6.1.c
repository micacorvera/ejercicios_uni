#include <stdio.h>
int estaDentroDelRango(int, int, int);
int leerYValidar (int, int);
int esPar (int);
int main(){
    int cont=0, cantPar=0, cont1=0, cont12=0, num;
    float suma12=0, prom12;

    num=leerYValidar(99, 2000);
    while (num!=99){
        cont++;
        if (estaDentroDelRango(100, num, 500)==1){
            cont1++;
        }
        if (esPar(num)==1 && estaDentroDelRango(500, num, 1200)==1){
            cantPar++;
        }
        if (estaDentroDelRango(1200, num, 2000)==1){
            cont12++;
            suma12+=num;
            prom12=suma12/cont12;
        }
        num = leerYValidar (99, 2000);
    }
    if (cont >0){
        printf("Cantidad de numeros entre 100 y 500: %d \n", cont1);
        printf("Cantidad de numeros pares entre 500 y 1200: %d \n", cantPar);
        if (cont12 >0){
             printf("Promedio de numeros entre 1200 y 2000: %f \n", prom12);
        }
        else {
            printf("No se ingresaron datos");
        }
    }
    return 0;
}

int leerYValidar(int min, int max){
    int numero, valor;
    do{
        printf("Ingrese números entre el 100 y 2000 \n");
        scanf("%d", &numero);
        valor=estaDentroDelRango(min, numero, max);
    }while(valor==0);
    printf("Valor= %d \n", valor);
    return numero;
}
int estaDentroDelRango(int min, int num, int max){
    int valor=0;
    if (num>=min && num<max)
        valor = 1;
    return valor;
}
int esPar (int num){
    int valor;
    if (num%2==0)
        valor = 1;
    return valor;
}

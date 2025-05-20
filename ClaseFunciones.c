#include <stdio.h>

int suma(int, int);
int ingresaNumeroPar(void);
void mensajeBienvenida (void);
float promedio (float, int);

int main(){
    int n1, n2, resultado, i;
    float sum, prom, totalSuma=0;

    mensajeBienvenida();
    /*printf("Ingrese el 1er numero: \n");
    scanf("%d", &n1);
    printf("Ingrese el 2do numero: \n");
    scanf("%d", &n2);*/
    for (i=1; i<=3; i++){
        printf("Dupla n %d \n", i);
        n1 = ingresaNumeroPar();
        n2 = ingresaNumeroPar();
        sum=suma(n1, n2);
        totalSuma+=sum;

        printf("El resultado de la suma es %f \n", sum);
        printf("El promedio de los numeros ingresados es: %f \n", promedio(sum, 2));
    }

    return 0;
}

int suma (int a, int b){
    int resu;
    resu=a+b;

    return resu;
}

int ingresaNumeroPar (){
    int numPar;

    do{
        printf("Ingrese un numero par \n");
        scanf("%d", &numPar);
    }while(numPar%2!=0);

    return numPar;
}
float promedio (float suma, int cant){
    float prom;
    prom=suma/cant;
    return prom;
}

void mensajeBienvenida (){
    printf("Bienvenido a programacion inicial \n");
}

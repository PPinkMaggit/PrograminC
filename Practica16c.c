#include<stdio.h>
#include<stdlib.h>
/*Desarrollar un programa con dos funciones aparte de la main. La primer solicite el
ingreso de un entero y muestre el cuadrado de dicho valor. La segunda que solicite
la carga de dos valores y muestre el producto de los mismos.
Llamar desde la main a ambas funciones.*/
void cuadrado() {
    int valor,cuad;
    printf("Ingrese un valor: \n");
    scanf("%d",&valor);
    cuad=valor*valor;
    printf("El cuadrado de %d es %d\n",valor,cuad);
}

void productos() {
    int a,b,producto;
    printf("Ingrese el primer valor: \n");
    scanf("%d",&a);
    printf("Ingrese el segundo valor: \n");
    scanf("%d",&b);
    producto=a*b;
    printf("%d * %d = %d\n",a,b,producto);
}

    int main() {
        cuadrado();
        productos();

    return 0;
    }

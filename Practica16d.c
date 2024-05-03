#include<stdio.h>
#include<stdlib.h>
/*Desarrollar una función que solicite la carga de tres valores y muestre el menor.
 Desde la función main llamar 3 veces a dicha función.*/
 void cualEsMenor() {
    int a,b,c,menor;
    printf("Ingrese el primer valor: ");
    scanf("%d",&a);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&b);
    printf("Ingrese el tercer valor: ");
    scanf("%d",&c);
    if (a < b && a < c) {
        printf("El numero menor es %d \n",a);
    }
    else {
        if ( b < a && b < c) {
            printf("El numero menor es %d\n",b);
        }
        else {
            printf("El numero menor es %d\n",c);
        }
    }
 }

 int main() {
    cualEsMenor();
    cualEsMenor();
    cualEsMenor();
 }

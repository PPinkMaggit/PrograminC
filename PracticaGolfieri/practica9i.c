#include<stdio.h>
#include<stdlib.h>

/*Realizar un programa que permita cargar dos listas de 15 valores cada una. Informar
con un mensaje cual de las dos listas tiene un valor acumulado mayor (mensajes "Lista 1 mayor",
"Lista 2 mayor", "Listas iguales")Tener en cuenta que puede haber dos o más estructuras
repetitivas en un algoritmo.*/

int main() {
    int lista1, lista2,total1,total2, x, n;
    n=15;
    x=0;
    while (x <= n) {
        printf("Ingrese un valor para la lista 1: ");
        scanf("%d",&lista1);
        x+=1;
        total1+=lista1;
    }

     x=1;
    while (x <= n) {
        printf("Ingrese un valor para la lista 2: ");
        scanf("%d",&lista2);
        x+=1;
        total1+=lista2;
    }

    if (lista1==lista2) {
        printf("Listas iguales.");
    }
    else {
        if (lista1 > lista2) {
            printf("La lista 1 es mayor a la lista 2.");
        }
        else {
            printf("La lista 2 es mayor a la lista 1.");
        }

    }

return 0;
}

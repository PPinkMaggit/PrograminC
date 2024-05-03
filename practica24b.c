#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Ingresar el nombre de 5 productos en una matriz de caracteres y sus respectivos precios en un vector paralelo de tipo float.
Mostrar cuantos productos tienen un precio mayor al primer producto ingresado (se debe contar)*/
void cargarVector(char productos[5][31],float precios[5]) {
       for (int i=0; i<5; i++) {
            printf("Ingrese nombre del articulo:");
            gets(productos[i]);
            printf("Ingrese el precio: ");
            scanf("%f",&precios[i]);
            fflush(stdin);
       }
}
void productoMayor(float precios[5]) {
    int cant=0;
    for (int i=0; i<5; i++) {
        if (precios[i] > precios[0]) {
            cant++;
        }
    }
    printf("la cantidad de articulos mayores al primero es: %d",cant);
}
int main() {
    char nombre[5][31];
    float numero[5];
    cargarVector(nombre,numero);
    productoMayor(numero);

return 0;
}

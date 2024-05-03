#include<stdio.h>
#include<stdlib.h>
/*Confeccionar un programa que permita la carga de valores enteros por teclado. Luego de ingresar el valor mostrar un
mensaje por pantalla que pida confirmar al usuario
si desea cargar otro valor ingresando los caracteres 's' o 'n'. Mostrar al final la suma de los valores ingresados.*/
int main() {
    int n1,n2,suma;
    char respuesta;
    do {
         printf("ingrese un valor: ");
        scanf("%d",&n1);

        suma+=n1;

        printf("Desea cargar otro valor? s/n \n");
        scanf(" %c",&respuesta);




    }while (respuesta=='s');

    printf("El valor de la suma de todos los valores ingresados es de: %d",suma);


return 0;
}

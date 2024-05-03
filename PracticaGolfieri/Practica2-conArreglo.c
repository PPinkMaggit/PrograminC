#include<stdio.h>
#include<stdlib.h>

    //Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
    //Nota: Este ejercicio no necesariamente se hace con arreglo. se puede hacer con variables independientes
    //como el anterior (num1, num2, num3). Lo hago asi solamente porque quiero refrescar el tema de arreglos.
    int main () {
    int vector[3], numMay;

    numMay =  0;


    for (int i = 0; i < 3; i++) {
        printf("Ingrese un valor entre 0 y 10: \n");
    //vector[i] = scanf(" %d ");<----ASI NO
       scanf("%d",&vector[i]);

    };//Cierre de for.

      for (int i = 0; i< 3; i++) {
        printf(" %d,",vector[i]);
    };//Cierre de for.

    printf("\n");

    for (int i = 0; i < 3; i++) {
        if (vector[i] > numMay) {
            numMay = vector[i];
        };//cierre de if.
    };//Cierre de for.

    printf("El numero mayor es el numero: %d ",numMay);

    return 0;

    };

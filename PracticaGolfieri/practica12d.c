/*Cargar un vector de 10 elementos y verificar posteriormente
si el mismo está ordenado de menor a mayor*/
#include<stdio.h>
#include<stdlib.h>
    int main() {
        int vector[10],cierto;
        cierto=0;

        for (int i=0; i < 10; i++) {
            printf("Ingrese un valor: ");
            scanf("%d",&vector[i]);
        }

        for (int i=0; i < 9; i++) {
            if ( vector[i] < vector[i+1] ) {
                cierto=1;
            }
        }

        if (cierto == 0) {
            printf("No esta ordenado.");
        }
        else {
            printf("Esta ordenado");
        }


    return 0;
    }

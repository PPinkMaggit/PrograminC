#include<stdio.h>
#include<stdlib.h>
/*Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 valores ingresados*/
    int main(){
        int n,suma;

        suma=0;

        for (int i=0; i < 10; i++) {
            printf("ingrese un valor: ");
            scanf("%d",&n);
            if (i >= 5 ) {
                suma+=n;
            }
        }
        printf("Suma de los 5 ultimos numeros: %d",suma);

    }

#include<stdio.h>
#include<stdlib.h>
/*Realizar un programa que pida la carga de dos vectores numéricos enteros de 4 elementos. Obtener
la suma de los dos vectores, dicho resultado guardarlo en un tercer vector del mismo tamaño. Sumar componente a componente.
*/
    int main() {
    int vector1[4],vector2[4],vector3[4];

    //Cargar vector
    printf("Vector 1: \n");
    for (int i=0; i < 4; i++) {
        printf("Ingrese un valor: ");
        scanf("%d",&vector1[i]);
    }
    //Cargar segundo vector
    printf("Vector 2: \n");
    for (int i=0; i < 4; i++) {
        printf("Ingrese un valor: ");
        scanf("%d",&vector2[i]);
    }
    for (int i=0; i < 4; i++) {
         vector3[i]=vector1[i]+vector2[i];
        }
        printf("Vector 3:  \n");

    for (int i=0; i < 4; i++) {
        printf("%d,", vector3[i]);
    }



    return 0;
    }

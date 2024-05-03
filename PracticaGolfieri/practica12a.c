#include<stdio.h>
#include<stdlib.h>
/*Desarrollar un programa que permita ingresar un vector de 8 elementos, e informe:
El valor acumulado de todos los elementos del vector.
El valor acumulado de los elementos del vector que sean mayores a 36.
Cantidad de valores mayores a 50.*/
    int main() {
        int vector[8], acum, acumMay36, mayA50;
        acum=0;
        acumMay36=0;
        mayA50=0;
        //cargo por pantalla los elementos de vector[]
        for (int i = 0; i < 8; i++) {
            printf("Ingrese un valor: \n");
            scanf("%d",&vector[i]);
        }
        //Recorro el arreglo nuevamente en busqueda de los elementos solicitados:
        for (int i = 0; i < 8; i++) {
            acum+=vector[i];
            if (vector[i] > 36) {
                acumMay36+=vector[i];
            }
            if (vector[i] > 50) {
                mayA50+=1;
            }
        }

        printf("El total acumulado del arreglo es de: %d\n",acum);
        printf("El total acumulado de los mayores a 36 es: %d \n",acumMay36);
        printf("cantidad de numeros mayores a 50 es: %d \n",mayA50);

return 0;
}

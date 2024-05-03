#include<stdio.h>
#include<stdlib.h>
  /*Confeccionar un programa que pida por teclado tres notas de un alumno, calcule el promedio e imprima alguno de estos mensajes:
Si el promedio es >=7 mostrar "Promocionado".
Si el promedio es >=4 y <7 mostrar "Regular".
Si el promedio es <4 mostrar "Reprobado". */

    int main() {
     int nota1, nota2, nota3;
     printf("INGRESE LA PRIMERA NOTA:\n");
     scanf("%d",&nota1);
     printf("INGRESE LA SEGUNDA NOTA:\n");
     scanf("%d",&nota2);
     printf("INGRESE LA TERCERA NOTA:\n");
     scanf("%d",&nota3);

     int prom;
     prom = (nota1+nota2+nota3)/3;

     if (prom >= 7) {
        printf("PROMOCIONADO");
     }
     else {
        if (prom >= 4) {
            printf("Regular");
        }
        else {
            printf("Reprobado");
      };
     };

    return 0;
    }

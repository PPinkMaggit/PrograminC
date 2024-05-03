#include<stdio.h>
#include<stdlib.h>
    /*Se tienen las notas del primer parcial de los alumnos de dos cursos,
     el curso A y el curso B, cada curso cuenta con 5 alumnos.
    Realizar un programa que muestre el curso que obtuvo el mayor promedio general.
    */
    int main() {
       int vector1[5],vector2[5],suma1,suma2;
       float prom1,prom2;

       suma1=0;
       suma2=0;

       for (int i=0; i < 5; i++){
            printf("ingrese las notas del primer curso: ");
            scanf("%d",&vector1[i]);
            suma1+=vector1[i];
       }

       for (int i=0; i < 5; i++){
            printf("ingrese las notas del segundo curso: ");
            scanf("%d",&vector2[i]);
            suma2+=vector2[i];
       }
        prom1=suma1/5;
        prom2=suma2/5;

       if (prom1 < prom2) {
            printf("El segundo curso saco mejor promedio general.");
       }
       else {
            printf("El promedio general del primer curso fue mayor");
       }


        return 0;
    }

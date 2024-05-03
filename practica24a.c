#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Desarrollar un programa que permita cargar 5 nombres de personas y
sus edades respectivas. Luego de realizar la carga por teclado de todos los datos imprimir los nombres de las personas
 mayores de edad (mayores o iguales a 18 años)
*/
void cargarvector(char nombres[5][21],int edades[5]) {
    for (int i=0; i<5; i++) {
            printf("Ingrese el nombre: ");
            gets(nombres[i]);
            printf("Ingrese la edad: ");
            scanf("%d",&edades[i]);
            fflush(stdin);
    }
}
void mostrarvector(char nombres[5][21],int edades[5]) {
    for (int i=0; i<5; i++) {
        if (edades[i] >= 18) {
            printf("%s \n",nombres[i]);
        }
    }
}
int main() {
    char name[5][21];
    int age[5];

    cargarvector(name,age);
    mostrarvector(name,age);

return 0;
}

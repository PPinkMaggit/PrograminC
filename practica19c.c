#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Confeccionar un programa que defina dos funciones, una que permita cargar un vector de 5 elementos enteros y otra que muestre un vector de 5 elementos enteros.
En la función main definir una variable de tipo vector y seguidamente llamar a las dos funciones.*/
void cargarVector(int vec[5]) {
    for (int i=0; i < 5; i++) {
        printf("Ingrese un Elemento: ");
        scanf("%d",&vec[i]);
        }
}
void mostrarVector(int vec[5]) {
    printf("Contenido del vector: \n");
    for (int i=0; i < 5; i++) {
        printf(" %d, ",vec[i]);
    }
}
int main() {
  int vector[5];
  cargarVector(vector);
  mostrarVector(vector);
  getch();

return 0;
}

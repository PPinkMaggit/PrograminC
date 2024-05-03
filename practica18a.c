#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Confeccionar una función que le enviemos como parámetro el valor del lado de un cuadrado y nos retorne su superficie.*/
   int retornarSuperficie(int lado) {
    int superficie=lado*lado;
    return superficie;
    }
    int main() {
    int valor;
    int sup;
    printf("Ingrese el valor del lado del cuadrado:");
    scanf("%i",&valor);
    sup=retornarSuperficie(valor);
    printf("La superficie del cuadrado es %i",sup);
    getch();
    return 0;
    }

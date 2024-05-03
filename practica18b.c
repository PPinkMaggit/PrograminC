#include<stdio.h>
#include<stdlib.h>
/*Confeccionar una función que defina dos parámetros enteros y nos retorne el mayor.*/
int numeroMayor(int v1, int v2){
    int mayor;
    if (v1>v2) {
        mayor=v1;
        }
    else {
        mayor=v2;
    }
    return mayor;
}
int main() {
    int valor1,valor2;
    printf("Ingrese el primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i",&valor2);
    printf("El valor mayor es %i",numeroMayor(valor1,valor2));
    getch();
    return 0;
}

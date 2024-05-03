#include<stdio.h>
#include<stdlib.h>
/*Elaborar una función que reciba un valor entero y nos muestre desde
el 1 hasta dicho valor. Si la función recibe un valor negativo mostrar
un mensaje de error.*/
void contar(int valor) {
    if (valor < 0) {
        printf("Error");
    }
    else {
        for (int i=1; i <= valor; i++) {
        printf(" %d-",i);
        }
    }
}

int main() {
    int num;
    printf("Ingrese un valor");
    scanf("%d",&num);
    contar(num);
return 0;
}

#include<stdio.h>
#include<stdlib.h>
/*Confeccionar una función que reciba tres enteros y nos muestre el mayor de ellos.
 La carga de los valores hacerlo por teclado en la función main.*/
 void menorDetresEnteros(int a, int b, int c) {
    if (a < b && a < c) {
        printf("El menor numero es: %d",a);
    }
    else {
        if (b < c && b < a) {
          printf("El menor numero es: %d",b);
        }
        else {
            printf("El menor numero es: %d",c);
        }
    }
 }

 int main() {
    int n1,n2,n3;
    printf("ingrese 3 valores: ");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    menorDetresEnteros(n1,n2,n3);

 return 0;
 }

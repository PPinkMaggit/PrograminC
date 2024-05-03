#include<stdio.h>
#include<stdlib.h>
 /*Confeccionar un programa que solicite la carga de dos valores enteros por teclado.
  Luego solicitar que se cargue alguno de los caracteres: '+', '-', '*' o '/'.
Según el caracter ingresado proceder a mostrar la sumar, resta, multiplicación o
 división de los valores ingresados.*/
    int main() {
        int n1,n2,resultado;
        char a;

        resultado=0;

        printf("Ingrese dos valores: ");
        scanf("%d",&n1);
        scanf("%d",&n2);

        printf("Ingrese alguno de los simbolos: +,-,*,/\n");
        scanf(" %c",&a);

        if (a == '+') {
            resultado=n1+n2;
            printf("%d + %d = %d",n1,n2,resultado);
        }
         if ( a == '-') {
            resultado=n1-n2;
            printf("%d - %d = %d",n1,n2,resultado);
         }
         if (a == '*') {
            resultado=n1*n2;
            printf("%d * %d = %d",n1,n2,resultado);
         }
         if (a == '/') {
            resultado=n1/n2;
            printf("%d / %d = %d",n1,n2,resultado);
         }

    return 0;
    }

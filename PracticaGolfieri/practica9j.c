#include<stdio.h>
#include<stdlib.h>
    /*Desarrollar un programa que permita cargar n n�meros enteros y luego nos informe
    cu�ntos valores fueron pares y cu�ntos impares. Emplear el operador �%� en la condici�n
    de la estructura condicional (este operador retorna el resto de la divisi�n de dos valores,
    por ejemplo 11%2 retorna un 1):
	if (valor%2==0)         //Si el if da verdadero luego es par.*/
    int main() {
        int n, x, ent, imp, pares;
        x=1;
        imp=0;
        pares=0;
        printf("ingrese un numero: ");
        scanf("%d",&n);

        while (x <= n) {
            printf("ingrese un numero entero: ");
            scanf("%d",&ent);

            if (ent%2==0) {
                pares+=1;
            }
            else {
                imp+=1;
            }
            x+=1;
        }
        printf("Total de pares: %d \nTotal de impares: %d",pares,imp);


    return 0;
    }

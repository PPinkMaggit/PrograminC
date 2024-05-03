#include<stdio.h>
#include<stdlib.h>
/*Escribir un programa que solicite la carga de números por teclado, obtener su promedio.
Finalizar la carga de valores cuando se ingrese el valor 0.

Cuando la finalización depende de algún valor ingresado por el operador conviene el empleo de la
estructura do while, por lo menos se cargará un valor (en el caso más extremo se carga 0, que indica
la finalización de la carga de valores)*/
int main () {
    int valor,contador,suma;
    float promedio;
    contador=0;
    suma=0;

    do {

         printf("ingrese un valor: (0 finaliza)\n");
         scanf("%d",&valor);
         contador+=1;
         suma+=valor;

    } while (valor != 0);

    promedio=suma/contador;

    printf("El promedio de los numeros ingresados es: %.2f",promedio);


return 0;
}


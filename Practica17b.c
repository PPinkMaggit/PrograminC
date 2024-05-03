#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*Confeccionar un programa que solicite el pago por hora de un empleado y la cantidad
de horas trabajadas dentro de una estructura repetitiva en la función main. Elaborar
una función que reciba como parámetro el valor de la hora y la cantidad de horas trabajadas
y nos muestre el total a pagar.*/
  void algoritmo(int horas,float costoHora) {
    float sueldo = horas*costoHora;
    printf("Total a pagar: %d",sueldo);
  }
    int main() {
    float costoHora;
    int cantidadHoras;
    char opcion;
    do {
        printf("Ingrese cuanto se le paga por hora:");
        scanf("%f",&costoHora);
        printf("Cuantas horas trabajo:");
        scanf("%i",&cantidadHoras);
        calcularSueldo(costoHora, cantidadHoras);
        printf("Desea calcular los datos de otro empleado[s/n]:");
        scanf(" %c",&opcion);
    } while (opcion=='s');
    getch();
    return 0;
    }

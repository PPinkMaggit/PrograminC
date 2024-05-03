#include<stdio.h>
#include<stdlib.h>
/*Realizar la carga de valores enteros por teclado y sumarlos. Cada vez que se carga un valor pedir al
operador que ingrese si quiere cargar otro valor ingresando una 's' o 'S' (minúscula o mayúscula)*/
int main() {
   int valor,suma;
   char a;

   suma=0;

   do {
        printf("Ingresar valor: ");
        scanf("%d",&valor);
        printf("Continuar? S/N \n");
        scanf(" %c",&a);
        suma+=valor;

   } while (a=='s' || a =='S');

   printf("Total de la suma: %d",suma);

return 0;
}

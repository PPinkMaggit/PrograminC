#include<stdio.h>
#include<stdlib.h>
/*Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de multiplicar del mismo (los primeros 12 t�rminos)
Ejemplo: Si ingreso 3 deber� aparecer en pantalla los valores 3, 6, 9, hasta el 36.*/
int main() {
    int num,result;
    printf("Ingrese un numero: ");
    scanf("%d",&num);

    for (int i = 0; i <= 12; i++) {

        result=num*i;
        printf("%d x %d = %d \n",num,i,result);
    }

return 0;
}

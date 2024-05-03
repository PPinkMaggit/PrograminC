#include<stdio.h>
#include<stdlib.h>
///Concepto de funciones - Programación estructurada
/*[valor que retorna]   [nombre de la función] ([parámetros de la función])
{
    [altoritmo]
}
Confeccionar un programa que muestre una presentación en pantalla del programa. Solicite
la carga de dos valores y nos muestre la suma. Mostrar finalmente un mensaje de despedida del programa.
Implementar estas actividades en tres funciones.*/
void presentacion() {
    printf("************************************************\n");
    printf("Este programa permite la carga de dos valores\nY muestra la suma.\n");
    printf("************************************************\n");
}
void operacion() {
    int a,b,res;
    printf("Ingrese el primer valor: \n");
    scanf("%d",&a);
    printf("Ingrese el segundo valor: \n");
    scanf("%d",&b);
    res=a+b;
    printf("%d + %d = %d\n",a,b,res);
}
void finalizacion() {
    printf("************************************************\n");
    printf("Fin, gracias por usarme n.n/\n");
    printf("************************************************\n");
}

int main() {

    presentacion();
    operacion();
    finalizacion();

return 0;
}

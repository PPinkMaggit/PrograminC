/// Funciones con parámetros de tipo int, float y char
/*
[valor que retorna]   [nombre de la función] ([parámetros de la función])
{
    [altoritmo]
}
*/
#include<stdio.h>
#include<conio.h>

void imprimirMayor(int v1,int v2)
{
    if (v1>v2)
    {
        printf("El mayor es %i",v1);
    }
    else
    {
        printf("El mayor es %i",v2);
    }
}


int main()
{
    int valor1,valor2;
    printf("Ingrese primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese segundo valor:");
    scanf("%i",&valor2);
    imprimirMayor(valor1,valor2);
    getch();
    return 0;
}

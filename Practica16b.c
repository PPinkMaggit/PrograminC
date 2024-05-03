#include<stdio.h>
#include<conio.h>

void cargaSuma()
{
    int valor1,valor2,suma;
    printf("Ingrese el primer valor:");
    scanf("%i",&valor1);
    printf("Ingrese el segundo valor:");
    scanf("%i",&valor2);
    suma=valor1+valor2;
    printf("La suma de los dos valores es: %i",suma);
}

void separacion()
{
    printf("\n*******************************\n");
}


int main()
{
    cargaSuma();
    separacion();
    cargaSuma();
    separacion();
    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<string.h>
//Ingresar por teclado una palabra. Mostrar luego por pantalla la cantidad de letras que tiene.
//funci�n: strlen
int main()
{
    char palabra[31];
    printf("Ingrese una palabra:");
    gets(palabra);
    int cant=strlen(palabra);
    printf("La palabra %s tiene %i letras",palabra,cant);
    getch();
    return 0;
}

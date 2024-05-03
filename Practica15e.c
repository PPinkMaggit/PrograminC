#include<stdio.h>
#include<conio.h>
#include<string.h>
/*Confeccionar un programa que pida ingresar el nombre de usuario y clave en dos string.
 Mostrar un mensaje "Correcto" si se ingresa como clave la cadena "abc123".*/
int main()
{   char usuario[20],clave[6];

    printf("Ingrese nombre de usuario: ");
    gets(usuario);

    printf("Ingrese password: ");
    gets(clave);

    if (strcmp(clave,"abc123")==0) {
        printf("Correcto");
    }
    else {
        printf("Incorrecto");
    }


    return 0;
}

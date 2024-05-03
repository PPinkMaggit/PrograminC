/*Declarar un registro que permita almacenar el codigo, descripcion y precio de un producto. Luego definir dos
variables de dicho tipo, cargarlas e imprimir el nombre del producto que tiene mayor precio.*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct producto {
    int codigo;
    char descripcion[31];
    float precio;
};
int main() {
    struct producto pro1,pro2;
    printf("Ingrese el codigo del producto: ");
    scanf("%d",&pro1.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion:");
    gets(pro1.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro1.precio);
    printf("Ingrese el codigo del producto: ");
    scanf("%d",&pro2.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion:");
    gets(pro2.descripcion);
    printf("Ingrese el precio:");
    scanf("%f",&pro2.precio);

    if (pro1.precio>pro2.precio)
    {
        printf("El producto %s tiene un precio mayor",pro1.descripcion);
    }
    else
    {
        if (pro2.precio>pro1.precio)
        {
            printf("El producto %s tiene un precio mayor",pro2.descripcion);
        }
        else
        {
            printf("Tienen igual precio");
        }
    }
    getch();

return 0;
}

/*A diferencia de vectores y matrices los registros deben declararse y luego definir variables de dicho tipo.

Veamos la sintaxis para declarar un registro en el lenguaje C:

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
}; //obligatorio el punto y coma*/

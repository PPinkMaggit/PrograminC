#include<stdio.h>
#include<stdlib.h>
/*Realizar un programa que solicite la carga de la edad y sexo de dos personas. Luego mostrar
la edad y sexo de la persona mayor. Para almacenar el sexo definir variables de tipo char donde se
almacenará el caracter 'm' o 'f' indicando si es del sexo masculino o femenino.*/
int main() {
    int edad1,edad2;
    char sexo1,sexo2;

    printf("Ingrese edad y sexo de la primer persona: \n");
    scanf("%d",&edad1);
    scanf(" %c",&sexo1);

    printf("Ingrese la segunda edad y sexo de la primer persona: \n");
    scanf("%d",&edad2);
    scanf(" %c",&sexo2);

    if (edad1 > edad2 ) {
        printf(" %d , %c ",edad1,sexo1);
    }
    else {
        printf(" %d , %c ",edad2,sexo2);
    }

return 0;
}

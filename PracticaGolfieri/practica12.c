#include<stdio.h>
#include<stdlib.h>
 /*Escribir un programa que solicite ingresar 10 notas de alumnos y nos informe
cuántos tienen notas mayores o iguales a 7 y cuántos menores.*/
int main() {
    int nota, mayA7, menA7;

    menA7=0;
    mayA7=0;

    for (int i = 0; i < 10; i ++) {
        printf("Ingrese la nota del alumno: ");
        scanf("%d",&nota);
    if (nota >= 7 ) {
        mayA7+=1;
    }
    else {
        if (nota < 7 ) {
            menA7+=1;
            }
        }
    }

    printf(" %d ; %d ",mayA7,menA7);

return 0;
}

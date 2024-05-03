#include<stdio.h>
#include<stdlib.h>
/*En una empresa trabajan n empleados cuyos sueldos oscilan entre $100 y $500,
realizar un programa que lea los sueldos que cobra cada empleado e informe cuántos empleados cobran
 entre $100 y $300 y cuántos cobran más de $300. Además el programa deberá informar el
  importe que gasta la empresa en sueldos al personal.*/


int main() {
    int n,x, sueldos, empMenos, empMay, totalGast;

    printf("Ingrese la cantidad de empleados: ");
    scanf("%d",&n);

    x=1;
    empMenos=0;
    empMay=0;
    sueldos=0;
    totalGast=0;

    while (x <= n) {
        printf("ingrese el sueldo del empleado: ");
        scanf("%d",&sueldos);
        totalGast+=sueldos;

        x+=1;
        if (sueldos > 100 && sueldos < 300) {
            empMenos+=1;
        }
        else {
            if ( sueldos > 300 ) {
                empMay+=1;
            }
        }

    }
    printf("total de empleados con sueldo entre 100 y 300: %d \n",empMenos);
    printf("total de empleados con sueldo mayor a 300: %d \n",empMay);
    printf("Total de importe de la empresa en sueldo: %d \n",totalGast);

}

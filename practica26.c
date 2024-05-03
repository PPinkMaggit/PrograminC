#include<stdio.h>
#include<string.h>
#include<conio.h>
#define FILAS 4
#define COLM  3
/*Se tiene la siguiente información:
· Nombres de 4 empleados (matriz de tipo char)
· Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses (matriz de tipo float)
Confeccionar el programa para:
a) Realizar la carga de la información mencionada.
b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
Utilizar macros para definir la cantidad de filas y columnas de las estructuras de datos.*/
void nombreEmpleados(char nombre[FILAS][31]) {
    for (int i=0; i<FILAS; i++) {
        printf("Ingrese el nombre del empleado: ");
        gets(nombre[i]);
    }
}
void matrizSueldo(float sueldos[FILAS][COLM]) {
    for (int i=0; i<FILAS; i++) {
        for (int j=0; j<COLM; j++) {
            printf("Ingrese sueldo del empleado %d en el mes %d: ",i,j);
            scanf("%f",&sueldos[i][j]);
        }
    }
}
void mostrarMatriz(char nombre[FILAS][31],float sueldos[FILAS][COLM]) {
    for (int i=0; i<FILAS; i++) {
        printf("Empleado %s :",nombre[i]);
        for (int j=0; j<COLM; j++) {
            printf(" %f,",sueldos[i][j]);
        }
        printf("\n");
    }

}
void totalSueldo(float sueldos[FILAS][COLM], float vector[FILAS]) {
    float contador=0;
    for (int i=0; i<FILAS; i++) {
        for (int j=0; j<COLM; j++) {
                contador=contador+sueldos[i][j];
        }
        vector[i]=contador;
        contador=0;
        printf("%f, ",vector[i]);
    }

}
void mayorSueldo(float vector[FILAS]) {
    float mayor=vector[0];
    for (int i=0; i<FILAS; i++) {
        if (vector[i]>mayor) {
            mayor=vector[i];
        }
    }
     printf("\nEl mayor sueldo en los tres meses es: %f",mayor);
}
int main() {
    float vec[FILAS];
    char names[FILAS][31];
    float suel[FILAS][COLM];

    nombreEmpleados(names);
    matrizSueldo(suel);
    printf(" ------------SUELDOS------------- \n");
    mostrarMatriz(names,suel);
    printf(" --------------------------------\n");
    printf("|    SUELDO TOTAL EN 3 MESES     |\n");
    printf(" --------------------------------\n");
    totalSueldo(suel,vec);
    printf("\n --------------------------------");
    mayorSueldo(vec);
return 0;
}

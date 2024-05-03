#include<stdio.h>
#include<stdlib.h>
/*Guardar los datos de 6 sueldos de empleados en un vector de tipo float.
 Confeccionar las siguientes funciones:
1-Carga de sueldos.
2-Impresión de los sueldos.
3-Gasto total de la empresa en sueldos.*/
void cargarVector(float vec[6]) {
    for (int i = 0; i < 6; i++) {
        printf("Ingrese un valor: ");
        scanf("%f",&vec[i]);
    }
}
void mostrarVector(float vec[6]) {
    for (int i = 0; i < 6; i++) {
        printf(" %.3f, ",vec[i]);
    }
}
void calcularGastos(float vec[6]) {
    float total=0;
    for (int i=0; i < 6; i++) {
        total+=vec[i];
    }
    printf("El total del gasto es de: %.3f ",total);
}
 int main() {
     float vector[6];
     cargarVector(vector);
     mostrarVector(vector);
     calcularGastos(vector);
 return 0;
 }

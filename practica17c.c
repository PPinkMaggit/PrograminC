#include<stdio.h>
#include<stdlib.h>
/*Desarrollar dos funciones que reciban como parámetro el valor del lado de un cuadrado.
La primera debe calcular y mostrar la superficie y la segunda calcular y mostrar el perímetro.
En la main llamar a las funciones pasando los valores enteros comprendidos entre 10 y 20*/
void superficie (int lado) {
    int superficie;
    superficie=lado*lado;
    printf("La superficie de un cuadrado de lado %d es de %d \n",lado,superficie);
}
void calcularPerimetro( int lado) {
    int perimetro;
    perimetro=lado*4;
    printf("El perimetro de un cuadrado de lado %i es de %i\n",lado,perimetro);
}
int main() {
      for (int i=10; i < 20; i++) {
        superficie(i);
        calcularPerimetro(i);
      }
return 0;
}

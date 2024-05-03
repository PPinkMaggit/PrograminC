#include<stdio.h>
#include<stdlib.h>

/*Escribir un programa que pida ingresar la coordenada de un punto en el plano,
es decir dos valores enteros x e y (distintos a cero).
Posteriormente imprimir en pantalla en que cuadrante se
ubica dicho punto. (1º Cuadrante si x > 0 Y y > 0 , 2º Cuadrante: x < 0 Y y > 0, etc.)*/

    int main() {
    int coordenadaX, coordenadaY;
    printf("Ingrese coordenada en x: \n");
    scanf("%d",&coordenadaX);

    printf("Ingrese coordenada en y: \n");
    scanf("%d",&coordenadaY);

    if (coordenadaX == 0 || coordenadaX == 0) {
    printf("Los valores deben ser distintos a 0.");
    }
    else {
        if ( coordenadaX > 0 && coordenadaY > 0 ) {
                printf("1er Cuadrante");
        }
        else {
            if (coordenadaX < 0 && coordenadaY > 0) {
                printf("2do Cuadrante");
            }
            else {
                if (coordenadaX < 0 && coordenadaY < 0) {
                    printf("3er Cuadrante"); }
                else
                    printf("4to Cuadrante");
                 }
             }
        }



return 0;

}

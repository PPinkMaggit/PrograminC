#include<stdio.h>
#include<string.h>
/*Confeccionar un programa que permita :
1-Almacenar en una matriz los datos de 5 personas.
2-Imprimir los nombres.
3-Ingresar otro nombre y verificar si se encuentra almacenado en la matriz.*/
 void cargarNombres(char nombres[5][31]) {
        for(int i=0; i < 5; i++) {
            printf("Ingrese un nombre: ");
            gets(nombres[i]);
        }
 }
 void mostrarNombres(char nombres[5][31]) {
    printf("Nombres ingresados: \n");
        for (int i=0; i<5;i++) {
            printf("%s\n",nombres[i]);
        }
 }
void compararNombres(char nombres[5][31]){
    char nombre[31];
    int existe=0;

      printf("Ingrese otro nombre: ");
      gets(nombre);
        for (int i=0; i < 5; i++) {
            if (strcmp(nombre,nombres[i])==0) {
                existe=1;
                }
            }
            if (existe==1) {
                printf("El nombre se encuentra almacenado en la matriz.");
            }
            else {
                printf("El nombre no se encuentra almacenado en la matriz.");
            }
}
    int main() {
        char nom[5][31];
        cargarNombres(nom);
        mostrarNombres(nom);
        compararNombres(nom);
    return 0;
    }

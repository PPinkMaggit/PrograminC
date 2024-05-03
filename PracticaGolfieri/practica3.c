#include <stdio.h>
//Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando si tiene 1, 2, o 3 cifras.
// Mostrar un mensaje de error si el número de cifras es mayor.
int main() {

int num;

    printf("Ingrese un numero entero positivo: \n");
    scanf("%d",&num);



    if ( num > 999 ) {
        printf("Error");
}
    else {
            if ( num > 99 && num < 999) {
                printf("El numero tiene 3 cifras.");
                }
            else {
                    if ( num > 9 && num < 99 ){
                        printf("El numero tiene 2 cifras.");
                    }
                    else {
                            printf("El numero tiene 1 cifra.");
                        }
                }//cierre del else.
            }//Cierre else.


return 0;

}

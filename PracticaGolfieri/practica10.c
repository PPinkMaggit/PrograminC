#include<stdio.h>
#include<stdlib.h>
/*De un operario se conoce su sueldo y los a�os de antig�edad. Se pide confeccionar un programa que lea los datos de entrada e informe:
a) Si el sueldo es inferior a 500 y su antig�edad es igual o superior a 10 a�os, otorgarle un aumento del 20 %, mostrar el sueldo a pagar.
b)Si el sueldo es inferior a 500 pero su antig�edad es menor a 10 a�os, otorgarle un aumento de 5 %.
c) Si el sueldo es mayor o igual a 500 mostrar el sueldo en pantalla sin cambios.
*/
int main() {

 int sueldo, antiguedad, aumento, nuevoSueldo;

    printf("Ingrese su antiguedad: \n");
    scanf("%d",&antiguedad);
    printf("Ingrese su sueldo: \n");
    scanf("%d",&sueldo);

    if (sueldo < 500 && antiguedad >= 10) {
        aumento=(sueldo*20)/100;
        nuevoSueldo=aumento+sueldo;
        printf("%d ",nuevoSueldo);
        }
    else {
        if ( sueldo < 500 && antiguedad < 10) {
            aumento=(sueldo*5)/100;
            nuevoSueldo=aumento+sueldo;
            printf("%d ",nuevoSueldo);
        }
        else {
            if (sueldo >= 500) {
                printf("%d",sueldo);
            }
        }
    }


return 0;
}

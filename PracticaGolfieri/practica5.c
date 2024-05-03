#include<stdio.h>
#include<stdlib.h>
 /*Realizar un programa que pida cargar una fecha cualquiera,
luego verificar si dicha fecha corresponde a Navidad.*/

int main() {
    int month, year, day;

    printf("ingrese una fecha con el formato MM/DD/YY: \n");
    scanf(" %d ",&month);
    scanf(" %d ",&day);
    scanf("% d ",&year);

    if (month == 12 && day == 25) {
        printf("Es navidad.");
    }
    else {
        printf("Es un dia como cualquier otro.");
    }
return 0;

}

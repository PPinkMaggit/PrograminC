#include<stdio.h>
#include<stdlib.h>
/*Escribir un programa en el cual: dada una lista de tres valores numéricos distintos se calcule
e informe su rango de variación (debe mostrar el mayor y el menor de ellos)*/
int main() {
    int num1, num2, num3, mayor, menor;

    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if (num1 > num2 && num1 > num3) {
        printf("%d;",num1);
    }
    else {
        if ( num2 > num3) {
            printf("%d;",num2);
    }
        else {
            printf("%d;",num3);
            }

        }

    if (num1 < num2 && num1 < num3) {
        printf("%d",num1);
    }
    else {
        if ( num2 < num3) {
            printf("%d",num2);
        }
        else {
            printf("%d",num3);
            }

        }

return 0;
}

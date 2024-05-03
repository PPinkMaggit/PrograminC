#include<stdio.h>
#include<stdlib.h>

 /*Se ingresan tres valores por teclado, si todos son iguales se
imprime la suma del primero con el segundo y a este resultado
se lo multiplica por el tercero.*/

int main() {

    int num1, num2, num3, resul, multi;

    printf("Ingrese 3 numeros: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);


    if (num1 == num2 && num2 == num3) {
        resul=num1+num2;
        printf("Suma del primero con el segundo: %d \n",resul);
        multi=resul*num3;
        printf("Producto de la suma con el tercero: %d ",multi);
}

return 0;

}

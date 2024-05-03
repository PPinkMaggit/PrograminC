#include<stdio.h>
#include<stdlib.h>
/*Se ingresan por teclado tres números, si todos los valores ingresados
son menores a 10, imprimir en pantalla la leyenda
"Todos los números son menores a diez".*/

int main() {
int num1, num2, num3;

    printf("Ingrese 3 numeros: \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if (num3 < 10 && num2 < 10 && num1 <10 ) {
        printf("Todos los numeros son menores a diez.");
}

return 0;

}

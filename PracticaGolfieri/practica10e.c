#include<stdio.h>
#include<stdlib.h>

/*Realizar un programa que lea los lados de n tri�ngulos, e informar:
a) De cada uno de ellos, qu� tipo de tri�ngulo es: equil�tero (tres lados iguales), is�sceles (dos lados iguales), o escaleno (ning�n lado igual)
b) Cantidad de tri�ngulos de cada tipo.
c) Tipo de tri�ngulo que posee menor cantidad.*/
int main () {
    int ladoa,ladob,ladoc,x,n,cont1,cont2,cont3,menor;

    printf("Ingrese la cantidad de triangulos a verficar: \n");
    scanf("%d",&n);

    cont1=0;
    cont2=0;
    cont3=0;

        for (int i=1; i <= n ; i++) {
            printf("lado 1: ");
            scanf("%d",&ladoa);
            printf("lado 2: ");
            scanf("%d",&ladob);
            printf("lado 3: ");
            scanf("%d",&ladoc);

            if (ladoa == ladob && ladob == ladoc && ladoa == ladoc) {
                printf("Es un triangulo equilatero \n");
                cont1+=1;
            }
            else {
                if (ladoa == ladob || ladob == ladoc || ladoa == ladoc) {
                    printf("Es un triangulo isosceles \n");
                    cont2+=1;
                }
                else {
                    printf("Es un triangulo escaleno \n");
                    cont3+=1;
                }

            }
        }

    printf("La cantidad de triangulos equilateros es: %d \n",cont1);
    printf("La cantidad de triangulos isosceles es: %d \n",cont2);
    printf("La cantidad de triangulos escalenos es: %d \n",cont3);



    if (cont1 < cont2 && cont1 < cont3) {
        printf("La menor cantidad de triangulos es de los equilateros.");
    }
    else
    {
        if (cont2 < cont1 && cont2 < cont3) {
            printf("La menor cantidad de triangulos ingresados es de isosceles.");
        }
        else
        {
            printf("La menor cantidad de triangulos ingresados es de escalenos.");
        }
    }




return 0;
}

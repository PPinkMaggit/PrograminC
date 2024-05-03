/*Se tiene la siguiente declaración de registro:
struct pais {
    char nombre[40];
    int cantidadhab;
};
Definir tres variables de tipo país y almacenar los nombres de los países y la cantidad de habitantes de dichos países.
Mostrar seguidamente el nombre del país con mayor cantidad de habitantes (considerar que los tres países tienen cantidades distintas)*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct pais {
    char nombre[31];
    int cantH;
};
int main() {
    struct pais pais1,pais2,pais3;

    printf("Ingrese el nombre del primer pais:");
    gets(pais1.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%d",&pais1.cantH);
    fflush(stdin);
    printf("Ingrese el nombre del segundo pais:");
    gets(pais2.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%d",&pais2.cantH);
    fflush(stdin);
    printf("Ingrese el nombre del tercer pais:");
    gets(pais3.nombre);
    printf("Ingrese la cantidad de habitantes:");
    scanf("%d",&pais3.cantH);
    fflush(stdin);

    if (pais1.cantH > pais2.cantH && pais1.cantH > pais3.cantH ) {
        printf("El pais con mas habitantes es el primer pais.");
    }
    else {
        if (pais2.cantH > pais1.cantH && pais2.cantH > pais3.cantH) {
            printf("El pais con mas habitantes es el segundo pais.");
        }
        else {
            printf("El pais con mas habitantes es el tercer pais");
        }
    }

return 0;
}

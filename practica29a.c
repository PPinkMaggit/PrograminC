#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct productos {
    int codigo;
    char descripcion[41];
    float precio;
}; //obligatorio el punto y coma
struct productos cargar() {
    struct productos p;
    printf("ingrese el codigo de producto: ");
    scanf("%d",&p.codigo);
    fflush(stdin);
    printf("Ingrese la descripcion: ");
    gets(p.descripcion);
    printf("ingrese el precio: ");
    scanf("%f",&p.precio);
    return p;
};
void imprimir(struct productos p) {
    printf("\n---------DATOS DEL PRODUCTO-------\n");
    printf("codigo del producto: %d\n",p.codigo);
    printf("descripcion: %s\n",p.descripcion);
    printf("precio: %0.2f\n",p.precio);
    printf("----------------------------------");
}
int main() {
    struct productos pro1,pro2;
    pro1=cargar();
    pro2=cargar();
    imprimir(pro1);
    imprimir(pro2);
    getch();
    return 0;
return 0;
}

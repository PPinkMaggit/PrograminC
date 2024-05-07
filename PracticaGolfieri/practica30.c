#include<stdio.h>
#include<string.h>
#include<conio.h>

#define TAMANO 4

struct producto {
    int codigo;
    char descripcion[41];
    float precio;
};
void cargar(struct producto vec[TAMANO]) {
    for (int i=0; i<TAMANO; i++) {
        printf("Ingrese el codigo del producto: ");
        scanf("%d",&vec[i]);
        fflush(stdin);
        printf("Ingrese una Descripcion: ");
        gets(vec[i].descripcion);
        printf("Ingrese el precio: ");
        scanf("%f",&vec[i].precio);
    }
}
void precioMayor(struct producto vec[TAMANO]){
    int pos=0;
    for (int i=0;i<TAMANO; i++) {
           if (vec[i].precio>vec[pos].precio) {
                pos=i;
         }
     }
     printf("Producto mas caro: %s",vec[pos].descripcion);
 }
    int main() {
        struct producto vector[TAMANO];
        cargar(vector);
        precioMayor(vector);
    return 0;
    }

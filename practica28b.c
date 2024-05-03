#include<stdio.h>
#include<string.h>
#include<conio.h>
/*Se tiene la siguiente declaración de registro:
struct pais {
    char nombre[40];
    int cantidadhab;
};
Definir tres variables de tipo país e iniciarlas
por asignación con la sintaxis:
struct pais pais1={"Argentina",40000000};
Elaborar una función que reciba un parámetro de
tipo pais y muestre por pantalla sus dos campos.
Llamar a dicha función desde la main pasando en
forma sucesiva las tres variables definidas.*/
struct pais {
    char nombre[40];
    int cantidadhab;
};
void imprimir(struct pais p) {
    printf("-----------------------------------\n");
    printf("Pais: %s \n",p.nombre);
    printf("Cantidad de habitantes: %d \n",p.cantidadhab);
    printf("-----------------------------------\n");
}
int main() {
  struct pais pais1={"Argentina",40000000};
  struct pais pais2={"Siria",60000000};
  struct pais pais3={"United States",50000000};

  imprimir(pais2);
  imprimir(pais1);
  imprimir(pais3);
return 0;}

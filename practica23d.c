#include<stdio.h>
#include<string.h>

void cargarNombres(char nombres[5][31]) {
    for (int i=0; i < 5; i++) {
        printf("ingrese nombres: ");
        gets(nombres[i]);
    }
}
void mostrarNombres(char nombres[5][31]) {
    for (int i=0; i < 5; i++) {
        printf("%s\n",nombres[i]);
    }
}
void ordenar(char nombres[5][31]) {
    char aux[31];
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            if (strcmp(nombres[j],nombres[j+1]) < 0 ) {
                strcpy(aux,nombres[j]);
                strcpy(nombres[j],nombres[j+1]);
                strcpy(nombres[j+1],aux);
        }
      }
    }
}
    int main() {
        char nom[5][31];
        cargarNombres(nom);
        mostrarNombres(nom);
        ordenar(nom);
        mostrarNombres(nom);
    return 0;
    }

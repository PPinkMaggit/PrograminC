#include<stdio.h>
#include<stdlib.h>
/*Desarrollar una funci�n que reciba como par�metro un caracter.
Si llega una 'h' mostrar por pantalla el mensaje "hombre", si llega
 una 'm' mostrar el mensaje "mujer".
Llamar desde la funci�n main pasando una vez una 'h' y otra vez una 'm'.
*/
void chooseGenre(char genre) {
    if (genre=='h') {
        printf("Hombre\n");
    }
    if (genre=='m') {
        printf("Mujer\n");
    }

}

int main() {
    chooseGenre('m');
    chooseGenre('h');

return 0;
}

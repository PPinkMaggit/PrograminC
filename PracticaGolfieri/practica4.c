#include<stdio.h>
#include<stdlib.h>
 /*Un postulante a un empleo, realiza un test de capacitaci�n, se obtuvo la siguiente informaci�n: cantidad total de preguntas que se le realizaron y la cantidad de preguntas que contest� correctamente. Se pide confeccionar un programa que ingrese los dos datos por teclado e informe el nivel del mismo seg�n el porcentaje
de respuestas correctas que ha obtenido, y sabiendo que:
Nivel m�ximo: Porcentaje>=90%.
Nivel medio: Porcentaje>=75% y <90%.
Nivel regular: Porcentaje>=50% y <75%.
Fuera de nivel: Porcentaje<50%.*/

int main() {
    int cantPreguntas, cantCorrectas, porcent;

    printf("Ingrese la cantidad de preguntas: ");
    scanf("%d",&cantPreguntas);

    printf("Ingrese la cantidad de preguntas correctas: ");
    scanf("%d",&cantCorrectas);

    porcent=cantCorrectas*100/cantPreguntas;

    printf("%d \n",porcent);

    if (porcent < 50) {
        printf ("Fuera de nivel.");
    }//Cierre del primer if
    else {
        if (porcent >=50 && porcent < 75) {
            printf("Nivel regular");
    }
        else {
            if ( porcent>= 75 && porcent<90 ){
                printf("Nivel medio");
    }//
            else {
                printf("Nivel maximo");
    }
    }//Cierre del segundo if anidado.
    }//Cierre del primer else

return 0;

}



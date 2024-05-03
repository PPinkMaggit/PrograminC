#include<stdio.h>
#include<stdlib.h>
/*Realizar un programa que imprima 25 términos de la serie 11 - 22 - 33 - 44, etc. (No se ingresan valores por teclado)*/

int main() {
    int n,x;
    x=1;
    n=25;

    while (x <= n) {
        printf("%d%d \n",x,x);
        x+=1;

    }
    return 0;
}

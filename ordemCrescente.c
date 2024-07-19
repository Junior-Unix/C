/*Escreva um programa que leia dois numeros e os
apresente em ordem crescente.*/

#include <stdio.h>

void main() {
    int x, y, tmp;

    printf("Introduza dois numeros: ");
    scanf("%d", &x);
    printf("Próximo: ");
    scanf("%d", &y);

    if(x>y) {
        tmp = x;
        x = y;
        y = tmp;
    }
    printf("%d, %d\n", x, y);
}
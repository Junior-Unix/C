/*Escreva um programa que solicite um determinado número real e mostre
sua parte inteira e a sua parte fracionária*/

#include <stdio.h>

void main(){

    float x;
    
    printf("introduza um numero real: ");
    scanf("%f", &x);

    printf("Parte inteira:          %d\n", (int) x);
    printf("Parte fracionaria:      %f\n", x - ((int) x));



    return 0;
}
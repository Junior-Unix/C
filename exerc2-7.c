/* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os
valores lidos. */
#include <stdio.h>
#include "alphaT.h"

int main(){
system("cls");
linha( 70, '+' );
int vetor[6];

    printf("Informe os seis valores para o vetor.:\n");

        for( int i = 0; i < 6; i++ ){
            scanf("%d", &vetor[i]);
        }
linha( 70, '~' );
    printf("Eis os valores!\n\n");

        for( int i = 0; i < 6; i++ ){
            printf("VETOR[%d] [%d]\n", i, vetor[i]);
        }
linha( 70, '+');



    return 0 ;
}
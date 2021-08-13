/* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os
valores lidos. */
#include <stdio.h>
#include "alphaT.h"


int divisa( int num, char ch){
    int l;
    for( l = 1; l <= num; l++ )
        putchar(ch);
        putchar('\n');
}

int main(){
system("cls");
//linha( 70, '+' );
for( int l = 1; l <= 70; l++)
    putchar('~');
    putchar('\n');



int vetor[6];

divisa( 70, '~');//interno.

    printf("Informe os seis valores para o vetor.:\n");

        for( int i = 0; i < 6; i++ ){
            scanf("%d", &vetor[i]);
        }
linha( 70, '~' );//"alphaT.h".
    printf("Eis os valores!\n\n");

        for( int i = 0; i < 6; i++ ){
            printf("VETOR[%d] [%d]\n", i, vetor[i]);
        }

linha( 70, '-');//"alphaT.h"

for( int l = 0; l < 70; l++)
    putchar('~');
    putchar('\n');

    return 0 ;
}
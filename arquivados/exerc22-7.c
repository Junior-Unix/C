/* Faça um programa que leia dois vetores de 10 posições e calcule o outro vetor
conhecido, nas posições pares os valores do primeiro e nas posições impares os
valores do segundo. */

#include <stdio.h>
#define N 10

int linha( int num, char ch ){
    for( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
}

int main(){



int vetor[N]={};
int pares[]={};
int impares[]={};
int par = 0;
int im = 0;
system("cls");
linha( 70, '=' );

printf("Valores %d.:\n", N);
for( int i = 0; i < N; i++ ){
        scanf("%d", &vetor[i]);
}
system("cls");
linha( 70, '=' );
for( int i = 0; i < N; i++ ){
    if( vetor[i] % 2 == 0 ){
        pares[i] = vetor[i];
        par++;
        printf("Pares^[%d]=>[%d]\n", i, pares[i]);
}else{}
}
linha( 70, '=' );
 for( int i = 0; i < N; i++ ){
        if( vetor[i] % 2 != 0 ){
            impares[i] = vetor[i];
            printf("impares^[%d]=>[%d]\n", i, impares[i]);
            im++;
        }else{} 
}
linha( 70, '=' );
    return 0 ;
}
/* Leia um vetor de 10 posições e atribua valor 0 para todos os elementos que possuírem
valores negativos. */
#include <stdio.h>
#define N 10

int main(){
    
int vetor[N];

printf("Informe 10 valotres, os menores que zero serão zerados.:\n");

for( int i = 0; i < N; i++ ){
    scanf("%d", &vetor[i]);
}

for(int i = 0; i < N; i++ ){
    if( vetor[i] < 0 ){
        vetor[i] = 0;
        printf("Vetor^[%d]=>[%d].\n", i, vetor[i]);
    }else{
        printf("Vetor^[%d]=>[%d].\n", i, vetor[i]);
    }
}

    return 0 ;
}
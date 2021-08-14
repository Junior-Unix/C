/* Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se 
encontram p maior e o menor valor. */
#include <stdio.h>

int main(){

int vetor[5];
int auf = 0;

for( int i = 0; i < 5; i++ ){
    scanf("%d", &vetor[i] );
}

for( int i = 0; i < 5; i++ ){
    for( int j = j + 1; j < 5; j++ ){
        if( vetor[i] < vetor[j] )
            auf = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = auf;
        
    }
}

for( int i = 0; i < 5; i++ ){
    printf("[%d]\n", vetor[i]);
}

printf("menor vetor^[0]~[%d] e maior vetor^[4]~[%d]\n.", vetor[0], vetor[4] );









    return 0 ;
}
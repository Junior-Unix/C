/* Leia um vetor com 20 números inteiros. Escreva os elementos do vetor eliminando
elementos repetidos. */
#include <stdio.h>
#define count 5

int main(void){

int vetor[count];
int x = 0;


system("cls");
printf("Informe 20 valores, por gentileza, os repetidos serão eliminados.\n\n");

for( int i = 0; i < count; i++ ){
    scanf("%d", &vetor[i]);
}
int alles[x];

for( int i = 0; i < count; i++ ){
    for( int j = 0; j < count; j++ ){
        if( vetor[i] != vetor[j] && i != j )
            printf("vetor^i[%d]=>[%d] == vetor^j[%d]=>[%d]\n", i, vetor[i], j, vetor[j]);
        
        alles[x] = vetor[i];
        x++;
    }
}

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');






    return 0 ;
}
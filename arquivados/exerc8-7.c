/* Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos na ordem inversa. */
#include <stdio.h>

int main(){

int vetor[6];

//int i, j, x = 0;
system("cls");

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');

printf("informe 6 valores, printf em ordem decrescente.\n");
    for( int i = 0; i < 6; i++ ){
        scanf("%d", &vetor[i]);
    }

for ( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');

fflush(stdin);

//Ordem inversa.

    for( int i = 5; i >= 0; i-- ){
        printf("Ordem inversa: vetor^[%d]~[%d]\n", i, vetor[i]);
    }

/* int x;
int i = 0;
    for( int i = 0; i < 6; i++ ){
        for( int j = i + 1; j < 6; j++ ){
            if( vetor[i] < vetor[j]){
                x = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = x;
            }
        }
    }
for( int i = 0; i < 6; i++ )
    printf("Vetor^[%d]~[%d]\n", i, vetor[i]); */


    return 0 ;
}
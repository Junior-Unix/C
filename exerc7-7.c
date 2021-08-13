/* creva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra. */
#include <stdio.h>

int main(){

int vetor[10];
system("cls");

for( int i = 1; i < 70; i++ );
    putchar('=');
    putchar('\n');

printf("Informe 10 valores, por gentileza.:\n");
    for( int i = 0; i < 10; i++ ){
        scanf("%d", &vetor[i]);
    }
system("cls");
for( int i = 1; i < 70; i++ );
    putchar('=');
    putchar('\n');

    for( int i = 0; i < 10; i++ ){
        printf("Vetor^[%d]~[%d]\n", i, vetor[i]);
    }

for ( int i = 1; i < 70; i ++ );
    putchar('=');
    putchar('\n');
fflush(stdin);
int oben;
int i = 0;
    for( int i = 0; i < 10; i++ ){
        for( int j = i + 1; j < 10; j++ ){
            if( vetor[i] < vetor[j]){
                oben = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = oben;
            }
        }
    }

    printf("O maior valor etah no vetor^%i~[%d]", i, vetor[0]);


    return 0 ;
}
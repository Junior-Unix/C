/* Faça um programa que receba do usuário um vetor com 10 posições. Em que seguida
deverá ser impresso o maior e o menor elemento do vetor. */
#include <stdio.h>

int main(){

system("cls");

int vetor[10];
int i, j, k, l = 0;

printf("Invorme os 10 valores.:\n");
    for( i = 0; i < 10; i++ ){
        scanf("%d", &vetor[i]);
    }
for( i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');
    
    for( i = 0; i < 10; i++ ){
        printf("vetor em (%d) = [%d]\n", i, vetor[i]);
    }

    for( i = 0; i < 10; i++){
        for( j = i + 1; j < 10; j++){
            if( vetor[i] < vetor[j]){
                k = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = k;
            }
        }
    }
for( i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');


    for( i = 0; i < 10; i++ ){
        printf("vetor em (%d) = [%d]\n", i, vetor[i]);
    }










    return 0 ;
}

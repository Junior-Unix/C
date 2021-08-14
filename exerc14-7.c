/* Faça um programa que leia um vetor de 10 posições e verifique se existem valores
iguais e os descreva na tela. */
#include <stdio.h>

int main(){

int vetor[10];
int count = 0;
system("cls");
printf("Informe 10 valores, se repetidos, serão informados.\n");

for( int i = 0; i < 10; i++ ){
    scanf("%d", &vetor[i]);
}

for( int i = 0; i < 10; i++ ){
    printf("vetor^[%d]=>[%d]\n", i, vetor[i]);
}

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');

for( int i = 0; i < 10; i++ ){
    for( int j = 0; j < 10; j++ ){
        if( vetor[i] == vetor[j] && i != j && i < j ){
            printf("vetor^[%d]=>[%d] = vetor^[%d]=>[%d]\n", i, vetor[i], j, vetor[j]);
            count++;
        }
    }
}
printf("Wie oft wiederholt: [%d]", count);







    return 0 ;
}
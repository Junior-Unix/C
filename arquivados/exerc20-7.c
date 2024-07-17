/* Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em 
um vetor com 10 posições. Preencha um segundo vetor apenas com sos números ímpares
do primeiro vetor, Imprima os dois vetores, 2 elementos por linha. */
#include <stdio.h>
#define N 5
int linha( int num, char ch){
    for( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
}



int main(){

int vetor[N];
int impar[]={};
int i = 0;
int a = 0;
int n = N;
system("cls");
printf("Informe %d valores no intervalo entre 0 e 50.\n", N);
for( int i = 0; i < N; i++ ){
    scanf("%d", &vetor[i]);
}
system("cls");
linha( 70, '=' );
for( int i = 0; i < N; i++ ){
    printf("Vetor^[%d]=>[%d].\n", i, vetor[i]);
}

linha( 70, '=');

for( int i = 0; i < N; i++ ){
    if( vetor[i] > 0 && vetor[i] < 50 && vetor[i] % 2 != 0){
        impar[a] = vetor[i];
        printf("Impares.: vetor^[%d]=>[%d].\n", i, vetor[i], i, impar[i]);
        a++;
    }
}   
linha( 70, '=');    
/* for( int i = 0; i < a; i++){
   printf("[%d]=>[%d].\n", i, impar[i]);
}
 */



     return 0 ;
}
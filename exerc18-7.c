/* Faça um programa que leia um vetor de 10 números. Leia um numero X. conte os
múltiplos de um número inteiro X num vetor e mostre-os na tela. */
#include <stdio.h>
#define N 10
int main(){

int vetor[N];;
int n = N;
system("cls");
fflush(stdin);
printf("Informe os %d valores.:\n", n);
for( int i = 0; i < N; i++ ){
    scanf("%d", &vetor[i]);
}
for( int i = 0; i < N; i++ ){
    printf("Vetor^[%d]=>[%d].\n", i, vetor[i]);
}
fflush(stdin);
int x;

printf("Selecione um dos valores informados para extração do multiplo.\n");
scanf("%d", &x);
for( int i = 0; i < N; i++ ){
    if( x == vetor[i]){
       x = vetor[i]; 
    }else{
        int i = x;
        do{
            if ( x % i == 0 )
            printf(":^[%d].\n", i);
            i--;
        }while( i >= 0 );

    }
}

/* int i = x;
do{
    if ( x % i == 0 )
    printf(":^[%d].\n", i);
    i--;
    
}while( i >= 0 ); */


     return 0 ;
}
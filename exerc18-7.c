/* Faça um programa que leia um vetor de 10 números. Leia um numero X. conte os
múltiplos de um número inteiro X num vetor e mostre-os na tela. */
#include <stdio.h>
#define N 10

int main(){

int vetor[N];

system("cls");

printf("Informe 10 valores.:\n");
for( int i = 0; i < N; i++ ){
    scanf("%d", &vetor[i]);
}
for( int i = 0; i < N; i++ ){
    printf("Vetor^[%d]=>[%d].\n", i, vetor[i]);
}
int x;
int a = 0;
int multi[a];

printf("Selecione um dos valores que informou para contar os multiplos.:\n");
scanf("%d", &x);


for( int d = 0; d < N; d++ ){
    if( x == vetor[d] ){
        x = vetor[d];
    }else{
        for( int i = x ; i > 0; i-- ){
            if( x % i == 0){
            multi[a] = i;
            a++;
            /* printf("[%d]\n", multi[a]); */
            }
        }
    }
}
/* for( int i = 0; i < a; i++){
    printf("[%d]\n", multi[i]);
} */
printf("[%d]\n", a);
    return 0 ;
}
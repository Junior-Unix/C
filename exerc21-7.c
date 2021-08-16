/* Faça um programa que receba do usuário dois vetores, A e B, com 10 números
inteiros cada. Crie um novo vetor denominado C calculando C=A-B. Mostre na
tela os dados do vetor C. */

#include <stdio.h>
#define N 3


int linha( int num, char ch){
    for( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
}

int main(){
fflush(stdin);
int vetorA[N]={};
int vetorB[N]={};
int vetorC[N]={};

printf("Informe os %d valores do vetorA.:\n", N);
for( int i = 0; i < N; i++ )
    scanf("%d", &vetorA[i]);

printf("Informe os %d valores do vetorB.:\n", N);
for( int i = 0; i < N; i++ )
    scanf("%d", &vetorB[i]);

linha( 70, '=');

for( int i = 0; i < N; i++ )
    vetorC[i] = vetorA[i] - vetorB[i]; 
system("cls");
linha( 70, '=');
for( int i = 0; i < N; i++ )
    printf("vetorA^[%d]=>[%d] - vetorB^[%d]=>[%d] = vetorC^[%d]=>[%d]\n", i, vetorA[i], i , vetorB[i], i, vetorC[i] * -1);

linha( 70, '=');



    return 0 ;
}
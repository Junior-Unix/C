/* Faça um programa que possua um vetor denominado A que armazene 6 número inteiros.
O programa deve executar os seguintes passos:
    (a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
    (b) Armazene em uma variável inteira (simples) a soma entre os valores das 
        posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
    (c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
    (d) Mostre a tela cada valor do vetor A, um em cada linha. */    

#include <stdio.h>
#include "alphaT.h"

int main(){

system("cls");

linha( 77, '+');
int A[6]={ 1, 0, 5, -2, -5, 7 };

int soma = A[0] + A[1] + A[5];
printf(" A soma dos vetores A[0]-%d + A[1]-%d + A[5]-%d = [%d ]\n\n", A[0], A[1], A[5], soma);

printf("Modificar o vetor A na A[4] que eh [%d] para A[100].\n", A[4]);
A[4] = 100;
printf("Modificado.\nA[%d]\n", A[4]);
linha( 77, '+');
for( int i = 0; i < 6; i++ ){
    printf("A%d[%d]\n", i, A[i]);
}
linha( 77, '+');
printf("\n\n");    

    return 0 ;

}
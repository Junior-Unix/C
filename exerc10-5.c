/*Exercício 10 seção 5.: Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>

int main (){


int i, j, soma = 0 ;
int vetor[51];


for( i = 0; i < 51; i++ ){
	if( i % 2 == 0 ){
		soma = soma + i;
		printf("[%2d]", i);
	}//if for
}//for i
printf("\n");
/*
for( j = 0; j < 50; j++ ){
	printf("%d", vetor[j]);
}//for printf
*/
	printf("\nA soma dos 50 primeiros numeros pares é:[%d ]\n\n", soma);


	return 0 ;


}//main

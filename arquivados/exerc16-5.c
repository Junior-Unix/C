/* Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os numeros impares
de 1 até N em ordem decrescente.*/

#include <stdio.h>

int main(){

int N, i, x = 0;

printf("Informe um valor N inteiro positivo ímpar, por gentileza.");
scanf("%d", &N);

	if( N % 2 != 0 && N > 0 ){
		for( i = N; i > 0; i-- ){
			if( i % 2 != 0 ){
				printf("[%3d ]\n", i);
			}//if i.
		}//for i.



	}/*if N.*/else{
		printf("Numero par ou negativo");

	}//else N.







	return 0 ;

}//main

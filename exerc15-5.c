/*Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números ímpares de
1 áté N em ordem crescente.*/

#include <stdio.h>

int main(){


int N;
	printf("Digite um valor impar positivo, por gentileza.");
	scanf("%d", &N);

		if( N % 2 != 0 && N > 0 ){

			for( int i = 1; i <= N ; i+=2 ){
				printf("[%3d]\n", i);
				system("clear");
			}//for i.

		}//if N impar.


	return 0 ;

}//main.

/*Exercício 11 seção 5.: Faça um programa que leia um numero inteiro positivo N e imprima todos os
numeros naturais de 0 até N em ordem decrescente.*/
#include <stdio.h>


int main(){


int decre, i, N = 0;

	printf("Digite um valor\n");
	scanf("%d", &N);

decre = N;

	for( i = 0; i < decre; i++ ){
		printf("[%d]\n", N);
//		system("clear");
		N = N - 1;
//		system("clear");
//		printf("[%d ]", N);
	}//for


	return 0 ;


}//main

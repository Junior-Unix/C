/*Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída
cada um dos algarismos que compõe o número.*/

#include <stdio.h>

int main(){

int N = 0;
int U, D, C;
	printf("Informe um valor entre 100 e 999\n");
		scanf("%d", &N);
			if( N > 100 && N < 1000 ){
				U = N % 10;

				D = N % 100;
				D = D - U;
				D = D / 10;

				C = N % 1000;
				C = ( C - D ) - U;
				C = C / 100;
	}/*if N*/else{
		printf("O número não está no parametro informado");
		}//else.

printf("Centena [%d], \n\tDezena [%d]  \n\t\tUnidade [%d]\n", C, D, U);



	return 0 ;

}//main.

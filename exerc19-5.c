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
				printf("U = N % 10 = [%d ].\n", U);
				D = N % 100;
				printf("D = N % 100 = [%d ].\n", D);
				D = D - U;
				printf("D = D - U = [%d ].\n", D);
				D = D / 10;
				printf("D = D / 10 = [%d ].\n", D);
				C = N % 1000;
				printf("C = N % 1000 = [%d ].\n", C);
				C = ( C - D ) - U;
				printf("C = ( C - D ) - U = [%d ].\n", C);
				C = C / 100;
				printf("C = c / 100 = [%d ]", C);
			}/*if N*/else{
		printf("O número não está no parametro informado");
		}//else.

printf("Centena [%d], \n\tDezena [%d]  \n\t\tUnidade [%d]\n", C, D, U);



	return 0 ;

}//main.

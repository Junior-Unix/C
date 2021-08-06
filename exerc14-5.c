/* Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares de 0
até N em ordem decrescente.*/

#include <stdio.h>

int main(){

int N;
int x, j, i = 0;

	printf("Informe um valor positivo para N.");
	scanf("%d", &N);
int de = N;

		if( N % 2 == 0 && N > 0 ){
			for( i = N; i >= 0; i-=2 ){
			 	printf("[%d ]\n", i);

			}//for i.
		}/*if N.*/else{
			printf("O numero %d é impar\n\n", N);
			}//else if.




	return 0 ;

}//main

/*Faça um programa que leia um numero inteiro positivo par N e imprima todos os números pares de
0 até N em ordem crescente.*/

#include <stdio.h>

int main(){

int i, N = 0;
printf("Informe o valor N.:\n");
scanf("%d", &N);

for( i = 0; i < N; i++ ){
	if( i % 2 != 0 ){
		i = i + 1;
		printf("[%d ]\n", i);
	}//if.
}//for






	return 0 ;

}//main

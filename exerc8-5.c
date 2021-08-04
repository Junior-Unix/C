/* Exercício 8 seção 5.: Escreva um programa que leia 10 números e escreva o menor valor lido
e o maior valor lido. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale( LC_ALL, "portuguese");

	float numero[10];
	int  ordem, x, i = 0;

do{
	printf("Digite os 10 valores:\n:");
	for( i = 0; i < 10; i++){
		scanf("%f", &numero[i]);
		printf("Próximo:\n:");
	}

	

	}while( i < 10 );
		
	for( i = 0; i < 10; i++){
		for( x = i + 1; x < 10; x++){
			if( numero[i] < numero[x]){
				ordem = numero[i];
				numero[i] = numero[x];
				numero[x] = ordem;
			}
		}
	}
		printf("\nOrdem\n");

		for( i = 0; i < 10; i++){
			printf( "%.1f\n", numero[i]);
		}

    return 0 ;
}

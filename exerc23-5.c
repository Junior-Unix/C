/*Faça um algoritmo que leia um número positivo e imprima seus divisores.
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale( LC_ALL, "portuguese" );

int num, i= 0;

	printf("Informe um numero positivo para extrairmos os divisores\n");
	scanf("%i", &num);
int vetor[num];
int j = num;
	if( num >= 0 ){
	
	

		for ( i = 0; i <= num; i++ ){
			vetor[i] = j;
			j--;
			
		}//for.

		for( i = 0; i <= num; i++ ){
			printf("[%i ]\n", vetor[i]);
		}
	}/*if*/else{
		printf("O numero precisa ser positivo.\n[sonjunior@live.com] para melhorias.");
	}//else.
//float divisor = 0;
printf("Os divisores de [%i ], são:\n", num);
	for( j = num; j > 0; j-- ){
		int divisor = num % j;
				
		if( divisor == 0 ){
			printf("[%i ]", j);
		}//if.
	}//for.



	return 0 ;
}

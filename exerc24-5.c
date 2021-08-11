/* Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores desse n�mero, com exe��o dele
 * próprio. Ex.: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <locale.h>


int linha( int num ){
	int i;
	for( i = 1; i <= num; i++ )
	putchar('*');
	putchar('\n');
}



int main(){

setlocale ( LC_ALL, "portuguese");
linha(77);

int N;
int somai;
int i;
int divisor;

printf("Informe um numero inteiro para calcular a soma dos divisores.\n");
scanf("%i", &N );

	do{
		for( i = N; i >= 0; i-- ){
			divisor = N % i;
			if( divisor == 0 ){
				printf("[%i ]\n", i);
				somai = somai + i;
			}
		}
	}while( i >= 0 );

printf("[%i ]", somai);



	return 0 ;
}

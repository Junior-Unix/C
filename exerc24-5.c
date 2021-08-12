/* Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores desse nmero, 
 * com exeo dele
 * próprio. Ex.: A soma dos divisores do número 66 é 1 + 2 + 3 + 6 + 11 + 22 + 33 = 78.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

int N;

	printf("Informe um numero inteiro para calcular a soma dos \ndivisores, menos ele prprio.\n");
	scanf("%i", &N );
int res = 0;
	for ( int i = 1; i < N; i++){
		if( N % i == 0){
		res += i;
		printf("%i\n", i);
		}
	}
printf("A soma dos divisores de [%i ] excluindo ele mesmo eh: [%i ]", N, res);

	return 0 ;
}

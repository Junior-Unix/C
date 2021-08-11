/* Faça um programa que receeba dois numero. Calcule e mostre:
 * 	- A soma dos números pares desse intervalo de números, incluindo os numeros digitados.
 * 	- A mutiplicação dos números ímpares desse intervalo, incluindo os digitados;
 */


#include <stdio.h>
#include <stdlib.h>

int main(){


int num1, num2 = 0;

	printf("Informe dois valores.\n:");
		scanf("%d", &num1);
	printf("Informe o segundo valor.\n:");
		scanf("%d", &num2);
int i, j = 0;

int soma = 0;
int multi = 1;
printf("Lista de numeros pares entre [%2d ] e [%2d ]\n", num1, num2 );
for( i = num1; i <= num2; i++ ){
	if( i % 2 == 0){
	printf("[%d ]\n", i );
	soma = soma + i;
	}	
}
printf("Lista numero impares entre [%2d ] e [%2d ].\n", num1, num2 );

for( j = num1; j <= num2; j++ ){
	if( j % 2 != 0 ){
	printf("[%d ]\n", j );
	multi = multi * j;
	}

}


printf("A soma dos numeros pares entre [%d ] e [%d ] é [%d ]\n\n", num1, num2, soma);
printf("A multiplocação dos dos numeros ímpares entre [%d ] e [%d ] é [%d ]\n", num1, num2, multi);

printf("\n\t\tnumero 1: [%d] e numero 2: [%d]\n\n", num1, num2);

	return 0 ;



}//main.

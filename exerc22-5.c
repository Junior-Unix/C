/* Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado, uma sequência
 * arbitrária de notas( válidas no intervalo de 10 a 20 ) e que mostre na tela, como resultado, a
 * correspondente média aritmética. O número de notas com que o aluno pretende efetuar o cálculo
 * não será fornecido ao programa, o qual terminará quando for introduzido um valor que não seja
 * válido como nota de aprovação
 */

#include <stdio.h>
#include <stdlib.h>

int main(void){

float nota;
float  soma = 0;
float i = 0;
do{
	
	printf("Informe a nota.\n");
	scanf("%f", &nota);
		if(nota >=10 && nota <= 20 ){
			soma = soma + nota;
			i++;
		}

}while( nota >=10 && nota <= 20 );

	float media = soma / i ;
		printf("[%.2f ]\n", media);
	

	return 0 ;

}


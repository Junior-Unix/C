/* Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado, uma sequência
 * arbitrária de notas( válidas no intervalo de 10 a 20 ) e que mostre na tela, como resultado, a 
 * correspondente média aritmética. O número de notas com que o aluno pretende efetuar o cálculo
 * não será fornecido ao programa, o qual terminará quando for introduzido um valor que não seja 
 * váido como nota de aprovação
 */

#include <stdio.h>
#include <stdlib.h>


int main(){

int notas[0]={};
int i = 0;
do{
	scanf("%d", &notas[i] );
	i = i + 1 ;




}while( notas[i] >= 10 && notas[i] <= 20 );

















	return 0 ;



}

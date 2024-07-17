/*Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá ser informado o número
 * de dados lidos e nũmero de valores pares. O processo termina quando for digitado o número 1000.
*/

#include <stdio.h>

int main(){
int N, contador, contadorImpar = 0;

system("clear");
printf("\tVerificar se o numero é par ou impar, com contador.");
printf("\n");
while( N != 1000 ){

	printf("informe o valor.\n");
	scanf("%d", &N);
	
		if( N % 2 == 0 ){
			
			printf("Eh par.\n");
			contador++;

		}else if( N % 2 != 0 )/*Não coloque virgula aqui.*/{
			
			printf("Impar.\n");
			contadorImpar++;
		
		}else{ 
		
			printf("Numero inválido.\n");
		}

}/*while( N != 1000 );*/


printf("Contador par.: [%3d ]\n", contador);
printf("Contador impar.: [%3d ]\n", contadorImpar);

	return 0 ;

}

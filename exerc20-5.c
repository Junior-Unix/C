/*Ler uma sequência de números inteiros e determinar se eles são pares ou não. Deverá ser informado o número
 * de dados lidos e nũmero de valores pares. O processo termina quando for digitado o número 1000.
*/

#include <stdio.h>

int main(){
int N, contador, contadorImpar = 0;

while( N != 1000 ){
	printf("informe o valor.\n");
	scanf("%d", &N);
	if( N % 2 == 0 );
	{
		printf("É par.");
			contador++;
	}/*if*/if( N % 2 != 0 );
		{
			printf("Impar.\n");
			contadorImpar++;
		}
}/*while( N != 1000 );*/
printf("%d", contador);

	return 0 ;



}

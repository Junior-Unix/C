#include <stdio.h>
#include <stdlib.h>


int main()
{

	float num1, num2, soma;

	printf("\n\tPress ENTER\n");
	getchar();
	system("clear");
	printf("\n\tGithub - ErstCommit\n");
	printf("\tSoma de dois numeros\nVamos começar, tecle o enter\n");
	getchar();
	system("clear");

	printf("\nDigite o primeiro numero\n");
//	scanf("%f\n", &num1);
	scanf("%f\n", &num1);
	printf("\nDigite o segundo numero por gentileza\n:");
	scanf("%f\n", &num2);


	soma = num1 + num2;

	printf("\nO resultado da soma entre o numero %f e %f é\n:", num1, num2);
	printf("%f\n", soma);




  return 0;



}

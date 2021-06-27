#include <stdio.h>
#include <stdlib.h>


int main()
{


	float nota1, nota2, nota3, nota4, divisor, resultadoSoma, media;
//	nota1 = nota2 = nota3 = nota4 = divisor = media;
	nota1 = 0;
	nota2 = 0;
	nota3 = 0;
	nota4 = 0;
	divisor = 0;
	resultadoSoma = 0;
	media = 0;

	printf("==============Media==============\n\n");

	printf("Digite os valores em sequência:");
	printf("Primeiro valor\n");
	scanf("%f", &nota1);

	printf("Segundo valor\n");
	scanf("%f", &nota2);

	printf("Terceiro valor\n");
	scanf("%f", &nota3);

	printf("Quarto valor\n");
	scanf("%f", &nota4);

	resultadoSoma = (nota1 + nota2 + nota3 + nota4);

	printf("Resultado da soma dos quatro valores eh: %f", resultadoSoma);

	printf("qual o divisor?");
	scanf("%f", &divisor);


	media = (resultadoSoma /  divisor) /*4*/;

	printf("A media entre os valores eh: %f", media);


	return 0;


}

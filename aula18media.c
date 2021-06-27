#include <stdio.h>
#include <stdlib.h>


int main()
{


	float nota1, nota2, nota3, nota4, divisor, media;
	nota1 = nota2 = nota3 = nota4 = divisor = media = 0;

	printf("==============Media==============\n\n");

	printf("Digite os valores em sequência:");
	printf("\nPrimeiro valor\n");
	scanf("%f\n", &nota1);
	printf("\nSegundo valor\n");
	scanf("%f\n", &nota2);
	printf("\nTerceiro valor\n");
	scanf("%f\n", &nota3);
	printf("\nQuarto valor\n");
	scanf("%f\n", &nota4);
	printf("qual o divisor?");
	scanf("%f\n", &divisor);

	media = (nota1 + nota2 + nota3 + nota4) /  divisor /*4*/;

	printf("A media entre os valores eh: %f", media);


	return 0;


}

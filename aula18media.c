#include <stdio.h>
#include <stdlib.h>


long int main()
{

	printf("================== Media 1.0 =====================\n\a");
	printf("==================NF Tecnologia ==================\n\n");

	float nota1, nota2, nota3, nota4, divisor, resultadoSoma, media;
//	nota1 = nota2 = nota3 = nota4 = divisor = media;
	nota1 = 0;
	nota2 = 0;
	nota3 = 0;
	nota4 = 0;
	divisor = 0;
	resultadoSoma = 0;
	media = 0;


	int valorMaximo, valorMinimo;
	valorMinimo = 0;
	valorMaximo = 0;

	printf("Digite qual o limite do valor máximo:\n");
	scanf("%f", &valorMaximo);

	printf("Digite qual o limite mínimo\n");
	scanf("%f", &valorMinimo);
//	system (clear);

//	printf("==============Media==============\n\n");

	printf("Digite os valores em sequência:\n");
	printf("->Primeiro valor:\n");
	scanf("%f:", &nota1);

	if(nota1 > 100)
	{
		printf("\nAtenção! Apenas numeros até 100.\n");

	}
/*
	for(nota1 >= 1; nota1 <=100; nota1++){

		printf("%f", nota1);
	}*/
//	system("break");

	printf("->Segundo valor:\n");
	scanf("%f:", &nota2);

	printf("->Terceiro valor:\n");
	scanf("%f:", &nota3);

	printf("->Quarto valor:\n");
	scanf("%f:", &nota4);

	resultadoSoma = (nota1 + nota2 + nota3 + nota4);

	printf("\n\a->Resultado da soma dos quatro valores eh:\n>%f<\n\a", resultadoSoma);

	printf("\n\n->Qual o divisor?\n");
	scanf("%f", &divisor);


	media = (resultadoSoma /  divisor) /*4*/;
/*
	if(media < 100)
        {

                printf("Valor da media abaixo de 100\n");
        }else{

                printf("Valor da media abaixo de 40\n");

        }
*/


	printf("A media entre os valores eh: %f\n\a", media);


// operadores relacionados &&

	if(media < valorMinimo)
	{
		printf("Abaixo do valor mínimo!\n");
	}else{
		if( media > valorMaximo){
		printf("Passou do valor máximo!");
		}else{
			if(( media > valorMinimo) || ( media <  valorMaximo)){
			printf("Está dentro dos limites mínimos e máximos estipulados!");
}}}


	printf("--->Sizeof = %ld\n\n", sizeof(float)); //sizeof éh o tamanho da variant em bytes.


	return 0;


}

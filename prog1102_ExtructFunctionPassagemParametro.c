/*Realisa o carregamento de uma estrutura através da função.*
 * Passando o endereçoda estrutura para a função.           *
 * **********************************************************/

#include <stdio.h>

typedef struct{int Dia, Mes, Ano;}DATA;

typedef struct pessoa{
	char Nome[100];
	int Idade;
	float Salario;
	DATA Nasc;
}PESSOA;

/*Carrega a estrutura passada por parâmetro.*/

void Ler(struct pessoa *ptr){
	printf("Qual o Nome:");
	gets((*ptr).Nome);

	printf("Qual o Idade:");
	scanf("%f",&(*ptr).Idade);

	printf("Qual o Salário:");
	scanf("%f",&(*ptr).Salario);

	printf("Qual a Data Nascimento:");
	scanf("%d %d %d",&(*ptr).Nasc.Dia,&(*ptr).Nasc.Mes,&(*ptr).Nasc.Ano);
}

/*Mostra a estrutura passada por parametro.*/

void Mostra(struct pessoa x){
	printf("Nome: %s\n",x.Nome);
	printf("Idade: %d\n",x.Idade);
	printf("Salário: %.2f\n",x.Salario);
	printf("Data Nascimento: %d/%d/%d\n",x.Nasc.Dia,x.Nasc.Mes,x.Nasc.Ano);

}

main(){

	struct pessoa p = {"Carlos",23,12345.67,{23,5,1954}};

	Mostra(p);
	puts("\n");
	Ler(&p);
	puts("\n");
	Mostra(p);

}

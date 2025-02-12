/****************************************************************************************
 * Defina em C um novo tipo denominado Pessoa que contenha as seguintes características:*
 * Nome, Idade, Salário e um indicador que mostre se o registro está apagado ou não.    *
 * **************************************************************************************/

#include <stdio.h>

typedef struct{
	char Nome[30+1];
	int Idade;
	float Salario;
	char Status; /*'*'Indica que o registro está apagado.*/
}PESSOA;

void Ler_Pessoa(PESSOA *p){
	printf("Nome:");
	gets(p->Nome);

	printf("Idade:");
	scanf("%d",&p->Idade);

	printf("Salario:");
	scanf("%f",&p->Salario);

	p->Status='ok';
	
	fflush(stdin);
}

void MostraPessoa(PESSOA p){
	printf("%-30s %3d %10.2f\n",p.Nome,p.Idade,p.Salario);
}

main(){
	PESSOA p;
	
	Ler_Pessoa;
	Mostrar_Pessoa;

	return(0);
}

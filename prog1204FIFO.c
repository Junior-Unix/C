/*Implementação de Estruturas de Dados Dinâmicas Embora tenhamos utilizado 
 * unicamente exemplos com strings, qualquer tipo de dados pode ser criado 
 * utilizando essas funções. Uma das áreas do ensino da programação em que 
 * se utiliza a memória dinâmica é no ensino de estrutura de dados e 
 * técnicas de programação. Para demonstrar como se pode utilizar memória 
 * dinâmica, vamos implementar uma estrutura clássica denominada Fila de 
 * Espera. Uma fila (embora, infelizmente, todos o saibamos por experiência 
 * própria) caracteriza-se por manter a regra “O primeiro a entrar é o 
 * primeiro a sair”, e obedece assim a uma estratégia FIFO2. Ora, como não 
 * sabemos inicialmente qual vai ser o número de indivíduos que pode ter que 
 * esperar na fila (pode ser 0 ou pode ser 1500), vamos criar uma fila que 
 * aumente ou diminua conforme as necessidades. Assim, a Fila de Espera 
 * terá que ter um crescimento dinâmico. Para tal necessitamos de uma 
 * estrutura composta pelos dados e por um ponteiro para a próxima posição, 
 * isto é, para a próxima pessoa na Fila de Espera. Nesse caso, a fila será 
 * suportada por um ponteiro. Se o ponteiro for NULL é porque a fila está 
 * vazia, se não é porque tem pelo menos um elemento. Uma Fila de Espera 
 * vazia pode ser representada por um ponteiro ligado à terra.
 * Damas,Luís. Linguagem C (p. 287). LTC. Kindle Edition.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct sPessoa{
	int Idade;
	char Nome[20+1];
	struct sPessoa *Prox;
}PESSOA;

typedef PESSOA *FILA; /*Inicia uma Fila.*/

void Inic(FILA *Fila){
	*Fila=NULL;
}

/*Incere um novo registro no fim da Fila*/

void Inserir(FILA* Fila, int Idade, char* Nome){
	if(*Fila==NULL){
		*Fila=(FILA)malloc(sizeof(PESSOA));
		if(*Fila==NULL)
			return;
		(*Fila)->Idade=Idade;
		strcpy((*Fila)->Nome,Nome);
		(**Fila).Prox=NULL;
	}else
		Inserir(&(**Fila).Prox,Idade,Nome);
}

/*Apaga o primeiro elemento da Fila(se existir)*/

void Apagar(FILA* Fila){
	PESSOA* Tmp=*Fila;
	if(*Fila==NULL) /*Não existir elementos*/
		return;
	*Fila=(*Fila)->Prox;
	free(Tmp);
}

/*Listar todos os elementos da Fila Recursivamente*/

void Listar(FILA Fila){
	if(Fila==NULL)
		return; /*Não existe elementos.*/
	printf("%d %s\n",Fila->Idade,Fila->Nome);
	Listar(Fila->Prox); /*Lista os outros.*/
}

main(){
	FILA F;
	Inic(&F);
	puts("Iniciar:");
	Listar(F);
	puts("Inserir:");
	Inserir(&F,10,"Tiago");
	Inserir(&F,20,"Luiza");
	Inserir(&F,30,"Ana");
	puts("Listar 3");
	Listar(F);
	Apagar(&F);
	puts("Listar 2");
	Listar(F);
	Apagar(&F);
	puts("Listar 1");
	Listar(F);
	Apagar(&F);
	puts("Listar Nada");
	Listar(F);
	Apagar(&F);
	puts("Listar Nada");
	Listar(F);
}
 


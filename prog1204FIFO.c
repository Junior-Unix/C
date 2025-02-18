#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sPessoa {
	int Idade;
	char Nome[20+1];
	struct sPessoa *Prox;
};

void Inic(struct sPessoa **Fila) {
	*Fila = NULL;
}

/*Insere um novo registro no fim da Fila*/
void Inserir(struct sPessoa **Fila, int Idade, char *Nome) {
	if (*Fila == NULL) {
		*Fila = (struct sPessoa *)malloc(sizeof(struct sPessoa));
		if (*Fila == NULL)
			return;
		(*Fila)->Idade = Idade;
		strcpy((*Fila)->Nome, Nome);
		(*Fila)->Prox = NULL;
	} else {
		Inserir(&(*Fila)->Prox, Idade, Nome);
	}
}

/*Apaga o primeiro elemento da Fila (se existir)*/
void Apagar(struct sPessoa **Fila) {
	struct sPessoa *Tmp = *Fila;
	if (*Fila == NULL) /*Não existir elementos*/
		return;
	*Fila = (*Fila)->Prox;
	free(Tmp);
}

/*Listar todos os elementos da Fila Recursivamente*/
void Listar(struct sPessoa *Fila) {
	if (Fila == NULL)
		return; /*Não existe elementos.*/
	printf("%d %d %s\n", (void *)Fila, Fila->Idade, Fila->Nome);
	Listar(Fila->Prox); /*Lista os outros.*/
}

int main() {
	struct sPessoa *F;
	Inic(&F);
	puts("Iniciar:");
	Listar(F);
	puts("Inserir:");
	Inserir(&F, 10, "Tiago");
	Inserir(&F, 20, "Luiza");
	Inserir(&F, 30, "Ana");
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
 


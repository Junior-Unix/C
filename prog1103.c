/*Suponha que se pretenda implementar uma lista estática de registros constituídos por um Número 
 * positivo e por um Nome com 40 caracteres. A lista em questão não poderá ter mais que MAX 
 * registros (valor definido pelo programador). 
 *
 * a) Defina um novo tipo que represente a definição anterior de Registro. Defina um novo tipo 
 * denominado LISTA, que suporte essa definição. Declare a variável Lista que suporte, fisicamente, 
 * a lista a ser implementada.
 * b) Implemente a função Inic, que inicia a Lista. 
 * c) Implemente a Função Inserir, que permite adicionar um Registro à Lista. Retorna a Posição em 
 * que foi introduzido ou -1, caso a lista esteja cheia. 
 * d) Implemente a Função Save, que faz a escrita em disco de todos os registros 
 * existentes na lista; o nome do arquivo deverá ser passado como parâmetro da função. A função 
 * deverá devolver 1, se tudo correr bem, ou 0, caso contrário. 
 * e) Implemente a Função Load, que faz a leitura dos registros existentes em arquivo (já aberto 
 * para leitura) e os insere na lista, levando em consideração aqueles que já possam estar lá. 
 * Retorna 1, caso tudo esteja bem, ou 0, caso contrário. 
 * f) Implemente a Função Listar, que coloca na tela todos os elementos da Lista, 
 * linha a linha.

 * Damas,Luís. Linguagem C (p. 281). LTC. Kindle Edition. 


a)
#define Max 10

typedef struct{
	unsigned int N;
	char Nome[40+1];
}REGISTRO

typedef struct{
	REGISTRO v[MAX];
	int Conta;
}LISTA;

main(){
	LISTA Lista;
}

b)

void Inic(Lista *ptr){
	ptr->Conta=0;
}

c)

int Cheia(LISTA L){
	return L.COnta==MAX;
}

int Inserir(Lista *ptr, REGISTRO r){
	if(Cheia(*ptr))
		return -1;
	ptr->v[ptr->Conta]=r;
	returptr->Conta++;
}

d)

int Save(LISTA L, char *Nome_Arq){
	int i;
	FILE *fp=fopen(Nome_Arq,"wb");
	if(fp==NULL)
		return 0;
	for(i=0;i<L.COnta;i++)
		if(fwrite(%L.v[i],sizeof(REGISTRO),1,fp)
				return 0;
			fclose(fp);
			return 0;
}

Outra forma de escrever o Mesmo.

int Save_Outro(LISTA L, char *Nome_Arq) {
	FILE *fp=fopen(Nome_Arq,"wb");
	if(fp==NULL)
		return 0;
	if(fwrite(L.v,sizeof(REGISTRO),L.Conta,fp)!-L.Conta)
		return 0;
	fclose(fp);
	return 0;
}

e)

int Load(LISTA *L, FILE *fp){
	REGISTRO R;
	rewind(fp); Ir para o princípio do Arquivo
	while(fread(&R.sizeof(R),1,fp)==1)
		if(Inserir(L,R)==-1)
			return -1;
	return 0;
}


f)

void Listar(LISTA L){
	int i;
	for(i=0;i<L.Conta;i++)
		printf("%d %s\n",L.v[i].N,L.v[i].Nome);
}

*/


//Programa completo.


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 10

typedef struct{
	unsigned int N;
	char Nome[40+1];
}REGISTRO;

typedef struct{
	REGISTRO v[MAX];
	int Conta;
}LISTA;

void Inic(LISTA *ptr){
	ptr->Conta=0;
}

int Cheia(LISTA L){
	return L.Conta==MAX;
}

int Inserir(LISTA *ptr,REGISTRO r){
	if(Cheia(*ptr))
		return -1;
	ptr->v[ptr->Conta]=r;
	return ptr->Conta++;
}

int Save(LISTA L,char *Nome_Arq){
	int i;
	FILE *fp=fopen(Nome_Arq,"wb");
	if(fp==NULL)
		return 0;
	for(i=0;i<L.Conta;i++)
		if(fwrite(&L.v[i],sizeof(REGISTRO),1,fp)!=L.Conta)
			return 0;
	fclose(fp);
	return 0;
}

/*fp supões-se aberto.*/

int Load(LISTA *L,FILE *fp){
	REGISTRO R;
	rewind(fp);
	/*Ir para o princípio do arquivo.*/
	while(fread(&R,sizeof(R),1,fp)==1)
		if(Inserir(L,R)==-1)
			return -1;
	return 0;
}

void Listar(LISTA L){
	int i;
	for(i=0;i<L.Conta;i++)
		printf("%d %s\n",L.v[i].N,L.v[i].Nome);
}

main(){
	int i;
	LISTA Lista;

	REGISTRO R={100,"LUIS"};
	Inic(&Lista);
	Listar(Lista);
	for(i=0;i<=MAX;i++)
		R.N=i,Inserir(&Lista,R);
	Listar(Lista);
}






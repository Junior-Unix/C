/*Escreva um algoritmo que leia certa quantidade de número e imprima o maior deles e
quantas vezes o maior número foi lido. A quantidade de número a serem lidos deve ser
fornecida pelo usuário.:*/
#include <stdio.h>

int main(){

int vetor[100];

int x, n, maior, quantidade;
	printf("Informe a quantidade que será digitada.:\n");
	scanf("%d", &n); // pede ao usuário pra digitar a quantidade de números

	printf("Agora os valores.\n");
	for (x=0; x < n; x++) {
    		scanf("%d", &vetor[x]); // guarda os números no vetor
	}//for

maior = vetor[0];

	for (x=0; x < n; x++) {
    		if (vetor[x] > maior) maior = vetor[x]; // pega o maior numero do vetor
	}//for
	printf("O maior informado é: [%d ]\n", maior);

quantidade = 0;

for (x=0; x < n; x++) {
    if (vetor[x] == maior) quantidade++;
	printf("[%d ]", quantidade);
}//for
printf("\n");
	return 0 ;

}//main.

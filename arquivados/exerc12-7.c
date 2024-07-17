/* Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores lidos
juntamente com o maior, o menor e a média dos valores. */
#include <stdio.h>


int main(){
system("cls");
int vetor[5];
//int grosser = 0;
//int kleiner = 0;
int soma = 0;
int divisor = 0;
int auf = 0;
printf("Informe 5 valores, para buscar o maior, o menor e a media dos valores.:\n");

for( int i = 0; i < 5; i++ ){
    scanf("%d", &vetor[i]);
    divisor++;
    soma = soma + vetor[i];
}   

for( int i = 0; i < 5; i++ ){
    for(int j = j + 1; j < 5; j++ ){
        if( vetor[i] < vetor[j] ){
            auf = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = auf;
        }
    }
}
printf("O menor vetor^[0]~[%d];\nO maior vetor^[4]~[%d].\n", vetor[0], vetor[4] );
printf("A soma dos valores eh: [%d]\nE a media eh: [%d].\n", soma, soma / divisor);


    return 0 ;
}
/* Exercício 8 seção 5.: Escreva um programa que leia 10 numeros e escreva o menor valor 
lido e o maior valor lido. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main (){

    setlocale( LC_ALL, "portuguese");


    int n, maior = 0, menor = 0, soma = 0;
    printf("Digite os valores, para sair digite '0'.\n");
    
    do{
        printf("Digite o valor.: ");
        scanf("%d", &n);
        soma = soma + n;
        if ( n > maior)
            maior = n;
        if ( n > menor && n != 0)
            menor = n;
    }while( n != 0 );

    printf("Menor valor:[%d ], menor valor:[%d ], soma:[%d ]", menor, maior, soma);
    
    return 0 ;
}
/* Exercício 6 seção 5.: Faça um programa que leia 10 inteiros e imprima sua média. */
#include <stdio.h>


int main (){


float numero, soma = 0;

for( int i = 0; i < 10; i++){
    printf("Informe os 10 valores para a média:\n");
    scanf("%f", &numero);
    soma = soma + numero;
}

printf("A soma dos 10 numeros é:%.2f e a média é:%.2f\n\n", soma, soma / 10);









    return 0;
}

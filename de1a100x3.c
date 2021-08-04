/* Escreva um programa que escreva na tela, de 1 a 100, de 1  em 1,
3 vezes. A primeira vez deve usar a estrutura de repetição FOR,
a segunda WHILE e a terceira DO WHILE */

#include <stdio.h>

int main(){

int soma = 0;

for( int i = 1; i <= 1000; i++){
    soma  = soma + 1;
    system("clear");
    printf("%i\n", soma);
    continue;
}
int soma2 = 0;
while( soma2 < 1000){

    soma2 = soma2 + 1;
    system("clear");
    printf("\t%d\n", soma2);
}

int soma3 = 0;

do{
    soma3 = soma3 + 1;
    system("clear");
    printf("\t\t%d\n", soma3);
}while( soma3 < 1000);

    return 0 ;
}
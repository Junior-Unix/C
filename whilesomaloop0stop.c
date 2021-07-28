#include <stdio.h>

int main(){


int n, soma = 0;

printf("Digite um numero que irá ser somado com o pŕoximo e para receber o resultado, digite '0':\n");

scanf("%i", &n);

while( n != 0){

    soma = soma + n;
    printf("digite o pŕoximo numero, para parar digite '0'.\n");
    scanf("%i", &n);
    printf("numero digitado em %i soma em %i\n\n", n, soma);
}

printf("soma total em %i\n\n", soma);



    return 0 ;
}
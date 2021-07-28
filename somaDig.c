#include <stdio.h>
#include <stdlib.h>


int main(){

    system("clear");

    printf("Digite o valor, o programa irá somar os dígitos.\n\n");

    int numero, digito;
    int soma = 0 ;

scanf("%d", &numero);

while( numero > 0 ){
    digito = numero % 10;
    soma = soma + digito;
    numero = numero / 10;
}
printf("O resultado da soma dos digitoos do numero %d é %d\n\n", numero, soma);








    return 0 ;

}

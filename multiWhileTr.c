#include <stdio.h>

int main(){

    int numero, soma = 0 ;

    scanf("%d:", &numero);
    
    while( numero != 0){

        scanf("%d:", &numero);
        soma = soma + numero;
        printf("numero %d multi %d\n\n", numero, soma);
    }

    printf("%d\n\n", soma);



    return 0 ;
}
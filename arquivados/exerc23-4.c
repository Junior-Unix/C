/* Determine se um determinado ano lido é bixesto. Sendo que um ano é bissexto se for divisivel 
por 400 ou se for divisível por 4 e não for divisível por 100. Exemplo: 1988, 1992, 1996. */
#include <stdio.h>

int main(){

    int ano;
    printf("Digite o ano:\n:");
    scanf("%4i", &ano );

    if (( ano % 400 == 0 || ano % 4 == 0 && ano % 100 != 0 )){
        printf("O ano é bissesto!\n\n");
    }else{
        printf("O ano não é bissexto!\n\n");
    }








    return 0 ;
}
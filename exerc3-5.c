/* Faça um algoritmo utilizando o comando WHILE que mostra uma contagem 
regressiva na tela, iniciando em 10 e terminando em 0. Mostrando uma
mensagem "FIM!" após a contagem. */
#include <stdio.h>

int main(){

    int numero = 11;

while( numero !=0 ){
    
    numero = numero - 1;
    printf("%d\n", numero);
    
}

printf("FIM!");

    return 0 ;
}
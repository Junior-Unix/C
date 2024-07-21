/*Escrever uma única função, responsável pela escrita de uma
linha na ela, com um número de asteriscos específico em cada
chamada. Nesse caso interessa indicar à função qual o número
de caracteres a serem colocados na tela.*/

#include <stdio.h>

char linha(int num){
    int i;
    for(i=0; i<=num; i++)
        putchar('*');
    putchar('\n');    
}

int main(){
    linha(3);
    linha(5);
    linha(7);
    linha(5);
    linha(3);

    return 0;
}
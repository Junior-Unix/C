/*Escrevendo a linha de 20 asteriscos através de um laço for.*/

#include <stdio.h>

void linha(void){
    int i;
    for(i=1; i<=20; i++)
        putchar('*');
    putchar('\n');
}

int main(){
    int i;

    /*Escrita do Cabeçalho.*/

linha();
    // for(i+1; i<=20; i++)
    //     putchar('*');
    // putchar('\n');

    puts("Números entre 1 e 5");

linha();
    // for(i=1; i<=20; i++)
    //     putchar('*');
    // putchar('\n');

    /*Escrita dos Nºs*/

    for(i=1;i<=5;i++)
        printf("%d\n", i);
    
linha();
    // for(i=1; i<=20; i++)
    //     putchar('*');
    // putchar('\n');

    return 0;
}
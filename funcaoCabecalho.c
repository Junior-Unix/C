/*A decalaraçãoo de uma função consiste na escrita do seu cabaçalho
(a interface) da função, seguida de um ponto-e-vírgula(;),e deve
ser realizada antes da utilização da função que se quer declarar.
Tradicionalmente, a declaração é realizada imediatamente após os #includes.*/

#include <stdio.h>

void linha(void);

int main(void){
    linha();
    printf("Hello World!\n");
    linha();

    return 0;
}

void linha(void){
    int i;
    for(i=0; i<=20; i++)
        putchar('*');
    putchar('\n');
}
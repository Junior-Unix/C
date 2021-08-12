/* para compilar, se der erro: gcc -o programa alphaT.c programa.c */
#include <stdio.h>
#include <stdlib.h>
#include "alphaT.h"


void linha(int num, char ch){
    int i;
    for( i = 1; i <= num; i++ )
    putchar(ch);
    putchar('\n');
}

int soma( int num1, int num2 ){
    int resultado = num1 + num2;
    return resultado ;
}

void opa(){
    printf("Opa\n");
}
/* Escreva um programa que declare um inteiro, inicialize-o com 0, 
incremente-o de 1000 em 1000, imprimindo seu valor na tela, até
que seu valor seja 100000 (cem mil). */

#include <stdio.h>

int main(){

int numero, numero2 = 0;
int soma = 0;

for( int i = 0; i != 10; i++){

    numero = numero + 1000;
    printf("%i\n", numero);

}

while( numero2 != 100000){
    
    numero2 = numero2 + 1000;
    printf("%i\n", numero2);
}

    return 0;
}
/* Exercício 7 seção 5.: Faça um programa que leia 10 inteiros positivos, ignorando não positivos,
e imprima sua média.
 */

#include <stdio.h>

int main(void){

    float numero[10];
    
    

    printf("Digite 10 valores.\n");

    for( float i = 0; i < 10; i++){
        scanf("%f", &numero);
        printf("%f\n", numero[i]);
        }
    // for( int i = 0; i < 10; i++){
    \
    }

    return 0 ;
}
/* Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado
dos componentes deste vetor, armazenando os resultados em outro vetor. Os conj-
untos têm 10 elementos cada. Imprimir todos os conjuntos. */
#include <stdio.h>
#include "alphaT.h"

int main(){
linha( 70, '+');
system("cls");
float reais[10];

printf("Informe 10 valores de numeros R, para calcularmos o quadrado dos componentes.\n");

    for( int i = 0; i < 10; i++ ){
        scanf("%f", &reais[i]);
    }
system("cls");
linha( 70, '~');
        for( int i = 0; i < 10; i++ ){
            printf("[%.2f]\n", reais[i]);
        }
linha( 70, '~');
printf("R ao quadrado.:\n");
            for( int i = 0; i < 10; i++ ){
                reais[i] = reais[i] * reais[i];
            }
                for( int i = 0; i < 10; i++ ){
                    printf("[R]^2 vetor [%d] = [%.2f]\n", i, reais[i]);
                }

linha( 70, '+');

    return 0 ;
}
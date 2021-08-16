/* Leia uma matriz 4x4, conte e escreva quantos valores maiores que  10 ela
possui.
 */
#include <stdio.h>
#define N 4
#define n 10
int main(){

int vetor[N][N];
int nach = 0;
system("cls");
printf("Informe os %d valore\n", N);
for( int i  = 0; i < N; i++ ){
    for( int j = 0; j < N; j++ ){
        scanf("%d", &vetor[i][j]);
    }
}

for( int i = 0; i < N; i++ ){
    for( int j = 0; j < N; j++ ){
        printf("Vetor^[%d][%d]=>[%d].\n", i, j, vetor[i][j]);
        if( vetor[i][j] > n ){
            nach = nach + 1;
        }
    }
}
printf("Valores acima de %d.: [%d]", n, nach);
    return 0 ;
}

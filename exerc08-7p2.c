/* Leia uma matriz de 3x3 elementos. Calcule a soma dos elementos que estão acima da 
diagonal principal.
 */
#include <stdio.h>
#include <conio.h>

#define N 4

int acimaDiagonal(int matriz[N][N]){
    int i,j,acimaDiagonal=0;
    for( i = 0; i < N; i++ )
        for( j = i + 1; j < N; j++ )
            acimaDiagonal += matriz[i][j];
    return acimaDiagonal;
}


int main(){

int matrix[N][N];

system("cls");
printf("Informe os %d valores da matriz [%d]x[%d].\n", N*N, N, N );

for( int i = 0; i < N; i++ ){
    for( int j = 0; j < N; j++ ){
        scanf("%d", &matrix[i][j]);
    }
}
system("cls");
for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < N; j++ ){
        printf("[%d][%d]=>[%d] ", i, j, matrix[i][j]);
        /* printf("[%2d]", matrix[i][j]); */
    }
}
putchar('\n');
for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < N; j++ ){
       if ( i > j || i == j ){
       matrix[i][j] = 0;
        /* printf("[%d][%d]=>[%d]", i, j, matrix[i][j]); */
        printf("[%2d]", matrix[i][j]);
       }else{
           printf("[%2d]", matrix[i][j]);
       }
    }
}
putchar('\n');

printf("A soma dos elementos acima da diagonal principal na matriz [%d]x[%d] eh.: [%d]", N, N, acimaDiagonal(matrix));



    return 0 ;
}
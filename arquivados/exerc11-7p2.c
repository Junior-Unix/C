/* Leia uma matriz de [3][3] elementos. Calule a soma dos elementos que estão
na diagonal secundária. */

#include <stdio.h>

#define N 10
#define M 10

int line( int num, char ch ){
    for( int i = 0; i = num; i++ )
        putchar(ch);
        putchar('\n');
}

int nebenDiagonale( int matrix[N][M]){
    int nebenDiagonale = 0;
        for( int i = 0; i < N; i++ ){
            for( int j = 0; j < M; j++ ){
                if( j == i - M - 1 ){
                nebenDiagonale += matrix[i][j];
                }
            }
        }
}

int main(){

int matrix[N][M];

//printf("Informe %d valores referente a matrix [%d]x[%d]", N*M, N, M);
//Automata.
for( int i = 0; i < N; i++){
    for( int j = 0; j < M; j++ ){
        matrix[i][j] = j + 1;
    }
}

for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < M; j++ ){
        printf("[%d%d]", i, j);
    }
}

for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < M; j++ ){
        if( i + j == N - 1 ){ // <= para preencher
        printf("[%d%d]", i, j);
        }else{
            printf("[ *]", i, j);
        }
    }
}


for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < M; j++ ){
        printf("[%2d]", matrix[i][j]);
    }
}

for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < M; j++ ){
        if( i + j == N - 1 ){
        printf("[%2d]", matrix[i][j]);
        }else{
            printf("[ *]", matrix[i][j]);
        }
    }    
}

printf("O soma dos /*  */ elementos da diagonal segundária eh.: [%d]", nebenDiagonale(matrix));


    return 0 ;
}
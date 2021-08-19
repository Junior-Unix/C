/* Leia uma matrix[3][3] elementos. Calcule a soma dos elementos que estão abaixo
da diagonal principal. */
#include <stdio.h>

#define N 3
#define M 3

int diagonalAbaixo(int matrix[N][M]){
    int i, j, diagonalAbaixo = 0;
    for( i = 0; i < N; i++ )
        for( j = 0; j < M; j++ )
            if( i > j )
            diagonalAbaixo += matrix[i][j];        
        return diagonalAbaixo;
}

int main(){

int matrix[N][M];
int count = 0;
system("cls");


printf("Informe os %d valores da matrix[%d][%d].\n", N*M, N, M );
for( int i = 0; i < N; i++ ){
    for( int j = 0; j < M; j++ ){
        scanf("%d", &matrix[i][j]);
    }
}

/* //Automata
printf("Informe os %d valores da matrix[%d][%d].\n", N*M, N, M );
for( int i = 0; i < N; i++ ){
    for( int j = 0; j < M; j++ ){
        matrix[i][j] = 1;
    }
} */

system("cls");
for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < M; j++ ){
            printf("[%d%d]", i, j);
            
    }putchar('\n');
}
putchar('\n');
for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < M; j++ ){
            printf("[%2d]", matrix[i][j]);
    }putchar('\n');
}
putchar('\n');

putchar('\n');
for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0 ; j < M; j++ ){
        if( i > j ){
            printf("[%2d]", matrix[i][j]);
            count++;
        }else
            if( i == j ){   
            printf("[* ]");
            }else{
                printf("[  ]");
            }
        
    }putchar('\n');
}

printf("A soma dos %d elementos abaixo da diagonal principal eh.: [%d].\n", count, diagonalAbaixo(matrix));





    return 0 ;

}
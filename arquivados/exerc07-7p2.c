/* Gerar e imprimir uma matriz de tamanho 10x10, onde seus elementos são da forma.:
A[i][j]=2i+7-2 se i < j;
A[i][j]=3i²-1 se i = j;
A[i][j]=4i³-5j2+1 se i > j. */
#include <stdio.h>

#define N 5


int linie( int num, char ch ){
    for( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
}

int main(){

int matrix[N][N];

for( int i = 0; i < N; i++ ){
    for( int j = 0; j < N; j++ ){
        scanf("%d", &matrix[i][j]);
    }
}
system("cls");
linie(60,'=');
for( int i = 0; i < N; i++ ){
    for( int j = 0; j < N; j++ ){
        if( i < j )
            matrix[i][j] = (2*i)+7-2;
         if( i > j )
                matrix[i][j] = (4*(i*i*i))-((5*j*2)+1);
            else
                matrix[i][j] = (3*(i*i))-1;
    }
}
for( int i = 0; i < N; i++ ){
    putchar('\n');
    for( int j = 0; j < N; j++ ){
        printf( "matrix^[%d][%d]=>[%3d]", i, j, matrix[i][j] );
    }
}
putchar('\n');
linie(60,'=');
    return 0;
}

/* Faça um programa que preenche uma mmatriz 4x4 com o produto do valor da linha e
da coluna de cada elemento. Em seguida, imprima na tela a matriz. */
#include <stdio.h>
#define N 10

int main (){

int linha( int num, char ch ){
    for ( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
}

int matrix[N][N];
system("cls");
linha( 70, '=');
for( int i = 0; i < N; i++ ){
    printf("\n");
    for( int j = 0; j < N; j++ ){
        printf("[%2d]", matrix[i][j] = i * j);
    }
}
printf("\n");
linha( 70, '=');

    return  0 ;
}
/* Leia uma matrix 4x4, imprma a matrix e retorne a localização( linha e a coluna )
do maior valor. */
#include <stdio.h>
#define N 4

int linha( int num, char ch ){
    for( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
    
}
int main(){

int matrix[N][N];

system("cls");
printf("O programa lerah %d valores, e devolvera o maior com sua localozação na matrix.\n", N * N);

for( int i = 0; i < N; i++ ){
    for( int j = 0; j < N; j++ ){
        scanf("%d", &matrix[i][j]);
    }
}
system("cls");
linha( 70, '=' );

for( int i = 0; i < N; i++ ){
    printf("\n");
    for( int j = 0; j < N; j++ ){
        printf("[%d][%d]=>[%2d] ", i, j, matrix[i][j]);
    }
}
printf("\n");
linha( 70, '=' );

int linha = 0;
int coluna = 0;
int maior = matrix[0][0];
for( int i = 0; i <= N; i++ ){
    for( int j = 0; j <= N; j++ ){
        if( matrix[i][j] > maior ){
            linha = i;
            coluna = j;
            maior = matrix[i][j];
        }   
            
    }
}
printf("O maior valor eh matrix^[%d][%d]=>[%d].\n", linha, coluna, maior);



    return 0 ;
}
/* Leia uma matrix 5x5, leia tambem um valor X. O programa devera fazer uma busca
desse valor na matriz e , ao final, escrever a localização (linha e coluna) ou 
uma mensagem de " não encontrado". */
#include <stdio.h>

#define N 3
int linha( int num, char ch){
    for( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
}

int main(){

int matrix[N][N];
system("cls");
system("color 1F");
linha( 70, '=' );
printf("Informe os %d valores da matrix %d x %d, a seguir procure o valor.:\n", N * N, N, N);

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
        printf("Matriz^[%d][%d]=>[%d] ", i, j, matrix[i][j]);
    }
}
printf("\n");
linha( 70, '=' );
int X = 0;
printf("Informe o valor a procurar dentro da matrix [%d] x [%d]\n", N, N);
scanf("%d", &X);
linha( 70, '=');

for( int i = 0; i < N; i++ ){
    for( int j = 0; j < N; j++ ){
        if( X == matrix[i][j] && X <= matrix[i][j] ){
            printf("Matrix^[%d][%d]=>[%d]. encontrada.\n", i, j, matrix[i][j]);
        }else{
            printf("Matriz^[%d][%d] negativo.:\n", i, j);
        }
    }
}


    return 0 ;
}
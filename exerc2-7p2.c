/* Declare uma matriz 5x5. Preencha com 1 a diagonal principal e com 0 os demais 
elementos. Escreva ao final a matriz obrita. */

#include <stdio.h>
#define N 5
#define n 1
#define m 0

int linha( int num, char ch){
    for( int i = 0; i < num; i++ )
        putchar(ch);
        putchar('\n');
}

int main(){

int vetor[N][N];/* ={{1,0,0,0,0}
                ,{0,1,0,0,0}
                ,{0,0,1,0,0}
                ,{0,0,0,1,0}
                ,{0,0,0,0,1}}; */

system("cls");

linha( 70, '=');
for( int i = 0; i < N; i++ ){
    printf("\n");
    for( int j = 0; j < N; j++ ){
        if( i == j ){
            printf("[%d]", vetor[i][j] = n);
            }else{
                printf("[%d]", vetor[i][j] = m);
            }
    }
}
printf("\n\n");
linha( 70, '=');
    return 0 ;
}
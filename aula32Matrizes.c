#include <stdio.h>
#include "oracle.h"

int main(){

int N[5][5];
int linha(77,'=');
printf("Informe os valores para matriz, 5x5.\n");

for( int i = 0; i < 5; i++ ){
    for( int j = 0; j < 5; j++ ){
        scanf("%d", &N[i][j]);
    }
}

printf("Eis as matrizes:\n");

for( int i = 0; i < 5; i++ ){
    for( int j = 0; j < 5; j++ ){
        printf("[%d][%d] == [%d]\n",i, j, N[i][j]);
    }
}





    return 0 ;
}
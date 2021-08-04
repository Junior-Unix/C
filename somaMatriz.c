#include <stdio.h>


#define N 2

int main(){

    int A[N][N];
    int B[N][N];
    int C[N][N];

    int i,j;

    printf("Digite os 4 elementos da matriz A:\n");
    scanf("%d %d %d %d", &A[0][0],&A[0][1], &A[1][0], &A[1][1]);

    printf("Digite os elementos da matriz B:\n");
    for (i=0; i < N; i++){
        // printf("Linha %d\n", i+1); // caso queira representar começando com 1.
        printf("Linha %d\n", i);
        for (j=0; j < N; j++){
            // printf("Coluna %d:\n", j+1);
            printf("Coluna %d:\n", j); // caso queira representar começando com 1.
            scanf("%d", &B[i][j]);
        }
    }

    // soma das matrizes A e B

    for (i=0; i < N; i++){
        for (j=0; j < N; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    for (i=0; i < N; i++){
        for (j=0; j < N; j++){
            printf("A soma de A[%d] e B[%d] é [%d] ",A[i][j], B[i][j], C[i][j]);
        }
        printf("\n");
    }

    return 0;

}

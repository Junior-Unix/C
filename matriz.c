#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    // Solicita ao usuário o tamanho da matriz
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    // Aloca dinamicamente a matriz
    int **matriz = (int **)malloc(tamanho * sizeof(int *));
    for (int i = 0; i < tamanho; i++) {
        matriz[i] = (int *)malloc(tamanho * sizeof(int));
    }

    // Preenche a matriz com 0 e 1 na diagonal secundária
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (i + j == tamanho - 1) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    // Exibe a matriz
    printf("\nMatriz com diagonal secundária:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < tamanho; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <string.h>

// Largura do gráfico em caracteres (ajuste se sua tela for pequena)
#define LARGURA 60 

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double rad, val_seno, val_cosseno;
    int pos_seno, pos_cosseno;
    char linha[LARGURA + 5]; // Buffer para desenhar a linha

    printf("\n=== GRAFICO ASCII: SENO (s) vs COSSENO (c) ===\n");
    printf("Eixo X: Valor de 0.0 a 1.0\n");
    printf("Eixo Y: Graus (descendo)\n\n");

    // Desenha a régua superior
    printf("      0.0Arg");
    for(int i=0; i<LARGURA-6; i++) printf("-");
    printf("1.0\n");

    // Loop de 0 a 90 graus (passo de 2 em 2 para não ficar gigante na tela)
    for (int grau = 0; grau <= 90; grau += 2) {
        
        // 1. Cálculos
        rad = grau * (M_PI / 180.0);
        val_seno = sin(rad);
        val_cosseno = cos(rad);

        // 2. Mapear o valor (0.0 a 1.0) para a posição na tela (0 a LARGURA)
        pos_seno = (int)(val_seno * LARGURA);
        pos_cosseno = (int)(val_cosseno * LARGURA);

        // 3. Preparar a linha vazia (enche de espaços)
        memset(linha, ' ', LARGURA);
        linha[LARGURA] = '\0'; // Finaliza a string

        // 4. Colocar os pontos
        // Se caírem no mesmo lugar (ex: 45 graus), marca com X
        if (pos_seno == pos_cosseno) {
            linha[pos_seno] = 'X'; 
        } else {
            linha[pos_seno] = 's'; // 's' para Seno
            linha[pos_cosseno] = 'c'; // 'c' para Cosseno
        }

        // Adiciona um traço vertical no zero para referência visual
        if (linha[0] == ' ') linha[0] = '|';

        // 5. Imprimir: Grau + O desenho da linha
        printf("%3d G [%s]\n", grau, linha);
    }
    
    // Régua inferior
    printf("      ");
    for(int i=0; i<LARGURA; i++) printf("-");
    printf("\n");

    return 0;
}

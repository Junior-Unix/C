#include <stdio.h>
#include <math.h>

// Garante que o valor de PI esteja definido
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double rad, cateto_oposto, cateto_adjacente;

    printf("=================================================================\n");
    printf(" LISTA COMPLETA: 0 a 90 GRAUS (Raio/Hipotenusa = 1)\n");
    printf("=================================================================\n");
    printf(" GRAU |   RADIANOS  | CAT. OPOSTO (Y) | CAT. ADJACENTE (X)\n");
    printf("------|-------------|-----------------|-------------------\n");

    // Loop que vai de 0 até 90
    for (int grau = 0; grau <= 90; grau++) {
        
        // Conversão: Radiano = Grau * (PI / 180)
        rad = (double)grau * (M_PI / 180.0);
        
        cateto_oposto = sin(rad);
        cateto_adjacente = cos(rad);

        // Ajuste fino para evitar "-0.0000" ou erros minúsculos de precisão em 90 e 0
        if (grau == 0) cateto_oposto = 0.0;
        if (grau == 90) cateto_adjacente = 0.0;
        if (grau == 90) cateto_oposto = 1.0;
        if (grau == 0) cateto_adjacente = 1.0;

        // Impressão formatada
        // %3d = inteiro com 3 espaços
        // %.5f = decimal com 5 casas após a vírgula
        printf(" %3d  |   %.5f   |     %.5f     |     %.5f\n", 
               grau, rad, cateto_oposto, cateto_adjacente);
    }

    printf("=================================================================\n");
    return 0;
}

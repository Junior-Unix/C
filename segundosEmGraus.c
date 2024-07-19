/*Transforme segundos em graus*/

#include <stdio.h>

int main() {
    double segundos;
    int graus, minutos;

    printf("Digite o valor em segundos: ");
    scanf("%lf", &segundos);

    // Converter para graus, minutos e segundos
    graus = (int)(segundos / 3600);
    segundos -= graus * 3600;
    minutos = (int)(segundos / 60);
    segundos -= minutos * 60;

    printf("Resultado: %d graus, %d minutos e %.2lf segundos\n", graus, minutos, segundos);

    return 0;
}


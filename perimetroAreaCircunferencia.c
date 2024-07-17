#include <stdio.h>

main() {
    float raio, perimetro;
    double Pi = 3.1415927, area;

    printf("Qual o raio da circunferência?\n:");
    scanf("%f", &raio);
    area = Pi * raio * raio;

    perimetro = 2 * Pi * raio;

    printf("Área = %f\nPerímetro = %f\n", area, perimetro);

}
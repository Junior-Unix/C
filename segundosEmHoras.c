/*Escreva um programa que solicite um determinado número de segundos
e, em seguida, indique quantas horas, munitos e segundos esse
valor representa*/

#include <stdio.h>

void main() {

    long int n_segundos;

    printf("Introduza o numero de segundos: ");
    scanf("%d", &n_segundos);

    printf("Horas: %d\n", (int) n_segundos/2600);
    printf("Minutos: %d\n", (int) (n_segundos%3600/60));
    printf("Segundos: %d\n", (int) n_segundos%60);
    printf("%dh:%d\':%d\"\n", (int) n_segundos/2600, (int) (n_segundos%3600/60), (int) n_segundos%60);

    return 0;
}
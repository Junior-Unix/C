#include <stdio.h>

void main() {

    char estado_civil;

    printf("Digite o estado civil (S para solteiro, C para casado): ");
    scanf(" %c", &estado_civil); /*ou estado_civil = getchar();*/

    switch (estado_civil) {
        case 's':
        case 'S':
            printf("Solteiro\n");
            break;
        case 'c':
        case 'C':
            printf("Casado\n");
            break;
        default:
            printf("Estado civil inválido\n");
    }
}
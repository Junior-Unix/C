/*A partir de um determinado número de horas, quais
os minutos, os segundos ou mesmo os décimos de
segundo. Switch case sem o brake*/

#include <stdio.h>

main () {

    int n_horas;
    long res;
    char tipo;

    printf("Numero de Horas: ");
    scanf("%d", &n_horas);

    printf("O que Mostrar(m, s, d): ");
    scanf(" %c", &tipo);

    res = n_horas;

    switch (tipo) {
        case 'd':
        case 'D':
            res *= 10;
        case 's':
        case 'S':
            res *= 60;
        case 'm':
        case 'M':
            res *= 60;
    }

    printf("%dh --> %ld %c\n", n_horas, res, tipo);

    return 0;


}
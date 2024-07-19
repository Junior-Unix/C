/*A partir de um determinado número de horas, quais
os minutos, os segundos ou mesmo os décimos de
segundo.*/

#include <stdio.h>

main() {

    int n_horas;
    long res;
    char tipo;

    printf("Numero de Horas: ");
    scanf("%d", &n_horas);

    printf("O que Mostrar(m, s, d): ");
    scanf(" %c", &tipo);

    if (tipo == 'm' || tipo == 'M') 
        res = n_horas < 0 ? 0 : n_horas * 60L;
    else
        if (tipo == 's' || tipo == 'S') 
            res = n_horas < 0 ? 0 : n_horas * 3600L;
        else
            if (tipo == 'd' || tipo == 'D')
                res = n_horas < 0 ? 0 : n_horas * 36000L;

    printf("%d horas tem %ld %c\n", n_horas, res, tipo);

    return 0;

}
/*Programa que indique quantos segundos tem um determinado número de horas.*/

#include <stdio.h>

int main() {

    int n_horas;
    long n_seg; /*pode ser muito grande*/

    printf("Numero de Horas: ");
    scanf("%d", &n_horas);

    n_seg = n_horas < 0 ? 0 : n_horas * 3600L; /*ou casting: (long) 3600*/

    printf("%d horas tem %ld segundos\n", n_horas, n_seg);

    return 0;
}
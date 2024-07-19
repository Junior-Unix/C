/*
Que solicite um salário ao utilizador e 
mostre o imposto a pagar
    -Se o salário for negativo ou zero mostre
    o erro respectivo
    -Se o salário for maior que 1000, paga 10%
    de imposto, se não paga apenas 5%.
*/

#include <stdio.h>


void main() {
    float salario;

    printf("Qual o salário: ");
    scanf("%f", &salario);

    if (salario <= 0)
        printf("Salário inválido\n");
    else 
        if (salario > 1000)
            printf("Imposto a pagar: %.2f\n", salario * 0.10);
        else
            printf("Imposto a pagar: %.2f\n", salario * 0.05);

}
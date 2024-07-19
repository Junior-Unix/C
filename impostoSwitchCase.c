/*Calcule o imposto pago por mulheres e por homens,
sabendo que as mulheres pagam 10% de imposto e que
os homens pagam mais 5% do que as mulheres. Usando
switch case*/

#include <stdio.h>

int main() {
    char sexo;
    float salario, imposto;

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    printf("Digite o salário: ");
    scanf("%f", &salario);

    switch (sexo) {
        case 'm':
        case 'M':
            imposto = salario * 0.15;
            break;
        case 'f':
        case 'F':
            imposto = salario * 0.10;
            break;
        default:
            printf("Sexo inválido\n");
            return 1;
    }

    printf("Imposto: %.2f\n", imposto);

    return 0;
}


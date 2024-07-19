/*
  Calcule o salário bruto, líquido e o imposto a pagar
seguindo a seguinte regra:
Salário             Taxa
<1000               5%
>=1000 e < 5000     11%
>=5000              35%
*/

#include <stdio.h>

void main() {

    float salario, taxa;

    printf("Qual o salário: ");
    scanf("%f", &salario);

    if(salario < 1000)
        taxa = .05;

    else
        if(salario < 5000)
            taxa = .11;
        else
            taxa = .35;

    printf("Salário: %.2f\n imposto: %.2f\n líquido: %.2f\n",
        salario, salario * taxa, salario * (1.0 - taxa));


    return 0;
}
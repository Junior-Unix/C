/*Aplique uma taxa de imposto de 10% aos solteiros
e de 9% aos casados*/

#include <stdio.h>

void main() {

    float salario;
    char est_civil;

    printf("Qual o salário: ");
    scanf("%f", &salario);

    printf("Qual o estado civil (s/c): ");
    scanf(" %c", &est_civil);

    if(est_civil=='C' || est_civil=='c')
        printf("Imposto: %.2f\n", salario * 0.09);
    else
        if(est_civil=='S' || est_civil=='s')
            printf("Imposto: %.2f\n", salario * 0.10);
        else
            printf("Estado civil incorreto\n");

    return 0;

}
#include <stdio.h>
#include "alphaT.h"

int main(){

linha(77,'*');

int num1, num2 = 0;
printf("Informe os dois valores.:\n");
scanf("%d", &num1);
printf("Proximo.:\n");
scanf("%d", &num2);

int resultado = soma(num1, num2);
printf("%d\n\n", resultado);
void opa();
linha(77,'*');
    return 0 ;
}
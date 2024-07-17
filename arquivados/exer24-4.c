/* Uma empresa vende o mesmo produto para quatro dierêntes estados, cada estado possui uma taxa 
diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15 %; MS 8%). Faça um programa em que
o usuário entre com o valor e o estado destino do produto e o programa retorne o preço final 
do produto acrescido do imposto do estado em que ele será vendido. Se o estado digitado não 
for válido, mostrar uma mensagem de erro. */
#include <stdio.h>

int main(){

    float valorProduto, valorImposto, valorTotal = 0;

    printf("Impostos:\n\t1-MG = 7%%;\n\t2-SP = 12%%;\n\t3-RJ = 15%%;\n\t4-MS = 8%%;\n\n");

char estado;
estado = getchar();

printf("Digite o valor:\nr$:");
scanf("%f", &valorProduto);

switch(estado){
    case '1': valorTotal = valorProduto * 1.07;
    break;
    case '2': valorTotal = valorProduto * 1.12;
    break;
    case '3': valorTotal = valorProduto * 1.15;
    break;
    case '4': valorTotal = valorProduto * 1.08;
    break;
    default : printf("Quiting.");
    break;
}
printf("r$%.2f_\n\n", valorTotal);









    return 0 ;
}
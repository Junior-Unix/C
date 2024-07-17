/* Faça um programa que preencha um vetor com 10 números reais, calcule e mostre
a quantia de numeros negativos e a soma dos números positívos desse vetor. */
#include <stdio.h>

int main(){

float vetor[10];
int negativos = 0; 
int positivos = 0;
float soma = 0;
float reais = 0;
float x[10]={};
float y[10]={};

system("cls");

printf("Informe 10 valores REAIS, o programa somará apenas os positivos,:\n");
    for( int i = 0; i < 10; i++ ){
        scanf("%f", &reais);
            if( reais < 0 ){
                x[negativos] = reais;
                negativos++;
            }else if( reais > 0 ){
                soma = soma + reais;
                y[positivos] = reais;
                positivos++;
            }else{}
    }
system("cls");

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');


for( int i = 0; i < positivos; i++ ){
    printf("Positivos [%.1f]\n", y[i] );
}

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');

for( int i = 0; i < negativos; i++ ){
    printf("Negativos [%.1f]\n", x[i]);
}

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');
printf("Positivos [%i] negativos [%i].\n\n", positivos, negativos);

printf("A soma apenas dos numeros positivos eh.:[%.1f]\n", soma);



 for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');   










    return 0 ;
}
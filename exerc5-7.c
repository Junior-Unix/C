/* Leia um vetor de 10 posições. COntar e escrever quantos valores
pares ele possui. */
#include <stdio.h>
void cls(){
    system("cls");
}

int divisa( int num, char ch){
    int i;
    for( i = 1; i <= num; i++ )
        putchar(ch);
        putchar('\n');
}

int main(){
cls();

int vetor[10];

    printf("Informe 10 valores para o vetor.:\n");
        for( int i = 0; i < 10; i++ ){
            scanf("%d", &vetor[i]);
        }
cls();
for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');
        
        for( int i = 0; i < 10; i++ ){
            printf("vetor [%d]=[%d]\n", i, vetor[i]);
        }

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');

fflush(stdin);
int soma = 0;
            int i  = 0;
            for( i = 0; i < 10; i++ ){
                if( vetor[i] % 2 == 0 ){
                    printf("[%d]\n", vetor[i]);
                    soma = soma + vetor[i];
                }                  
            }
printf("A soma dos vetores pares:[%d ]\n\n", soma);

for( int i = 1; i < 70; i++ )
    putchar('=');
    putchar('\n');

    return 0 ;
}
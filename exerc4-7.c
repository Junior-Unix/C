/*  Faça um programa que leia um vetor d 8 posições e, em seguida, leia também dois
 valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final  seu
 programa deverá escrever a soma dos valores encontrados nas respetcivas posições
 X e Y */
#include <stdio.h>

void cls(){
    system("cls");
}
int divisa( int num, char ch){
    int d;
    for( d = 1; d <= num; d++)
        putchar(ch);
        putchar('\n');
}

int main(){

cls();
divisa( 70, '=');

int vetor[8];
int X, Y = 0;

printf("Informe 8 valores para o vetor.:\n");
    for( int i = 0; i < 8; i++){
        scanf("%d", &vetor[i]);
    }

cls();

divisa( 70, '=');

    for( int i = 0; i < 8; i++ ){
        printf("vetor%d[%d]\n", i, vetor[i]);
    }

divisa( 70, '=');
printf("\n");

printf("Informe dois valores correspondentesa X e Y dentro dos vetores.:\n");
    printf("\nInforme X, primeiro.\nVetor:");
        scanf("%d", &X);
            for( int i = 0; i < 8; i++){
                if( X == vetor[i] )
                    X = vetor[i];
            }
    printf("Agora Y.\nVetor:");
        scanf("%d", &Y);
            for( int j = 0; j < 8; j++){
                if( Y == vetor[j])
                    Y = vetor[j];
            }    
divisa( 70, '=');

int soma = vetor[X] + vetor[Y];
    printf("X em vetor[%d], vale:[%d],\nY em vetor[%d], vale:[%d],\nE a soma entre X e Y eh:[%d]\n", X, vetor[X], Y, vetor[Y], soma );

divisa( 70, '=');

    return 0 ;
}
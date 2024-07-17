/* Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os
valores lidos na ordem inversa. */
#include <stdio.h>

int main(){



int vetor[6];
int par = 0;
system("cls");

printf("Informe 6 valores pares, serah mostrado a ordem inversa.:\n");


for( int i = 0; i < 6; i++ ){
    scanf("%d", &par);
        if( par % 2 == 0 )
            vetor[i] = par;
        else
            i--;
            
}
for( int i = 5; i >= 0; i--)
    printf("vetor^[%d]~[%d]\n", i, vetor[i]);
   
                



    return 0 ;
}
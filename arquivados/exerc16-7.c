/* Faça um programa que leia um vetor de 5 posições para números reais e, depois,
um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre
o vetor na ordem direita; se for 2, mostre o vetor na ordem inversa. Caso,   o
código for diferente de 1 e 2 escreva uma mensagem informando que o código   é
invlalido. */

#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(){

int vetor[N];
char programa;
system("cls");
printf("Informe os 5 valores, por gentileza.:\n");
for( int i = 0; i < N; i++ ){
    scanf("%d", &vetor[i]);
}
fflush(stdin);
printf("Para ver os numeros que digitou, na tela 'n', para invertido 'i' e para sair 's'.:\n");
scanf("%c", &programa);



    switch(programa)
    {
        case 'n' :  for( int i = 0; i < N; i++ ){
                        printf("Vetor^[%d]=>[%d].\n", i, vetor[i]);
                    }
                    break;
    
        case 'i' :  for( int i = N - 1; i >= 0; i-- ){
                        printf("Vetor^[%d]=>[%d].\n", i, vetor[i]);
                    }
                    break;
    
        default  :  printf("Opção invlálida.:\n");
                    break;
    }





    return 0 ;
}
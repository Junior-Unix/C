/*Solicite um número que solicite ao usuário um número. Em seguida
escreva todos os números inteiros a partir desse número, exeto os 
múltiplos de 3. Quando encontrar o primeiro múltiplo de 10 a execução 
termina */

#include <stdio.h>

int main(){

    int i, n;

    printf("Introd. um nº:");
    scanf("%d", &n);

    for(i=n;; i++){/*Laço infinito*/
        if(i%10==0)break;/*Multiplo de 10*/
        else
            if(i%3==0)continue;
        printf("%d\n", i);
    }
    return 0;
}
/*Programa que solicite dois numeros ao usuário e apresente na
tela o resultado da sua soma e o dobro de cada um deles*/

#include <stdio.h>

int soma(int x, int y){
    int res;
    res = x + y;
    return res;
}

int dobro(int x){
    return 2*x;
}

int main(){

    int n, i, total;
    
    printf("Introd. dois números:");
    scanf("%d", &n);
    printf("Próximo número:");
    scanf("%d", &i);

    total = soma(n, i); /*Atrib. do resultado da função a uma variável*/
    
    printf("%d+%d=%d\n", n, i, total);
    printf("2*%d=%d e 2*%d=%d\n", n, dobro(n), i, dobro(i));

    return 0;

}
#include <stdio.h>

int isequal();

int main(){
    int n1, n2;

    printf("Digite dois números para comparar se são iguais:\n");
    printf("Digite o primeiro número:");
    scanf("%d", &n1);
    printf("Digite o segundo número:");
    scanf("%d", &n2);

    if(isequal(n1, n2)){
        printf("Os números (%d) e (%d) São iguais!");
    }else{
        printf("Os números (%d) e (%d) Não são iguais!");
    }
//    printf("Os números (%d) e (%d) (%d)\n", n1, n2, isequal(n1, n2));

    return 0;
}

int isequal(int x, int y){
    return(x==y);
}
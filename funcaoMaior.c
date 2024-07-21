/*Calcule o maior de dois números.*/

#include <stdio.h>

int max(int n1, int n2){
    if(n1>n2)
        return n1;
    else
        return n2;
}

int main(){
    
    int n1, n2;

    printf("Introd. dois números:");
    scanf("%d", &n1);
    printf("Próximo número:");
    scanf("%d", &n2);

    printf("O maior numero entre %d e %d é %d\n", n1, n2, max(n1, n2));

    return 0;
}
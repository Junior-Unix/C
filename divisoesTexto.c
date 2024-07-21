/*Que solicite ao usuário um número e um caracree. Em seguida,
terá que preencher , linhas, cada uma delas com n caracteres.*/

#include <stdio.h>

int main(){
    int i, j, n;
    char ch;

    printf("Indrod. um nº:");
    scanf("%d", &n);
    printf("Introd. um Char:");
    scanf(" %c", &ch);

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++)
            putchar(ch);
        putchar('\n');
    }

    return 0;
}
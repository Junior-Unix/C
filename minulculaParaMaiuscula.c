/*Transforme qualquer caractere na sua maiúscula correspondente*/
#include <stdio.h>

int x_ToUpper(char ch);

int main(){

    char ch;

    printf("Introduza uma letra: \n");
    
    while(1){/*Termina com CTRL-C*/
        printf("Letra:");
        ch=getchar();
            putchar(x_ToUpper(ch));
    }
}

int x_ToUpper(char ch){
    if(ch>='a' && ch<='z')/*Se minúscula*/
        return ch + 'A'-'a';
    else
        return ch;/*Devolve a própria*/
}
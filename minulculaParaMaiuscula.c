/*Transforme qualquer caractere na sua maiúscula correspondente*/
#include <stdio.h>

int x_ToUpper(char ch){
    if(ch>='a' && ch<='z')/*Se minúscula*/
        return ch + 'A'-'a';
    else
        return ch;/*Devolve a própria*/
}

int main(){

    char ch;

    while(1){/*Termina com CTRL-C*/
        ch=getchar();
            putchar(x_ToUpper(ch));
    }
}
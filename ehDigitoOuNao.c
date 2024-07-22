/*Função x_isDigit, verifica se um determinado caractere 
é dígito ou não.*/

#include <stdio.h>

int x_isDigit(char ch);

int main(){

    char ch;

//    printf("Introduza um caractere ou CTRL-C para finalizar:");
    while(1){/*Termina com CTRL-C*/
        ch=getchar();
        if(!x_isDigit(ch))/*se não for digito*/
            putchar(ch);
    }

    return 0;
}

int x_isDigit(char ch){
    return(ch>='0' && ch<='9');
}
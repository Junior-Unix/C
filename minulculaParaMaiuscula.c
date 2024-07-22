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

/*Valores ASCII:
Em C, os caracteres são representados internamente como valores 
numéricos de acordo com a tabela ASCII. ‘A’ tem o valor ASCII 65, 
enquanto ‘a’ tem o valor ASCII 97.
Operações:
A expressão ch + 'A' - 'a' realiza as seguintes operações:
ch é o caractere passado como argumento para a função.
'A' - 'a' calcula a diferença entre os valores ASCII de ‘A’ e ‘a’, 
que é 32. Somando essa diferença ao valor ASCII de ch, obtemos o 
valor correspondente ao caractere maiúsculo equivalente.
Exemplo:
Se ch for ‘b’ (cujo valor ASCII é 98):
ch + 'A' - 'a' resulta em 98 + 32, que é 130.
O valor ASCII 130 corresponde ao caractere maiúsculo ‘B’.*/
/*De forma que a função linha escreva qualquer caracter, 
e não apenas o caractere asteristo.*/

#include <stdio.h>

linha(int num, char ch){
    int i;
    for(i=1; i<=num; i++)
        putchar(ch);
    putchar('\n');
}

int main(){
    linha(3, '+');
    linha(5, '*');
    linha(7, '#');
    linha(5, '*');
    linha(3, '+');

    return 0;
}

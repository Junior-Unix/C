/*Escreva um programa que, recorrendo a três funções distintas,
escreve na tela a seguinte saída:

***
*****
*******
*****
***
*/
#include <stdio.h>

char linha3x(){
    int i;
    for(i=0; i<=3; i++)
        putchar('*');
    putchar('\n');
}
char linha5x(){
    int i;
    for(i=0; i<=5; i++)
        putchar('*');
    putchar('\n');
}
char linha7x(){
    int i;
    for(i=0; i<=7; i++)
        putchar('*');
    putchar('\n');
}

int main(){
    linha3x();
    linha5x();
    linha7x();
    linha5x();
    linha3x();

    return 0;
}
/*Escreve toda a tabela ASCII*/

#include <stdio.h>

int main(){
    int i;

    for(i=0; i<=255; i++)
        printf("%3d¬¬¬>%c\n", i, (char) i);

    return 0;
}
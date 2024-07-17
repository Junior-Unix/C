/* Leia uma matriz de [3]x[3] elementos. Calcule e imprima a sua transposta. */
#include <stdio.h>

int main(){

FILE *arq;
char c;
arq = fopen("arquivo.txt", "r");//Leitura

if(arq){
    while((c = getc(arq)) !=EOF){
        printf("%c", c);
    }
}else{
    printf("Não encontrado!");
}
fclose(arq);


    return 0 ;
}
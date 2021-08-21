#include <stdio.h>

#define N 20

int main(){

    FILE *arq;
    char frutas[N];

    arq = fopen("frutas.txt", "a");// w cria ou sobrescreve, a append = adicionar.

        if(arq){
            printf("Informe ma fruta ou 0 para sair: \n");
            fgets(frutas, N, stdin); //Standart input, entrada padrão, teclado.
            while(frutas[0] != '0'){
                fputs(frutas, arq);
                printf("Informe uma fruta ou 0 para sair: \n");
                fgets(frutas, N, stdin);
            }

        }else{
            printf("Não foi possível criar o arquivo!");
        }
        fclose(arq);

    return 0;
}
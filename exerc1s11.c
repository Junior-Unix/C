/* Escreva um programa que: 
(a) Crie um arquivo texto e nome "arq.txt"
(b) Permita que o usuário grave diversor caracteres nesse arquivo, até que o 
    usuário entre com o caractere '0'
(c) Feche o arquivo */

#include <stdio.h>

#define N 10

int main(void){

    FILE *arq;

    char file[N];

    arq = fopen("file.txt", "a");

        if(arq){
            printf("Informe os caracteres.:\n");
            fgets( file, N, stdin);

                while(file[0] != '0'){
                    fputs(file, arq);
                    printf("Informe os caracteres ou 0 para sair.:\n");
                    fgets(file, N, stdin);
                }
        }else{
            printf("Não foi possivelm criar o arquivo\n");
        }


        fclose(arq);



    return 0 ;
}
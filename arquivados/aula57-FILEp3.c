#include <stdio.h>

#define N 100

int main(){

    FILE *arq;
    int num, resultado, soma = 0;

    arq = fopen("arquivo2.txt", "r");

    if(arq){
        while(!feof(arq)){
            resultado = fscanf(arq, "%d", &num);
            //printf("Resultado.: [%d]\n", resultado);
                if(resultado == 1){
                    soma = soma + num;
                }
        }
    }else{
        printf("Não encontrado!");
    }
    printf("A soma dos nr encontrados no arquivo eh.: [%d]", soma);
    fclose(arq);
    
    return 0;
}
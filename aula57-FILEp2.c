#include <stdio.h>
#define N 100
int main(){

    FILE *arq;
    char nome[N], *resultado;

    arq = fopen("arquivo.txt", "r");

    if(arq){
        while(!feof(arq)){ //foef = FILE end of file.
            resultado = fgets(nome, N, arq);
            printf("Resultado: [%d]\n", resultado);
                if(resultado){
                    printf("%s\n", nome);
            
                }
        }
    }else{
        printf("Arquivo não encontrado!");
    }
    fclose(arq);



    return 0;
}
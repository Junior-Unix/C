/*Mostra o conteúdo de um arquivo recebido na linha de comando,
mostrando para cada linha o número respectivo.*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_STR 120 /*Dimensão da maior string.*/

main(int argc, char *argv[]){
    FILE *fp;
    char s[MAX_STR+1]; /*Linha lida do arquivo.*/
    int i = 0; /*Contador de linhas.*/

    if(argc==1){
        fprintf(stderr,"SIntaxe: Line arquivo\n\n");
        exit(1);
    }

    if((fp=fopen(argv[1],"r"))==NULL){
        fprintf(stderr,"Impossível abrir o arquivo %s\n\n", argv[1]);
        exit(1);
    }

    while(fgets(s,MAX_STR+1,fp)!=NULL){
        printf("%2d: %s",++i,s);
    }

    fclose(fp);
    exit(0);
}
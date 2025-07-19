/*
    Escreva um programa que mostre na tela do seu computador apenas os alunos que obtiveram aprovação e respectivas notas (nota > = 5) na disciplina a que o arquivo corresponde.
*/

#include <stdio.h>
#include <stdlib.h>

void main(int argc, char*argv[]){
     FILE *fp;
     char Nome[100];
     int Nota;

     /*Testar a linha de comando*/
     if(argc!=2){
          printf("Sintaxe:\n\n%s Arquivo\n\n",argv[0]);
          exit(1);/*Termina o Programa*/
     }

     /*Abrir o Arquivo com o nome em argv[1]*/
     if((fp=fopen(argv[1],"r"))==NULL){
          printf("Impossivel abrir o arquivo %s\n",argv[1]);
          exit(2);
     }

     while(fscanf(fp,"%s %d",Nome,&Nota)!=EOF)
         if(Nota>=5)
             printf("%s %d\n",Nome,Nota);

    fclose(fp);
}

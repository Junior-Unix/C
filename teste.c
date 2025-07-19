#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
     
     FILE *fp;
     int ch;

     if(argc!=2){
          printf("Erro de sintexe!");
          exit(1);
     }

     fp=fopen(argv[1],"r");

     if(fp==NULL){
          printf("Erro abrir arquivo!");
          exit(2);
     }

     while((ch=fgetc(fp))!=EOF)
         putchar(ch);
    fclose(fp);


    
}

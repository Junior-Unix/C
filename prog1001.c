#include <stdio.h>

int main(){
     FILE *fp;
     char s[100];

     puts("Introduza o nome do arquivo");
     gets(s);

     fp=fopen(s,"r");
     
     if(fp==NULL)
         printf("Impossivel abrir o arquivo %s\n",s);
     else{
          printf("Arquivo %s aberto com sucesso!!!\n",s);
          fclose(fp);
     }
}

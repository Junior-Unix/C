/* Escreva um programa que receba do usuária um arquivo texto e mostre na tela
quantas linhas esse arquivo possui. */

#include <stdio.h>
#include <stdlib.h>

#define N 20

int main(){ 

    FILE *arq;

setbuf( stdin, NULL );
char programa;
int caracteres = 0;
int linhas = 0;
char suchen[N];
printf("para procurar um arquivo para digite P, isso irá informar a quantia de linhas também,  para sair S.\n");
scanf("%s", &programa );

if( programa == 'P' || programa == 'p'){

    printf("Informe o caminho e o nome do arquivo.:\n");
        
        scanf("%s", suchen);

            arq = fopen( suchen , "r");
                if( arq == NULL ){
                    printf("Arquivo não encontrado!\n");
                    system("pause");
                    exit(1);
                }

        
        char arquivo;

            while( !feof(arq) ){
                arquivo = fgetc(arq); 
                printf("%c", arquivo);               
                    if( arquivo == '\n' ){
                    linhas++;
                    }
                    caracteres++;            
                }
            fclose(arq);

    }else{
    
        printf("Quiting...!");
    }
printf("\nQuantia de linhas: [%d]", linhas );
printf("\nQuantia de caracteres: [%d]", caracteres );



    return 0 ;
}
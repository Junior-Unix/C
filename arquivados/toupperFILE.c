/* Transferir todo o conteudo de um arquivo para outro em maiusculo. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    FILE *lesen, *schreiben;
    lesen = fopen("majorasMask.txt", "r");
    schreiben = fopen("majorasMask2.txt", "w");

    if( lesen == NULL || schreiben == NULL ){
        printf("Erro no processo!\n");
        system("pause");
        exit(1);
    }
    char c = fgetc(lesen);
    while( c != EOF ){
        fputc( toupper(c), schreiben);
        c = fgetc(lesen);
    }
    fclose(lesen);
    fclose(schreiben);
    system("pause");



    return 0 ;
}
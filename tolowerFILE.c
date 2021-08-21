#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    FILE *lesen, *schreiben;
    lesen = fopen("majorasMask2.txt", "r");
    schreiben = fopen("majorasMask-tolower", "w");

    if( lesen == NULL || schreiben == NULL ){
        printf("Erro no processo!");
        system("pause");
        return(1);
    }
    char c = fgetc(lesen);
    while( c!= EOF ){
        fputc( tolower(c), schreiben);
        c = fgetc(lesen);
    }
    fclose(lesen);
    fclose(schreiben);
    system("pause");

}

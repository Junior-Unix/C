#include <stdio.h>
#include <stdlib.h>

int main(){


char letras[26];

int contador = 0;
for( int i = 97; i <= 122; i++){
    letras[contador] = i;
    contador = contador + 1;
    // printf("%d\n", i);
}

    for( int  i = 0; i < 26; i++){
        printf("\t%d \t== \t%c\n", letras[i], letras[i]);
    }








    return 0 ;
}
/* Aula 30, vetores. */

#include <stdio.h>

int main(){

    char letra[26];
    int contador = 0;

    for(int i = 97; i <=122; i++){
        letra[contador] = i;
        contador = contador + 1;
        printf("%d == %c\n", i, i);
    }

    for( int i = 0; i < 26; i++){
        printf("%d == %c\n", i, letra[i]);
    }
 





    return 0 ;
}
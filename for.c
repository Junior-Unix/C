#include <stdio.h>
#include <stdlib.h>


int main(){

    int a, b, c;
    printf("Digite dois valores inteiros:\n");
    scanf("%d %d", &a, &b);

    for( char c = a; /* c <= b ||  */c < 'z'; c++){
    //printf( "%d\n", c);
    
    printf("%c == %d\n\n", c, c);
    //system("clear");
    }

    printf("Fim do programa\n");
    




    return 0 ;
}
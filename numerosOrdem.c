<<<<<<< HEAD
// Ordem crescente ou decrescente:
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){

    short int num[ ] = { }, i, x, temp, valor, aux = 0;

    setlocale( LC_ALL, "portuguese" );

    do{
        printf("Insira os valores: \n");
        scanf("%hi", &valor);

        num[aux] = valor;
        aux++;


    }while( valor != 0 );

    for( i = 0; i < aux; i++){
        for( x = i + 1; x < aux; x++){
            if( num[i] > num[x] ){
            
            
            temp = num[i];
            num[i] = num[x];
            num[x] = temp;
           }
        }
    }

    printf("A ordem crescente da numeração adicionada é: \n");

        for ( i = 0; i < aux; i++){
            printf("%hi", num[i]);
            
        }

    return 0 ;
=======
// Ordem crescente ou decrescente:
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){

    short int num[ ] = { }, i, x, temp, valor, aux = 0;

    setlocale( LC_ALL, "portuguese" );

    do{
        printf("Insira os valores: \n");
        scanf("%hi", &valor);

        num[aux] = valor;
        aux++;


    }while( valor != 0 );

    for( i = 0; i < aux; i++){
        for( x = i + 1; x < aux; x++){
            if( num[i] > num[x] ){
            
            
            temp = num[i];
            num[i] = num[x];
            num[x] = temp;
           }
        }
    }

    printf("A ordem crescente da numeração adicionada é: \n");

        for ( i = 0; i < aux; i++){
            printf("%hi", num[i]);
            
        }

    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}
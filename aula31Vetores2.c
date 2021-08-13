<<<<<<< HEAD
/* Aula 31 vetores parte 2. */


#include <stdio.h>

int main(){

    int numeros[5] = {1, 3, 5, 7, 9};
    /* numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9; */

    //vetores e reais.
    float valores[5];
    for( int i = 0; i < 5; i++){
        valores[i] = (float)numeros[i] / (float)2;
        printf("%d\n", numeros[i]);
    }

    //imprimir;
    for( int i = 4; i >= 0; i--){
        printf("%d div por 2 = %.2f\n", numeros[i], valores[i]);
    }



    return 0 ;
=======
/* Aula 31 vetores parte 2. */


#include <stdio.h>

int main(){

    int numeros[5] = {1, 3, 5, 7, 9};
    /* numeros[0] = 1;
    numeros[1] = 3;
    numeros[2] = 5;
    numeros[3] = 7;
    numeros[4] = 9; */

    //vetores e reais.
    float valores[5];
    for( int i = 0; i < 5; i++){
        valores[i] = (float)numeros[i] / (float)2;
        printf("%d\n", numeros[i]);
    }

    //imprimir;
    for( int i = 4; i >= 0; i--){
        printf("%d div por 2 = %.2f\n", numeros[i], valores[i]);
    }



    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}
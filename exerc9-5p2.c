<<<<<<< HEAD
/* Exercício 9 5 parte 2*/

#include <stdio.h>

int main(){


int soma = 0 ;

for ( int i = 0; i < 100; i++){

    if( i % 2 == 1 && i % 3 == 0 ){
        soma = soma + i;
        printf("i: %d \n", i);
    }
}
printf("\nSoma de todos os impares entre 0 e 100 multiplos de 3 : %d", soma);


    return 0 ;
=======
/* Exercício 9 5 parte 2*/

#include <stdio.h>

int main(){


int soma = 0 ;

for ( int i = 0; i < 100; i++){

    if( i % 2 == 1 && i % 3 == 0 ){
        soma = soma + i;
        printf("i: %d \n", i);
    }
}
printf("\nSoma de todos os impares entre 0 e 100 multiplos de 3 : %d", soma);


    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}
/* Exercício 8 seção 5.: Escreva um programa que leia 10 numeros e escreva o menor valor 
lido e o maior valor lido. 

Explicação:

#include <stdio.h>  //biblioteca C

int main(){

int maior;

int valor[10] = {7, 8, 7, 6, 4,1,3,2,1,9}; // Um array com os valores

maior=valor[0];  / variavel para guardar o primeiro valor e depois comparar

for(int i=1;i<=9;i++){ // Laço para verificar o maior valor

if(valor[i]>maior) // Condicional para verificar o valor dentro do laço

maior = valor[i];

}

printf("%d\n",maior);  // imprimir o valor maior

return 0;  // returna para a função principal

}

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    setlocale( LC_ALL, "portuguese");

    int maior, i = 0;
    int valor[10];
    maior = valor[0];

    for(  i = 0; i < 10; i++){
        printf("valor para %dº valor:", i + 1);
        scanf("%d", &valor[i]);
    }
   /*  
   #Conflito com a variável de descoberta do maior valor.
   for( i = 0; i < 10; i++){
        printf("[%d ]\n\n", valor[i]);
    } */



        for(  i = 1; i <=9; i++){
            if( valor[i] > maior)
            maior = valor[i];
        }

        printf("O maior valor é: [%d ]\n", maior);


    return 0 ;
}
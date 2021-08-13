<<<<<<< HEAD
/* Exercício 7 seção 5.: Faça um programa que leia N inteiros positivos, ignorando não positivos,
e imprima sua média.
 */

#include <stdio.h>
// #define N 10


int main(void){

  int somaZ;
  float soma;
  
  
    printf("Quantas notas serão digitadas?\n:");
    scanf("%i", &somaZ);
    float num[somaZ];
    
    printf("Informe os %i valores:\n", somaZ);
        for(int i = 0; i < somaZ; i++){
            scanf("%f", &num[i]);
            soma = soma + num[i];
        }
        

        
        for( int i = 0; i < somaZ; i++){
            printf("a nota %i é [ %.1f ]\n",i + 1, num[i]);
        }
           
        printf("A soma é: [%.1f].\n", soma);
        printf("E a média é: [%.1f].\n", soma / somaZ);  
            
    
    return 0 ;
=======
/* Exercício 7 seção 5.: Faça um programa que leia N inteiros positivos, ignorando não positivos,
e imprima sua média.
 */

#include <stdio.h>
// #define N 10


int main(void){

  int somaZ;
  float soma;
  
  
    printf("Quantas notas serão digitadas?\n:");
    scanf("%i", &somaZ);
    float num[somaZ];
    
    printf("Informe os %i valores:\n", somaZ);
        for(int i = 0; i < somaZ; i++){
            scanf("%f", &num[i]);
            soma = soma + num[i];
        }
        

        
        for( int i = 0; i < somaZ; i++){
            printf("a nota %i é [ %.1f ]\n",i + 1, num[i]);
        }
           
        printf("A soma é: [%.1f].\n", soma);
        printf("E a média é: [%.1f].\n", soma / somaZ);  
            
    
    return 0 ;
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}
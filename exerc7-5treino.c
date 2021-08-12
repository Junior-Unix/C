<<<<<<< HEAD
/* //Treino exerc 7 seção 5.: Faça um programa que leia 10 inteiros positivos, ignorando 
não positivos, e imprima sua média. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale( LC_ALL, "portuguese");

int valor[10];
int p, n = 0;

// do{

for(int i=0;i<10;i++){
    
    scanf("%d", &valor[i]);// vetor [i]={10 posições, 00,01,02,03,04,05,06,07,08,09}
    fflush(stdin);
    
    if(valor[i] > 0){
       
        p = p +  valor[i];
        fflush(stdout);
    }else if( valor >=0){
    
        n = n - valor[i];
        fflush(stdout);
    }else{}
}
printf("%d\n", p);
printf("%d\n", n);
/* for(int i=0;i<10;i++){
printf("%d\n", p[i]);
}
for(int i=0;i<10;i++){
printf("%d\n", n[i]);
} */
// }while(i<10);


    
    

/* for(int i = 0; i< 10;i++){
    printf("%d\n", p[i]);
} */

/* printf("%d\n", p);*/
    return 0 ; 
=======
/* //Treino exerc 7 seção 5.: Faça um programa que leia 10 inteiros positivos, ignorando 
não positivos, e imprima sua média. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

setlocale( LC_ALL, "portuguese");

int valor[10];
int p, n = 0;

// do{

for(int i=0;i<10;i++){
    
    scanf("%d", &valor[i]);// vetor [i]={10 posições, 00,01,02,03,04,05,06,07,08,09}
    fflush(stdin);
    
    if(valor[i] > 0){
       
        p = p +  valor[i];
        fflush(stdout);
    }else if( valor >=0){
    
        n = n - valor[i];
        fflush(stdout);
    }else{}
}
printf("%d\n", p);
printf("%d\n", n);
/* for(int i=0;i<10;i++){
printf("%d\n", p[i]);
}
for(int i=0;i<10;i++){
printf("%d\n", n[i]);
} */
// }while(i<10);


    
    

/* for(int i = 0; i< 10;i++){
    printf("%d\n", p[i]);
} */

/* printf("%d\n", p);*/
    return 0 ; 
>>>>>>> ba952dcbdd78676a50dccb02e812364ab08b49e7
}
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

signed long int main()
{

system("clear");
signed long int a, b, c, d, x, media;
    a = b = c = d = x = media = 0;
    signed long int valorMinimo, valorMaximo;
    valorMinimo = valorMaximo = 0;

    printf("Digite o valor mínimo:\n");
        scanf("%li", &valorMinimo);
    printf("Digite o valor máximo:\n");
        scanf("%li", &valorMaximo);
    
    
    printf("Digite o primeiro valor:\n");
    scanf(" %li", &a);


    if( a < valorMinimo){
        printf("Valor nulo ou abaixo do valor minimo!\n");    

        
    }else{
        if( a > valorMaximo)
        {
            printf("Valor maior que nota máxima!\n");
        }else{
            ((a > valorMinimo) && ( a <= valorMaximo));
            printf("Valor digitado > %li < está entre valor minimo e o valor máximo!\n", a);
        }
    }

    while(( a < valorMinimo) ||( a > valorMaximo)){
        printf("Digite novamente!\n");
        scanf("%li", &a);
    }







    printf("Sizeof primeiro numero > %li <\n", sizeof(a));

    return 0 ;
}
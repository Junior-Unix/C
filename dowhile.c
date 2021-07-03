#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

signed long int main()
{


int cont = 0;
int valor = 1000;
while( cont <= valor){
    
    printf("%i\n", cont +1 );
    system("clear");
    cont = cont + 1;
    
    
}



system("clear");
signed long int a, b, c, d, x, media;
    a = b = c = d = x = media = 0;
    signed long int valorMinimo, valorMaximo;
    valorMinimo = valorMaximo = 0;

    printf("\nDigite o valor mínimo:\n");
        scanf("%li", &valorMinimo);
    printf("Digite o valor máximo:\n");
        scanf("%li", &valorMaximo);
    
    
    printf("Digite o primeiro valor:\n");
    scanf(" %li", &a);

    system("clear");
    if( a < valorMinimo){
        printf("Valor nulo ou abaixo do valor minimo!\n");    

        
    }else{
        if( a > valorMaximo)
        {
            printf("Valor maior que nota máxima!\n");
        }else{
            ((a > valorMinimo) && ( a <= valorMaximo));
            printf("Valor digitado > %li < está entre  valor minimo > %li < e o valor máximo > %li <!\n\n\n", a, valorMinimo, valorMaximo);
        }
    }

    while(( a < valorMinimo) || ( a > valorMaximo)){
        printf("Digite novamente!\n");
        scanf("%li", &a);
    }







    printf("Sizeof primeiro numero > %li <\n\n\n\a", sizeof(a));

    return 0 ;
}
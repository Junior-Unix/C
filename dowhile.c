#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

signed long int main()
{





//contador de 0 a 100.
int cont = 0;
int valor = 100;

while( cont < valor){
    
    printf("%i\n", cont + 1 );
    system("clear");
    cont = cont + 1;
}



system("neofetch");


signed long int a, b, c, d, x, media;
    a = b = c = d = x = media = 0;
    signed long int valorMinimo, valorMaximo;
    valorMinimo = valorMaximo = 0;

    printf("\nDigite o valor mínimo:\n");
        scanf("%li", &valorMinimo);
    printf("Digite o valor máximo:\n");
        scanf("%li", &valorMaximo);
    
    
    printf("Digite o primeiro valor:\n");
    scanf("%li", &a);

    system("clear");
    if( a < valorMinimo){
        printf("\nValor nulo ou abaixo do valor minimo!\n");    

        
    }else{
        if( a > valorMaximo)
        {
            printf("Valor maior que valor máximo!\n");
        }else{
            ((a > valorMinimo) && ( a <= valorMaximo));
            printf("\n\nValor digitado > %li < está entre  valor minimo > %li < e o valor máximo > %li <!\n\n\n", a, valorMinimo, valorMaximo);
        }
    }

    while(( a < valorMinimo) || ( a > valorMaximo))
    {
         
        printf("Digite novamente!\n");
        scanf("%li", &a);
        if((a > valorMinimo) && ( a <= valorMaximo))
        {
            printf("\n\nValor digitado > %li < está entre  valor minimo > %li < e o valor máximo > %li < e foi atribuida a letra 'a'!\n\n\n", a, valorMinimo, valorMaximo);
        }
    }

printf("<a=%li>\n\n", a);





    printf("Sizeof primeiro numero > %li bytes <!\n\n\n\a", sizeof(a));

    return 0 ;
}
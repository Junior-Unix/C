#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

signed long int main()


{





//contador de 0 a 100.
int cont = 0;
int valor = 100;
char sim;
do{
    //cont +=1;
    
    system("clear");
    
    printf("Digite <Y> pra continuar!\n");
    //printf("%i de vezes repetiu a instrução\n", cont);
    sim = getchar();
}while(sim != 'Y');




while( cont < valor){
    
    printf("%i\n", cont + 1 );
    system("clear");
    cont = cont + 1;
}



system("ufetch");

float a, b, c, d, x, media;
    a = b = c = d = x = media = 0;
float valorMinimo, valorMaximo;
    valorMinimo = valorMaximo = 0;

    printf("\nDigite o valor mínimo:\n");
        scanf("%f", &valorMinimo);
        char confirme;
        do
        {
            printf("Se o valor é esse %f confirme com Y maiúsculo, se não for digite n!: \n", valorMinimo);
            confirme = getchar();
        }while (confirme != 'Y');

    printf("Digite o valor máximo:\n");
        scanf("%f", &valorMaximo);
    
    
    printf("Digite o primeiro valor:\n");
    scanf("%f", &a);

    system("clear");
    if( a < valorMinimo){
        printf("\nValor nulo ou abaixo do valor minimo!\n");    
        
    }else{
        if( a > valorMaximo)
        {
            printf("Valor maior que valor estipulado como máximo!\n");
        }else{
            ((a > valorMinimo) && ( a <= valorMaximo));
            printf("\n\nValor digitado > %f < está entre  valor minimo > %f < e o valor máximo > %f <!\n\n\n", a, valorMinimo, valorMaximo);
        }
    }

    while(( a < valorMinimo) || ( a > valorMaximo))
    {
         
        printf(" Se não, digite novamente!\n");
        scanf("%f", &a);
        if((a > valorMinimo) && ( a <= valorMaximo))
        {
            printf("\n\nValor digitado > %f < está entre  valor minimo > %f < e o valor máximo > %f < e foi atribuida a letra 'a'!\n\n\n", a, valorMinimo, valorMaximo);
        }
    }

printf("<a=%f>\n\n", a);





    printf("Sizeof primeiro numero > %f bytes <!\n\n\n\a", sizeof(a));

    return 0 ;
}
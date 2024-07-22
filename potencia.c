/*Devolve o valor de x^n*/

#include <stdio.h>

float baseExpoente(float base, int expoente);
float Pot(float base, int expoente);

int main(){
    float base;
    int expoente;
baseExpoente(base, expoente);
    // printf("Digite:");
    // scanf("%f", &base);
    // printf("Digite:");
    // scanf("%d", &expoente);
//Pot(base, expoente);

//    printf("%f\n", baseExpoente(base, expoente));

    return 0;
}

float baseExpoente(float base, int expoente){
    while(1){ /*Termina com CTRL-C*/
        printf("Digite a BASE ou CTRL-C para terminar: ");
        scanf("%f", &base);
        printf("Digite o EXPOENTE ou CTRL-C para terminar: ");
        scanf("%d", &expoente);
        
        printf("(--> %.2f^%d = %.2f)\n", base, expoente, Pot(base, expoente));
    }
}

float Pot(float base, int expoente){
    float res;
    int i;

    for(i=1, res=1.0; i<=expoente; i++)
        res*=base; /*res=res*x;*/
    return res;
}
/*Devolve o valor de x^n*/

#include <stdio.h>

float baseExpoente(float base, int expoente);
float Pot(float base, int expoente);
char linha(void);

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
        linha();
        printf("Digite a BASE ou CTRL-C para terminar: ");
        scanf("%f", &base);
        printf("Digite o EXPOENTE ou CTRL-C para terminar: ");
        scanf("%d", &expoente);
        
        printf("(--> [%.2f^%d] = [%f] ou [%E])\n", base, expoente, Pot(base, expoente), Pot(base, expoente));
    }
}

float Pot(float base, int expoente){
    float res;
    int i;

    for(i=1, res=1.0; i<=expoente; i++)
        res*=base; /*res=res*x;*/
    return res;
}

char linha(void){
    int i;
    for(i=0; i<=50; i++)
        putchar('*');
    putchar('\n');
}
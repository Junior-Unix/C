/*Devolva o VAL(Valor atual Líquido) para n anos, à taxa t e é
definido atravéz da seguinte fórmula:
        VAL=x/(1+t)+x/(1+t)^2+x/(1+t)^3+...+x/(1+t)^n
        *(teste git)*
        */

#include <stdio.h>

float VAL(float x, int n, float t);
float Pot(float base, int expoente);
float index(float x, int n, float t);
char linha(void);

int main(){

    float x, t;
    int n;

    index(x, n, t);

    return 0;
}

float VAL(float x, int n, float t){
    float res;
    int i;
    for(res=0, i=1; i<=n; i++)
        res=res+x/Pot(1+t, i);
    return res;
}

float Pot(float base, int expoente){
    float res;
    int i;

    for(i=1, res=1.0; i<=expoente; i++)
        res*=base; /*res=res*x;*/
    return res;
}

float index(float x, int n, float t){
    float calculo;

    while(1){ /*Termina com CTRL-C*/
        linha();
        printf("Digite a valor (x) ou CTRL-C para terminar: ");
        scanf("%f", &x);
        printf("Digite o nº de anos (n) ou CTRL-C para sair: ");
        scanf("%d", &n);
        printf("Digite o taxa (t) ou CTRL-C para terminar: ");
        scanf("%f", &t);
    calculo = VAL(x, n, t);   
        printf("O valor atual líquido (VAL) é: [%.6f]\n", calculo);
    }
}

char linha(){
    int i;
        for(i=0; i<=50; i++)
            putchar('*');
        putchar('\n');
}
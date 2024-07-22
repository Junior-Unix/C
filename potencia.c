/*Devolve o valor de x^n*/

#include <stdio.h>

float baseExpoente(float base, int expoente);
float Pot(float x, int n);

int main(){
    float base;
    int expoente;

    printf("Digite:");
    scanf("%f", &base);
    printf("Digite:");
    scanf("%d", &expoente);
Pot(base, expoente);

    printf("%f\n", Pot(base, expoente));

    return 0;
}

float baseExpoente(float base, int expoente){
    while(1){
        printf("Digite:");
        scanf("%f", &base);
        printf("Digite:");
        scanf("%d", &expoente);
        
        Pot(base, expoente);
    }
}

float Pot(float x, int n){
    float res;
    int i;

    for(i=1, res=1.0; i<=n; i++)
        res*=x; /*res=res*x;*/
    return res;
}
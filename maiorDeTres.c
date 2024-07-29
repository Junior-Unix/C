#include <stdio.h>

float Max(float x, float y, float w);
/*char dados(float x, float y, float w);*/

int main(void){

float x, y, w;

do{

printf("Insira 3 valores ou 'CTRL-C' para sair:\n");
printf("Primeiro nº: ");
scanf("%f", &x);
printf("Segundo nº: ");
scanf("%f", &y);
printf("Terceiro nº: ");
scanf("%f", &w);

float maior = Max(x, y, w);

printf("O maior valor entre [%.2f], [%.2f] e [%.2f] é [%.2f]\n", x, y, w, maior);

}while(-1);

    return 0;
}

float Max(float x, float y, float w){
    if(x<y)
        if(x>w)
            return x;
        else
            return w;
    else
        if(y>w)
            return y;
        else    
            return w;
}
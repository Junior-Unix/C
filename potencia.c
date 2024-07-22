/*Devolve o valor de x^n*/

#include <stdio.h>

float Pot(float x, int n);

int main(){
    printf("%f %f %f\n", Pot(2.0, 4), Pot(1.234, 4), Pot(3.0, 0));

    return 0;
}

float Pot(float x, int n){
    float res;
    int i;

    for(i=1, res=1.0; i<=n; i++)
        res*=x; /*res=res*x;*/
    return res;
}
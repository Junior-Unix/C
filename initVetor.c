/*Iniciar o vetor com quelauer valor desejado*/

#include <stdio.h>

void initVetor(int s[], int n){
    int i;
    for(i=0; i<n; i++)
    s[i]=0;
}

int main(){
    int v[10];
    int x[20];

    initVetor(v, 10);
    initVetor(x, 20);

    for(int i=0; i<10; i++){
        printf("%d\n", v[i]);

    }

    return 0;
}
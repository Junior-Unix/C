/*Iniciar o vetor com quelauer valor desejado*/

#include <stdio.h>

void initVetor(int s[], int n);
void printVetor(int s[], int n);

int main(){
    int v[10];
    int x[20];

 //   initVetor(v, 10);
    initVetor(x, 2);

    

    return 0;
}

void printVetor(int s[], int n){

    for(int i=0; i<n; i++){
        printf("%d\n", s[i]);
    }

}

void initVetor(int s[], int n){
    int i;
    for(i=0;i<n; i++)
    s[i]=0;

    printVetor(s, n);
}
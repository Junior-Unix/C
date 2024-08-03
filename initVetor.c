/*Iniciar o vetor com quelauer valor desejado*/

#include <stdio.h>

void initVetor(int s[], int n);
void printVetor(int s[], int n);
void insert(int s[], int n);


int main(){

//    int v[10];
//    int x[20];

 //   initVetor(v, 10);
 //   initVetor(x, 2);
    int n;
    int s[n];

    insert(s, n);
    

    return 0;
}

void insert(int s[], int n){
    
//    int n;
//    int s[n];

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n);

    initVetor(s, n);
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
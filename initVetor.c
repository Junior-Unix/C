#include <stdio.h>

// Declaração das funções
void initVetor(int s[], int n);
void printVetor(int s[], int n);
void insert(int s[], int n);

int main(){
    int n=NULL;//Declacar com NULL o indice, evita o erro erro 
               //***stack smashing detect *** o certo eh com NULL.
    int s[n]; // Declaração do vetor s com tamanho n (não inicializado corretamente)

    insert(s, n); // Chama a função insert para inicializar o vetor

    return 0;
}

// Função para inserir valores no vetor
void insert(int s[], int n){
    printf("Insira o tamanho do vetor: ");
    scanf("%d", &n); // Lê o tamanho do vetor

    initVetor(s, n); // Inicializa o vetor com zeros
}

// Função para imprimir os valores do vetor
void printVetor(int s[], int n){
    for(int i=0; i<n; i++){
        printf("%d\n", s[i]); // Imprime cada valor do vetor
    }
}

// Função para inicializar o vetor com zeros
void initVetor(int s[], int n){
    for(int i=0; i<n; i++)
        s[i] = 0; // Define cada elemento do vetor como zero

    printVetor(s, n); // Imprime o vetor inicializado
}

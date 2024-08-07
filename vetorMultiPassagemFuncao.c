// A passagem de vetores com mais de uma dimensão para uma função é 
// realizada indicando no cabeçalho desta, obrigatoriamente, o número 
// de elementos de cada uma das n-1 dimensões à direita. Apenas a 
// dimensão mais à esquerda pode ser omitida, colocando-se apenas [ ] 
// ou um asterisco * .
// Damas,Luís. Linguagem C (p. 142). LTC. Kindle Edition. 

#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[][DIM]){
    int i,j;
    for(i=0<DIM;i++)
        for(j=0;j<DIM;j++)
            s[i][j]=ESPACO;
}

void mpstra(char s[DIM][DIM]){
    int i,j;
    for(i=0;i<DIM;i++){
        for(j=0;j<DIM;j++)
            printf("%c %c", s[i][j],j==DIM-1?' ':'|');
        if(i!=DIM-1)
            printf("\n--------");
            putchar('\n');
    }
}

int main(){
    char Velha[DIM][DIM];
    int posx,posy;
    char ch = 'O'; /*Caracter para jogar*/
    int n_jogadas = 0;

    inic(Velha);
    while(1)/*laço infinito*/{
        mostra(Velha);
        printf("\nInsira a posição de jogo linha coluna:");
        scanf("%d %d",&posx,&posy);
        posx--;posy--;/*Pois os índices do vetor começam em 0*/
        if(Velha[posx][posy]==ESPACO)/*Casa livre*/{
            Velha[posx][posy] = ch = (ch=='0')?'X':'O';
            n_jogadas++;
        }else
            printf("Posição já ocupada\nJogue Novamente!!!\n");
        if(n_jogadas==DIM*DIM)
            break;/*Acabar o Programa*/
    }
    mostra(Velha);


//    return 0;
}
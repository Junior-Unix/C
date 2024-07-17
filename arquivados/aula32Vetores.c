#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <ctype.h>


int linha( int num){
    int i;
    for( i = 1; i <= num; i++)
    putchar('*');
    putchar('\n');
}

int main(){

setlocale( LC_ALL, "portuguese");

fflush(stdin);
char nome[2][50];
linha(77);
printf("Informe seu nome.\n\n");
for( int i = 0; i < 2; i++ ){
    scanf("%s", nome[i]);
    printf("Agora seu sobrenome.\n");
}
system("cls");
for( int i = 0; i < 2; i++ ){
    printf("[[%s ]\n", nome[i]);
}

linha(77);
fflush(stdin);
float N[5];

linha(77);
printf("Informe 5 valores\n");

for( int i = 0; i < 5; i++ ){
    scanf("%f", &N[i]);
}
system("cls");

for( int i = 0; i < 5; i++ ){
    printf("[%4.2f ]\n", N[i]);
}
linha(77);
float valor[5];
for( int i = 0; i <=5; i++ ){
    valor[i] = (float)N[i] / 2;
}
for( int i = 0; i < 5; i++ ){
    printf("[%2.2f ]\n", valor[i]);
}
linha(77);
    return 0 ;
}
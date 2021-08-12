#include <stdio.h>

int linha( int num){
    int i;
    for( i = 1; i <= num; i++)
    putchar('*');
    putchar('\n');
}

int main(){



float N[5];
system("cls");
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
#include <stdio.h>

int main(){

int i, numero, soma = 0;

for( int i = 0; i < 5 ; i++){
// system("clear");
printf("Informe o numero: ");
scanf("%d", &numero);
printf("i no looping %i == %d\n", i, numero);

soma = soma + numero;
}
printf("A soma é %d\n", soma);



    return 0 ;
}
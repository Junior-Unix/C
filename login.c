#include <stdio.h>

int main(){
    
int contador = 0;



printf("digite sua senha numerica, 10 tentativas\n");

for( int i = 0; i < 10; i++){
    scanf("%d", &contador);
    contador = contador + 1;
    printf("%d", contador);
}


// Cronometro
int j = 0;
while( j < 10000){
    j = j + 1;
    printf("%i\n", j);
    system("clear");
}




return 0 ;

}
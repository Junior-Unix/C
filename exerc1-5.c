/*Faça um programa que determine e mostre os 5 primeiros múltiplos de 3, considerando números maiores 
que 0.*/
#include <stdio.h>


int main(){

int multi_3[5], i, x = 0;
int numero = 0;
for( i = 0; i < 5; i++ ){
	multi_3[i] = numero * 3;
	numero++;
}//for
printf("Os 5 primeiros multiplos de 5 são:\n");
for( i = 0; i < 5; i++ ){
	printf("[%d ]\n", multi_3[i]);
}//forPrintf


return 0 ;

}

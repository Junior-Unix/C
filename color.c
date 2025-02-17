#include <stdio.h>

int main(){
	printf("BETA.%s %d", __FILE__, __LINE__);
	char letra;
	letra = getch();
	letra = toupper(letra);
	while((letra != 'S') && (letra != 'N')){
	putch(7);
	letra = getch();
	letra=toupper(letra);
	}
	printf("%c\n",letra);
//	printf("\033[44m");
//	putch(7);
	return 0;

}

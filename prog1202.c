#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(){
	char[200], *ptr;

	printf("Qual a sua string:");
	gets(s);

	ptr=(char*)malloc(strlen(s)+1;
		if(ptr==NULL)
			puts("Problemas na Alocação da Memória");
		else{
			strcpy(ptr,s);
			printf("String("String Original: %s\nCópia: %s\n",s,ptr);
			free(ptr);
		}
}

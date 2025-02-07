/*Implementa um programa que conta o número de caracteres
 * existentes num arquivo passado na linha de comando.*/

#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[]){
	FILE *fp;
	int conta=0;

	if (argc!=2){
		printf("Sintaxe:\n\n%s arquivo\n\n", argv[0]);
		exit(1);
	}

	if((fp=fopen(argv[1],"r"))==NULL){
		printf("Impossível abrir o arquivo %s\n",argv[1]);
		exit(2);
	}

	while (!feof(fp)){
		fgetc(fp); /*Ler um char*/
		conta++;
	}
	fclose(fp);

	printf("Total de caracteres: %d\n",conta);

}

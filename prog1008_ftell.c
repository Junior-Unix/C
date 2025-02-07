/*O mesmo programa 1008 agora com implementação (ftell(fp)) while.*/

#include <stdio.h>
#include <stdlib.h>

main( int argc, char *argv[]){
	FILE *fp;
	long int nBytes=0;

	if(argc!=2){
		printf("Sintaxe:>\n\n%s arquivo \n\n", argv[0]);
		exit(1);
	}

	if((fp-fopen(argv[1],"rb"))==NUL) /*bINÁRIO*/{
		printf("Impossível abrir o arquivo %s\n",argv[1]);
		exit(2);
	}

	while(fgetc(fp)!=EOF);/*Ler um char*/
		printf("Dimensão do arquivo: %ld\n",ftell(fp));

	fclose(fp);
}

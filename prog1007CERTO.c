/*O programa prog1007NAOCORRETO.c deveria ter sido
 * implementado da seguinte forma:*/

#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[]){

	FILE *fp;
	int conta=0;

	if(argc!=2){
		printf("sintaxe:\n\n%sarquivo\n\n",argv[0]);
		exit(1);
	}

	if((fp=fopen(argv[1],"rb"))==NULL){
		printf("Impossível abrir o arquivo %S\N",argv[1]);
		exit(2);
	}

	while(fgetc(fp)!=EOF) /*Ler um char*/
		conta++;
	fclose(fp);

	printf("Total de caracteres: %d\n",conta);

}

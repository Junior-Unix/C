/*Abre um arquivo e indica quantos bytes ele contém, obtem o valor através de
 * Acesso Seqüencial*/

#include <stdio.h>
#include <stdlib.h>

main(int argc, char *argv[]){

	FILE *fp;
	long int nBytes=0;

	if(argc!=2){
	
		printf("Sintaxe:\n\n%s arquivo \n\n", argv[0]);
		exit(1);
	}

	if((fp=fopen(argv[1],"rb"))==NULL) /*Binário*/{
		
		printf("impossível abrir o arquivo %s\n",argv[1]);
		exit(2);	
	}

	/*Acesso Seqüencial Byte a Byte*/

	while(fgetc(fp)!=EOF) /*Ler um char*/
		nBytes++;
	fclose(fp);

	printf("Dimensão do arquivo: %ld\n",nBytes);
}

/**********************************************************************************
 * Abre um arquivo e indica quantos bytes ele contém, obtendo esse valor através de
 * Acesso Direto, isto é, sem ter que percorrer todo o arquivo contando cada um dos
 * caracteres lah existentes.
 * ********************************************************************************/

#include <stdio.h>
#include <stdlib.h>

main(int argc, char argv[]){
	FILE *fp;

	if(argc!=2){
		printf("Sintaxe:\n\n%s arquivo\n\n",argv[0]);
		exit(1);
	}
	
	if((fp=fopen(argv[1],"rb"))==NULL) /*Binário*/{
		printf("Impossível abrir o arquivo %s\n",argv[1]);
		exit(2);
	}

	/*Ir para o final do arquivo*/

	fseek(fp,0L,SEEK_END); /*ou fseek(fp,0L,2);*/
	printf("Dimensão do arquivo:%ld\n",ftell(fp));
	
	fclose(fp);
}


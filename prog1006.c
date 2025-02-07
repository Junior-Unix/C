/*Cria um arquivo vazio, volta a abri-lo e faz em seguida a detecção do 
 * End-of-File.*/

#include <stdio.h>
#include <stdlib.h>

main(){

	FILE * fp;
	int i=0, valor, n;

	/*Cria o arquivo vazio*/
	if ((fp=fopen("arquivo.txt","wb"))==NULL){
		printf("Inpossível criar o arquivo %s\n","arquivo.txt");
		exit(1);
	}
	fclose(fp);

	/*Abrir o arquivo.*/
	if ((fp=fopen("arquivo.txt","rb"))==NULL){
		printf("Impossível brir o arquivo %s\n","arquivo.txt");
		exit(1);
	}

	puts(feof(fp)?"EOF":"NOT EOF");

	/*Tentar ler um caractere.*/
	fgetc(fp);

	puts(feof(fp)?"EOF":"NOT EOF");
	fclose(fp);
}

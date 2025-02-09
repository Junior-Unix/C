/*********************************************************************
 * Implementa um programa que abra o arquivo "DADOS.DAT" criado pelo *
 * peograma prog1010_fseek_rewind.c e mostra os valores nele         *
 * presentes apenas nas posições ímpares do arquivo (isto é, os      *
 * elementos com índice 1, 3, 5, ...).                               *
 * ******************************************************************/

#include <stdio.h>
#include <stdlib.h>

main(){

	FILE *fp;
	float x;

	/*Abrir o arquivo DADOS.DAT.*/
	if((fp=fopen("DADOS.DAT","rb"))==NULL){
		printf("Impossível abrir o arquivo %s\n","DADOS.DAT");
		exit(1);
	}

	while(1){
		if(fread(&x,sizeof(float),1,fp)==0) /*Falhou a leitura*/
			break;
		printf("%f\n",x);
		fseek(fp,sizeof(float),SEEK_CUR);
	}
	fclose(fp);
}

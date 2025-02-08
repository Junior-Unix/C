/*****************************************************************************************
 * Solicita ao usuário 10 reais e os armazena em arquivo. Em seguida deve solicitar ao   *
 * usuário um número entre 1 e 10 e mostra o valor que tinha introduzido nessa ordem.    *
 * Mostrará o primeiro e o último elemento do arquivo.
 * ***************************************************************************************/

#include <stdio.h>
#include <stdlib.h>

main(){

	FILE *fp;
	int i,n;
	float v[10],x;

	/*Ler os dados a partir do teclado.*/
	for(i=0;i<10;i++){
		printf("Introduza o %d-ésimo Nº real:",i+1);
		scanf("%f",&v[i]);
	}

	/*Abrir o arquivo DADOS.DAT.*/
	if((fp=fopen("DADOS.DAT","w+b"))==NULL){
		printf("Impossível criar o arquivo %s\n","DADOS.DAT");
		exit(1);
	}

	if(fwrite(v,sizeof(float),10,fp)!=10)
		fprintf(stderr,"Não foram escritos todos os elementos!!!\n");

	printf("\nQual a ordem do número que pretende ver 1..10?");
	scanf("%d",&n);

	/*Mostra o n-ésimo número*/
	fseek(fp,(long)(n-1)*sizeof(float),SEEK_SET);
	fread(&x,sizeof(float),1,fp);

	printf("\nO %dº valor introduzido foi %f\n",n,x);

	/*Mostra o peimeiro valor.*/
	rewind(fp);
	printf("O 1º valor introduzido foi %f\n",x);
	/*Mostra o último valor.*/
	fseek(fp,-(long)sizeof(float),SEEK_END);
	fread(&x,sizeof(float),1,fp);
	printf("O último valor introduzido foi %f\n",x);

	fclose(fp);

}

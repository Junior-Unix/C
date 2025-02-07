/*Programa identico ao prog1004.c soh que utilizando while.*/

#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *fp;
	int i=0, valor, n;
	/*Abrir o arquivo DADOT.DAT*/
	if ((fp=fopen("DADOS.DAT","rb"))==NULL)
	{
		printf("Impossível abrir o arquivo %s\n","DADOS.DAT");
		exit(1);
	}

	while(fread(&valor,sizeof(int),1,fp))
		printf("%2dº Nº: %d\n",++i,valor);

	fclose(fp);
}

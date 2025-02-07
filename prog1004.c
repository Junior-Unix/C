#include <stdio.h>
#include <stdlib.h>

main(){
	FILE *fp;
	int i, v[10],n;

	/*Abrir o arquivo DADOS.DAT*/
	if((fp=fopen("DADOS.DAT","rb"))==NULL){
		printf("Impossível abrir o arquivo %s\n","DADOS.DAT");
		exit(1);
	}
/*Qualquer laço abaixo fazem a mesma função de ler o arquivo byte a byte. apenas um deve ser escolhido.	

	for (i=0;i<10;i++)
		fread(v+i,sizeof(int), 1, fp);

	for (i=0;i<10;i++)
		fread(&v[i],sizeof(int),1,fp);

	fread(v,1,sizeof(int)*10,fp);
*/
/*Apenas essa abaixo consegui fazer funcionar corretamente.*/
	n=fread(v,sizeof(int), 10, fp);


	if (n!=10)
		fprintf(stderr,"Foram lidos apenas %d elementos!!!\n",n);

	/*Apresentando os dados ao usuário*/
	for(i=0;i<n;i++)
		printf("%2dº Nº: %d\n",i+1,v[i]);

	fclose(fp);

}

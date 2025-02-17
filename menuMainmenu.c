#include <stdio.h>

char *MainMenu[]={

	"1. Inserir Registro",
	"2. Alterar Registro",
	"3. Apagar Registro",
	"4. Listar Registro",
	"5. Pesquisas",
	"0. Sair",
	NULL

};

char Menu(char* Opcoes[]){

	int i;
	char ch;

	while(1){
	
		printf("\n\n");
		for(i=0;Opcoes[i]!=NULL;i++);
			printf("\t%s\n\n",Opcoes[i]);

		printf("\n\n\tOpções: ");
		ch=getchar();
		fflush(stdin);

		for(i=0;Opcoes[i]!=NULL;i++)
			if(Opcoes[i][0]==ch)
				return ch;
	}
}

main(){

	char Opcao;
	while((Opcao=Menu(MainMenu))!=OP_SAIR
}

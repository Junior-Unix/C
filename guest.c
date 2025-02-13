#include <stdio.h>
#include <string.h>
// #include <conio.h> // Removed because it's not available on many systems
#include <stdlib.h>
#include <ctype.h>

#define ARQ "Dados.Dat" /*Arquivo com os Dados.*/

#define OP_INSERIR '1'
#define OP_ALTERAR '2'
#define OP_APAGAR '3'
#define OP_LISTAR '4'
#define OP_PESQUISAR '5'

#define OP_SAIR '0'

#define OP_PESQ_IDADE '1'
#define OP_PESQ_NOME '2'

char *MainMenu[]={
    "1. Inserir Registro",
    "2. Alterar Registro",
    "3. Apagar Registro",
    "4. Listar Registros",
    "5. Pesquisas",
    "0. Sair",
    NULL /*Acabaram as Opções*/
};

char *PesqMenu[]={
    "1. Pesquisar por Intervalo de Idade",
    "2. Pesquisar por Nome",
    "0. Voltar",
    NULL /*Acabaram as Opções*/
};

FILE *fp; /*Variável Global pois é útil ao longo do programa.*/

typedef struct{
    char Nome[30+1];
    int Idade;
    float Salario;
    char Status; /*'*' Indica que o registro está apagado.*/
}PESSOA;

void Mensagem(char *msg);

/*Lê os dados de um registro introduzidos pelo usuário. */

void Ler_Pessoa(PESSOA *p){
    printf("Nome: ");
    gets(p->Nome);
    printf("Idade: ");
    scanf("%d",&p->Idade);
    printf("Salario: ");
    scanf("%f",&p->Salario);
    p->Status=' ';
    int c;
    while ((c = getchar()) != '\n' && c != EOF); /*Limpa o buffer do teclado.*/
}

/*Mostra na tela, os dados existentes no registro.*/

void Mostrar_Pessoa(PESSOA p){
    printf("%-30s %3d %10.2f\n",p.Nome,p.Idade,p.Salario);
}

/*Adiciona uma Pessoa ao Arquivo.*/

void Adicionar_Pessoa(PESSOA p){
    fseek(fp,0L,SEEK_END); /*Vai para o final do arquivo.*/
    if(fwrite(&p,sizeof(p),1,fp)!=1)
        Mensagem("Adicionar Pessoa: Falhou a escrita no arquivo.");
}

/*Coloca uma mensagem na tela.*/

void Mensagem(char *msg){
    printf(msg);
    getchar();
}

/*
 *Verifica se o Arquivo já existe. Se não existir, ele é
 *criado. Se já existir, abre-o em Modo de Leitura e Escrita (r+b)
 */

void Inic(){
    fp=fopen(ARQ,"r+b"); /*Tenta Abrir.*/
    if(fp==NULL){ /*Se não conseguiu abrir, cria o arquivo.*/
        fp=fopen(ARQ,"w+b"); /*Cria o Arquivo.*/
        if(fp==NULL){
            fprintf(stderr, "ERRO FATAL: Impossível Criar Arquivo de Dados.\n");
            exit(1);
        }
    }
}

/*
 *Faz um Menu Simples com as opções do vetor de Strings.
 *Seleciona a Opção, usando o primeiro caracter de cada string.
 *Devolve o promeiro caractere da opção
 */

char Menu(char *Opcoes[]){

    int i;
    char ch;

    while(1){ /*Cls*/
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        for(i=0;Opcoes[i]!=NULL;i++)
            printf("\t\t%s\n\n",Opcoes[i]);

        printf("\n\t\tOpção:");
        ch=getchar();
        fflush(stdin); /*Limpa o buffer do teclado.*/
        for(i=0;Opcoes[i]!=NULL;i++)
            if(Opcoes[i][0]==ch)
                return ch;
    }
}

void Inserir_Pessoa(){
    PESSOA x;
    Ler_Pessoa(&x);
    Adicionar_Pessoa(x);
}

void Alterar_Pessoa(){
    PESSOA x;
    long int n_reg;
    printf("Qual o Nº do Registro:");
    scanf("%ld",&n_reg);
    fflush(stdin); /*Limpa o buffer do teclado.*/
    if(fseek(fp,(n_reg-1)*sizeof(PESSOA),SEEK_SET)!=0){
        Mensagem("Registro Inexistente ou Problemas no posicionamento!!!");
        return;
    }
    if(fread(&x,sizeof(PESSOA),1,fp)!=1){
        Mensagem("Problemas na Leitura do Registro!!!");
        return;
    }
    if(x.Status=='*'){
        Mensagem("Um Registro Apagado não pode ser Alterado!!!");
        return;
    }

    printf("\n\nDados Atuais\n\n");
    Mostrar_Pessoa(x);
    printf("\n\nNovos Dados\n\n");
    Ler_Pessoa(&x);

    //Recuar um registro no Arquivo
    fseek(fp,-(long)sizeof(PESSOA),SEEK_CUR);
    //Reescrever o registro
    fflush(fp); /*Despeja os Dados no Disco Rígido. Força a escrita no disco.*/
    int c;
    while ((c = getchar()) != '\n' && c != EOF); /*Limpa o buffer do teclado.*/
    fflush(fp); /*Despeja os Dados no Disco Rígido. Força a escrita no disco.*/
}

void Apagar_Pessoa(){
    PESSOA x;
    long int n_reg;
    char resp;

    printf("Qual o Nº do Registro:");
    scanf("%ld",&n_reg);
    fflush(stdin); /*Limpa o buffer do teclado.*/
    if(fseek(fp,(n_reg-1)*sizeof(PESSOA),SEEK_SET)!=0){
        Mensagem("Registro Inexistente ou Problemas no posicionamento!!!");
        return;
    }

    if(fread(&x,sizeof(PESSOA),1,fp)!=1){
        Mensagem("Problemas na Leitura do Registro!!!");
        return;
    }

    if(x.Status=='*'){
        Mensagem("Registro já Apagado!!!");
        return;
    }

    printf("\n\nDados Atuais\n\n");

    Mostrar_Pessoa(x);
    printf("\n\nApagar este Registro (s/n)???");
    resp=getchar();
    fflush(stdin); /*Limpa o buffer do teclado.*/
    if(toupper(resp)!='S')
        return;   /*Se não for 'S', não apaga.*/

    x.Status='*'; /*Marca o Registro como Apagado.*/
    /*Recuar um registro no Arquivo*/
    fseek(fp,-(long)sizeof(PESSOA),SEEK_CUR);
    //Reescrever o registro;
    fwrite(&x,sizeof(PESSOA),1,fp);
    fflush(fp); /*Despeja os Dados no Disco Rígido. Força a escrita no disco.*/
}

void Listar(){
    long int N_Linhas=0;
    PESSOA reg;
    rewind(fp); /*Vai para o início do Arquivo.*/
    while(1){
        if(fread(&reg,sizeof(reg),1,fp)!=1)break; /*Sair do Laço.*/
        if(reg.Status=='*')continue; /*Passa ao próximo.*/
        Mostra_PEssoa(reg);
        N_Linhas++;
        if(N_Linhas%20==0){
            Mensagem("PRESSIONE <ENTER> para continuar...");
        }

        Mensagem("\n\nPRESSIONE <ENTER> para continuar..."); /*No fim da Listagem*/
    }

    void Pesquisar_Idade(int ini, int fim){
        PESSOA reg;
        rewind(fp); /*Vai para o início do Arquivo.*/

        while(fread(&reg,sizeof(PESSOA),1,fp))
            if(reg.Status!='*' && reg.Idade>=ini && reg.Idade<=fim)
                Mostrar_Pessoa(reg);
        
        Mensagem("\n\nPRESSIONE <ENTER> para continuar..."); /*No fim da Listagem*/
    }

    void Pesquisar_Nome(char *s){
        PESSOA reg;
        rewind(fp); /*Vai para o início do Arquivo.*/

        while(fread(&reg,sizeof(PESSOA),1,fp))
            if(reg.Status!='*' && strstr(reg.Nome,s))
                Mostrar_Pessoa(reg);
        
        Mensagem("\n\nPRESSIONE <ENTER> para continuar..."); /*No fim da Listagem*/
    }

main(){
        char Opcao;
        Inic();

        while((Opcao=Menu(MainMenu))!=OP_SAIR)
            switch(Opcao){
                case OP_INSERIR: Inserir_Pessoa();
                break;

                case OP_ALTERAR: Alterar_Pessoa();
                break;

                case OP_APAGAR: Apagar_Pessoa();
                break;

                case OP_LISTAR: Listar();
                break;

                case OP_PESQUISAR:
                    while((Opcao=Menu(PesqMenu))!=OP_SAIR)
                        switch(Opcao){
                            case OP_PESQ_IDADE:{
                                int n1, n2;
                                printf("Qual o intervalo de Idades:");
                                scanf("%d %d",&n1,&n2);
                                fflush(stdin); /*Limpa o buffer do teclado.*/
                                Pesquisar_Idade(n1,n2);
                                break;
                            }
                            case OP_PESQ_NOME:{
                                char string[Bufsiz=1];
                                PRINTF("Qual o Nome a Procurar:");
                                gets(string);
                                fflush(stdin); /*Limpa o buffer do teclado.*/
                                Pesquisar_Nome(string);
                            }

                        }
                }
           }

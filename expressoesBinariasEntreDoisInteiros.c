/*O arquivo é constituído por expressões binárias entre dois inteiros,
e o respectivo resultado. No final deverá ser mostrada a soma total do
resultado de cada uma das expressões. Se a opção -t for passada, apenas
se deve mostrar o total global da sima das expressões.
Exemplo:
$type dados.dat
3+2
5*3
3*5
...

$espressõesBinariasEntreDoisInteiros dados.dat
3+2=5
5*3=15
3*5=15
...
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main(int argc, char *argv[]){

    FILE *fp;
    int So_Total=0; /*Por padrão, processa tudo*/
    int n1, n2; /*Operandos.*/
    char op; /*Operador.*/
    long res, total = 0L; /*Total acumulado*/

    if(argc==3)
        So_Total = (stricmp(argv[1],"-t")==0); /*Ver se argv[2]=="-t".*/

    if(argc<2 || argc >3){
        fprintf(stderr,"Sintaxe: [-t] arquivo\n");
        exit(1);
    }

    if((fp=fopen(argv[argc-1],"r"))==NULL){
        fprintf(stderr,"Impossível abrir o arquivo %s\n\n",argv[argc-1]);
        exit(2);
    }

    while(fscanf(fp,"%d%c%d",&n1,&op,&n2)==3) /*Leu as três variáveis.*/{
        switch(op){
            case '+':
                res = n1 + n2;
                break;
            case '-':
                res = n1 - n2;
                break;
            case '*':
                res = n1 * n2;
                break;
            case '/':
                res = n1 / n2;
                break;
        }

        if(!So_Total)
            printf("%d %c %d = %ld\n",n1,op,n2,res);
        total += res;
    }

    printf("%ld\n",total);
    fclose(fp);
    exit(0);
}
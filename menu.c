/*Apresente um menu*/

#include <stdio.h>

void main(){
    char opcao;
    do{
        printf("\tM E N U P R I N C I P A L\n");
        printf("\n\n\t\tClientes");
        printf("\n\n\t\tFornecedores");
        printf("\n\n\t\tEncomendas"); 
        printf("\n\n\t\tSair");
        printf("%c", &opcao);
        printf("\n\n\n\t\tOpção: ");
        scanf(" %c", &opcao);

        fflush(stdin); /*Limpa o Buffer do teclado*/

        switch(opcao){
            case 'c':
            case 'C':
                puts("Opção Clientes");
            break;
            case 'f':
            case 'F':
                puts("Opção Fornecedores");
            break;
            case 'e':
            case 'E':
                puts("Opção Encomendas");
            break;
            case 's':
            case 'S':
            break;/*Não faz nada*/
            default:
                puts("Opção Inválida");
        }       
        // getchar();/*Parar a tela*/
 
    }while(opcao != 's' && opcao != 'S');

    return 0;
}
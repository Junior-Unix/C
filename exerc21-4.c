/* Escreva o menu de opções abaixo. Leia a opção do usuário e execute a operação escolhida. 
Escreva uma mensagem de erro se a opção for inválida. */
#include <stdio.h>


int main (){


float num1, num2, res = 0;
printf("Digite o primeiro e o segundo numero:\n");
scanf("%f:%f:", &num1, &num2);
printf("Escolha a oopção:\n\7");
printf("\t1 - Soma de 2 numeros;\n\t2 - Diferênça entre 2 números (maior pelo menor);\n\t3 - Produto entre 2 números;\n\t4 - Divisão entre 2 numeros;\n ");

char op;
op = getchar();
        switch(op){
                case '1': res = num1 + num2;
                break;
                case '2': if(num1>num2){
                    res = num1 - num2;
                    }else{
                    res = num2 - num1;
                    }
                    break;
                case '3': res = num1 * num2;
                break;
                case '4': do{
                    res = num1 / num2;
                }while( num1, num2 != 0);{
                    printf("Digite o denominador dif de zero");
                }
                break;
                default : printf("quiting;");
                break;
            }    

printf("%f\n\n", res);





    return 0 ;
}
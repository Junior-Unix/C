/*Função x_isDigit, verifica se um determinado caractere 
é dígito ou não.*/

#include <stdio.h>

char linha();
int x_isDigit(char ch);

int main(){

    char ch;
    
//    printf("Introduza um caractere ou CTRL-C para finalizar:");
    do{/*Termina com CTRL-C*/
        
        printf("Introduza um caractere ou CTRL-C para finalizar: ");
        scanf(" %c", &ch);
//        ch=getchar();
            if(!x_isDigit(ch)){/*se não for digito*/
                linha();
                printf("*( %c ), não é um dígito. *\n", ch);
                linha();
            }else
                if(x_isDigit(ch)){
                    linha();
                    printf("*( %c ), é um dígito.     *\n", ch);
                    linha();
                }
//            putchar(ch);
    }while(1);

    return 0;
}

char linha(){
    int i;
    for(i=0; i<=25; i++)
        putchar('*');
    putchar('\n');
}

int x_isDigit(char ch){
    return(ch>='0' && ch<='9');
}
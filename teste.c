#include <stdio.h>


int main (){

        char sim;
        printf("Para continuar, digite Y, para sair aperte ENTER");
        scanf("%c", &sim);
        if( sim == 'Y'  ||  sim == 'y' )
        
        {
                
            int num1, num2;
            char op;
            printf("Escreva uma expressão:\n");
            scanf("%d %c %d", &num1, &op, &num2);
            switch(op)
                {
                case '+':   printf("%d+%d=%d\n", num1, num2, num1+num2);
                            break;
                
                case '-':   printf("%d-%d=%d\n", num1, num2, num1-num2);
                            break;
                
                case '*':   /* multiplicação*/
                case 'x': 
                case 'X':   printf("%d*%d=%d\n", num1, num2, num1*num2);
                            break;
                
                case '/':   /* Divisão */
                case '\\':
                case ':':   printf("%d/%d=%d\n", num1, num2, num1/num2);
                            break;
                }
        }else{
            printf("Tenha um bom dia!");
             }
    
    
    


    return 0 ;
}